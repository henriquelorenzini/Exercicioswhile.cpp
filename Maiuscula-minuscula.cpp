#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	
	char palavra[20];
	int inicio=0;
	int tamanho_palavra;
	
	fgets(palavra,sizeof(palavra),stdin);
	strtok(palavra,"\n");
	strlwr(palavra);
	tamanho_palavra = strlen(palavra);
	
	while (inicio <= tamanho_palavra){
	while(inicio%2==0){
			
			palavra[inicio]=toupper(palavra[inicio]);
			
			printf("%c",palavra[inicio]);
		
			break;
		}
	while(inicio%2==1){
		
			printf("%c",palavra[inicio]);
		
			break;
		}
		
		inicio++;
		
	}
	return 0;
}
