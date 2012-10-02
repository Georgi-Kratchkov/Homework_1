#include<stdio.h>

int y; 
int x = 0;
int main()
{
	int  i;
	unsigned long int arr[11];
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&y);
	
	for(i = 0; x <= 10; i++)
	{
		arr[x-1] = fibonacci(i);	
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%lu\n",arr[i]);	
	}

	return 0;
}
int fibonacci(int n)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int sum;
	int i;

	for (i=0;i<n;i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	
	if ((a%y == 0)&&(a > 0))
	{
		++x;
        return a;
	}    
}
