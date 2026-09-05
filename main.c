#include<stdio.h>
#include<unistd.h>
#include<sys/utsname.h>
#include<string.h>

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
    // CPU information
    FILE *cpu_file;
    char cpu_line[256];

    cpu_file=fopen("/proc/cpuinfo","r");

    if(cpu_file == NULL){
        printf("CPU       :Failed to read CPU information");
    }
    else{
        while(fgets(cpu_line,sizeof(cpu_line),cpu_file)){
            if (strncmp(cpu_line,"model name",10) == 0){
                printf("CPU       :%s",cpu_line);
                break;
            }
        }
        fclose(cpu_file);
    }
    //RAM INFORMATION
    FILE *mem_file;
    char mem_line[256];

    mem_file= fopen("/proc/meminfo","r");

    if(mem_file == NULL){
        printf("RAM       :Failed to read memory information \n");
    }
    else{
        while(fgets(mem_line,sizeof(mem_line),mem_file)){
            if(strncmp(mem_line,"MemTotal",8)== 0){
                printf("RAM TOTAL       :%s",mem_line);
                break;
            }
        }
        fclose(mem_file);
    }




    fclose(file);
    return 0;
}
