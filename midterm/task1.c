#include <stdio.h>
#include <conio.h>
void main (){
	int n;
    printf("enter your size");
    fflush(stdout);
    scanf("%d", &n);
	int chart[n];
	int chart2 [n];
	int i, j;
	for (i=0; i<n;i++){
		chart[i] = i+1;
		chart2[i] = i+1;
	}
	for (i=0; i<n;i++){
		for (j=0; j<n;j++){
			printf("%d    ",chart2[j]* chart[i]);
	}
		printf("\n");
	}
}
