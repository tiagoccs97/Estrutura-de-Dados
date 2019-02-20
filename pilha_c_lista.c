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

stack* add_stack(stack *p)
{
    stack *n_stack = (stack*) malloc(sizeof(stack));
    n_stack->top = NULL;
    n_stack->next = p;
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
void inverter(node *head)
{
    node *prev = NULL;
    node *next = head->next;
    while(prev!=NULL)
    {
        head->next = prev;
        prev = head;
        head = next;
        next = next->next;
    }
}
/*void PUSH_OR_POP(stack* pilhinha, char a)
{
    int n;
    
    if(s[1] == 'U')
    {
        if(!is_empty(pilhinha)) pilhinha = add_stack(pilhinha);
        while(scanf("%d", &n) != EOF)
        {
            push(pilhinha, n);
        }
    }
    else if(s[1] == 'O')
    {
        while(!is_empty(pilhinha))
        {
            printf("%d ", pop(pilhinha));
            
        }
        printf("\n");
        stack* aux = pilhinha;
        pilhinha = pilhinha->next;
        free(aux);   
    }
}
*/
int main() 
{
    char s[1000]; 
    int n, i=0, j, P[1000];
    stack* pilhinha = create_stack();
    
    while(gets(s))
    {
        
        if(strcmp(s, "PUSH") == 0)
        {
            if(!is_empty(pilhinha)) pilhinha = add_stack(pilhinha);
            while(scanf("%d ", &n))
            {
                push(pilhinha, n);
                
            }
        }
        else if(strcmp(s, "POP") == 0)
        {
            if(pilhinha && pilhinha->top)    
            {    
                
                while(!is_empty(pilhinha))
                {
                    P[i++] = pop(pilhinha);
                }
                for(j=i-1; j>=1; j--) printf("%d ", P[j]);
                printf("%d", P[j]);
                i=0;
                printf("\n");
                stack* aux = pilhinha;
                pilhinha = pilhinha->next;
                free(aux); 
            }
            else printf("EMPTY STACK\n");
        }
    }   
       
       
       
	return 0;
}
