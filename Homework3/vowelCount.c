# include<stdio.h>
# include<ctype.h>

 int check_vowel(char check) { 
   // Cast to upperCase then compare with the vowels
    int result = toupper(check) == 'A' || toupper(check) == 'E' || toupper(check) == 'U' || toupper(check) == 'I' || toupper(check) == 'O' ? 1 : 0;
    return result;
 }

 int count_vowel(char string_count[]) {

   int count = 0; // count of the vowels
   for(int i = 0; i < 100; i++) {
      if (check_vowel(string_count[i]) == 1) {
         count++;     
      }         
   }
      return count;
 }
 
 int main(void)
 {
    char string[100];
    printf("Enter a string\n");
    fgets(string, sizeof(string), stdin);
    printf("Number of vowels: %d\n", count_vowel(string));

    return 0;
 }
