/*
Q.9 Write a Program to print the below pattern using nested for loop.

A
B 1 
C 2 D
E 3 F 4
G 5 H 6 I
*/

#include<stdio.h>

main(){
	
	int i,j,k=2,c=1;
	char r='A';
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			
			if(i%2==0){
				if(j%2==0){
					printf("%d",c++);
				}else{
					printf("%c",r++);
				}
			}else if(j%2==0){
					printf("%d",c++);
				}else{
					printf("%C",r++);
				}
			
		}
		printf("\n");
	}
}
