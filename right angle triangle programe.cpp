/* c programe to print right angle triangle star pattern.*/

#include <stdio.h>

/* function to print right angle triangle*/

void rightangle_triangle(int n, int m)

{
	
	int i,j;
	
	for (i=1; i<= n; i++)
	
{
	
	for(j=1; j<=m; j++)
	
	{
	
printf("*");

}

printf("n");

}

}

int main()

{
	
int rows, columns ;

printf("nEnter the number of rows :");

scanf("%d",&rows);

printf("nEnter the number of columns :");

scanf("%d" , &columns); 	

printf("n");

rightangle_triangle(rows,columns);

return 0;
}


