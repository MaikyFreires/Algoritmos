
#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	int a,b, resto, quociente;
	printf(" digite o primeiro numero:");
	scanf("%d", &a);
	printf("digite o segundo numero:");
	scanf("%d", &b);
	resto = a/b;
	quociente = a/b;
	printf ("o resto da divisao %d por %d e %d.\n" a,b,resto);
	printf ("O quociente da divisao de %d por %d e %d.\n",a,b,quociente);
	

	return 0;
}
