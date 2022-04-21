#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//----------------- NOVO TIPO DE DADO COM TYPEDEF STRUCT ----------------
/*
typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

struct Pessoa2 {
    int idade;    
    char sexo;
    char nome[100];
};
*/
//_______________________________________________________________________



//------------- COMO CRIAR UMA STRUCT COM DADOS LIDOS DO TECLADO --------------
typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
//_______________________________________________________________________


int main(void) {
    
  //----------------- NOVO TIPO DE DADO COM TYPEDEF STRUCT ----------------
    /*
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa2.idade = 35;
    pessoa2.sexo = 'f';
    strcpy(pessoa2.nome, "Maria Madalena");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);
    */
//_________________________________________________________________________

    

    
//------------- COMO CRIAR UMA STRUCT COM DADOS LIDOS DO TECLADO --------------
    
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("\nNome: %sIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    
//_________________________________________________________________________


    
  return 0;
}
