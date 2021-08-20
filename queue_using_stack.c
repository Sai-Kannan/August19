#include<stdio.h>
int arr1[4];
int arr2[4];
int top1=-1;//created global variable;
int top2=-1;
void enque(int ele)
{
	if(top1==3)
	{
		printf("stack1 overflow\n");
	}
	else
	{
		top1++;
		arr1[top1]=ele;
		printf("pushed stack1 to  : %d\n",arr1[top1]);
	}
}
void pop()
{
	if(top1==-1)
	{
		printf("stack1 underflow\n");
	}
	else
	{
		top2++;
		arr2[top2]=arr1[top1];
		printf("popped out stack1 to stack2 : %d  to %d \n",arr1[top1],arr2[top2]);
		top1--;
		
	}
}
void deque()
{
	
	if(top2==-1)
	{
		printf("stack2 underflow\n");
	}
	else
	{
		
		printf("elements in queue : %d  \n",arr2[top2]);
		top2--;
		
	}
	
}
int main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	pop();
	pop();
	pop();
	pop();
	deque();
	deque();
	deque();
	deque();
	deque();
}

