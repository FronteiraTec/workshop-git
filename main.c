#include <stdio.h>

void divisao(int a, int b) {
	float r = (float)a / b;
	printf("O resultado da divisao: %f\n", r);
}

void soma(int a, int b) {
	int r = a + b;
	printf("O resultado da soma: %d\n", r);
}

void subtracao(int a, int b) {
	int r = a - b;
	printf("O resultado da subtracao: %d\n", r);
}

void multiplicacao(int a, int b) {
	int r = a * b;
	printf("O resultado da multiplicacao: %d\n", r);
}

int main() {
	int op, a, b;
	
	printf("**************************************************\n");
	printf("********* Calculadora super ultra power **********\n");
	printf("**************************************************\n");
	
	printf("Digite operacao (0=soma, 1=sub, 2=mult, 3=div)\n");
	scanf("%d", &op);
	
	printf("Digite primeiro operando:\n");
	scanf("%d", &a);
	
	printf("Digite segundo operando:\n");
	scanf("%d", &b);
	
	switch(op) {
		case 0:
			soma(a, b);
			break;
			
		case 1:
			subtracao(a, b);
			break;
			
		case 2:
			multiplicacao(a, b);
			break;
			
		case 3:
			divisao(a, b);
			break;
	}
	return 0;
}