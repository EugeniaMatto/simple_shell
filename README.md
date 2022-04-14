# *Simple Shell project*

## *Introduction*
This simple shell project is  collaboration between `Eugenia Matto` and `Franco Trenche`, software engineering students. This repository contains the files for this simple_shell project. It consists of developing and making our own UNIX command interpreter (Shell).

## *What is a shell*
The _shell_ is an interface to the operating system. It acts as a command interpreter; it takes each commands and passes it to the operating system.

## *About this project*
This simple shell project was made as Holberton Students 2022 **C#17**
The aim of this project was to mirror how the real shell (sh) works using a custom version of almost every library function needed. **A simple shell version of the original one.**

##  *What our shell can handle:*

 - Executes any command with its arguments
 -  Executes any command with its arguments using relative or absolute routes
 - Executes built-in commands
 - Handles ';' command seperator
 - Handles the "end of file" condition (`Ctrl+D`)
 - Handles errors
 - Handles the  `PATH`
 - Handles `exit`[arguments] built-in
 - `env` built-in implemented
 -  Handles `Ctrl+C`
 -  Handles comments (`#`)
 - Handles interactive mode
 - Handles non-interactive mode
## *File contents*
-   **`AUTHORS`** -> List of contributors
-   **`man_1_simple_shell`** -> Manual page of the simple_shell
-  **`main.h`** -> Header file
-  **`shell.c`** -> Contains the main function, here we differentiate between interactive and non-interactive mode.
-  **`base_shell.c`** -> Contains the body of our shell, it executes in a loop until there are no more lines to read or "exit" is read.
-  **`getPATH.c`** -> Function to obtain a specific command path.
-  **`getENV.c`** -> Function to obtain an environment variable.
-  **`exists.c`** -> Function that asks for a path and returns 0 if a file exists.
-  **`exit.c`** -> Function to exit the shell, with or without arguments.
-  **`execute_command.c`** -> Function that executes a received command.
-  **`noline.c`** -> Function that handles EOF.
-  **`printENV.c`** -> Function that prints env variables.
-  **`sig_ctrl.c`** -> Function that handles Ctrl + C.
-  **`freeMatrix.c`** -> Function that frees a 2D array.
-  **`child_process.c`** -> Function that executes fork.
-  **`cont_paths.c`** -> Function to count the number of paths inside env variable $PATH.
-  **`no_letters.c`** -> Function to verify if a string has at least one space (' ');
-  **`atoi.c`** -> Our own version of atoi library function.
-  **`strcmp.c`** -> Our own version of strcmp library function.
-  **`strdup.c`** -> Our own version of strdup library function.
-  **`strlen.c`** -> Our own version of strlen library function.
-  **`strtow.c`** -> Our own version of strtok library function.
## *List of allowed functions and system calls*
-   `access`  (man 2 access)
-   `chdir`  (man 2 chdir)
-   `close`  (man 2 close)
-   `closedir`  (man 3 closedir)
-   `execve`  (man 2 execve)
-   `exit`  (man 3 exit)
-   `_exit`  (man 2 _exit)
-   `fflush`  (man 3 fflush)
-   `fork`  (man 2 fork)
-   `free`  (man 3 free)
-   `getcwd`  (man 3 getcwd)
-   `getline`  (man 3 getline)
-   `getpid`  (man 2 getpid)
-   `isatty`  (man 3 isatty)
-   `kill`  (man 2 kill)
-   `malloc`  (man 3 malloc)
-   `open`  (man 2 open)
-   `opendir`  (man 3 opendir)
-   `perror`  (man 3 perror)
-   `read`  (man 2 read)
-   `readdir`  (man 3 readdir)
-   `signal`  (man 2 signal)
-   `stat`  (__xstat) (man 2 stat)
-   `lstat`  (__lxstat) (man 2 lstat)
-   `fstat`  (__fxstat) (man 2 fstat)
-   `strtok`  (man 3 strtok)
-   `wait`  (man 2 wait)
-   `waitpid`  (man 2 waitpid)
-   `wait3`  (man 2 wait3)
-   `wait4`  (man 2 wait4)
-   `write`  (man 2 write)

## ***Usage example***
### *After cloning this repo and compiling using:*
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```
-----
![Get4KZ0 - Imgur](https://user-images.githubusercontent.com/98403340/162850636-6263021a-7ba1-4a0e-bf0b-aec4dc29f32e.png)

 ## ***Authors***
 · [Maria Eugenia Matto](https://www.linkedin.com/in/maria-matto/), 
 · [Franco Trenche](https://www.linkedin.com/in/franco-trenche-375a33209/?originalSubdomain=uy)
