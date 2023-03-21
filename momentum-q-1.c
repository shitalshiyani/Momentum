#include<stdio.h>

main()
{
	char character;
	printf("Enter any character =");
	scanf("%c",&character);
	
	if(character >= 'a' && character <= 'z')
	{
		printf("This is alphabet");
	}
	else if(character >= 'A' && character <= 'Z')
	{
		printf("This is alphabet");
	}
	else if(character >= '0' && character <= '9')
	{
		printf("This is digit");
	}
	else
	{
		printf("This is speacial character");
	}
	
	
}
