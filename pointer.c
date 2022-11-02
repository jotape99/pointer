#include <stdio.h>
//protótipo das funções
void Ler (int *n1, int *n2, int *n3);
void Ordenar (int *menor, int *meio, int *maior);
int Par(int num);

//função principal
int main(void)
{
    int maior, menor, meio;
    int par;
	char op;
	
	do{
		Ler(&menor, &meio, &maior);
		Ordenar(&menor, &meio, &maior);
		par = Par(maior);
	
		if(par)
		{
			printf("%d, %d, %d (par)\n\n",menor,meio,maior);
		}else
		{
			printf("%d, %d, %d (ímpar)\n\n",menor,meio,maior);
		}
		fflush(stdin);
		
		printf("\n Deseja continuar? [S/N] \n");
		scanf("%c", &op);
	}while (op!='N');
	return 0;		
		
	}


//verifica se o maior número é par
int Par(int maior)
    {
		int resultado;
		
		if(maior %2==0){
			resultado=1; 
		}else{
			resultado=0;
		}
		return resultado;
	}
	
	//entrada dos valores 
	void Ler (int*n1, int*n2, int*n3)
{
	printf("Digite o primeiro valor:");
  	scanf("%d", n1);
  	printf("Digite o segundo valor:");
  	scanf("%d", n2);
	printf("Digite o terceiro valor:");
  	scanf("%d", n3);
	
}

//ordena os valores em menor, meio e maior
 void Ordenar(int *menor, int *meio, int *maior) {
    int num1 = *menor;
    int num2 = *meio;
    int num3 = *maior;
	
	if(num1>=num2 && num1>= num3){
		*maior = num1;
		if (num2>=num3){
			*meio = num2;
			*menor = num3;
		}else{
			*meio = num3;
			*menor = num2;
		}
	}
	
	if(num2>=num1 && num2>= num3){
		*maior = num2;
		if (num1>=num3){
			*meio = num1;
			*menor = num3;
		}else{
			*meio = num3;
			*menor = num1;
		}
	}
	
	if(num3>=num1 && num3>= num2){
		*maior = num3;
		if (num1>=num2){
			*meio = num1;
			*menor = num2;
		}else{
			*meio = num2;
			*menor = num1;
		}
	}
	
}
