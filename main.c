#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for (i=0; i<SIZE; i++){
	
		grade [i] = rand()%101;
		score [i] = grade[i];
}
	for (i=0; i<SIZE; i++)
		printf("score[%i]=%d(%i)\n", i, score[i], grade[i]);	
	return 0;
}
