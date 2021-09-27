/*  WHILE LOOP--->>>

While(condition is true) {

// Code                  
        #### The block keeps executing as long as the condition is true
// Code

}
Note:-
        If the condition never becomes false, the while loop keeps getting executed.
        Such a loop is known as an infinite loop.
*/
#include<stdio.h>

int main(){
        int i;
        printf("Enter the value: \n");
        scanf("%d",&i);
        while (i<10)
        // i=11;
        // while(i>10)--->> This will lead to an infinite loop
        {
                printf("The value of i is %d\n",i++);
                // Here, i++ means Increment Operator
        }
        
        return 0;
}
/*      Increment and decrement operators:-
i++  (i is increased by 1)

i--  (i is decreased by 1)

printf(“—i=%d”,--i);

This first decrements i and then prints it

printf(“i--=%d”,i--);

This first prints i and then decrements it
*/