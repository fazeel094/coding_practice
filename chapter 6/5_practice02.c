// pointer to pointer-->>[PRACTICE]
#include<stdio.h>

int main(){
    int i;
    printf("Enter the value of a variable: ");
    scanf("%d",&i);
    int *j=&i;
    int **k=&j;
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);
    printf("The value of i using pointer is %d\n", i);
    printf("The address of j using pointer is %u\n", &j); 
    printf("The value of i using pointer to pointer is %d\n", **k);
    printf("The address of k using pointer to pointer is %u\n", &k);
    return 0;
}