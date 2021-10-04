#include<stdio.h>
int natural(int n){
   if(n==0)
   return 0;
   return n + natural(n-1);
}

int main(){
    int n;
    printf("Enter the number to calculate the sum of first n natural numbers: ");
    scanf("%d",&n);
    printf("The sum of %d natural numbers is %d", n, natural(n));
    return 0;
}