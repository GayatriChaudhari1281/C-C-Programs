#include"prototype.h"

void genericroot(int n)
{
	int rem=0,sum=0,i=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		if(n == 0)  
        {  
            if(sum > 9)  
            {  
                n = sum;  
                sum  = 0;  
            }  
        }  
	}
	printf("sum of all digits is : %d\n",sum);
}