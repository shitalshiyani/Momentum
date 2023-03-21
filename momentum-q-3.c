#include<stdio.h>

main()
{
	int p,q,r,s;
	printf("Enter value of P=");
	scanf("%d",&p);
	printf("Enter value of Q=");
	scanf("%d",&q);
	printf("Enter value of R=");
	scanf("%d",&r);
	printf("Enter value of S=");
	scanf("%d",&s);
	
	if(p>q)
	{
		if(p>r)
		{
			if(p>s)
			{
				printf("P is Max");
			}
			else
			{
				printf("S is Max");
			}
		}
		else
		{
			if(r>s)
			{
				printf("R is Max");
			}
			else
			{
				printf("S is Max");
			}
		}
	}
	else
	{
		if(q>r)
		{
			if(q>s)
			{
				printf("Q is Max");
			}
			else
			{
				printf("S is Max");
			}
		}
		else
		{
			if(r>s)
			{
				printf("R is Max");
			}
			else
			{
				printf("S is max");
			}
		}
	}
}
