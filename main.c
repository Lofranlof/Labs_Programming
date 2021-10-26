#include <stdio.h>

int main()
{
    int array[] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (int i = 0; i < 9; i++)
        printf("%d ", array[i]);

    int matrix[2][2] = {
            {1, 2},
            {3, 1}
    };

    int anotherMatrix[2][2] = {
            {1, 1},
            {0, 2}
    };

    int result [2][2];
    int transpositionedResult [2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = matrix[i][0] * anotherMatrix[0][j] + matrix [i][1] * anotherMatrix[1][j];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                transpositionedResult [i][j] = result[j][i];

        printf("\n%d %d\n%d %d", result[0][0], result[0][1], result[1][0], result[1][1]);

        printf("\n%d %d\n%d %d", transpositionedResult[0][0], transpositionedResult[0][1], transpositionedResult[1][0], transpositionedResult[1][1]);
    return 0;
}
