//bibliotecas
#include<stdio.h>
#include <locale.h>

//c�digo de verdade
int main() {
	setlocale(LC_ALL, "Portuguese");
		
	int horas, minutos, segundos;
	/*
		float - %f
		double - %lf
		int - %d // %i
		char - %c
	*/
	
	printf("Digite o n�mero de horas: ");
	scanf("%d", &horas);
	
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("Existem %d minutos e %d segundos", minutos, segundos);
	
	return 0;
}
