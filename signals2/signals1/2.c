#include <stdio.h> 
#include <stdlib.h> 
#include <signal.h>

void function() {
    pid_t p_id;
    
    /* Child sleeps until SIGKILL signal received, then dies */
    if ((p_id = fork()) == 0) {
        pause(); /* Wait for a signal to arrive */
        printf("control should not  reach here!\n");
        exit(0);
    }

    /* Parent sends a SIGKILL signal to a child */
    kill(p_id, SIGKILL);
    printf("child has been killed\n");
    exit(0);
}

int main() {
    function();
    return 0;
}