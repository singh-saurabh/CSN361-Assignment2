#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdio.h>
int main() 
{ 
    pid_t child_pid = fork(); 

    if (child_pid > 0) {
        sleep(1);
        printf("In parent process\n"); 
    }
  
    else{
        printf("In child process\n");
        exit(0);
    }          
    return 0; 
}