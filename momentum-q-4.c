#include<stdio.h>

main()
{
	char day;
	printf("Enter Day Character=");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M':
			   printf("Monday");
			   break;
		case 'T':
			   printf("Tuesday");
			   break;
		case 'W':
			   printf("Wednesday");
			   break;
		case 't':
			   printf("Thursday");
			   break;
		case 'F':
			   printf("Friday");
			   break;
		case 'S':
			   printf("Saturday");
			   break;
		case 's':
			   printf("Sunday");
			   break;
		default :
		       printf("Please enter valid alphabet");	   
	}
		
}
