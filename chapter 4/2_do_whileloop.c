/* Do-While loop:-
Do-while loop works very similar to while loop

While -->> checks the condition & then executes the code

Do-while -->> executes the code & then checks the condition

**do-while loop is a loop which executes at least once
do {

//code;

//code;

}while(condition);
*/
#include<stdio.h>

int main(){
    int i=0;
    do{
        printf("The value of i is %d\n",i++);
    }while(i<10);
    return 0;
}