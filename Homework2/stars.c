#include <stdio.h>

int main(void)
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = row; i >=1; i--){
        int space = row - i;
        printf("%*s", space, " ");
        printf("%*s\n", i-1, "*");
        printf("%0*i", 20, 0);
        
        
        
    }
    
}


