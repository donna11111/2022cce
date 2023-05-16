#include <stdio.h>
int main()
{
	int x, y, cost;
	scanf("%d", &x);
	if(x<=1500) cost=100;
	else
	{
			y=x-1500;
			if(y%250==0)cost=100+(y/250)*5;
			else cost=100+((y/250)+1)*5;
	}
	printf("%d",cost);
	return 0;
}
