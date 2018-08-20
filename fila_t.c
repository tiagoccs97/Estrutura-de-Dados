#include <stdio.h>
#define MAX 10

struct a
{
	int elementos[MAX][MAX];
	int rear, front;
};
struct a q;

void inserir(int x)
{
	if (q.rear==MAX-1) q.rear=0;
	else q.rear++;

	if(q.rear==q.front)
	{
		printf("overflow");
		return;
	}
	q.elementos[q.rear]=x;
	return;
}
int remover()
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
	return q.elementos[q.front];
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
	while(!empty())
	{

	}

}
