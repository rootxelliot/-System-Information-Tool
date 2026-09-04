#include<stdio.h>
#include<unistd.h>
#include<sys/utsname.h>


int main(void){

    char hostname[256];
    printf("++++++++++++++++++++++++++++++++++++++++++\n");
    printf("      LINUX SYSTEM INFORMATION TOOL       \n");
    printf("++++++++++++++++++++++++++++++++++++++++++\n");
    if(gethostname(hostname,sizeof(hostname))== 0){
        printf("HOST-NAME       :%s\n", hostname);
    }
    else{
        printf("Failed to get hostname \n");
    }
    //os section
    FILE *file;
    char line[256];
    file=fopen("/etc/os-release","r");
    if(file == NULL){
        printf("Failed to Open /etc/os-release\n");
        return 1;
    }
    while(fgets(line,sizeof(line),file)){
        if(line[0] == 'P'&&
                line[1] == 'R'&&
                line[2] =='E'&&
                line[3] =='T'&&
                line[4] =='T'&&
                line[5] =='Y'&&
                line[6] =='_'){
            printf("OS        :%s",line);
            break;
        }

    
    }
    //Kernal version
    struct utsname system_info;
    if(uname(&system_info) == 0 ){
        printf("Kernal       :%s\n",system_info.release);
    }
    else{
        printf("Failed to get kernal information \n");
    }





    fclose(file);
    return 0;
}
