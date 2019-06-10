#include <stdio.h>

int strlen(char *s);
int strcmp(char *s, char *t);
int strend(char *s, char *t);

int main(void)
{
  char *s1 = "hello.";
  char *s2 = "world.";
  char *s3 = "ng";

  if(strend(s1, s2))
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
  if(strend(s1, s3))
  {
    printf("1");
  }
  else
  {
    printf("0");
  }

  return 0;
}

int strlen(char *s)
{
  int n;

  for(n = 0; *s != '\0'; s++)
  {
    n++;
  }
  return n;
}

int strcmp(char *s, char *t)
{
  for(;*s == *t; s++, t++)
    if(*s == '\0')
      return 0;
  return *s - *t;
}


int strend(char *s, char *t)
{
  int Result = 0;
  int s_length = 0;
  int t_length = 0;


  s_length = strlen(s);
  t_length = strlen(t);


  if(t_length <= s_length)
  {
    s += s_length - t_length;
    if(0 == strcmp(s, t))
    {
      Result = 1;
    }
  }

  return Result;
}