#include<stdio.h>
void select();
void arngmnt(){
int i,a,j,k,c=65;

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
	printf("press 0 for previous menu\n");
	scanf("%d",&a);
	if(a==0){
	seats();
}
	else{	
	select();
	}
}

