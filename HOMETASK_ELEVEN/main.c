#include <stdio.h>
#define N 10
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_CTYPE, "RUS");
    int A[N];
    int i, min_index = 0;

    printf("Введите %d целых чисел:\n", N);
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }

    for (i = 1; i < N; i++) {
        if (A[i] < A[min_index]) {
            min_index = i;
        }
    }

    printf("\nМинимальный элемент: A[%d] = %d\n", min_index + 1, A[min_index]);
    printf("Количество элементов до минимального: %d\n", min_index);

    return 0;
}
