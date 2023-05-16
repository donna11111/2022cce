#include <stdio.h>
int main()
{
	int m,x,y,z,i;
	scanf("%d",&m);

	x=m/50;
	y=(m-x*50)/10;
	z=(m-x*50-y*10)/5;
	i=(m-x*50-y*10-z*5);
	printf("%d=50*%d+10*%d+5*%d+1*%d",m ,x, y, z, i);
}
