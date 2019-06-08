#include <stdio.h>
#include <string.h>

void reverse(char str[]);
int main()
{

    char str[] = "helloworld";

    reverse(str);
    return 0;
}

void reverse(char str[]) {
    char x;
    int j = strlen(str) -1;
    for(int i = 0; i < j; i++) {
        x = str[i];
        str[i] = str[j];
        str[j] = x;
        j--;
    }
    printf("%s", str);

}

