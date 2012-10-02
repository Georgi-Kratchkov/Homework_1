#include<stdio.h>
 
main()
{
	int a, i, x, z=0;
	int arr[10];
  
	printf("Vavedete chislo: \n");
	scanf("%d",&x);

	for (a=0; a<10; a++)
	{
    	for (i=0, z=0; i <= x ; i++)
		{
			z = z + i;
		}
		arr[a] = z;
		x = x + x;
	}
	
	for(i=0; i < 10; i++)
	{
		printf("Arr[%d] : %d\n", i, arr[i]);
	}
	
	return 0;
}
