#include <stdio.h>

int main()
{

    int array[10] = {5, 89, 4, 7, 6, 2, 8, 10, 3, 1};
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array : ");
    for (i = 0; i < 10; i++)
    {

        printf("%d ", array[i]);
    }
}