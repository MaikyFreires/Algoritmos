
#include<stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
		
	double a, b, media;
	/*
		float - %f
		double - %lf
		int - %d // %i
		char - %c
	*/
	
	printf("Digite a nota A:");
	scanf("%lf", &a);
	printf("digite a nota B:");
	scanf("%lf", &b);
	media=((a*3.5)+(b*7.5))/11;
	printf("a media das notas apresentadas e igual a %.1lf .", media);
	
	return 0;
}
