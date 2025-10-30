#include <stdio.h>
int main() {
	
	int rows=4, col=4;
	int i,j;
    int temp[4][4] = {
        {12,15,10,9},
        {11,8,12,13},
        {14,13,9,7},
        {16,11,10,8}
    };
    
    printf("Cold spots found:\n");
    for(i=0;i<rows; i++){
    	for(j=0; j<col; j++){
    		if(i>0 && j>0 && i<rows && j<col){
    			if((temp[i][j] < temp[i+1][j]) && (temp[i][j] < temp[i-1][j]) && (temp[i][j] < temp[i][j+1]) && (temp[i][j] < temp[i][j-1])){
					printf(" - At Position (%d,%d) with temperature %d%cC\n", i+1,j+1,temp[i][j],248);
				}
			}
		}
	}
    return 0;
}



