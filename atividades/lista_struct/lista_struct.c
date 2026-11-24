
#include <stdio.h>

//Questao 1

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p) {
    if (p->x >= v1->x && p->x <= v2->x &&
        p->y >= v1->y && p->y <= v2->y) {
        return 1;
    }
    return 0;
}

//Questao 2

struct vetor {
    float x;
    float y;
    float z;
};

typedef struct vetor Vetor;

float dot(Vetor* v1, Vetor* v2) {
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

//Questao 3 e 4

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;

#define MEDIA_APROVACAO 6.0f

float media_aluno(Aluno* a) {
    return (a->p1 + a->p2 + a->p3) / 3.0f;
}

void imprime_aprovados(int n, Aluno** turmas) {
    int i;
    for (i = 0; i < n; i++) {
        float media = media_aluno(turmas[i]);
        if (media >= MEDIA_APROVACAO) {
            printf("Matricula: %s\n", turmas[i]->matricula);
            printf("Nome: %s\n", turmas[i]->nome);
            printf("Turma: %c\n", turmas[i]->turma);
            printf("Media: %.2f\n", media);
        }
    }
}

float media_turma(int n, Aluno** turmas, char turma) {
    int i;
    int total = 0;
    float soma = 0.0f;

    for (i = 0; i < n; i++) {
        if (turmas[i]->turma == turma) {
            soma += media_aluno(turmas[i]);
            total++;
        }
    }

    if (total == 0) {
        return 0.0f;
    }

    return soma / total;
}

// Testando

int main(void) {

    Ponto v1 = {1.0f, 1.0f};
    Ponto v2 = {5.0f, 4.0f};
    Ponto p_dentro = {3.0f, 2.0f};
    Ponto p_fora = {6.0f, 2.0f};

    printf("Questao 1:\n");
    printf("Ponto (3, 2) dentro? %d\n", dentroRet(&v1, &v2, &p_dentro));
    printf("Ponto (6, 2) dentro? %d\n", dentroRet(&v1, &v2, &p_fora));


    Vetor a = {1.0f, 2.0f, 3.0f};
    Vetor b = {4.0f, 5.0f, 6.0f};
    printf("\nQuestao 2:\n");
    printf("Produto escalar: %.2f\n", dot(&a, &b));


    Aluno* alunos[4];
    Aluno al1 = {"Paulo Victor", "12345", 'A', 7.0f, 8.0f, 6.0f};
    Aluno al2 = {"Luis Eduardo", "12346", 'A', 5.0f, 5.0f, 5.0f};
    Aluno al3 = {"Leandro",  "12347", 'B', 9.0f, 7.0f, 8.0f};
    Aluno al4 = {"José Felipe",  "12348", 'B', 6.0f, 6.0f, 6.0f};

    alunos[0] = &al1;
    alunos[1] = &al2;
    alunos[2] = &al3;
    alunos[3] = &al4;

    printf("\nQuestao 3 - Alunos aprovados:\n");
    imprime_aprovados(4, alunos);

    printf("\nQuestao 4:\n");
    printf("Media turma A: %.2f\n", media_turma(4, alunos, 'A'));
    printf("Media turma B: %.2f\n", media_turma(4, alunos, 'B'));

    return 0;
}
