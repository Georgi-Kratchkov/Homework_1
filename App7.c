#include<stdio.h>
#include<math.h>

int transformation(float input); 

main()
{
	int x,y,i,z,n = 0;
	float arr[10];
	float a = 0.0;
 
	printf("Vavedete chisloto\n");
	scanf("%d",&x);
	
	for(i=0, n=0; n<10; i++)
	{
		if (transformation(cos(i)) == x)
		{
			arr[n] = cos(i);
			++n;
		}
	}
   
	for(i=0; i < 10; i++)
	{
		printf("Arr{%d} : %f\n", i, arr[i]);
	}
   
	return 0;
}
int transformation(float input)
{
	input *= 1000.0;
	int output = (int) input;
   
	return output % 10;
}
