/*  <<<---Pointers to a pointer--->>>
Just like j is pointing to i or storing the address of i, we can have another variable, k which can store the address of j.
What will be the type of k?

int **k;
k= &j;
We can even go further one level and create a variable l of type int*** to store the address of k.
We mostly use int* and int** sometimes in real-world programs.

Types of function calls:-
Based on the way we pass arguments to the function, function calls are of two types.
1>Call by value -> sending the values of arguments.
2>Call by reference -> sending the address of arguments.

Call by value:---
Here the values of the arguments are passed to the function. Consider this example:
int c = sum( 3 , 4 );   =>  Assume x=3 and y=4

If sum is defined as sum(int a, int b), the values 3 and 4 are copied to a and b.
Now even if we change a and b, nothing happens to the variables x and y.
This is call by value.
-->>In C, we usually make a call by value.

Call by reference:---
Here the address of the variable is passed to the function as arguments.
Now since the addresses are passed to the function, the function can now modify the value of a variable in calling function using * and & operators. Example:
void swap(int *x, int *y)
{
int temp;
temp= *x;
*x = *y;
*y = temp;
}
This function is capable of swapping the values passed to it.
If a=3 and b=4 before a call to swap(a,b), a=4 and b=3 after calling swap.

int main()
{
int a=3;	// a is 3 and b is 4
int b=4;
swap(a,b)
return 0;	// now a is 4 and b is 3
}
*/