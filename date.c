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
void  time(int,char);
void pvr();
void inox();
void cmp();
void date(int x,char y){
	int i,s,pp;
	char z=y;
	for(pp=0;pp<36;pp++){
	printf("____");
	}
	printf("\n\n\n\t\t\t\tPlease select date\n \n");
	printf("\t\t\t\t\t1.28-11-15\n\n");
	printf("\t\t\t\t\t2.29-11-15\n\n");
	printf("\t\t\t\t\t\tpress 0 for previous menu\n");
	printf("\n\n\n\n\n\n");
	for(pp=0;pp<36;pp++){
	printf("____");
	}
	scanf("%d",&i);
	if(i==1){
	s=1;
	time(s,z);
	}
	else if(i==2){
	s=2;
	time(s,z);
	}
	else if(i==0){
		if(x==1)
		pvr();
		else if(x==2)
		inox();
		else if(x==3)
		cmp();
	}
	else{	
	printf("wrong selection");
	date(x,y);
}	
}
