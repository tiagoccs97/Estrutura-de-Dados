#include <stdio.h>

typedef struct
{
  int Qt_min;
  int Pi_min[1150];
  int Pi_day;
}day;
day[10000];
int deleted[10000];
void insert_day(int *d)
{
  int i;
  scanf("%d", &day[d].Qt_min)
  for(i=0; i<day[d].Qt_min; i++)
  {
    scanf("%d", &day[d].Pi_min[i]);
    day[d].Pi_day+=day[d].Pi_min[i];
  }
}
void delete_day(int *d)
{
  deleted[d]=-1;
}
int Qt_Pi_day(int *d)
{
  return printf("%d\n", day[d].Pi_day);
}
int Qt_Pi_min(*d)
{
  int i;
  for(i=0; i<day[d].Qt_min[])
}

void operation(int t, int *d)
{
  if(t==1) insert_day(d);
  if(t==2) delete_day(d);
  if(t==3) Qt_Pi_day(d);
  if(t==4) Qt_Pi_min(d);
}

void main()
{
  int o, k=0;

  while(1)
  {
    scanf("%d", &o);
    if(o == 0) break;
    operation(o, &k);
    k++;
  }
}
