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
/*
typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
*/
//_______________________________________________________________________




//----------------------------- STRUCT DE STRUCT ---------------------------
/*
typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct {
    DataNas DataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;
*/
//_______________________________________________________________________



//------------------ SCTRUCT COMO PARAMETRO PARA PROCEDIMENTO ------------------
/*
typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct {
    DataNas DataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void ImprimirPessoa(Pessoa p){
    
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nascimento: %d/%d/%d\n", p.DataNas.dia, p.DataNas.mes, p.DataNas.ano);
}
*/
//______________________________________________________________________________



//------------------------- FUNÇÃO QUE RETORNA UMA STRUCT -----------------------
/*
typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct {
    DataNas DataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void ImprimirPessoa(Pessoa p){
    
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nascimento: %d/%d/%d\n", p.DataNas.dia, p.DataNas.mes, p.DataNas.ano);
}

Pessoa LerPessoa(){
    Pessoa pessoa;
    
    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.DataNas.dia, &pessoa.DataNas.mes, &pessoa.DataNas.ano);
    return pessoa;
}
*/
//______________________________________________________________________________



// ------------------------------- VETOR DE STRUCT ------------------------------
typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct {
    DataNas DataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

void ImprimirPessoa(Pessoa p){
    
    printf("\n\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nascimento: %d/%d/%d\n", p.DataNas.dia, p.DataNas.mes, p.DataNas.ano);
}

Pessoa LerPessoa(){
    Pessoa pessoa;

    printf("\nDigite seu nome: ");
    fgets( pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.DataNas.dia, &pessoa.DataNas.mes, &pessoa.DataNas.ano);
    setbuf(stdin, NULL); //Limpar buffer do teclado
    
    return pessoa;
}

//_______________________________________________________________________________

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
    /*
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);

    printf("\nNome: %sIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    */
//_________________________________________________________________________



    
//---------------------------- STRUCT DE STRUCT -----------------------------
    /*
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.DataNas.dia, &pessoa.DataNas.mes, &pessoa.DataNas.ano);

    printf("\nNome: %sIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
    printf("Data de nascimento: %d/0%d/%d\n", pessoa.DataNas.dia, pessoa.DataNas.mes, 
           pessoa.DataNas.ano);
    */
//__________________________________________________________________________


    
    
//------------------ STRUCT COMO PARAMETRO PARA PROCEDIMENTO ------------------
    /*
    Pessoa pessoa;
    
    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digie f ou m para o sexo: ");
    scanf(" %c", &pessoa.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa.DataNas.dia, &pessoa.DataNas.mes, &pessoa.DataNas.ano);

    ImprimirPessoa(pessoa); 
    */
//______________________________________________________________________________   




//------------------------- FUNÇÃO QUE RETORNA UMA STRUCT -----------------------
    /*
    Pessoa pessoa;

    pessoa = LerPessoa();
    ImprimirPessoa(pessoa);
    */
//______________________________________________________________________________ 



// ------------------------------- VETOR DE STRUCT ------------------------------
    int i;
    Pessoa pessoas[3];

    for(i = 0; i < 3; i++){
        pessoas[i] = LerPessoa();
    }
    for(i = 0; i < 3; i++){
        ImprimirPessoa(pessoas[i]);
    }

//_______________________________________________________________________________
    
  return 0;
}
