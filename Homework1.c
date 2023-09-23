#include <stdio.h>


int main(void)
{
    char type; // Type of Degree
    float degree, result;
    
    printf("Press c to convert temperature from Fahrenheit to Celsius.\n");
    printf("Press f to convert temperature from Celsius to Fahrenheit.\n");
    
    // While loop to make sure to get the right input
    while (type != EOF)
    {
        printf("Enter your choice (c, f):");
        scanf(" %c", &type);
        
        // Convert to Celsius
            if (type == 'c' || type == 'C')
        {
            printf("Enter temperature in Fahrenheit:");
            scanf(" %f", &degree);
            result = (degree -32) * 5/9;
            printf("Temperature in Celsius: %.2f\n", result);
            break;       

        } else if (type == 'f' || type == 'F') 
        {
            // convert to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &degree);
            result = (degree * 9/5) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;
            
        } else {
             printf("Please enter a valid input. Try again!\n");
        }

    } 
    return 0;
}
