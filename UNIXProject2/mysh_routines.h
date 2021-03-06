#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MYSH_RL_BUFFER_SIZE 1024
#define MYSH_TOKEN_BUFFER_SIZE 64
#define MYSH_TOKEN_DELIMITER " \t\r\n\a"

int run_cmd(char **arguments);
char *read_input();
char **tokenize_line(char *line);
int pipe_commands(char *cmd1, char *cmd2);
int redirect_input(char *cmd, char *file);
int redirect_output(char *cmd1, char *cmd2);
int expand_command(char *cmd);
