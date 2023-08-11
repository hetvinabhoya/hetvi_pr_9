#include<stdio.h>

void main()
{
	int i;
	
	FILE *even;
	even = fopen("even_file.txt","w");
	
	FILE *odd;
	odd = fopen("odd_file.txt","w");
	
	if(even != NULL && odd != NULL)
	{
		printf("File created successfully...");
		
		for(i=50;i<=70;i++)
		{
			if(i%2==0)
			{
				fprintf(even,"%d",i);
			}
			else
			{
				fprintf(odd,"%d",i);
			}
		}
	}
	else
	{
		printf("File can't create...");
	}
	
}
	

