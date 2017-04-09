#include <stdio.h>
#include <string.h>

int main(void)
{
  char flag[] = "EXAMPLECTF{C_0ptImizat1inZ_Sp1iT_up_A_BiT}";
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
