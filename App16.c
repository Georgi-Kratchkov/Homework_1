#include<stdio.h>

int main()
{
	int x, i, n;
	int arr[10];

	printf("Vavedete chislo\n");
	scanf("%d",&x);
	
	for(i = 1, n = 0; n <= 9; i++)
	{
		if ((x%i==0)&&(i%2==1))
		{
			arr[n] = i;
			printf("%d\n",i);
			++n;
		}
	}
	
	for (i=0; i<10; i++)
	{
		printf ("Arr[%d]: %d\n",i , arr[i]);
	}
 
	return 0;
}
