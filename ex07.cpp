//Nome completo:Maiky Silverio Freires    Matr�cula: UC20104316       Curso: Ci�ncias da Computa��o
/* Um cinema de Bras�lia est� interessado em descobrir o perfil das pessoas que frequentam
suas sess�es de filmes e para isso, necessita realizar algumas verifica��es nas informa��es prestadas. Devem
ser solicitados a quantidade de sess�es que ser�o realizadas, o nome do filme, a quantidade de pessoas que
assistiram o filme, assim como o sexo e a idade. No entanto, para cada um deles, h� uma valida��o que deve ser
feita:
1. Solicite a quantidade de sess�es, e fa�a a valida��o, aceitando exatamente 2 (duas) sess�es.
2. Solicite o nome do filme, e fa�a a valida��o, n�o aceitando o nome �vazio�.
3. Solicite a quantidade de pessoas que assistiram ao filme, n�o podendo aceitar valor inferior a 10 (dez).
4. Para cada pessoa que assistiu ao filme dever� ser solicitado e validado o sexo (M - masculino, F -
Feminino) e a idade (de 3 a 100 anos)
*/

#include<stdio.h>//Biblioteca Printf/Scanf
#include<math.h>//Biblioteca Matem�tica
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
	
	printf ("Quantas sess�es\n:");
	scanf ("%d", &sessoes);
	
	

	return 0;
}
