#include <stdio.h>

int main(void)
{
    int row, starsCount; 
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    starsCount = 1; // set number of star intially at 1

    for (int i = row; i >= 1; i--) {
        // Print spaces for everyline of i
        for (int j = 1; j < i; j++) {
            printf(" ");  
        }
        // Print * for each line using starCount as a control variable
        for (int k = 1; k <= starsCount; k++) {
            // Print * when it is at the start, when it is the last in the count, and when count = num. of row
            if ((k == 1 || k == starsCount || starsCount == row))
            {
                printf("*");
            } else {
                printf(" ");
            }           
    
        }
    
    printf("\n");
    starsCount++;
    }
    return 0;

}
