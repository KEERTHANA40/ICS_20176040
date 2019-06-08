#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Print   Hello     World";
    int size = (int)strlen(str);
    char res[size];
    int k = 0;
    for(int i = 0; i < size; i++)
    {
        if(str[i] == ' ') {
            int j = i + 1;
            while(j < size && str[j] == ' ') {
               j++;
      }
           i = j - 1;
           res[k++] = ' ';
        } else {
           res[k++] = str[i];
        }
    }
    printf("%s", res);
 }
	
	
	

