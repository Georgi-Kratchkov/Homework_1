#include<stdio.h>

main()
{
	int arr[100];
	int x, i, y;
   
	printf("Vavedete chisloto\n");
	scanf("%d",&x);

	for (i = 0; i <= 99; i++)
	{
		arr[i] = (random(100)%100);
	}
	
	for (i = 0; i <= 99; i++)
	{
		if (arr[i]%10 == x)
		{
			printf("%d\n", arr[i]);
		}
	} 
	
	for (i = 0; i <= 99; i++)
	{
		if (arr[i]%10 != x)
		{
			printf("%d\n", arr[i]);
		}
	}
	
	return 0;
}
