#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
void init(list *l) {
	l->head = l->tail = NULL;
	l->length = 0;
}
void add(list *l, char t,int s){
node *tmp = (node *)malloc(sizeof(node));
	node *p = l->head;
	p=tmp;				
		p->i=s;						
		p->c=t;
		p=tmp->next;
}
void chk(list *l, char t,int s) {
node *p,tmp;
while(p != l->tail) {
			printf("%d,%c ", p->i,p->c);
			if(p->i==s&&p->c==t){
				printf("seats are already booked select other");
				seats();
		p = p->next;
			}			
			else {
			break;
			}
		}
		p=(node *)malloc(sizeof(node));
		p->i=s;
		p->c=t;
		p=p->next;
}
