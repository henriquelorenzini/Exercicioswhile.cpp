#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int x       = 0,
		  y       = 0,
		produto   = 0;
		
		while(x<=10)
		{
        y=1;        
		while(y<=10)
		{
			produto = x * y;
			printf("\t\t %d * %d = %d\n",x,y,produto);
			y++;
		}
			printf("\n\n");
			x++;
		}
system("pause");
return 0;
}
