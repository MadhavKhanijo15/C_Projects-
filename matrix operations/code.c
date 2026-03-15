/* program for matrices to do the following operation depending on whether the operation requires one or two matrices
    a. Addition of two matrices
    b. Subtraction of two matrices
    C. Finding upper and lower triangular matrices
    d. Transpose of a matrix
    e. Product of two matrices.*/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, r, c1, choice, c2;

    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d%d", &r, &c1);

    printf("Enter elements of matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n--- MENU ---\n");
    printf("1. Addition\n2. Subtraction\n3. Upper and Lower Triangular\n4. Transpose\n5. Multiplication\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 2) {
        printf("Enter elements of matrix B (%d x %d):\n", r, c1);
        for(i = 0; i < r; i++) {
            for(j = 0; j < c1; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        printf("Result:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c1; j++) {
                if(choice == 1)
                    c[i][j] = a[i][j] + b[i][j];
                else
                    c[i][j] = a[i][j] - b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    else if(choice == 3) {
        if(r != c1) {
            printf("Triangular matrices are only for Square Matrices!\n");
        } else {
            printf("\nUpper Triangular Matrix:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c1; j++) {
                    if(i <= j) printf("%d\t", a[i][j]);
                    else printf("0\t");
                }
                printf("\n");
            }

            printf("\nLower Triangular Matrix:\n");
            for(i = 0; i < r; i++) {
                for(j = 0; j < c1; j++) {
                    if(i >= j) printf("%d\t", a[i][j]);
                    else printf("0\t");
                }
                printf("\n");
            }
        }
    }

    else if(choice == 4) {
        printf("Transpose of matrix:\n");
        for(i = 0; i < c1; i++) {
            for(j = 0; j < r; j++) {
                printf("%d\t", a[j][i]);
            }
            printf("\n");
        }
    }

    else if(choice == 5) {
        printf("Enter number of columns for matrix B: ");
        scanf("%d", &c2);

        // Note: Matrix B must be (c1 x c2)
        printf("Enter elements of matrix B (%d x %d):\n", c1, c2);
        for(i = 0; i < c1; i++) {
            for(j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        printf("Product matrix:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c2; j++) {
                c[i][j] = 0;
                for(k = 0; k < c1; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
