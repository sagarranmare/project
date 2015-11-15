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
void cinemas();
void movies();
int main() {
	int i,pp;
	for(pp=0;pp<36;pp++){
	printf("____");
	}
	printf("\n\n\n\t\t\t\tWELCOME TO ONLINE TICKET BOOKING SYSTEM\n\n");
	printf("\t\t\t\t\t\t1.MULTIPLEX\n\n");
	printf("\t\t\t\t\t\t2.Movies\n\n\n\n\n\n");
for(pp=0;pp<36;pp++){
	printf("____");
	}
	scanf("%d",&i);	
	if(i == 1) {
		cinemas();
	}
	
	else if(i==2) {
		 movies();
	}
	else {
		printf("wrong selection, enter correctly");
		main();
	}
	
return 0;	
}
