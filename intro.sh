#!/bin/bash

# Clear screen
clear

# Title
figlet "Bank  Server" | lolcat

# Server details
echo -e "\033[1;33mHostname   :\033[0m $(hostname)"
echo -e "\033[1;33mUser       :\033[0m $(whoami)"
echo -e "\033[1;33mOS         :\033[0m $(lsb_release -d | cut -f2)"
echo -e "\033[1;33mKernel     :\033[0m $(uname -r)"
echo -e "\033[1;33mUptime     :\033[0m $(uptime -p)"
echo -e "\033[1;33mLogin Time :\033[0m $(date +"%A, %d %B %Y %I:%M %p")"
echo -e "\033[1;33mIP Address :\033[0m $(hostname -I | awk '{print $1}')"
echo -e "\n"

echo -e "\033[1;31mWARNING:\033[0m Authorized Access Only!"
echo -e "All activities on this system are monitored and logged."
echo -e "Unauthorized access is strictly prohibited by law."
echo -e "\033[1;36m------------------------------------------------------------\033[0m"
echo -e "\n"
