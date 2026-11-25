#include <stdio.h>
#include <locale.h>

#define N 10

int main(void)
{
    setlocale(LC_ALL, "Russian");

    float A[N];
    float temp;
    float max;
    int i, imax = 0;
    int sum = 0;

    for (i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf_s("%f", &temp);
        A[i] = temp;
    }

    max = A[0];
    for (i = 1; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            imax = i;
        }
    }
    for (i = imax + 1; i < N; i++)
    {
        sum += i + 1;
    }

    printf("Максимальный элемент: %.2f (номер %d)\n", max, imax + 1);
    printf("Сумма порядковых номеров элементов после максимального: %d\n", sum);

    return 0;
}