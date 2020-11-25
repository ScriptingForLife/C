#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../includes/my_puts.h"

int main(int argc, char *argv[])
{
  int array[3] = {1, 2, 3};
  size_t array_size = sizeof(array)/sizeof(array[0]);
  for(int i = 0; i <= array_size; i++)
  {
    printf("%d",array[i]);
  }
}
