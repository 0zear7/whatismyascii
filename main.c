#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int i = 0; i < strlen(argv[1]); i++) {
        printf("%d ", argv[1][i]);
    }

    printf("\n");

    return 0;
}
