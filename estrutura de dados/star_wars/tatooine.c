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

void lukeWalking() {
  printf("luke walking ...");
  puts("");
}

void showLukeValue(int lukeValue) {
  printf("O valor de luke é[2]: %d\n", lukeValue);
}

Lightsaber *create_lightsaber(const char *name, const char *color) {
  Lightsaber *lightsaber = (Lightsaber *)calloc(1, sizeof(Lightsaber));
  strcpy(lightsaber->name, name);
  strcpy(lightsaber->color, color);

  return lightsaber;
}

Lightsaber *copy_lightsaber(const Lightsaber *lightsaber) {
  return create_lightsaber(lightsaber->name, lightsaber->color);
}

void destroy_lightsaber(Lightsaber **lightsaber_ref) {
  Lightsaber *lightsaber = *lightsaber_ref;
  free(lightsaber);
  *lightsaber_ref = NULL;
}

Jedi *create_jedi(const char *name, unsigned int force, float age,
                  const Lightsaber *lightsaber) {
  Jedi *jedi = (Jedi *)calloc(1, sizeof(Jedi));
  strcpy(jedi->name, name);
  jedi->force = force;
  jedi->age = age;
  jedi->lightsaber = copy_lightsaber(lightsaber);

  return jedi;
}

void destroy_jedi(Jedi **jedi_ref) {
  Jedi *jedi = *jedi_ref;
  destroy_lightsaber(&jedi->lightsaber);
  free(jedi);
  *jedi_ref = NULL;
}

/**
 * Reference params
 */
void upLukeForce(int *z) { *z = 4; }

int main() {
  // Aluno ted = {.nome = "dfas", .idade = 10}; outra maneira de declarar os
  // valores da struct

  printf("sizeof(Jedi) = %lu bytes \n", sizeof(Jedi));

  Lightsaber *lightsaberBlue = create_lightsaber("Lightsaber Blue", "blue");
  Jedi *obinwan = create_jedi("Obinwan Kenobi", 600, 61, lightsaberBlue);
  printf("%s", obinwan->name);
  puts("");

  printf("Qual o sabre de luz de %s? %s\n", obinwan->name,
         obinwan->lightsaber->name);
  puts("");
  destroy_lightsaber(&lightsaberBlue);
  destroy_jedi(&obinwan);
  printf("Obinwan é igual NULL? %d\n", obinwan == NULL);
  return 0;
}