#!/bin/bash

# Get current TTY (e.g. /dev/pts/0)
TTY=$(tty | sed 's:/dev/::')

# Trap Ctrl+C and Ctrl+Z
trap "echo 'Ctrl+C detected. Logging out...'; pkill -9 -t $TTY" SIGINT
trap "echo 'Ctrl+Z detected. Logging out...'; pkill -9 -t $TTY" SIGTSTP

# Run your program in foreground
./a.out

