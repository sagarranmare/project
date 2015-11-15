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
void cmp(int);
int main();
void movies(){
int i,pp;
int j;
for(pp=0;pp<36;pp++){
	printf("____");
	}
	printf("\t\t\t\t\t\tAvailable shows are:\n\n");
	printf("\t\t\t\t1.hfasjhfas\n\n\t\t\t\t2.safasfasf\n\n\t\t\t\t");
	printf("\t\t\t\tpress 0 for previous menu\n");
	printf("\n\n\n\n\n\n");	
	for(pp=0;pp<36;pp++){
	printf("____");
	}	
	scanf(" %d",&j);
	i=j;	
	if(i==1||i==2){
	 cmp(i);	
	}
	else if(i==0){
	main();
}
	else{
	printf("wrong selection try again");
	movies();
	}
}
