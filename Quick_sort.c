#include <stdio.h>
#include <stdlib.h>

void swap(int *v, int a, int b)
{
  int aux;
  aux=v[a];
  v[a]=v[b];
  v[b]=aux;
}

void quick_sort(int *v, int size)
{
  if(size<=1) return;
  else
  {
    int a=0;
    int b = size-1;
    int pivo=v[size/2];

    while(a<=b)
    {
      while(v[a]<pivo && a<b) a++;
      while(v[b]>pivo && b>a) b--;

      if(a<b) swap(v, a, b);
    }
  }
    quick_sort(v, b);
    quick_sort(v+a, size-a);
}
}
int main ()
{
  int *v = (int*) malloc(sizeof(int));
  int i;
  printf("\nDigite a sequencia de numeros desejada(6 numeros):\n");
  for(i=0; i<6; i++)
  {
    scanf("%d", (v + i));
    v = (int*) realloc(v, sizeof(int)*(i+2));
  }
  //quick_sort(v, 6);



  return 0;
}
