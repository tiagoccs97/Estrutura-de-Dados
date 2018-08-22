#include <stdio.h>
#define MAX 10

struct a
{
	int elementos[MAX][MAX];
	int rear[MAX], front[MAX];
	int esperando[20];
	int atendidos[20];
};
struct a q;

void inserir(int x, int prioridade)
{
	if (q.rear[prioridade==MAX-1) q.rear[prioridade]=0;
	else q.rear[prioridade]++;

	if(q.rear[prioridade]==q.front[prioridade])
	{
		printf("overflow");
		return;
	}
	q.elementos[prioridade][q.rear]=x;
	return;
}
int remover(int prioridade)
{
	if (empty())
	{
		printf("underflow\n");
		return 0;
	}
	if(q.front[prioridade]==MAX-1)
	{
		q.front[prioridade]=0;
	}
	else q.front[prioridade]++;
	return q.elementos[prioridade][q.front];
}
int empty(int prioridade)
{
	if(q.rear[prioridade]==q.front[prioridade])
	{
		return 1;
	}
	else return 0;
}

int main()
{
	q.rear=q.front=MAX-1;
	int prioridade, clientes=0, i, atendidos=0;
	for(i=0; i<4; i++) q.rear[i]=MAX-1; q.front[i]=MAX-1;  
		while(prioridade != -1)
		{
			printf("Digite a prioridade do atendimento(0 a 3 ou -1 para encerrar)\n");
			scanf("%d", &prioridade);
			if(prioridade != -1) 
			{
					inserir(clientes, prioridade);
					q.esperando[clientes]=clientes;
					clientes++;
			}
		}
		for(i=0; i<clientes; i++) printf("%c", q.esperando[clientes]+65);
		printf("\n");
		printf("Aperte qualquer botao para iniciar os atendimentos");
		for(i=3; i>=0; i--) 
		{
				while(!empty[i])
				{
					q.atendidos[aten] remover(i);

 				}	
	return 0;
}
