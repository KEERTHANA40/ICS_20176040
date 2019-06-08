#include <stdio.h>

int index_str(char str[], char t) 
{
    int n = strlen(str) -1;
    for(int i = n; i >= 0; i--) {
        if(str[i] == t) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[] = "Keerthana";
    char t = 'r';
    int i = index_str(str, t);
    printf("Keerthana has r in posistion: %d\n", i);
    char str1[] = "GeeksforGeeks";
    char t1 = 'p';
    int i1 = index_str(str1, t1);
    printf("GeeksforGeeks has p in position: %d\n", i1);
    return 0;
}

