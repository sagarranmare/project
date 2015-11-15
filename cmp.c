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
void date(int,char);
void cmp(int x){
int i,a=3,pp;
char y;
for(pp=0;pp<36;pp++){
	printf("____");
	}
printf("\n\n\n\t\t\t\tselect talkies\n\n");
printf("\t\t\t\t\t\t1.pvr\n\n\t\t\t\t\t\t2.inox\n\n");
printf("\t\t\t\t\t\tpress 0 for previous menu\n");
printf("\n\n\n\n\n\n");
for(pp=0;pp<36;pp++){
	printf("____");
	}
scanf("%d",&i);
if(i==0){
movies();
}
else  if(i==1){
		if(x==1){
			y='a';
			//printf("char is %c ",y);
		 
		}
		else if(x==2){
			y='b';
		}
date(a,y);
	}
else if(i==2){ 
		if(x==1){
			y=='c';
		}
		else if(x==2){
			y='d';
		}
date(a,y);
	}
else{
printf("wrong selection\n");
cmp(x);}
}
