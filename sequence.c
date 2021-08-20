#include<stdio.h>
#include<string.h>
int main()
{
	int num[100],arr[100],i,n,m,j=0,flag=0;
	printf("enter up to howmany consecutive num you want to check :\n");
	scanf("%d",&n);
    if(n%2==0)
    {
    	i=n/2;
    	n=n*i+i;
	}
	else
	{
		i=n/2;
		n=n*(i+1);
	}
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	for(i=1;i<=n; i++)
	{
		 m=i;
	    here : if(m>0)
	   {
		 arr[j]=i;
		m--;
		j++;
		goto here;
	   }
    }
	for(i=0;i<n;i++)
	{
		if(arr[i]!=num[i])
		flag=1;
	}
	if(flag==0)
	printf("valid sequence\n");
	else
	printf("not a valid sequemce \n");
}
