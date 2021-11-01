#include "counting_Sort.h"

int main () {
  int n_keys;
  int n_vet;

  scanf ("%d", &n_keys);
  scanf ("%d", &n_vet);
  
  int *keys = (int *) calloc (n_keys, sizeof(int));
  int *vet = (int *) calloc (n_vet, sizeof(int));

  for (int i = 0; i < n_vet; i++)
  {
    scanf ("%d", &vet[i]);
  }
  for (int i = 0; i < n_keys; i++)
  {
    keys[i] = i;
  }
  
  counting_Sort(vet, n_vet, keys, n_keys);
}
