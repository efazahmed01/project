#include <stdio.h>

int main() {
    printf("What do you want?\n"
           "1. Addition\n"
           "2. Subtraction\n"
           "3. Multiplication\n"
           "4. Transpose\n");

    int n;
    printf("Select: ");
    scanf("%d", &n);

    printf("\n");
    if (n == 1) { // Addition
        int n1, n2;
        printf("Enter Dimension:\n");
        printf("row = ");
        scanf("%d", &n1);
        printf("column = ");
        scanf("%d", &n2);

        int mat1[n1][n2];
        int mat2[n1][n2];

        printf("\nMatrix 1 input:\n");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("mat1[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nMatrix 2 input:\n");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("mat2[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("\nAddition:\n");
        int add[n1][n2];
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                add[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("%d\t", add[i][j]);
            }
            printf("\n");
        }
    }
    else if (n == 2) { // Subtraction
        int n1, n2;
        printf("Enter Dimension:\n");
        printf("row = ");
        scanf("%d", &n1);
        printf("column = ");
        scanf("%d", &n2);

        int mat1[n1][n2];
        int mat2[n1][n2];

        printf("\nMatrix 1 input:\n");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("mat1[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nMatrix 2 input:\n");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("mat2[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("\nSubtraction:\n");
        int sub[n1][n2];
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                sub[i][j] = mat1[i][j] - mat2[i][j];
            }
        }

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("%d\t", sub[i][j]);
            }
            printf("\n");
        }
    }
    else if (n == 3) { // Multiplication
        int m1, m2, m3;
        printf("\nInput First Matrix:\n");
        printf("rows and columns = ");
        scanf("%d%d", &m1, &m2);
        int mat1[m1][m2];
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < m2; j++) {
                printf("mat1[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nInput Second Matrix:\n");
        printf("rows = %d and columns = ", m2);
        scanf("%d", &m3);
        int mat2[m2][m3];
        for (int i = 0; i < m2; i++) {
            for (int j = 0; j < m3; j++) {
                printf("mat2[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("\nOutput:\n");
        int out[m1][m3];

        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < m3; j++) {
                out[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < m3; j++) {
                for (int k = 0; k < m2; k++) {
                    out[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < m3; j++) {
                printf("%d\t", out[i][j]);
            }
            printf("\n");
        }
    }
    else if (n == 4) { // Transpose
        int n1, n2;
        printf("Enter Dimension:\n");
        printf("row = ");
        scanf("%d", &n1);
        printf("column = ");
        scanf("%d", &n2);

        int mat[n1][n2];
        int trans[n2][n1];

        printf("\nMatrix input:\n");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                printf("mat[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &mat[i][j]);
            }
        }

        // Compute transpose
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                trans[j][i] = mat[i][j];
            }
        }

        printf("\nTranspose:\n");
        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < n1; j++) {
                printf("%d\t", trans[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Enter correct value!\n");
    }

    return 0;
}
