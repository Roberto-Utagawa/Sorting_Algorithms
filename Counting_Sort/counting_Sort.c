#include "counting_Sort.h"


void counting_Sort(int *vet, int size, int *keys, int n_keys)
{
  int* keys_size = (int *) calloc (n_keys, sizeof(int));
  int* temp_vet = (int *) calloc (size, sizeof(int));
  
  for(int i = 0; i < size; i++)
  {
    keys_size[vet[i]+1]++;
  }
  for (int i = 0; i < n_keys-1; i++){
    keys_size[i+1] += keys_size[i];
  }

  for(int i = 0; i < size; i++)
  {
    temp_vet[keys_size[vet[i]]] = vet[i];
    printf("%d %d\n",vet[i],keys_size[vet[i]]);
    (keys_size[vet[i]])++;
  }

  for (int i = 0; i < size; i++) {
    vet[i] = temp_vet[i];
  }

  /*for (int i = 0; i < size; i++) {
    printf ("%d ", vet[i]);
  }*/
}
