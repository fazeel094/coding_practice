#include<stdio.h>

int main(){
    int a=4;
    int b=8;
    printf(" the value of a+b is: %d\n", a + b);
    printf(" the value of a-b is: %d\n", a - b);
    printf(" the value of a*b is: %d\n", a * b);
    printf(" the value of a/b is: %d\n", a / b);
    // In case of division between int and float-->> float for eg: 5.0/2 gives 2.5
    // And in case if int/int-->> int for eg: 2/5=0,  float/int-->> float

    int z;
    z= b * a;// legal
    // b * a = z; // illegal
    printf(" the value of z is: %d\n", z);
    // no operator is assumed to be present
    // there is no operator to perform exponentiation in 'C'
    // i.e.., 2 ^ 5 in will give 1 as output because it is bitwise xor operator.
    // however, we can use pow(2,5) from <math.h>

// OPERATOR PRECEDENCE IN C --->>>>
    //C doesn't take BODMAS rule and mathematical rules but, follows operators precedence and operator associativity
    // Priority     Operators
    // 1st          *, /, %
    // 2nd          +, -
    // 3rd          =

// OPRATOR ASSOCIATIVITY IN C --->>>>
    // When operators of equal priority are present in single problem then, they follow the associativity
    // they follow the associativity from "left to right"
    // for example: x * y / z --->>> first calculates (x * y) then divides with z.
    return 0;
}