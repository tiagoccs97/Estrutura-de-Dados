#include <stdio.h>
#include <string.h>

char E[100], pilha[100];

void inf_to_pref()
{
  	int i, j;
  	char aux;
  	for(i=0; i<strlen(E); i++)
  	{

		if((E[i]>=42 && E[i]<=47) && E[i+1] && E[i-3]!='*' && E[i-3]!='/') 
		{
			aux = E[i];
			E[i] = E[i-1];
			E[i-1]=aux;

		}
		else if((E[i]>=42 && E[i]<=47) && E[i+1] && (E[i-3]=='*' || E[i-3]=='/'))
		{
			for(j=1; j<i; j++)
			{
				aux = E[j];
				E[j] = E[j-1];
				E[j-1]=aux;					
		    }
		}   
		
	}
}




int main()
{
	int i;
	scanf("%s", E);
	inf_to_pref();
	for(i=0; i<strlen(E); i++)
	{
		printf("%c", E[i]);
	}
	printf("\n");
	return 0;

}
