#include <stdio.h>


int main(void)
{
    char c;
    float degree, result;
    
    printf("Press c to convert temperature from Fahrenheit to Celsius.\n");
    printf("Press f to convert temperature from Celsius to Fahrenheit.\n");
    while (c != EOF)
    {
        printf("Enter your choice (c, f):");
        scanf(" %c", &c);
        
            if (c == 'c' || c == 'C')
        {
            printf("Enter temperature in Celsius:");
            scanf(" %f", &degree);
            result = (degree * 9/5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;       

        } else if (c == 'f' || c == 'F')
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &degree);
            result = (degree -32) * 5/9;
            printf("Temperature in Celsius: %.2f\n", result);
            break;
            
        } else {
             printf("Please enter a valid input. Try again!\n");
        }

    } 
    return 0;
}
