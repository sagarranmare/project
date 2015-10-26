#include<stdio.h>
void lst(char,int,char,int);
void select(char a,int b){
int i,s;
char t;
printf("SELECT THE ROW AND SEAT NUMBER\n");
scanf("%d%c",&s,&t);
lst(a,b,t,s);
printf("do want to continue:\n1.YES\n2.NO");
scanf("%d",&i);
if(i==1)
select(a,b);
}
