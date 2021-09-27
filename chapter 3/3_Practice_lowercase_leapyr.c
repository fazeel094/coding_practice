#include<stdio.h>
    // To check whether a character is Lowercase or not
    // 97-122 are lowercase characters in ASCII values
int main() {
    char ch;
    printf("Enter the case\n");
    scanf("%c",&ch);
if(ch<=122 && ch>=97){
    printf("It is a lowercase");
}
else{
    printf("Not a lowercase");
}
    return 0;
}

/* Leap Year --->>>
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year:  \n");
   scanf("%d", &year);

   #### leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.\n", year);
   }
   #### not a leap year if divisible by 100
   #### but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.\n", year);
   }
   #### leap year if not divisible by 100
   #### but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.\n", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.\n", year);
   }

   return 0;
}
*/