/*  ----Recursion----
A function defined in C can call itself. This is called recursion.
A very good example of recursion is factorial:-
factorial(n) = 1x 2 x 3...........x n

factorial(n)= 1 x 2 x 3...........n-1 x n

factorial(n)= factorial of (n-1) x n

*/ // factorial using Recursion:-
#include<stdio.h>
//int factorial(int x);
int factorial(int x){
    printf("calling factorial(%d)\n", x);
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}
int main(){
    int a;
    printf("Enter the value of factorial:");
    scanf("%d", &a);
    printf("The value of factorial %d is %d ",a , factorial(a));
    return 0;
}



