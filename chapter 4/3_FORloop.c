/* FOR LOOP syntax:-
for( initialize; test; increment or decrement)

{

//code;

//code;

}

Initialize -> setting a lop counter to an initial value

Test -> checking a condition

Increment -> updating the loop counter

For Example:-
    for(i=0;i<3;i++)
    {
    printf(“%d”,i);
    printf(“\n”);
}
Output:-
0
1
2
*/
// Write a program to print first n natural numbers using for loop ?
#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value of n: \n");
    scanf("%d \n", &n);
    for(i=1; i<=n; i++)
    {
   printf("%d\n",i);
   }
    return 0;
}
/*This for loop will keep on running until i becomes 0.

The loop runs in the following steps:

i is initialized to 5
The condition “i” (0 or none) is tested
The code is executed
i is decremented
Condition i is checked, and the code is executed if it's not 0.
& so on until i is non 0.
*/