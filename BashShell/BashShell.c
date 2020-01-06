#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// can put in any amount of commands
// message if exec fails
// message if fork fails


/**
 * handles a failure to make a child process.
 * Child process used to run commands
 * @param signal
 */
static void forkHandle(int signal){
    printf("Failed to fork process. ");
}
/**
 * handles a failure to execute bash commands
 * @param signal
 */
static void execHandle(int signal){
    printf("Failed to execute command. Check syntax.");
}

/**
 * this function attempts to
 * @param command
 * @return
 */
void x(char * input){
    signal(SIGURS1, execHandle);
    int status = execvp(input, );
    
}

/**
 * creates a child fork and then
 * calls run in the fork
 */
void forking(char *input){
    signal(SIGURS1, forkHandle);
    x(input);
}

int main() {
    char * input = (char * )calloc(100, sizeof(char));
    scanf("bash>> %s", input);
    while(input != "exit"){
        scanf("bash>> %s", input);
        forking(input);
    }
    return 0;
}
