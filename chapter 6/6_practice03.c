// sum and average using function and pointers:-
#include<stdio.h>
float avg(float *i,float *j){
    float sum;
    float A;    
    sum = (*i + *j);
    printf(" sum = %f\n", sum);
    return A = (sum) / 2;
    //printf(" A = %f\n", A);
    //return A;
}

int main(){
    float x,y;
    float A;
    printf("Enter the value of x and y : ");
    scanf("%f\t%f", &x,&y);
    //avg(&x,&y);
    A = avg(&x,&y);
    printf(" A = %f\n", A);
    
    printf("The avg of 2 numbers using function with pointers is %f", A);
    return 0;
}