#include<stdio.h>
 
main()
{
	int x, n = 0, y, i;
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&x);
	printf("Vavedete vtoroto chislo\n");
	scanf("%d",&y);

    for(i = x; i <= y; i++)
	{
		if (i%17 == 0) 
		{
			n=n+i;
		}	
	}
	printf("Sumarno: %d\n",n);

	return 0;
}
