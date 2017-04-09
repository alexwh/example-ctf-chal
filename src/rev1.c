#include <stdio.h>
#include <string.h>

int main(void)
{
  char *flag = "EXAMPLECTF{ALWaYS_TrY_Str1nGz}";
  char pass[256];
  printf("Input password: \n");
  scanf("%s", &pass);

  if (strcmp(flag, pass) == 0)
    {
      printf("That's the flag!\n");
      return 0;
    }
  else
    {
      printf("That's not the flag.\n");
      return 1;
    }
}
