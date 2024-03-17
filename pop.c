#include<stdio.h>
int maxsize = 5;
int stack[5] , top = -1;
int push(int n);
int pop();
int isfull();
int isempty();
int printstack();

int main()
{
	push(10);
	push(30);
	push(40);
	pop();
	push(20);
	pop();
}

int push(int n)
{
	if(isfull == 1)
	{
		printf("overflow\n");
	}
	else
	{
		top++;
		stack[top] = n;
	}
	printstack();
}

int pop()
{
	if(isempty == 1)
	{
		printf("underflow\n");
	}
	else
	{
		top--;
	}
	printstack();
}

int isempty()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull()
{
	if(top == maxsize - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int printstack()
{
	printf("\n stack: ");
	for(int i=0 ; i<=top ; i++)
	{
		printf("%d\t",stack[i]);
	}
}
