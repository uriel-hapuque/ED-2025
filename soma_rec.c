#include <stdio.h>

int soma_rec(int *arr, int tamanho);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho_arr = sizeof(arr)/sizeof(arr[0]);

    printf("%d", soma_rec(arr, tamanho_arr));
    return 0;
}

int soma_rec(int *arr, int tamanho){
    if(tamanho == 0) return 0;
    return arr[tamanho-1] + soma_rec(arr, tamanho-1);
}