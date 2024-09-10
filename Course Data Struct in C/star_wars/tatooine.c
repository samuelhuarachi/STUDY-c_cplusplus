#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _lightsaber {
    char name[100];
    char color[100];
} Lightsaber;

typedef struct _jedi {
    char name[100];
    unsigned int force;
    float age;
    Lightsaber *lightsaber;
} Jedi;

void lukeWalking(void) {
    printf("luke walking ...");
    puts("");
}

void showLukeValue(int lukeValue) { printf("O valor de luke é[2]: %d\n", lukeValue); }

Lightsaber *create_lightsaber(const char *name, const char *color) {
    Lightsaber *lightsaber;

    lightsaber = (Lightsaber *)calloc(1, sizeof(Lightsaber));
    strcpy(lightsaber->name, name);
    strcpy(lightsaber->color, color);
    return (lightsaber);
}

Lightsaber *copy_lightsaber(const Lightsaber *lightsaber) {
    return (create_lightsaber(lightsaber->name, lightsaber->color));
}

void destroy_lightsaber(Lightsaber **lightsaber_ref) {
    Lightsaber *lightsaber;

    lightsaber = *lightsaber_ref;
    free(lightsaber);
    *lightsaber_ref = NULL;
}

Jedi *create_jedi(const char *name, unsigned int force, float age, const Lightsaber *lightsaber) {
    Jedi *jedi;

    jedi = (Jedi *)calloc(1, sizeof(Jedi));
    strcpy(jedi->name, name);
    jedi->force = force;
    jedi->age = age;
    jedi->lightsaber = copy_lightsaber(lightsaber);
    return (jedi);
}

void destroy_jedi(Jedi **jedi_ref) {
    Jedi *jedi;

    jedi = *jedi_ref;
    destroy_lightsaber(&jedi->lightsaber);
    free(jedi);
    *jedi_ref = NULL;
}

/**
 * Reference params
 */
void upLukeForce(int *z) { *z = 4; }

// Importante ficar revisando essa logica
void destroy_int_vectors(int **v) {
    puts("---- v -----");
    printf("Regiao de memoria onde está v: %p\n", &v);
    printf("Para onde v está apontando: %p\n", v);
    printf("Conteudo de V: %p\n", *v);
    printf("Conteudo do conteudo de V: %d\n", **v);

    int *aux = *v;
    puts("---- aux -----");
    printf("Conteudo de aux: %p\n", aux);

    free(*v);
    *v = NULL;
}

int main(void) {
    // Aluno ted = {.nome = "dfas", .idade = 10}; outra maneira de declarar os
    // valores da struct

    printf("sizeof(Jedi) = %lu bytes \n", sizeof(Jedi));

    Lightsaber *lightsaberBlue = create_lightsaber("Lightsaber Blue", "blue");
    Jedi *obinwan = create_jedi("Obinwan Kenobi", 600, 61, lightsaberBlue);
    printf("%s", obinwan->name);
    puts("");

    printf("Qual o sabre de luz de %s? %s\n", obinwan->name, obinwan->lightsaber->name);
    puts("");
    destroy_lightsaber(&lightsaberBlue);
    destroy_jedi(&obinwan);
    printf("Obinwan é igual NULL? %d\n", obinwan == NULL);

    Lightsaber **vet = (Lightsaber **)calloc(3, sizeof(Lightsaber *));
    vet[0] = create_lightsaber("light saber red", "red");
    vet[1] = create_lightsaber("light saber green", "green");
    vet[2] = create_lightsaber("light saber dark", "dark");

    for (int i = 0; i < 3; i++) {
        Lightsaber *lightsaber = vet[i];
        printf("Cor do lightsaber: %s", lightsaber->color);
        puts("");
    }

    // destroying vet lightsaber
    for (int i = 0; i < 3; i++) {
        destroy_lightsaber(&vet[i]);
    }
    free(vet);
    vet = NULL;

    // Learning more about pointers
    int *ship1;
    ship1 = (int *)calloc(10, sizeof(int));
    printf("O ship1 está apontando para: %p", ship1);
    puts("");

    for (int i = 0; i < 10; i++) {
        ship1[i] = i;
        int value = ship1[i];
        printf("O valor é: %d", value);
        puts("");
    }

    printf("Endereco de memoria de ship1: %p\n", &ship1);
    printf("Apontando para: %p\n", ship1);

    destroy_int_vectors(&ship1);
    printf("O ship1 está apontando para: %p", ship1);
    puts("");

    return (0);
}