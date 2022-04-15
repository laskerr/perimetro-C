#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int A, B, P;

	printf("Digite o valor da área --> ", A);
	scanf("%i", &A);

	printf("Digite o valor da base --> ", B);
	scanf("%i", &B);

	P = 2*A + 2*B;
	printf("O valor do perímetro é --> %i\n", P);


	return 0;
}
