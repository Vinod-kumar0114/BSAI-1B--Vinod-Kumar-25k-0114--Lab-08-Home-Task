#include<stdio.h>
int main(){
	int i,j;
	int white=0;
	int inverted[4][4];
	int image[4][4]= {
		{1, 0, 1, 0},
		{0, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 0, 1, 1}
	};
	
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++) {
			if(image[i][j]==1) {
				white++;
				inverted[i][j]=0;
			} else {
				inverted[i][j]=1;
			}
		}
	}
	printf("Original image  ||  Inverted image\n\n");
	for (i=0; i<4;i++) {
		printf("   ");
		for(j=0;j<4;j++) {
			printf("%d ", image[i][j]);	
		}
		printf("\t\t");
		for(j=0;j<4;j++) {
			printf("%d ", inverted[i][j]);	
		}
		printf("\n");	
	}
	printf("\n\nTotal white pixels in original image are: %d", white);
	
	return 0;
}
