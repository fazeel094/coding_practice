#include<stdio.h>
int printadd(int a){
    //int *a= &i;
    printf("The address of a is %u", &a);
}

int main(){
    int i;
    //int *j= &i;
    printf("The address of i is %u\n", &i);
    //printf("The address of i is %u\n", *j);
    printadd(i);
    return 0;
}