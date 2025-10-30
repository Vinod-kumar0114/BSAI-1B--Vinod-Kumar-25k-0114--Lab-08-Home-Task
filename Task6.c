#include <stdio.h>
int main(){
	int i,j,k, nsp=5;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(k=1; k<=i;k++){
			printf("*");
		}
		printf("\t|");
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(k=1; k<=i;k++){
			printf("%d", k);
		}
		printf("\t|");
		for(j=1;j<=nsp; j++){
			printf(" ");
		}
		int a=1;
		for(k=0; k<i ;k++){
			int x=a+64;
			char ch=(char)x;
			printf("%c",ch);
			a++;
		}
		printf("\n");
		nsp--;
	}
	return 0;
}
