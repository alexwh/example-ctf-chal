#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char flag[] = "EXAMPLECTF{C_0ptImizat1inZ_Sp1iT_up_A_BiT}";

    if(argc > 1) {
        if (strcmp(flag, argv[1]) == 0)
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
