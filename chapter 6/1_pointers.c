/*   <<<<----POINTER---->>>> 
A pointer is a variable that stores the address of another variable.

The "address of" (&) operator:-
The address of operator is used to obtain the address of a given variable.

Format specifier for printing pointer address is ‘%u’.

The "value of address" operator (*):-
The value at address or * operator is used to obtain the value present at a given memory address.
It is denoted by *
*(&i) = 72
*(&j) = 87994

A pointer is declared using the following syntax,
int *j;  => declare a variable j of type int-pointer
j=&i     =>store address of i in j
*/
#include<stdio.h>

int main(){
    int i=8;
    int *j;
    j= &i; // j will now store address of i
    printf(" Address of i=%u\n",&i);// %u -->> format specifier
    printf(" Address of i=%u\n", j);
    printf(" Address of j=%u\n",&j);
    printf(" Value of i=%d\n", *&i);// *(&i)-->> value at address operator
    printf(" Value of i=%d\n", i);
    printf(" Value of i=%d\n", *j);
    
    return 0;
}