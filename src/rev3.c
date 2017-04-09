#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char *flag = "RGTBSEzj2x^G0c0mf^hm^O030m^RhFgS|";
    int i;
    int n = strlen(flag);
    char output[n];

    for(i = 0; i < n; i++) {
        output[i]=flag[i]+1;
    }

    if(argc > 1) {
        if (strcmp(output, argv[1]) == 0)
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
    else {
        printf("%s%s%s", "usage: ", argv[0], " flag");
    }
}
