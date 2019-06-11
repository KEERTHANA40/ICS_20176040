#include <unistd.h>
#include <stdio.h>

unsigned int snoozee(unsigned int seconds);

int main(int argc, char*argv[]){
  snoozee(10);

}

unsigned int snoozee(unsigned int seconds){
  unsigned int time_left = sleep(seconds);
  printf("Slept for %d of %d seconds\n", seconds - time_left, seconds);
  return time_left;
}


