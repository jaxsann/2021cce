#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int p=0,t=1;
	for(int i=1;i<=n;i++)
	{
		t*=i;
		p+=t;
	}
	printf("%d",p);
}
