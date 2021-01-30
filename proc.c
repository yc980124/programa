#include "proc.h"

void Proc()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));

  char* lable = "|/-\\";
  int i =0;
  while(i < 100)
  {
    bar[i++] = '$';
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    usleep(100000);
  }
  printf("\n");
}
