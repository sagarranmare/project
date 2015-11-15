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
void lst(char,int,int);
void select(char a,int b,int z ){
int q,s;
char t,st[16];
int i,j,k,c=65;

printf("\n\tselect among these\n\n\n");
printf("\t\t\t\t _______________"); 
printf("\n\t\tEXIT\t\t|SCREEN THIS WAY|\t\tEXIT\n\n\t");
printf("  1  2  3  4    5  6  7  8  9  10 11 12 13 14 15 16 17    18 19 20");  
	
printf("\n\t%c",c);
for(i=0;i<4;i++){
	for(j=0;j<20;j++){
		printf("[*]");
	if(j==3)
	printf("\t");
	if(j==16)
	printf("\t  ");
	}
	if(i!=3)
	printf("\n\t%c",++c);
	 	}
printf("\n\n\t%c",++c);
for(k=0;k<5;k++) {
 for(j=0;j<20;j++){
		printf("[*]");
	if(j==3)
	printf("\t");
	if(j==16)
	printf("\t  ");
}
	if(k!=4)
	printf("\n\t%c",++c);
	}
printf("\n\n\t%c",++c);
for(k=0;k<7;k++){
for(j=0;j<20;j++){
		printf("[*]");
	if(j==3)
	printf("\t");
	if(j==16)
	printf("\t  ");
	
	}
	if(k!=6)
	printf("\n\t%c",++c);
	}
printf("\n");
lst(a,b,z );	
// arngmnt();
//sa(); 
}
