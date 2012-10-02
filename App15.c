#include<stdio.h>

int main()
{
	int x, i, z, n;
	int arr[10];
   
	printf("Vavedete chislo\n");
	scanf("%d",&x);
   
	for(i = 0, n = 0; n <= 9; i++)
	{
		z = fibonacci(i);
		if (z%10 == x)
		{
			arr[n] = z;
			++n;
		}	
	}
   
	for (i=0; i<10; i++)
	{
		printf ("Arr[%d]: %d\n",i , arr[i]);
	}
   
   return 0;
}
int fibonacci(int n)
{
	int a = 0;
	int b = 1;
	int sum;
	int i;

	for (i=0;i<n;i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	
	return a;
}
