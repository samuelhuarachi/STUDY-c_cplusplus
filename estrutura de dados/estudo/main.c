
#include <stdio.h>

int main() {
  int vet[5] = {0, 1, 2, 3, 4};

  for (int i = 0; i < 5; i++) {
    printf("vet[%d] = %d\n", i, vet[i]);
  }

  puts("** ponteiro apontando para um vetor **");

  int *pnt1 = NULL;
  pnt1 = vet;

  printf("pnt1 = %p\n", pnt1);
  printf("&vet[0] = %p\n", &vet[0]);
  printf("*(pnt1 + 2) = %d\n", *(pnt1 + 2));

  puts("** fim **");

  return 0;
}