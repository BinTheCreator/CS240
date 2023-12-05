#include <stdio.h>

int main()
{
    FILE *filepointer;
    char c;
    int characters = 0, words= 0;
    char filename[50];

    printf("Count the number of characters and words in a file:\n");
    printf("Input the filename: ");
    scanf("%s", filename);
    filepointer = fopen(filename, "r");
    if (filepointer == NULL) {
        printf("file not found. Please try again");
        return 1;
    }
    printf("The content of %s are:\n", filename);
    while ((c = fgetc(filepointer)) != EOF) 
    {
        printf("%c", c);
        characters++;
    }
    printf("\n The number of Characters: %d\n", characters);
    
    


    return 0;
}
