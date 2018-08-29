#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10

struct a
{
	char elementos[MAX][MAX][MAX];
	int rear[MAX], front[MAX];
};
struct a q;

void nome_0(char s[])
{
	int i=0;
	while(s[i])
	{
		s[i]=0;
		i++;
	}
}

void str_0(int x, int y)
{
	int i=0;
	while(q.elementos[x][y][i])
	{
		q.elementos[x][y][i]=0;
		i++;
	}
}

void str_to_fila(char s[], int x, int y)
{
	int i=0;
	while(s[i])
	{
		q.elementos[x][y][i]=s[i];
		i++;
	}
}

void fila_to_str(char s[], int x,int y)
{
	int i=0;
	while(q.elementos[x][y][i])
	{
		s[i]=q.elementos[x][y][i];
		i++;
	}
}

int empty(int prioridade)
{
	if(q.rear[prioridade]==q.front[prioridade] && !(q.elementos[prioridade][q.front[prioridade]-1][0]))
	{
		return 1;
	}
	else return 0;
}
void inserir(char x[], int prioridade)
{
	if (q.rear[prioridade]==MAX-1) q.rear[prioridade]=0;
	else q.rear[prioridade]++;
	//printf("\n%d\n%d", q.rear[prioridade], q.front[prioridade]);
	if(q.rear[prioridade]==q.front[prioridade] && !empty(prioridade))
	{
		printf("\noverflow\n");
		return;
	}
	str_to_fila(x, prioridade, q.rear[prioridade]);
	return;
}
void remover(int prioridade, char x[])
{
	if (empty(prioridade))
	{
		printf("\nunderflow\n");
		return;
	}
	if(q.front[prioridade]==MAX-1)
	{
		str_0(prioridade, q.front[prioridade]);
		q.front[prioridade]=0;

	}
	else {str_0(prioridade, q.front[prioridade]); q.front[prioridade]++;}
	fila_to_str(x, prioridade, q.front[prioridade]);
	return;
}

void print_fila(int prioridade)
{
	int i;
	for (i = q.front[prioridade]+1; i != q.front[prioridade]; i++)
	{
		if(i>MAX-1) i=0;
		if(q.elementos[prioridade][i][0]) printf("%s\n", q.elementos[prioridade][i]);
	  	
	}
}


int main()
{
	char nome[MAX], nome2[MAX];
	int prioridade, i, atendidos=0, tempo;

	for(i=0; i<4; i++) {q.rear[i]=MAX-1; q.front[i]=MAX-1;}  
	while(prioridade != -1)
	{
		printf("\nDigite a prioridade do atendimento e um caractere representando o cliente(0 a 3 ou -1 para encerrar)\n");
		scanf("%d %s", &prioridade,  nome);
		if(prioridade != -1) inserir(nome, prioridade);
		nome_0(nome);
	}
	printf("\nClientes na fila:\n\n");
	for(i=3; i>=0; i--)   
	{
		print_fila(i); 		
 	}		
	//printf("\nEspere alguns segundos até iniciar os atendimentos\n");
	
	
	
	
		

		printf("\nOrdem dos atendimentos(crescente):\n");
		
		for(i=3; i>=0; i--) 
		{		
			while(!empty(i))
			{
				remover(i, nome2);

				printf("%s\n", nome2);
				nome_0(nome2);
 			}	 		
 	    }
 			 
	return 0;
}
