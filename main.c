#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){

	int a,b;
	float c;
	
	printf("input a numerator: ");
	scanf("%d",&a);
	printf("input a denominator: ");
	scanf("%d",&b);
	c= (float)a/(float)b;
	
	printf("The result of division is %f\n",c);
	
		return 0;
}
