#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	char c;
	num==0;
	
	printf("input a string : ");
	
	while((c= getchar()) != '\n') // getchar 가 scanf역할을 함. c가 \n이랑 같은가? 
	{
		if(c>='0' && c<='9')
		{
			num++; 
		}
		
	}
	
	printf("the number of digits is %i\n" , num);
	
	return 0;
}
