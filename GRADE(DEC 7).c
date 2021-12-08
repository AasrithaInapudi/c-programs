#include<stdio.h>
int main()
{
	char grade;
	printf("enter the grade:");
	scanf("%c",&grade);
	if(grade=='E')
	{
		printf("excellent");
	}
	else if(grade=='v')
	{
		printf("very good");
	}
	else if(grade=='G')
	{
		printf("good");
	}
	else if(grade=='A')
	{
		printf("average");
	}
	else if(grade=='F')
	{
		printf("fail");
	}
	else
	{
		printf("invalid");
	}	
}
