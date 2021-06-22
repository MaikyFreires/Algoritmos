#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int raio;
	double areaCirculo;
	
	printf("Digite o raio: ");
	scanf("%d", &raio);
	
	areaCirculo = 3.14 * pow(raio, 2);
	
	printf("O circulo tem %.2lfcm de área", areaCirculo);
	
	return 0;
}
