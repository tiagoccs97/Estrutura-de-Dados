#include <stdio.h>
#include <math.h>

int pilha[2][100];

int divisao_2(int n)
{
	int i=0;
	while(n>=1)
	{
		pilha[0][i]=n%2;
		i++;
		n/=2;
	}
	return i;

}
int inverte_pilha(int tam)
{

	int i, j=0;

	for(i=tam-1; i>=0; i--)
	{
        pilha[1][i]=pilha[0][j];
        j++;
	}
	return j;
}
void print_pilha(int tam)
{
	for(i=0; i<tam; i++)
	{
		printf("\n%d", pilha[1][i]);
	}
}

int main()
{
  	int a;
  	scanf("%d", &a);
  	print_pilha(inverte_pilha(divisao_2(a)));


}
