#include<stdio.h>
#include<stdlib.h>


typedef struct node {
	int data;
	struct node *next; 
}node; 

node * CreateLinkedList(int); 
void displayList(node *); 
void delete_node(node *);

node * CreateLinkedList(int n) {
	node * head = NULL;
	node * temp;
	node * p; 

	for(int i=0; i<n; i++) {
		temp = (node *)malloc(sizeof(node)); 
		printf("Enter data for node %d: ", i); 
		scanf("%d", &(temp->data)); 

		if(head == NULL) {
			head = temp; 
		}
		else {
			p = head; 
			while(p->next!=NULL) {
				p=p->next; 
			}
			p->next=temp; 
		}
	}
	return head; 
}
void delete_node(node *head) {
	node * p;
	p = head;
	while(p!=NULL) {
		p = p->next; 
	}
	node *q = p->next; 
	p->next = NULL;
	free(q); 

	displayList(head);
}	
void displayList(node * head) {
	node * p; 
	p = head; 
	while(p!=NULL) {
		printf("%d->", p->data); 
		p=p->next; 
	}
	printf("NULL\n"); 
}
int main() {
	node * Head = NULL;
	int n; 
	printf("Enter the number of nodes: "); 
	scanf("%d", &n); 

	Head = CreateLinkedList(n); 
	displayList(Head);
	delete_node(Head); 
	return 0; 
}
