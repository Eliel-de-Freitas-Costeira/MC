#include <stdio.h>
#include <string.h>
int main(void){
	char nome[30];
	char texto[500], texto1[500];
	int i, opc;
	void copiar(FILE *CASE4A, FILE *CASE4B);
	do{
		printf("---------------------\n");
		printf("1 - Criar arquivo\n");
		printf("2 - Reescrever conteudo do arquivo\n");
		printf("3 - Exibir conteudo do arquivo\n");
		printf("4 - Copiar arquivo em outro\n");
		printf("5 - Sair\n");
		printf("Escolha: ");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				system("cls"); //limpa tela
				printf("CRIAR ARQUIVO\n\n\n");
				printf("Digite o nome do arquivo a ser criado: ");
				scanf("%s", nome);
				strcat(nome,".txt"); //acrescenta ".txt" em nome
				FILE *CASE1 = fopen(nome, "w"); //abre o arquivo pra escrita no ponteiro "CASE1"
				printf("Digite o texto a ser gravado no arquivo: ");
				scanf("%s", texto);
				fprintf(CASE1,texto);//escreve no arquivo CASE1 o "texto"
				fclose(CASE1); //fecha o arquivo
				printf("Digite qualquer numero para continuar: ");
  				scanf("%s", &i);
  				system("cls");
  				break;
  			case 2:
  				system("cls");
  				printf("REESCREVENDO CONTEUDO DO ARQUIVO\n");
  				printf("Digite o nome do arquivo a ser editado: ");
				scanf("%s", nome);
				strcat(nome,".txt");
				FILE *CASE2 = fopen(nome, "w");
				printf("Digite o texto a ser gravado no arquivo: ");
				scanf("%s", texto);
				fprintf(CASE2,texto); //substitui o conteudo do arquivo pelo "texto"
				fclose(CASE2);
				printf("Digite qualquer numero para continuar: ");
  				scanf("%s", &i);
  				system("cls");
  				break;
  			case 3:
  				system("cls");
  				printf("EXIBIR CONTEUDO DO ARQUIVO\n");
  				printf("Digite o nome do arquivo: ");
  				scanf("%s", nome);
  				strcat(nome, ".txt");
  				FILE *CASE3 = fopen(nome, "r"); //abre o arquivo para leitura
  				while (fscanf (CASE3,"%s", texto) != EOF){ //le conteudo TODO o do arquivo
       				printf ("\n %s \n", texto); // mostra o conteudo do arquivo em tela
				}
				fclose(CASE3);
				printf("Digite qualquer numero para continuar: ");
  				scanf("%s", &i);
  				system("cls");
  				break;
  			case 4:
  				system("cls");
  				printf("COPIAR ARQUIVO EM OUTRO\n");
  				printf("Digite o nome do arquivo: ");
  				scanf("%s", nome);
  				strcat(nome,".txt");
  				FILE *CASE4A = fopen(nome, "r");
  				if (CASE4A == NULL){
  					printf("Nao foi possível abrir o arquivo");
				}
				printf("Digite o nome do novo arquivo: ");
				scanf("%s", nome);
				strcat(nome, ".txt");
				FILE *CASE4B = fopen(nome, "w");
				copiar(CASE4A,CASE4B);
				fclose(CASE4A);
				fclose(CASE4B);
				printf("Digite qualquer numero para continuar: ");
  				scanf("%s", &i);
  				system("cls");
  				break;
		}
		
	}while(opc != 5);
	
}
void copiar(FILE *CASE4A, FILE *CASE4B){
	char var[500];
	while(fgets(var, 500, CASE4A) != NULL){
		fputs(var,CASE4B);
	}
}
