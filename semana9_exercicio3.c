#include <stdio.h>

#define MAX_SIZE 100

// Função para contar o número de ocorrências de um elemento no array
int count(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

// Função para encontrar o índice da primeira ocorrência de um elemento no array
int index(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

// Função pra inverter a ordem dos elementos 
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

// Função para ordenar os elementos do array em ordem crescente
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {3, 7, 1, 9, 2, 5, 1, 3, 7};
    int size = 9;

    printf("Array inicial: ");
    printArray(arr, size);

    int element = 3;
    printf("O elemento %d aparece %d vezes no array.\n", element, count(arr, size, element));

    element = 9;
    printf("O índice do elemento %d no array é: %d\n", element, index(arr, size, element));

    printf("Revertendo o array...\n");
    reverse(arr, size);
    printf("Array revertido: ");
    printArray(arr, size);

    printf("Ordenando o array...\n");
    sort(arr, size);
    printf("Array ordenado: ");
    printArray(arr, size);

    return 0;
}
