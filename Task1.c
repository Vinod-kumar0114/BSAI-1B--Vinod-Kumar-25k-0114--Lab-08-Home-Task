#include <stdio.h>
int main(){
	int i, j;
	int sum;
	int classes[3][4]= {
		{85,92,78,90},
		{88,76,95,84},
		{90,85,88,92} };
	
	for (i=0; i<3;i++) {
		printf("The scores for class %d are: ", i+1);	
		sum=0;
		for(j=0;j<4;j++) {
			printf("%d ", classes[i][j]);
			sum+=classes[i][j];
		}
		float avg=sum/4.0;
		printf("\nThe average of class %d is: %.2f\n", i+1, avg);
	}
	
	return 0;
}
