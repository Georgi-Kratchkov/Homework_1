#include<stdio.h>
float z = 4.0;
main()
{
	float x, y;
	int boolean = 1;  	
	
	printf("Vavedete parvoto chislo\n");
	scanf("%f",&x);
   
	for (y = 3; 4/y >= x ;y+=2)
	{
		if (boolean == 1)
		{
			z = z - 4/y;
			boolean = 0;
		}
		else 	
		{
			z = z + 4/y;
			boolean = 1;
		}
	}
	printf ("Poluchenata stoinost za PI e: %f\n",z);
	return 0;
}
