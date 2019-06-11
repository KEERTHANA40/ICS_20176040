
#include<stdio.h>
int main() 
{ 
    int child;
    scanf("%d",&child);
    for(int x=0;x<child;x++)  
    { 
        if(fork() == 0) 
        { 
            printf("[child] pid %d from [parent] pid %d\n",getpid(),getppid()); 
            exit(0); 
        } 
    } 
    for(int y=0;y<5;y++) 
    wait(NULL); 
      
} 