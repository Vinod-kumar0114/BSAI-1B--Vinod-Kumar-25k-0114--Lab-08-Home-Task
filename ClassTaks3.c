#include <stdio.h>

int main() {
	int i,j;
    int rows=5, col=5;
    int studentCount=0, emptyCount=0;

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (i=1; i<=rows; i++) {
        printf("Row %d ", i);
        for (j=1; j<=col; j++) {
            if((i+j)%2==0) {
                printf("x ");
                studentCount++;
            }else{
                printf("o ");
                emptyCount++;
            }
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", studentCount);
    printf("Empty desks: %d\n", emptyCount);
    printf("Total desks: %d\n", rows*col);

    return 0;
}

