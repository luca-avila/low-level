#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Provide just piramid height\n");
        return 1;
    }

    int height = atoi(argv[1]);

    for (int i = 0; i < height; i++) {

        // Print space
        for (int j = 0; j < height - i + 1; j++) {
            printf(" ");
        }

        // Print left piramid
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        // Print middle space
        printf(" ");

        // Print right piramid
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        printf("\n");
    }


    return 0;
}