//Nome completo:Maiky Silverio Freires    Matrícula: UC20104316       Curso: Ciências da Computação
/* Um cinema de Brasília está interessado em descobrir o perfil das pessoas que frequentam
suas sessões de filmes e para isso, necessita realizar algumas verificações nas informações prestadas. Devem
ser solicitados a quantidade de sessões que serão realizadas, o nome do filme, a quantidade de pessoas que
assistiram o filme, assim como o sexo e a idade. No entanto, para cada um deles, há uma validação que deve ser
feita:
1. Solicite a quantidade de sessões, e faça a validação, aceitando exatamente 2 (duas) sessões.
2. Solicite o nome do filme, e faça a validação, não aceitando o nome “vazio”.
3. Solicite a quantidade de pessoas que assistiram ao filme, não podendo aceitar valor inferior a 10 (dez).
4. Para cada pessoa que assistiu ao filme deverá ser solicitado e validado o sexo (M - masculino, F -
Feminino) e a idade (de 3 a 100 anos)
*/

#include<stdio.h>//Biblioteca Printf/Scanf
#include<math.h>//Biblioteca Matemática
#include <locale.h>
#include<ctype.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	char filme[30]; 
	char sexo;
	int sessoes, quantidade, idade;

	/*
		float - %f
		double - %lf
		int - %d // %i
		char - %c
	*/
	
	printf("Qual o nome do filme:\n ");
	fgets(filme, 30, stdin);
	
	printf("sexo(F - feminino ou M - Masculino):\n");
	scanf("%s", &sexo);
	
	printf ("Quantas sessões\n:");
	scanf ("%d", &sessoes);
	
	

	return 0;
}
