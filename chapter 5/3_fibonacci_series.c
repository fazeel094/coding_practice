#include<stdio.h>
//int fib(int n);
int fib(int n){
    if (n==0 || n==1)
        return n;
    
    else
        return (fib(n-1) + fib(n-2));
    
}

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    printf("The value of fibonacci series is %d ", fib(n));
     return 0;
}
