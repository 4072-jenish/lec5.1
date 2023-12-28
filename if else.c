#include<stdio.h>
#include<conio.h>

void main(){
   int n,a;
   clrscr();
   
   printf("Enter two Number");
   scanf("%d%d",&n,&a);
   
   if(n>a){
                          printf("%d is minimum",a); 
   }else{
                           printf("%d is minimum",n);
   }
   
   
   getch();
   }