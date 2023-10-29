# include<stdio.h>

int main(void)
{
    int grade[6];
    float avarage;
    printf("Enter the grade of the first homework\n");
    scanf("%d", &grade[0]);
    printf("Enter the grade of the second homework\n");
    scanf("%d", &grade[1]);
    printf("Enter the grade of the third homework\n");
    scanf("%d", &grade[2]);
    printf("Enter the grade of the fourth homework\n");
    scanf("%d", &grade[3]);
    printf("Enter the grade of the fifth homework\n");
    scanf("%d", &grade[4]);
    printf("Enter the grade of the sixth homework\n");
    scanf("%d", &grade[5]);
    for (int i = 0; i < 6; i++) {
       avarage += ((grade[i])/6.0);
    }
    printf("Average grade of your homework is: %.2f\n", avarage);
    return 0;
}
