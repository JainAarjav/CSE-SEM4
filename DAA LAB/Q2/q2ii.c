#include <stdio.h>
#include <stdlib.h>

struct node
{
	int vertex;
	struct node* next;
};
void enter(struct node **s,int vertex)
{
    struct node *p;
    p=*s;
  if(*s==NULL)
  {
    p=malloc(sizeof(struct node ));
    p->vertex=vertex;
    p->next=NULL;
    *s=p;
  }
  else
  {
    while(p->next)
    {
        p=p->next;
    }
    p->next=malloc(sizeof(struct node ));
    p->next->vertex=vertex;
    p->next->next=NULL;
    
  }
}
void display(struct node *p)
{
    struct node *t=p;
    while(t)
    {
        printf("%d -\t",t->vertex);
        t=t->next;
    }
}
int main()
{
	int v,i,j;
	printf("Enter the vertices");
	scanf("%d",&v);
	struct node** p=malloc(v*sizeof(struct node* ));
	for(i=0;i<v;i++)
	{
		enter(&p[i],i);
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("IS THERE A EDGE BETWEEN %d and %d\n",i,j);
			printf("press Y for Yes N for no\n");
			char op,temp;
			scanf("%c",&temp);
			scanf("%c",&op);
			if(op=='y')
			{
				enter(&p[i],j);
			}
		}
	}
	for(i=0;i<v;i++)
	{
		display(p[i]);
		printf("\n");
	}
}