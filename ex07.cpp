
#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	char funcionario[50], sexo[1];
	int matricula, horas;
	double recebido,salario;
	/*
		float - %f
		double - %lf
		int - %d // %i
		char - %c
	*/
	
	printf("Digite o nome do funcionário:\n ");
	scanf("%s", &funcionario);
	printf("Digite o sexo(F ou M):\n");
	scanf("%s", &sexo);
	printf("Digite a matricula:\n");
	scanf("%d", &matricula);
	printf("Digite a horas trabalhas:\n");
	scanf("%d",&horas);
	printf("Digite o valor recebido:\n");
	scanf("%lf",&recebido);
	printf("Digite o salário:\n");
	scanf("%.2lf", &salario);
	salario=horas*recebido;
	printf("\nNome do funcionário:%s \nSexo:%s", funcionario,sexo);
	printf("\nMatricula:%d", matricula);
	printf("\nHoras:%d \nRecebido:%.2lf", horas,recebido);
	printf("\nSalário:.2%lf", salario);
	
	return 0;
}
