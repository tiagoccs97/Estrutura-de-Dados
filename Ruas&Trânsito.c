#include <stdio.h>


int mapa[19][19];
struct carro{int x, y;};
struct carro c[4];

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

void car(int n)
{
    int k;
    k = srand()%2;

    mapa[c[n].x][c[n].y] = 'C';

    if(mapa[c[n].x][c[n].y]==1)

}

int main()
{
	int i, j;
	int stop=0;

	c[0].x = 0; c[0].y = 0;
	c[1].x = 0; c[1].y = 18;
	c[2].x = 18; c[2].y = 0;
	c[3].x = 18; c[3].y = 18;

	// Preenche a matriz com zeros
	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
		mapa[i][j]=0;
		}
	}




	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
			if((i==0 || i==6 || i==12 || i==18 || j==0 || j==6 || j==12 || j==18) && mapa[i][j]!=1) mapa[i][j]=1;

			if(i==6 || i==12)
			{
				if(j==6 || j==12) mapa[i][j]=2;
			}
			if(i==0 || i==18)
            {
                if(j==0 || j==18) mapa[i][j]=3;
            }

		}
	}
	while(!stop)
    {
        if (key[KEY_SPACE]) stop=1;
        print_matriz();
        car(0);
    }
	return 0;
}
