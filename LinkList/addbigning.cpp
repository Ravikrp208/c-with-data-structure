#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *p,*p1,*head;

	void addAt_begin();
	void addAt_end();
	void display();

int main(){
addAt_begin();
addAt_end()	;
display();
}
void addAt_begin(){
	if(head==NULL){
	   p=(struct node*)malloc(sizeof(struct node));
	   printf("enter the first data:");
	   scanf("%d",&p->data);
	   p->next=NULL;
	   head=p;	
	}
	else{
		p1=(struct node*)malloc(sizeof(struct node));
		printf("ente the data to add at begin");
		scanf("%d",&p1->data);
		p1->next=head;
		head=p1;
	}
}

void addAt_end(){
	if(head==NULL){
		p=(struct node*)malloc(sizeof(struct node));
		printf("enter the first data in list ");
		scanf("%d",&p->data);
		p->next=NULL;
		head=p;
	}
	else{
		p1=(struct node*)malloc(sizeof(struct node));
		printf("enter the data to add at end ");
		scanf("%d",&p1->data);
		p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=p1;
		p1->next=NULL;
	}
}

void display() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
