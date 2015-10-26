#include<stdio.h>
void cinemas();
void movies();
int main() {
	int i;
	printf("\t\tWELCOME TO ONLINE TICKET BOOKING SYSTEM\n");
	printf("1.CINEMAS\n");
	printf("2.Movies\n");
	scanf("%d",&i);	
	if(i == 1) {
		cinemas();
	}
	
	else if(i==2) {
		 movies();
	}
	else {
		return;
	}
	
return 0;	
}
