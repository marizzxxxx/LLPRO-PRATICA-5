#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, c1, c2, c3, c4;
	
	printf("programa que leia as vari�veis a, b e c e imprima os valores das quatro f�rmulas: \n");
	
	printf("O primeiro n�mero �:");
	scanf("%f", &a);
	
	printf("O segundo n�mero �:");
	scanf("%f", &b);
	
	printf("O terceiro n�mero �:");
	scanf("%f", &c);
	
	c1 = (a*b)/c;
	c2 = (a*a)+b+5*c;
	c3 = a*b*c+b+c/3*5-1;
	c4 = ((a*b*c)*(a*b*c)*(a*b*c))/2;
	
	printf("O valor da F�rmula 1 �: %.2f \n", c1);
	printf("O valor da F�rmula 2 �: %.2f \n", c2);
	printf("O valor da F�rmula 3 �: %.2f \n", c3);
	printf("O valor da F�rmula 4 �: %.2f \n", c4);
	
	return 0;
}
