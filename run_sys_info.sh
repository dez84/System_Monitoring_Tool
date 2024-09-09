#!/bin/bash
TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")
./sys_info > "sys_info_$TIMESTAMP.txt"
echo "System information saved to sys_info_$TIMESTAMP.txt"
