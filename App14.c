#include<stdio.h>
 
main()
{
	int n, i = 3, count, c, x,y;
	int arr[10];
	
	printf("Vavedete chislo\n");
	scanf("%d",&x);

	for ( count = 2 ; count <= 12 ;  )
	{
		for ( c = 2 ; c <= i - 1 ; c++ )
		{
			if ( i%c == 0 )
            break;
		}
		if (( c == i )&&(i%10==x))
		{
			arr[count-2] = i;
			count++;
		}
		i++;
	}         
   
	for (i=0; i<10; i++)
    {
		printf ("Arr[%d]: %d\n",i , arr[i]);
    }
	
	return 0;
}
