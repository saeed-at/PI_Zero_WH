#include <stdio.h>
#include <unistd.h>

int main()
{
	    float pi = 3.14159;
	    float r = 3.5;    
	    float res = 2*pi*r;
	    printf("2*pi*r = %.5f\n", res);
	    sleep(5);
	    return 0;
}
