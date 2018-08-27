#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

struct a
{
	int elementos[MAX][MAX];
	int rear[MAX], front[MAX];
	int atendidos[20];
};
struct a q;

void inserir(int x, int prioridade)
{
	if (q.rear[prioridade]==MAX-1) q.rear[prioridade]=0;
	else q.rear[prioridade]++;
	//printf("\n%d\n%d", q.rear[prioridade], q.front[prioridade]);
	if(q.rear[prioridade]==q.front[prioridade] && !empty(prioridade))
	{
		printf("\noverflow\n");
		return;
	}
	q.elementos[prioridade][q.rear[prioridade]]=x;
	return;
}
int remover(int prioridade)
{
	if (empty(prioridade))
	{
		printf("\nunderflow\n");
		return 0;
	}
	if(q.front[prioridade]==MAX-1)
	{
		q.elementos[prioridade][q.front[prioridade]]=0;
		q.front[prioridade]=0;

	}
	else {q.elementos[prioridade][q.front[prioridade]]=0; q.front[prioridade]++;}
	return q.elementos[prioridade][q.front[prioridade]];
}
int empty(int prioridade)
{
	if(q.rear[prioridade]==q.front[prioridade] && !(q.front[prioridade]-1))
	{
		return 1;
	}
	else return 0;
}
void print_fila(int prioridade)
{
	int i;
	for (i = q.front[prioridade]+1; i != q.front[prioridade]; i++)
	{
		if(i>MAX-1) i=0;
		if(q.elementos[prioridade][i]) printf("%c\n", q.elementos[prioridade][i]);
	}
}


int main()
{
	char nome;
	int prioridade, i, atendidos=0, tempo;

	for(i=0; i<4; i++) {q.rear[i]=MAX-1; q.front[i]=MAX-1;}  
	while(prioridade != -1)
	{
		printf("\nDigite a prioridade do atendimento e um caractere representando o cliente(0 a 3 ou -1 para encerrar)\n");
		scanf("%d %c", &prioridade, &nome);
		if(prioridade != -1) inserir(nome, prioridade);
	}
	printf("\nClientes na fila:\n\n");
	for(i=3; i>=0; i--)   
	{
		print_fila(i); 		
 	}		
	printf("\nEspere alguns segundos até iniciar os atendimentos\n");
	
	
	if(clock()-3000)
	{
		printf("\nOrdem dos atendimentos(crescente)\n");
		for(i=3; i>=0; i--) 
		{		
			/*while(!empty(i))
			{
				printf("%c\n", remover(i));
 			}	*/ 		
 	    }
 	}		
	return 0;
}
