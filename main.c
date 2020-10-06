#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;
	int i,n;
	
	printf("input a number : ");
	scanf("%i", &n);
	
	for (i=0; i<=n ; i++)
		sum += i; // summation
		
	printf("the summation is %i\n", sum);
	
	return 0;
}
