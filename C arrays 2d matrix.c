// C arrays 2d matrix
#include <stdio.h>

int main() {

    int scores[2][4] = {
        {65,92,35,70},
        {84,72,59,67}

    };

    // iii. Print the elements of the array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("scores [%d][%d]=%d \n ",i,j, scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
