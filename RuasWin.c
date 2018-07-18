#include <stdio.h>
#include <stdlib.h> // rand, srand...
#include <conio.h> // getch, kbhit...
#include <time.h> // time, sleep...

char mapa[19][19];
struct carro{int x, y;};
struct carro c[100];


void sinais_1()
{
    int i, j;
    for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{

			if(i==6 || i==12)
			{
				if(j==6 || j==12 || j==0 || j==18)
                {
                    if(mapa[i][j]==3+48) mapa[i][j]=4+48;
                    else if(mapa[i][j]==4+48) mapa[i][j]=3+48;

				}
			}


		}
	}

}
void sinais_2()
{
    int i, j;
    for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{

			if(i==0 || i==18)
			{
				if(j==6 || j==12 || j==0 || j==18)
                {
                    if(mapa[i][j]==3+48) mapa[i][j]=4+48;
                    else if(mapa[i][j]==4+48) mapa[i][j]=3+48;

				}
			}

		}
	}

}

void preencher_matriz()
{
    int i, j;
    for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
		mapa[i][j]='0';
		}
	}




	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{

			if(i==0 || i==12 || j==6 || j==18) mapa[i][j]=1+48;
			if(i==6 || i==18 || j==0 || j==12) mapa[i][j]=2+48;

			if(i==6 || i==12 || i==0 || i==18)
			{
				if(j==6 || j==12 || j==0 || j==18) mapa[i][j]=3+48;
			}


		}
	}

}

void print_matriz()
{
	int i, j;
	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
			if(mapa[i][j]=='0' || mapa[i][j]<=97 && mapa[i][j]>=65 || mapa[i][j]>=51 && mapa[i][j]<=52) printf("%c ", mapa[i][j]);
			else printf("%c ", 0);
		}
		printf("\n");
	}
	printf("\n");
}

void car(int n)
{
    int k;
    k = rand()%2;

    mapa[c[n].x][c[n].y] = n + 65;

    if(k==0)
    {
        if(mapa[c[n].x][c[n].y+1]==1+48 || mapa[c[n].x][c[n].y+1]==3+48 && c[n].y+1<19 && mapa[c[n].x][c[n].y-1]!=2+48) c[n].y++;
        if(mapa[c[n].x][c[n].y-1]==2+48 || mapa[c[n].x][c[n].y-1]==3+48 && c[n].y-1>=0 && mapa[c[n].x][c[n].y+1]!=1+48) c[n].y--;
        if(mapa[c[n].x+1][c[n].y]==1+48 || mapa[c[n].x+1][c[n].y]==4+48 && c[n].x+1<19 && mapa[c[n].x-1][c[n].y]!=2+48) c[n].x++;
        if(mapa[c[n].x-1][c[n].y]==2+48 || mapa[c[n].x-1][c[n].y]==4+48 && c[n].x-1>=0 && mapa[c[n].x+1][c[n].y]!=1+48) c[n].x--;
    }
    else
    {
        if(mapa[c[n].x+1][c[n].y]==1+48 || mapa[c[n].x+1][c[n].y]==4+48 && c[n].x+1<19 && mapa[c[n].x-1][c[n].y]!=2+48) c[n].x++;
        if(mapa[c[n].x-1][c[n].y]==2+48 || mapa[c[n].x-1][c[n].y]==4+48 && c[n].x-1>=0 && mapa[c[n].x+1][c[n].y]!=1+48) c[n].x--;
        if(mapa[c[n].x][c[n].y+1]==1+48 || mapa[c[n].x][c[n].y+1]==3+48 && c[n].y+1<19 && mapa[c[n].x][c[n].y-1]!=2+48) c[n].y++;
        if(mapa[c[n].x][c[n].y-1]==2+48 || mapa[c[n].x][c[n].y-1]==3+48 && c[n].y-1>=0 && mapa[c[n].x][c[n].y+1]!=1+48) c[n].y--;
    }

}

int main()
{
	int stop=0;
	char key;
	int count=0;

	c[0].x = 0; c[0].y = 0;
	c[1].x = 0; c[1].y = 18;
	c[2].x = 18; c[2].y = 0;
	c[3].x = 18; c[3].y = 18;
	c[4].x = 6; c[4].y = 6;
	c[5].x = 6; c[5].y = 12;
	c[6].x = 12; c[5].y = 6;
	c[7].x = 12; c[5].y = 12;

	while(!stop)
    {
        _sleep(400);
        if(kbhit()) key=getch();
        if (key==32) stop=1;

        if (count<27) count++;
        if (count==27) count=0;

        preencher_matriz();
        if (count>=5 && count<=17) sinais_1();
        if (count>=15 && count<=26) sinais_2();
        car(0);
        car(1);
        car(2);
        car(3);
        car(4);
        car(5);
        car(6);
        car(7);
        system("cls");
        print_matriz();


    }
	return 0;
}
