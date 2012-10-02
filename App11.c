#include<stdio.h>
#include<math.h>
 
main()
{
	int x,y,i,z,n = 0;
	float arr[10];
	float a = 0.0;
   
	printf("Vavedete chisloto\n");
	scanf("%d",&x);
   
	for(i = 0; i < 10; i++)
	{
		for(z=x*n; (z < (n+1)*x); z++)
		{
			a = a + cos(z);
		}
		arr[i] = a; 
		n = n+1;
	}
   
	for(i=0; i < 10; i++)
	{
		printf("Arr{%d} : %f\n", i, arr[i]);
	}
	
	return 0;
}
