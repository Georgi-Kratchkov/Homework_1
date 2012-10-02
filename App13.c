#include<stdio.h>
 
main()
{
	int a, i, n, x, z;
	int arr[10];
  
	printf("Vavedete chislo: \n");
	scanf("%d",&x);
  
	for (i=1; i<=10; i++)
	{
		for(a=0, z=0; a<1000; a++)
		{
			if ((a%(x*i))==0)
			{
				z = z + a;
			}
		}
		arr[i-1]=z;
	}
	
	for(i=0; i < 10; i++)
	{
		printf("Arr[%d] : %d\n", i, arr[i]);
	}
	
	return 0;
}
