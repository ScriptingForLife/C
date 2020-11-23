#include <stdio.h>
#include <stdlib.h>

static void pn(int n)
{
  static int d = 2; 
  while(n!=1) 
  {
    if(n%d==0)
    {
      while(n%d==0)
      {
        n=n/d;
        printf("%d\n", d);
      }
    }
    d++;
  }
}
int main(int argc, char *argv[])
{
  int n;
  printf("D%ccompose ton nombre premier : ", 130);
  scanf("%d",&n);
  pn(n);
  return 0;
} 
