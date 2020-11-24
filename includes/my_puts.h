// # Methyl
// # Language used : C 
// # Filename : puts.h

// # E-mail : methyls3c@gmail.com
// # Site Web : https://methylean.space
// # Github : https://github.com//ScriptingForLife


void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_putint(int i)
{
  char c;
  c = (char) i;
  my_putchar(c);
  return 0;
}

void my_putstr(char *str)
{
  while(*str != 0)
  {
    my_putchar(*str);
    str++;
  }
}
