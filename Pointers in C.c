#include<stdio.h>

void sum(int *m,int *n)
{
	printf("%d\n",*m+*n);
}

void sub(int *m, int *n)
{
	if(*m>*n)
		printf("%d",(*m-*n));
	else
		printf("%d",(*n-*m));
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	sum(&a,&b);
	sub(&a,&b);
}
