#include <stdio.h>

int main() {

    int scores[2][2] = {
        {35, 70},
        {59, 67},

    };

    // iii. Print the elements of the array using a nested for loop
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
