#include <string.h> 
#include <stdio.h>

int hex_dec(char hex[]);

int main(int argc, char *argv[]) 
{ 
  char hex[100];
    printf("Hex Number: ");
    scanf("%s",&hex);   
  printf("%d\n",hex_dec(hex));
  return 0; 
} 

int hex_dec(char hex[])
{ 
  int len = strlen(hex); 
  int n = 1; 
  int dec = 0; 
  
  for (int i=len-1; i>=0; i--) 
  { 
    if (hex[i]>='0' && hex[i]<='9') 
    { 
      dec += (hex[i]-48)*n;   
      n = n*16; 
    } 
    else if (hex[i]>='A' && hex[i]<='F') 
    { 
      dec += (hex[i]-55)*n; 
      n = n*16; 
    } 
  } 
  return dec; 
} 
