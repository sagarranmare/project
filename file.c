#include<stdio.h>
#include <stdlib.h>
#include "list.h"
void  lst(char a,int b,char t,int s) {
int j=b,z=0;
list la,lb,lc,ld,le,lf;
char x=a;
init(&la);
if(x==a){
	if(j==1){init(&la);
		if(z=0){ 
			add(&la,t,s);
		}
		else{
			chk(&la,t,s);
		}
	}
	if(j==2){init(&lb);
		if(z=0){
			add(&lb,t,s);
		}
		else{
			 chk(&lb,t,s);
		}
	}
	if(j==3){init(&lc);
		if(z=0){
			add(&lc,t,s);
		}
		else{
			 chk(&lc,t,s);
		}
	}
	if(j==4){init(&ld);
		if(z=0){
			 add(&ld,t,s);
		}
		else{
			 chk(&ld,t,s);
		}
	}
	if(j==5){init(&le);
		if(z=0){
			 add(&le,t,s);
		}
		else{
			 chk(&le,t,s);
		}
	}
	if(j==6){init(&lf);
		if(z=0){
		 	add(&lf,t,s);
		}	
		else{
			 chk(&lf,t,s);
		}
	}
}
}
