<--------------intcomplete----------->
  just add multiple between two matrix
  -------------------------------------


#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("\nInput First Matrix");

    printf("\nrow and column = ");
    scanf("%d%d",&m1,&m2);
    int mat1[m1][m2];
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < m2; j++){
            printf("mat1[%d][%d] = ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nInput Second Matrix");

    printf("\nrow = %d and column = ",m2);
    scanf("%d",&m3);
    int mat2[m2][m3];
    for(int i = 0; i < m2; i++){
        for(int j = 0; j < m3; j++){
            printf("mat2[%d][%d] = ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nOutput: \n");
    int out[m1][m3];

    for(int i = 0; i < m1; i++){
        for(int j = 0; j < m3; j++){
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

    for(int i = 0; i < m1; i++){
        for(int j = 0; j < m3; j++){
            printf("%d ",out[i][j]);
        }
        printf("\n");
    }

}
