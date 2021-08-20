#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(void *p,void *q,int size)//void 0r generic pointer is used here
{
	/*void *temp=malloc(size);//no.of bytes that pointer can hold;
	if(temp==NULL)
	return 0;*/
	char temp[size];
	memcpy(temp,p,size);//storing the adress or swapping the adress using temp variable;
	memcpy(p,q,size);//used to copy any data type
	memcpy(q,temp,size);
	//free(temp);
}
int main()
{
	float a=5.89;
	float b=9.786;
	swap(&a,&b,sizeof(float));
	printf("%f %f",a,b);
	char str1[20]="Kannan";
	char str2[20]="sai";
	swap(str1,str2,sizeof(str1));
	printf("%s %s",str1,str2);
}
