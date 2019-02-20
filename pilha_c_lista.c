#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack stack;
typedef struct node node;


struct stack{
    node* top;
    stack* next;
};

struct node{
    int item;
    node* next;
};

stack* create_stack()
{
    stack* new_stack = (stack*) malloc(sizeof(stack));
    new_stack->top = NULL;
    new_stack->next = NULL;
    return new_stack;
}

int is_empty(stack* stack)
{
    if(stack->top == NULL) return 1;
    else return 0;
}

void push(stack* stack, int item)
{
    node* aux = (node*) malloc(sizeof(node));
    aux->item = item;
    aux->next = stack->top;
    stack->top = aux;
}

stack* add_stack(stack *stac)
{
    stack *n_stack = (stack*) malloc(sizeof(stack));
    n_stack->top = NULL;
    n_stack->next = stac;
    return n_stack;
} 

int pop(stack* stack)
{
    int n = stack->top->item;
    node* aux = stack->top;
    stack->top = stack->top->next;
    free(aux);
    return n;
}
void PUSH_OR_POP(stack* pilha, char a)
{
    int n;
    
    if(a == 'U')
    {
        //if(!is_empty(pilha)) pilha = add_stack(pilha);
        while(scanf("%d", &n) != EOF)
        {
            push(pilha, n);
        }
    }
    else if(a == 'O')
    {
        while(!is_empty(pilha))
        {
            printf("%d ", pop(pilha));
            
        }
        printf("\n");
    stack* aux = pilha;
    pilha = pilha->next;
    free(aux);    
    }
}

int main() 
{
    char s[1000];
    stack* pilhinha = create_stack();
    
  
        push(pilhinha, 7);
        push(pilhinha, 8);
        push(pilhinha, 9);
        //printf("%d", is_empty(pilhinha));
        pilhinha = add_stack(pilhinha);
        PUSH_OR_POP(pilhinha, 'U');
        printf("%d", pop(pilhinha));
       
	return 0;
}
