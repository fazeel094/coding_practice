#include<stdio.h>

int main(){
    int age;
    printf(" Enter yout age\n");
    scanf("%d", &age);
    if(age>=90){
        printf(" you cannot drive/n");
    }
    else{
        printf("you can drive");
    }
    return 0;
}
    // LOGICAL OPERATORS IN 'C':
    // &&, ||, and ! are the three logical operators in C. These are read as “and,””or,” and “not.”
    //They are used to provide logic to our c programs.
    /*1. && (AND) is true when both the conditions are true

    “1 and 0” is evaluated as false

    “0 and 0” is evaluated as false

    “1 and 1” is evaluated as true

2. || (OR) is true when at least one of the conditions is true. (1 or 0 = 1)(1 or 1 = 1)

3. ! returns true if given false and false if given true.

    !(3==3) evaluates to false

    !(3>30) evaluates to true
    */
   
