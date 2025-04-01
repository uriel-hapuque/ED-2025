#include <stdio.h>

int soma_rec(int *arr, int tamanho, int chave);

int main(){
    int arr[] = {1, 2, 5, 5, 5, 2, 3, 2, 5};
    int tamanho_arr = sizeof(arr)/sizeof(arr[0]);

    printf("%d", soma_rec(arr, tamanho_arr, 5));
    return 0;
}

int soma_rec(int *arr, int tamanho, int chave){ 
    int soma = 0;
    if(tamanho == 0) return 0;
    else if(arr[tamanho - 1] == chave) soma = arr[tamanho - 1];
    return soma + soma_rec(arr, tamanho - 1, chave);
}