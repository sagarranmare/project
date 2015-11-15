/*****************************************************************************
 * Copyright (C) Sagar S. Ranmare  ranmaresagar@yahoo.in 
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
void qinit(queue *q){
	q->head = NULL;
	q->tail = NULL;
}
void enqueue(queue *q, char *name ){
	node *tmp;
	tmp = (node *)malloc(sizeof(node));
	tmp->data = (char *)malloc(strlen(name) + 1);
	strcpy(tmp->data, name);
	//tmp->i=s;
	tmp->next = NULL;

	if(q->tail == NULL)
		q->head = tmp;
	else 
		q->tail->next = tmp;
	q->tail = tmp;
	
}
char *dequeue(queue *q){
	node *tmp = q->head->next;
	char *retdata = q->head->data;
	free(q->head);
	q->head = tmp;
	if(q->head == NULL)
		q->tail = NULL;
	return retdata;
}
int qempty(queue *q){
	if(q->head == NULL)
		return 1;
	return 0;
}
int qfull(queue *q){
	return 0;
}
int chk(queue *q,char *seat) {
	int x;
	node *tmp = q->head;
	 while(tmp) {
		x=strcmp(seat,tmp->data); 
		if(x==0){
		return x;
		}
		else{		
		tmp = tmp->next;
		}
	}
}
