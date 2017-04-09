#include <stdio.h>
#include <string.h>

int main(void)
{
  char flag[] = "RGTBSEzj2x^G0c0mf^hm^O030m^RhFgS|";
  int i;
  int n = strlen(flag);
  char output[n];
  char pass[256];
  printf("Input password: \n");
  scanf("%s", &pass);

  for(i = 0; i < n; i++) {
      output[i]=flag[i]+1;
  }

  if (strcmp(output, pass) == 0)
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
