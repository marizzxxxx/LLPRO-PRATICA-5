#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, c1, c2, c3, c4;
	
	printf("programa que leia as variáveis a, b e c e imprima os valores das quatro fórmulas: \n");
	
	printf("O primeiro número é:");
	scanf("%f", &a);
	
	printf("O segundo número é:");
	scanf("%f", &b);
	
	printf("O terceiro número é:");
	scanf("%f", &c);
	
	c1 = (a*b)/c;
	c2 = (a*a)+b+5*c;
	c3 = a*b*c+b+c/3*5-1;
	c4 = ((a*b*c)*(a*b*c)*(a*b*c))/2;
	
	printf("O valor da Fórmula 1 é: %.2f \n", c1);
	printf("O valor da Fórmula 2 é: %.2f \n", c2);
	printf("O valor da Fórmula 3 é: %.2f \n", c3);
	printf("O valor da Fórmula 4 é: %.2f \n", c4);
	
	return 0;
}
