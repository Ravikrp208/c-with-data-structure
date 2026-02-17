#include<stdio.h>
#include<stdlib.h>

struct n{
	int i ;
	struct n *next;
};
int main(){
	struct n *p,*p1,*h=NULL;
	int j=1;
	while(j<5){
		if(h==NULL){
			p=(struct n*)malloc(sizeof(struct n));
			h=p;
			printf("enter the number:");
			scanf("%d",&p->i);
			p->next=NULL;
		}
		else{
			
			p1=(struct n*)malloc(sizeof(struct n));
			printf("enter the number:");
			scanf("%d",&p1->i);
			p1->next=NULL;
			p->next=p1;
			p=p1;
		}
		j++;
	}
	p=h;
	while(p!=NULL){
		printf("%d->",p->i);
		p=p->next;
	}
	printf("NULL");
	
	
}

