#include<stdio.h>
void pvr();
void inox();
int main();  
void cinemas(){
	int i;	
	printf("\t\t\t 	CINEMAS\n");
	printf("1.PVR \n");
	printf("2.IONOX\n");
	printf("press 0 for previous menu\n");
		scanf("%d",&i);	
	if(i==1) {
	pvr();
	}
	else if(i==2) {
	inox();
	}
	else if(i==0){
		main();
	}
	else {
	 printf("Plese seelect among the given options");
	}
  }
