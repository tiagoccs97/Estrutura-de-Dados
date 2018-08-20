#include <stdio.h>
#define MAX 10

struct a
{
	int elementos[MAX][MAX];
	int rear, front;
};
struct a q;

void inserir(int x, int prioridade)
{
	if (q.rear==MAX-1) q.rear=0;
	else q.rear++;

	if(q.rear==q.front)
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
	if(q.front==MAX-1)
	{
		q.front=0;
	}
	else q.front++;
	return q.elementos[prioridade][q.front];
}
int empty()
{
	if(q.rear==q.front)
	{
		return 1;
	}
	else return 0;
}

int main()
{
	q.rear=q.front=MAX-1;
	int prioridade, atendimentos=0;
	scanf()
	while(!empty())
	{
		printf("Digite a prioridade do atendimento(0 a 3)\n");
		scanf("%d", &prioridade);
		

	}
	return 0;
}
