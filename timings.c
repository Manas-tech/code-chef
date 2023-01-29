//The working hours of Chef’s kitchen are from X pm to Y pm (1≤X<Y≤12).Find the number of hours Chef works.
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d",&a,&b);
	    c=b-a;
	    printf("%d \n",c);
	}
	return 0;
}
