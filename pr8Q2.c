/*
	Q2
*/
#include <stdio.h>

void cubes(int *p, int a) 
{
	int i,j;
	
    for ( i = 0; i < a; i++) 
	{
        for ( j = 0; j < a; j++) 
		{
            *(p + i * a + j) = (*(p + i * a + j)) * (*(p + i * a + j)) * (*(p + i * a + j));
        }
    }
}

void main() 
{
	
    int a;
    int i,j;
    
    printf("\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("              Program to find Cube of 2D array                       \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n");

    printf("Enter Arry's size: ");
    scanf("%d", &a);
    printf("\n");

    int A[a][a];

    printf("Enter the elements of the 2D array :- \n\n");
    
    for ( i = 0; i < a; i++) 
	{
        for ( j = 0; j < a; j++) 
		{
        	printf("A[%d][%d] :- ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");
    
    int *p;
    
    p = & A;
     
    cubes(p,a);

    printf("Cubes of all elements in the array :-\n");
    for ( i = 0; i < a; i++) 
	{
        for ( j = 0; j < a; j++) 
		{
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

}
