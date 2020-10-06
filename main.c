#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=131;
	int trial;
	int n;
	
	
	do
	{
		printf("guess a number : ");
		scanf("%i", &n);
		if(n<answer)
			printf("LOW! \n");
		else if(n>answer)
			printf("HIGH! \n");
		trial++;
	} while (n != answer);
	
	printf("congratulations!, number of trial : %i\n", trial);
	
	
	
	
	
	return 0;
}
