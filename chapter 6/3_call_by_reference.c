#include<stdio.h>
int swap(int *x, int*y){
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a,b;
   // int *j= &i;
   printf("Enter the value of a and b:");
   scanf("%d\t%d",&a,&b);
   swap(&a,&b);
   printf("The value of a and b after swap is %d and %d", a,b);

    return 0;
}
