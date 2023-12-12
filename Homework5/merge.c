#include <stdio.h>

int main()
{
    FILE *file1, *file2, *file3;
    char c, filename1[50], filename2[50], filename3[50]; 
    printf("Merge two files and write it in a new file:\n ------------\n");
    printf("Input the 1st file name: ");
    scanf("%s", filename1);
    printf("Input the 2st file name: ");
    scanf("%s", filename2);
    printf("Input the new name for the merged file: ");
    scanf("%s", filename3);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    file3 = fopen(filename3, "w");
    if (file1 == NULL || file2 == NULL) 
    {
        printf("file or files not found. Please try again.");
    }
    while ((c = fgetc(file1)) != EOF) 
    {
        fputc(c, file3);  
    }
    while ((c = fgetc(file2)) != EOF) 
    {
        fputc(c, file3);
       
    }
    printf("The two files merged into %s file successfully!!\n", filename3);
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}
