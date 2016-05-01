#include<stdio.h>
int main()
{
	int a=0;
	int sum=0;
	int i=0;
	while( scanf("%d",&a)!=EOF)
	{
			sum=0;
			for(i=1;i<=a;i++)
			{
					sum+=i;
			}
			printf("%d\n\n",sum);
	}
	return 0;
}
