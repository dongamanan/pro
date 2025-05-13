#include<stdio.h>
int main()
{
	int i,n;
	
	printf("enter n:");
	scanf("%d",&n);
	
	i=1;
	
	do{
		if(i%2==0)
		{
		   	printf("%d",i);
		}
		i++;
	}while(i<=n);
	
}