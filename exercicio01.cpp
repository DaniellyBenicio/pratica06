#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int P1, P2;
	
	printf("Desconto dado para pessoa que possui idade par\n\n");
	
	
	printf("Digite a primeira idade: ");
	scanf("%d", &P1);
	
	printf("Digite a segunda idade: ");
	scanf("%d", &P2);
	
	if (P1%2==0) {


			
		printf("DESCONTO");
	}
	
	return 0;
}


