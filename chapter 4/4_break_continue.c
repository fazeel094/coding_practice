/*  BREAK --->>>
The break statement is used to exit the loop irrespective of whether the condition is true or false. 
Whenever a “break” is encountered inside the loop, the controls are sent outside the loop.

for (i=0; i<1000; i++){
printf("%d\n",i);
if (i==5){
break;
}
}
Output: 0, 1, 2, 3, 4, 5 and not 0 to 100.

    CONTINUE --->>>
The continue statement in c is used to immediately move to the next of the loop.
The control is taken to the next iteration, thus skipping everything below continue inside the loop for that iteration.

int  skip=5;
int i=0;
while(i<10){
i++;	
if(i  != skip)	
continue;
else
printf(%d”,i);
}
Output: 5 and not 0................9.

*/
