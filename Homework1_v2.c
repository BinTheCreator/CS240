#include <stdio.h>

int main(void)
{
    char c;
    float degree, result;
    int checkInput = 0;
    
    printf("Press c to convert temperature from Fahrenheit to Celsius.\n");
    printf("Press f to convert temperature from Celsius to Fahrenheit.\n");
    while (c != EOF)
    {
        printf("Enter your choice (c, f):");
        scanf(" %c", &c);
        
            if (c == 'c' || c == 'C')
        {
            while (checkInput == 0)
            {   
                printf("Enter temperature in Celsius: ");
                // scanf("%f", &degree);
                getchar();
                
                if (scanf(" %f", &degree) == 1)
                {
                    result = (degree * 9/5) + 32;
                    printf("Temperature in Fahrenheit: %.2f\n", result);
                    checkInput = 1;
                        
                } else {
                    printf("Please enter a valid input. Try again!\n");         
                }
            }
            
            break;

        } else if (c == 'f' || c == 'F')
        {
             while (checkInput == 0)
            {   
                printf("Enter temperature in Celsius: ");
                getchar();
                if (scanf(" %f", &degree) == 1)
                {
                    result = (degree -32) * 5/9;
                    printf("Temperature in Celsius: %.2f\n", result);
                    checkInput = 1;
                } else {
                    printf("Please enter a valid input. Try again!\n");         
                }

            break;
            }

        } else {
             printf("Please enter a valid input. Try again!\n");
        }

    } 
    return 0;
}
