Simple System Monitoring Tool on CentOS
Project Overview
This project involves creating a simple system monitoring tool on CentOS. It includes tasks related to Linux administration, C programming, shell scripting, bash scripting, and cron jobs. Additionally, it integrates version control using Git and GitHub.

Prerequisites
A CentOS distribution
Basic knowledge of Linux commands
Internet connection for downloading necessary tools
Step-by-Step Guide
Step 1: Setup and Basic Administration
Install CentOS:
Download CentOS from the CentOS website.
Create a bootable USB drive using Rufus (Windows) or Etcher (macOS/Linux).
Boot from the USB drive and follow the installation instructions.
Learn Basic Linux Commands:
Open a terminal and practice commands like ls, cd, cp, mv, rm, chmod, and chown.
Create a Project Directory:
mkdir ~/sys_monitor
cd ~/sys_monitor

Install Necessary Tools:
Install GCC:
sudo yum update
sudo yum install gcc

Install Git:
sudo yum install git

Install a text editor (e.g., Vim, Nano, or VS Code):
Vim:
sudo yum install vim

Nano:
sudo yum install nano

VS Code:
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/yum.repos.d/vscode.repo'
sudo yum install code

Step 2: Write a C Program for System Information
Create a C File:
touch sys_info.c

Write the C Program:
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("echo 'CPU Usage:'");
    system("top -bn1 | grep 'Cpu(s)'");
    system("echo 'Memory Usage:'");
    system("free -h");
    return 0;
}

Compile the Program:
gcc sys_info.c -o sys_info

Run the Program:
./sys_info

Step 3: Create Shell Scripts for Automation
Create a Shell Script:
touch run_sys_info.sh

Write the Shell Script:
#!/bin/bash
./sys_info > sys_info_output.txt
echo "System information saved to sys_info_output.txt"

Make the Script Executable:
chmod +x run_sys_info.sh

Run the Script:
./run_sys_info.sh

Step 4: Enhance the Shell Script with Timestamps
Modify the Shell Script:
#!/bin/bash
TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")
./sys_info > "sys_info_$TIMESTAMP.txt"
echo "System information saved to sys_info_$TIMESTAMP.txt"

Run the Updated Script:
./run_sys_info.sh

Step 5: Schedule Tasks Using Cron Jobs
Edit the Cron Table:
crontab -e

Add a Cron Job:
0 * * * * /path/to/your/project/run_sys_info.sh

Verify the Cron Job:
crontab -l

Git and GitHub Integration
Initialize Git in Your Project Directory:
git init
git add .
git commit -m "Initial commit"

Create a Repository on GitHub:
Go to GitHub and create a new repository.
Connect Local Repository to Remote Repository:
git remote add origin <repository_url>
git branch -M main
git push -u origin main

Push Changes to GitHub:
git add .
git commit -m "Your descriptive message"
git push

Branching and Collaboration:
git checkout -b feature/my-feature
git push -u origin feature/my-feature

Pull Changes from GitHub:
git pull origin main
