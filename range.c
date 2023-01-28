//Chef's dog binary hears frequencies starting from 67 Hertz to 45000 Hertz (both inclusive).If Chef's commands have a frequency of X Hertz, find whether binary can hear them or not.
#include <stdio.h>

int main(void) {
    int t,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    if(x>=67 && x<=45000)
	    {
	        printf("YES \n");
	    }
	    else
	    {
	        printf("NO \n");
	    }
	}
	return 0;
}
