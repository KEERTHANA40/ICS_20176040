#include <stdio.h>

#include <stdio.h>

#define MAX 20

char *my_strncpy(char *s, const char *t, int n);
char *my_strncat(char *s, const char *t, int n);
int my_strncmp(const char *s, const char *t, int n);

int main(void)
{
    char s[MAX] = "hello";
    char *t = "he";

    my_strncpy(s, t, 5);
    printf("my_strncpy - s = \"%s\"\n", s);
    my_strncat(s, t, 20);
    printf("my_strncat - s = \"%s\"\n", s);
    printf("my_strncmp - \"%s\"\n",
            my_strncmp(s, t, 4), s, t);

    return 0;
}


char *my_strncpy(char *s, const char *t, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *(s + i) = *(t + i) ? *(t + i) : '\0';

    return s;
}

char *my_strncat(char *s, const char *t, int n)
{
    int i;

    while (*++s)
        ;
    for (i = 0; i < n && *(t + i); i++)
        *(s + i) = *(t + i);
    *(s + i) = '\0';

    return s;
}

int my_strncmp(const char *s, const char *t, int n)
{
    int i;
    for(i = 0; i < n; i++)
        if(s[i] != t[i] || s[i] == 0 || t[i] == 0)
            return 1;
    return 0;
}



