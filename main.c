#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("input a integer : ");
	scanf("%i",&a);
	
	if(a<0)
		a= a*(-1);

	printf("절대값은 %i \n", a);
	
	return 0;
}
