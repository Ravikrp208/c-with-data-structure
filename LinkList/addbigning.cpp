#include<stdio.h>
#include<stdlib.h>

struct n 
{
	int i;
	struct n*next;
	
};

void insertbeg()
{
	if (h==NULL)
	{
		p= (struct n*) malloc (sizeof (struct n));
		printf("Enter a elements:");
		scanf("%d",&p->i);
		p->next = NULL;
		h=p;
	}
	
	p= (struct n*) malloc (sizeof (struct n));
	printf("Enter a Elements:");
	scanf("%d",&p1->i);
	p1->next =h;
	h=p1;
	
	
}
