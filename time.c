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
void seats(int,char);
void time(int a,char z){
	int i,q,pp;
	char x=z;
	for(pp=0;pp<36;pp++){
	printf("____");
	}
	printf("\n\n\n\t\t\t\tplease select time\n\n");
	printf("\t\t\t\t\t\t[1]11:00 am\n\n\t\t\t\t\t\t[2]5:00 pm\n\n\t\t\t\t\t\t[3]8:00pm\n");
	printf("\n\n\n\n\n\n");	
	for(pp=0;pp<36;pp++){
	printf("____");
	}	
	scanf("%d",&i);
	if(a==1){
	q=i;
	seats(q,x);	
	}
	else if(a==2){
	q=i+3;
	seats(q,x);
	}
	else if (i==0){
	date(a,z);
	}
	else{
	printf("Wrong selection");
	time(a,z);
	}
}
