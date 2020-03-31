//Prime numbers between 1 to 1000
#include<stdio.h>
void main()
{
	int n=1, i, cnt=0;
	
	for(n=1; n<=1000; n++)
	{
		for(i=1; i<=n; i++)
			if(n%i==0)
				cnt++;
					
		if(cnt==2)
				printf("%d ", n);
		cnt=0;
	}
}
