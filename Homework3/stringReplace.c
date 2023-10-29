# include<stdio.h>
# include<ctype.h>

 int check_char(char check, char to_replace) { 
    // check for any character match withh the character that going to be replace
    int result =  check == to_replace ? 1 : 0;
    return result;
 }

 int replace(char string_check[], char replace_with, char to_replace) {

   for(int i = 0; i < 100; i++) {
    // if true then replace it with the character that want to replace with from input
      if (check_char(string_check[i], to_replace) == 1) {
            string_check[i] = replace_with; 
      } 
   }
      return 0;
 }
 
 int main(void)
 {
    char string[100];
    char to_replace; // char going to be replace
    char with_replace; // char to replace with
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the character you would like to replace: ");
    scanf(" %c", &to_replace);
    printf("Enter a character to replace it with: ");
    scanf(" %c", &with_replace);
    replace(string, with_replace, to_replace);
    printf("The string after replace of '%c' with '%c' is: %s\n", to_replace, with_replace, string);
    
    return 0;
 }
