#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0, j = num - 1; i < j; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}