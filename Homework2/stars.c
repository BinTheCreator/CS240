#include <stdio.h>

int main(void)
{
    int row, starsCount; 
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    starsCount = 1; // set number of star intially at 1

    
    for (int i = 0; i < row; i++) {
        // Print spaces for everyline of i
        for (int j = row; j > i; j--) {
            printf(" ");
            //for prints the number of "*" corresponsd to the number of line start from the last element
            for (int k = 0; k < starsCount; k++) {
                if (j == i + 1)
                {
                    printf("*");
                }
            }
        }
        starsCount++; // keep count of the stars
        printf("\n");
    }
    return 0;
}


