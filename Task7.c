#include <stdio.h>
int main(){
	int i,j,k, nsp=4;
	for(i=1; i<=5; i++){
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(k=1; k<=((2*i)-1);k++){
			printf("*");
		}
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		printf("\t | \t");
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		for(k=1; k<=((2*i)-1);k++){
			printf("%d", k);
		}
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		printf("\t | \t");
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		int a=1;
		for(k=0; k<((2*i)-1);k++){
			int x=a+64;
			char ch=(char)x;
			printf("%c",ch);
			a++;
		}
		for(j=1; j<=nsp; j++){
			printf(" ");
		}
		printf("\n");
		nsp--;
	}
	return 0;
}
