#include <stdio.h>
int main ()
{
	float x, y, w, h, s1, s2, a=0, b=0;
	int z=0, i=0, n;
	float arr[10][2];
   
	printf("Vavedete X\n");
	scanf("%f",&x);          
	printf("Vavedete Y\n");
	scanf("%f",&y); 
	printf("Vavedete W\n");
	scanf("%f",&w);
	printf("Vavedete H\n");
	scanf("%f",&h);
	
	s1 = x*y;
	s2 = w*h;
   
	for (s1 = x*y; s2 <= s1;i++)
	{
		n = 0;	
		if (((x>=w)&&(y>=h))||((y>=w)&&(x>=h)))
		{
			++z;
		}
		arr[i][0]= w+a;
		arr[i][1]= h+b;
		if (w+w<=x) 
		{
			a = a + w;
			n = 1;
		}
		if ((h+h<=y)&&(n != 1)) 
		{
			b = b + w;
		}
		s1 = s1-s2;
	}
	printf ("Broq na celite plochki e: %d\n",z);
	
	for (i = 0;((i<=9)&&(z!=0)); i++)
	{
		printf("X = %f, Y = %f\n",arr[i][0],arr[i][1]);
	}
	
	return 0;
}
