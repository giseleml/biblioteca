//Atividade MAPA - ALP II

#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 5 

int option; 
int codigo;
char titulo[50];
char autor[50];
char editora[50];

int main(void) {
  printf("** Menu de Opções ** \n Digite 1 para cadastrar um novo livro;\n Digite 2 para exibir os livros cadastrados; \n Digite 0 para sair");
  //system pause
  scanf("%d", &option);
  if (option == 1) {
    printf("** Menu de Cadastro ** \n");
    printf("Informe o título do livro: \n");
    scanf("%s", titulo);
    printf("Informe o nome do(a) autor(a): \n");
    scanf("%s", autor);
    printf("Informe o nome da editora: \n");
    scanf("%s", editora);
    //Gera um número aleatório
    codigo = rand() % 5;
    printf("titulo %s, autor %s, editora %s codigo %d", titulo, autor, editora, codigo);
  } else {
    if (option == 2) {
      printf("** Livros Cadastrados ** \n");
      printf("titulo %s, autor %s, editora %s codigo %d", titulo, autor, editora, codigo);
    } else {
      printf("*Nada*");
    }
  }
  return 0;
}


/* int arr[5];
int i;

int main(void) {
  for (i = 0; i < 5; i++) {
    printf("Enter number %d", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("%d array %d", arr[1], arr);
  return 0;
}
*/