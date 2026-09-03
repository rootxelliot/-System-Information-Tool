# 🔍 System Information Tool

A beginner-friendly Linux Bash tool that collects system information and performs basic security checks.

## 📌 Features

* 🖥️ Hostname and operating system information
* 🐧 Linux kernel information
* ⚙️ CPU architecture and CPU information
* 💾 RAM usage
* 💽 Disk usage
* 🌐 Network interface information
* 👤 Current and logged-in users
* 🔥 Basic firewall detection
* 🔐 SSH service status
* 🚨 Recent failed SSH authentication attempts

## 🛠️ Technologies

* Bash
* Linux CLI
* systemd / journalctl
* Networking commands
* Basic Linux security concepts

## 🚀 Installation

Clone the repository:

bash

Enter the directory:

bash

Make the script executable:

bash

Run the tool:
bash

## 📷 Example

The tool displays information such as:

```text
==========================================
       SYSTEM INFORMATION TOOL
==========================================

[ SYSTEM ]

Hostname       : my-pc
OS             : Arch Linux
Kernel         : 6.x.x
Architecture   : x86_64

[ CPU / MEMORY ]

CPU            : AMD Ryzen ...
RAM            : 4.2 GiB / 16 GiB

[ STORAGE ]

Disk Usage     : 80G / 500G (16%)

[ NETWORK ]

IP Addresses:
wlan0           UP      192.168.1.x/24

[ USERS ]

Current User   : user
Logged Users   : 1

[ SECURITY CHECKS ]

Firewall       : nftables available
SSH Service    : INACTIVE

[ FAILED LOGIN ATTEMPTS ]

No recent failed attempts detected.

==========================================
             SCAN COMPLETE
==========================================
```

## 🎯 Learning Objectives

This project was created to practice:

* Linux command-line usage
* Bash scripting
* System enumeration
* Network information gathering
* Linux service management
* Basic security auditing
* Log analysis

## ⚠️ Disclaimer

This project is intended for educational purposes and for use on systems you own or are authorized to inspect.

## 📚 Future Improvements

* [ ] Add CPU temperature
* [ ] Add GPU information
* [ ] Detect listening ports
* [ ] Add process monitoring
* [ ] Add security score
* [ ] Export results to a report
* [ ] Add command-line arguments
* [ ] Add JSON output
* [ ] Add colored terminal output

## 👨‍💻 Author

**YOUR_NAME**

Cybersecurity learner | Linux | Networking | Bash


Readme provided by chatgpt LOL
