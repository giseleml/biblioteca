//Atividade MAPA - ALP II
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define maximo 5

int option; 
int i;

typedef struct {
	int codigo;
	char titulo[50];
	char autor[50];
	char editora[50];	
} cadastro;

int main(void) {
  cadastro livro[maximo];
  setlocale(LC_ALL, "Portuguese");
  
  do {
   printf("** Menu de Opções ** \n Digite 1 para cadastrar um novo livro;\n Digite 2 para exibir os livros cadastrados; \n Digite 0 para sair \n \n");
   scanf("%d", &option);
   system("cls");
   
	  switch(option) {
	  	case 1: 
		  	for (i = 0; i < maximo; i++) {
			     printf("** Menu de Cadastro ** \n \n");
			     printf("Informe o título do livro %d: \n", i + 1);
			     scanf(" %[^\n]", &livro[i].titulo);
			     fflush(stdin);
			     printf("Informe o nome do(a) autor(a): \n");
			     scanf(" %[^\n]", &livro[i].autor);
			     fflush(stdin);
			     printf("Informe o nome da editora: \n");
			     scanf(" %[^\n]", &livro[i].editora);
			     fflush(stdin);
			     livro[i].codigo = i + 1;
			}
			system("cls");
		    	break;
		case 2:
			printf("** Livros Cadastrados ** \n");
		    for (i = 0; i < maximo; i++) {
		    	printf("Código do Livro: %d, \n Título: %s, \n Autor: %s, \n Editora: %s \n \n", livro[i].codigo, livro[i].titulo, livro[i].autor, livro[i].editora);
			}
		    	break;
		default: 
			printf("** Opcão Inválida *");
			break;
	  }
	} while (option != 0);
}

