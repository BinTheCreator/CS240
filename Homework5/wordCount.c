#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *filepointer;
    char c;
    int characters = 0, words= 1;
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
        if (isspace(c) || &c == "\t" || &c == "\n") {
            words++;
        } else {
            characters++;
        }
    }
    printf("\nThe number of Characters in %s: %d", filename, characters);
    printf("\nThe number of words in %s: %d\n", filename, words);   
    fclose(filepointer);
    return 0;
   
}
