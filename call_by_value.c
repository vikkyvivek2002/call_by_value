#include<stdio.h>
#include<string.h>
void swap(int,int);
int main()
{
   int a= 10,b = 20;
   printf("before swaping a =%d,b=%d\n",a,b);
   swap(a,b);
   printf("after swaping a=%d,b=%d\n",a,b);  	
	return 0;
}
void swap(int a, int b)
{
	int temp;
	temp =a;
	a=b;
	b = temp;
	printf("After swapping in functions a=%d,b=%d\n",a,b);
}