#include <stdio.h>
#include <stdlib.h>

int args(int argc, char **argv)
{
  for(int i = 0; i < argc; i++)
  {
    printf("argc = %d\n", argc);
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}

int main(){
  
}
// args();
