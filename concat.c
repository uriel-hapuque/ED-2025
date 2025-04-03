#include <stdio.h>

int concat(int *arr1, int *arr2, int tamanho_arr1, int tamanho_arr2, int *arr3);

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int tamanho_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    int tamanho_arr2 = sizeof(arr2)/sizeof(arr2[0]);
    int tamanho_arr3 = tamanho_arr1 + tamanho_arr2;
    int arr3[tamanho_arr3];
    int i;

    concat(arr1, arr2, tamanho_arr1, tamanho_arr2, arr3);

    for(i = 0; i < tamanho_arr3; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}

int concat(int *arr1, int *arr2, int tamanho_arr1, int tamanho_arr2, int *arr3){
    int i;
    for(i = 0; i < tamanho_arr1; i++){
        arr3[i] = arr1[i];
    }

    for(i = 0; i < tamanho_arr2; i++){
        arr3[tamanho_arr1 + i] = arr2[i];
    }

    return 0;
}