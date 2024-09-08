#include <stdio.h>

void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][2], int resultMatrix[][2], int rowFirst, int columnFirst, int columnSecond) {
    // Initializing elements of resultMatrix to 0
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in resultMatrix
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            for (int k = 0; k < columnFirst; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int secondMatrix[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int resultMatrix[2][2];

    // Calling the function with matrix dimensions
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, 2, 3, 2);

    // Printing the result
    printf("Result matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
