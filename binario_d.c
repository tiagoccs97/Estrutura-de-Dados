#include <stdio.h>
#include <string.h>
#include <math.h>


int pilha[2][100];

int pot(int a, int b)
{
	int i, mult=1;
	if(b==0) return 1;
	for(i=0; i<b; i++)
	{
		mult*=a;
	}
	return mult;
}

int binario_p_decimal(int tam)
{
	int soma=0, i, x;
	for(i=0; i<tam; i++)
	{
		x= pot(2, tam-1-i);
		soma+= x;
		soma*=pilha[0][i];

	}
	return soma;
}



int main()
{
  	int a, i=0;
  	scanf("%d", &pilha[0][i]);
  	while(pilha[0][i]!=-1)
  	{
  		i++;
  		scanf("%d", &pilha[0][i]);
  	
  	}

  	printf("%d\n", binario_p_decimal(i));
  	


}
