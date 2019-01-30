#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct nozinho nozinho;

struct nozinho{
    int item;
    nozinho *next;
};

nozinho* add(nozinho *head, int item)
{
    nozinho *new_nozinho = (nozinho*) malloc(sizeof(nozinho));
    new_nozinho->item = item;
    new_nozinho->next = head;
    return new_nozinho;
}
void print_list(nozinho *head)
{
    while (head != NULL) 
    {
        printf("%d ", head->item);
        head = head->next;
    }
}

void ordenar(nozinho *head)
{
    int aux;
    
    while(head != NULL)
    {
        nozinho *temp = head;
        while(temp!= NULL)
        {
            if(head->item > temp->item)
            {
                aux = head->item;
                head->item = temp->item;
                temp->item = aux;
            }
            temp = temp->next;
        }
        head = head->next;
    }    
}


nozinho* remove_item(nozinho *head, int item)
{
    nozinho *previous = NULL;
    nozinho *current = head;
    while (current != NULL && current->item != item) 
    {
        previous = current;
        current = current->next;
    }
    if (current == NULL) 
    {
        return head;
    }
    if (previous == NULL) 
    {
        head = current->next;
    } else 
    {
        previous->next = current->next;
    }
    free(current);
    return head;
}
nozinho* create_linked_list()
{
    return NULL;
}




int main() 
{
	int n;
	nozinho* listinha = create_linked_list();
	
	while(scanf("%d", &n)!=EOF)
	{
	   listinha = add(listinha, n); 
	}
	ordenar(listinha);
	print_list(listinha);
	return 0;
}
