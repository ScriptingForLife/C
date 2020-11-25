// # Methyl
// # Language used : C 
// # Filename : puts.h

// # E-mail : methyls3c@gmail.com
// # Site Web : https://methylean.space
// # Github : https://github.com//ScriptingForLife


int my_strlen(char *str)
{
  int occur;
  char *curr;

  occur = 0;
  curr = str;
  
  while(*curr != '\0')
  {
    occur++;
    curr++;
  }
  return (occur);
}
