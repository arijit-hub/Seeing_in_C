#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void replaceWordInText(const char *text, const char *oldWord, const char *newWord) {
   int i = 0, cnt = 0 , val;
   char add_char[20];
   int len1 = strlen(newWord);
   int len2 = strlen(oldWord);
   for (i = 0; text[i] != '\0'; i++) {
      if (strstr(&text[i], oldWord) == &text[i]) {
         cnt++;
         i += len2 - 1;
      }
   }
   char *newString = (char *)malloc(i + cnt * (len1 - len2) + 1);
   i = 0;
   while (*text) {
      if (strstr(text, oldWord) == text) {
         strcpy(&newString[i], newWord);
         i += len1;
         text += len2;
      }
      else
      newString[i++] = *text++;
   }

   for( i = 0; newWord[i] != '\0' ; i++)
   {
       val = newWord[i] - 96;
       sprintf(add_char , "%d" , val);
       strcat(newString, add_char);

   }

   printf("output: %s", newString);
}
int main() {
   int val;
   char add_char[10];
   char str[1000] , c[500] , d[500];
   printf("Input : ");
   fgets(str , 1000 , stdin); 
   printf("string to be replaced : ");
   scanf("%s" , &c);
   printf("string to be replaced with : ");
   scanf("%s" , &d);

   char *result = NULL;
   replaceWordInText(str, c, d);
   
   return 0;
}