#include<stdio.h>
int main() {
	int metros, rolos, avulsos;
	printf("digitem quantidade de fios em metros a serem utilizados:\n");
	scanf("%d" ,&metros);
	rolos=metros/50;
	avulsos=metros%50;
    printf("e necessario adquirir %d rolos e %d metros avulsos", rolos, avulsos);	
	return 0;
}
