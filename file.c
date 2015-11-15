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

#include<stdio.h>
#include <stdlib.h>
#include "queue.h"
#include<fcntl.h>
void price(int);
typedef struct seat{
	char  a[2];
}seat;
void  lst(char a,int b, int nos ) {
	int j = b,z[25],fd,o,n,ch,i,clss ;
	char x = a,temp[16];
	seat st[64],y;
	queue q;
	qinit(&q);
	for(i=1;i<25;i++){
		z[i]=0;
	}
	printf("please select class\n1.row A- D silver\n2.row E-I gold\n3.row J-P platinum\n");
	scanf("%d",&clss);

	printf("enter the seat no\texample:A1,F5\n");
	scanf("%s",y.a); 
	//ns++;
	if(x == 'a'){
		if(j == 1) {
			if(z[1] = 0) { 
				fd = open("slot1.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
				write(fd, y.a, 2);
				close(fd);	
				z[1] = 1;	 					
			}
			else {
				fd = open("slot1.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
				o = read(fd, &st,sizeof(st));		 
				n = o /2;
				for(i = 0; i < n; i++) {
					enqueue(&q,  st[i].a);
				}
				ch = chk(&q,  y.a);
				if(ch == 0) {
					printf("the seat u selected is booked please select another");
					lst(a, b, nos);
				}
				else {
					write(fd, y.a, 2);
					close(fd);	
				}
			}
			if(j == 2) {
				if(z[2] = 0) {
					fd = open("slot2.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[2] = 1;			}
				else {
					fd = open("slot2.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 3) {
				if(z[3] = 0) {
					fd = open("slot3.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[3] = 1;	 					
				}
				else {
					fd = open("slot3.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 4) {
				if(z[4] = 0) {
					fd = open("slot4.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[4] = 1;	 					
				}
				else {
					fd = open("slot4.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 5){
				if(z[5] = 0){
					fd = open("slot5.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[5] = 1;	 					

				}
				else {
					fd = open("slot5.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 6){
				if(z[6] = 0){
					fd = open("slot6.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[6] = 1;	 					
				}	
				else {
					fd = open("slot6.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}	
		}	
		if(x == 'b'){
			if(j == 1) {
				if(z[7] = 0) {
					fd = open("slot7.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[7] = 1;	 					

				}
				else{
					fd = open("slot7.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				} 
			}
			if(j == 2) {
				if(z[8] = 0) {
					fd = open("slot8.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[8] = 1;	 					

				}
				else {
					fd = open("slot8.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 3) {
				if(z[9] = 0) {
					fd = open("slot9.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[9] = 1;	 					

				}
				else {
					fd = open("slot9.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 4) {
				if(z[10] = 0) {
					fd = open("slot10.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[10] = 1;	 					

				}
				else {
					fd = open("slot10.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 5){
				if(z[11] = 0){
					fd = open("slot11.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[11] = 1;	 					

				}
				else {
					fd = open("slot11.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 6){
				if(z[12] = 0){
					fd = open("slot12.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[12] = 1;	 					

				}	
				else {
					fd = open("slot12.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}	
		}
		if(x == 'c'){
			if(j == 1) {
				if(z[13] = 0) {
					fd = open("slot13.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[13] = 1;	 					

				}
				else{
					fd = open("slot13.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				} 
			}
			if(j == 2) {
				if(z[14] = 0) {
					fd = open("slot14.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[14] = 1;	 					

				}
				else {
					fd = open("slot14.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 3) {
				if(z[15] = 0) {
					fd = open("slot15.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[15] = 1;	 					

				}
				else {
					fd = open("slot15.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 4) {
				if(z[16] = 0) {
					fd = open("slot16.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[16] = 1;	 					

				}
				else {
					fd = open("slot16.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 5){
				if(z[17] = 0){
					fd = open("slot17.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[17] = 1;	 					

				}
				else {
					fd = open("slot17.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 6){
				if(z[18] = 0){
					fd = open("slot18.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[18] = 1;	 					

				}	
				else {
					fd = open("slot18.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}	
		}
		if(x == 'd'){
			if(j == 1) {
				if(z[19] = 0) {
					fd = open("slot19.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[19] = 1;
				}
				else{
					fd = open("slot19.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				} 
			}
			if(j == 2) {
				if(z[20] = 0) {
					fd = open("slot20.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[20] = 1;	 					

				}
				else {
					fd = open("slot20.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 3) {
				if(z[21] = 0) {
					fd = open("slot21.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[21] = 1;	 					
				}
				else {
					fd = open("slot21.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 4) {
				if(z[22] = 0) {
					fd = open("slot22.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[22] = 1;	 					

				}
				else {
					fd = open("slot22.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 5){
				if(z[23] = 0){
					fd = open("slot23.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[23] = 1;	 					

				}
				else {
					fd = open("slot23.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}
			if(j == 6){
				if(z[24] = 0){
					fd = open("slot24.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
					write(fd, y.a, 2);
					close(fd);	
					z[24] = 1;	 					

				}	
				else {
					fd = open("slot24.txt", O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
					o = read(fd, &st,sizeof(st));		 
					n = o /2;
					for(i = 0; i < n; i++) {
						enqueue(&q, st[i].a);
					}
					ch = chk(&q,  y.a);
					if(ch == 0) {
						printf("the seat u selected is booked please select another");
						lst(a, b, nos);
					}
					else {
						write(fd, y.a, 2);
						close(fd);	
					}

				}
			}	
		}
	}
		if(nos>1){
			nos--;
			lst(a,b,nos);
		}
		else{
			price(clss);
		}
	}
