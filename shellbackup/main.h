#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>


char *_strdup(char *str);
int *printENV(char **env, char **argv);
void sig_ctrl(int c);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char **strtow(char *str);
char *getPATH(char *command, char **env);
int exists(char *path);
char *getENV(char **env, char *var);
int _atoi(char *s);
int freeMatrix(char **mat);
void _execute_command(char *command, char *buffer, char **av, char **env);
char *base_shell(char *buffer, char **av, char **env, int mode, char *command);
void eexit(char **av, char **argv, char *buffer, char *command);
void _noline(char *buffer, char *command, int mode);
int no_letter(char *str);
void child_process(char **av, char **argv, char **env);

#endif
