/*
Q.7 Write a Program to print the below pattern using nested for loop.
            *
        *     *
      *         *
    *             *
  *                 *
*/

#include<stdio.h>

main(){
	
	int i,j;
	int k;
	
	for(i=5;i>=1;i--){
		for(k=i;k<=5;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j%2);
		}
		printf("\n");
	}
}
