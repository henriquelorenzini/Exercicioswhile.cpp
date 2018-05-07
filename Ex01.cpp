#include <stdio.h>	

int main(){
	
	int numero;
	
	do{
		printf("Digite um numero:");
		scanf("%d",&numero);
		
		while(numero%2==0){
			printf("e par!\n");
			break;
		}
		
		while(numero%2==1){
			printf("e impar!\n");
			break;
		}	
	}while(true);
	return 0;
}
