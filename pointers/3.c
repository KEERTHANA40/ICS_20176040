#include <stdio.h> 
#include <string.h> 
#define DELIMITER   '\n'

void lastlines(char *str, int n) ;

int main(void) 
{ 
    char *str1 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
                 "\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
                 "\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25"; 
    char *str2 = "str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7"; 
    char *str3 = "\n"; 
    char *str4 = ""; 
  
    lastlines(str1, 10); 
  
    lastlines(str2, 10); 
  
    lastlines(str3, 10); 
  
    lastlines(str4, 10); 
  
    return 0; 
} 

void lastlines(char *str, int n) 
{ 
    if (n <= 0) 
       return; 
  
    size_t cnt  = 0; 
    char *target_pos   = NULL;
  
    target_pos = strrchr(str, DELIMITER); 
  
    if (target_pos == NULL) 
    { 
        fprintf(stderr, "no '\\n' character in string\n"); 
        return; 
    } 
  
    while (cnt < n) 
    { 
        while (str < target_pos && *target_pos != DELIMITER)
            --target_pos; 
  
        if (*target_pos ==  DELIMITER) 
            --target_pos, ++cnt; 
        else
            break; 
    } 
  
    if (str < target_pos) 
        target_pos += 2; 
    printf("%s\n", target_pos); 
}


