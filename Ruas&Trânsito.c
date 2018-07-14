#include <stdio.h>


int mapa[19][19];
struct carro {int n;
			 int x;
 	
 			int y;
 }; 

void print_matriz()
{
	int i, j;
	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
			printf("%d ", mapa[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
}



int main()
{
	int i, j;

	carro.n=
	// Preenche a matriz com zeros
	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
		mapa[i][j]=0;	
		}	
	}
    print_matriz();



	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
			if((i==0 || i==6 || i==12 || i==18 || j==0 || j==6 || j==12 || j==18) && mapa[i][j]!=1) mapa[i][j]=1;
			if(i==0 || i==6 || i==12 || i==18)
			{
				if(j==0 || j==6 || j==12 || j==18) mapa[i][j]=2; 
			} 
	
		}
	}
	print_matriz();
	
	return 0;
}
