#include <stdio.h>

int remove_elem(int *arr, int *tamanho, int chave);

int main(){ 
    int arr[] = {1, 2, 5, 4, 3, 6};
    int i;
    int tamanho_arr = sizeof(arr)/sizeof(arr[0]);
    if(remove_elem(arr, &tamanho_arr, 7) != -1){
        for(i = 0; i < tamanho_arr; i++){
            printf("%d ", arr[i]);
        }
    } 
    printf("elemento nao encontrado \n");
    return 0;
}

int remove_elem(int *arr, int *tamanho, int chave){
    int i, j;
    for(i = 0; i < *tamanho; i++){
        if(arr[i] == chave){
            for(j = i; j < *tamanho - 1; j++){
                arr[j] = arr[j + 1];
            }
            (*tamanho)--;
            return i;
        }
    }
    return -1;
}