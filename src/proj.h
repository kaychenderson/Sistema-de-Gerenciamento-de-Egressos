#ifndef PROJ_H
#define PROJ_H

#define MAX_STR 100

typedef struct Egresso {
    char matricula[20];
    char nome[MAX_STR];
    char curso[MAX_STR];
    char anoConclusao[5];
    char statusProfissional[MAX_STR];
    char localDeTrabalho[MAX_STR];
    char email[MAX_STR];
    struct Egresso *lista;  // Ponteiro para o próximo egresso
} Egresso;

// Funções de Validação
int validarNumeros(const char *str);
int validarLetras(const char *str);
int validarEmail(const char *email);
int matriculaUnica(Egresso *lista, char *matricula);

//Funções Principais
void cadastrarEgresso(Egresso **lista);
void listarEgressos(Egresso *lista);
void buscarEgresso(Egresso *lista);
void excluirEgresso(Egresso **lista);
void editarEgresso(Egresso *lista);
void consultarPorStatus(Egresso *lista);
void consultarPorAnoConclusao(Egresso *lista);
void carregarDados(Egresso **lista);
void salvarDados(Egresso *lista);
void ordenarEgressosPorNome(Egresso **lista);
void liberaLista(Egresso *lista);

#endif // PROJ_H