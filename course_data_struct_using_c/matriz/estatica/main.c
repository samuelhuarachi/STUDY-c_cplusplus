#include <stdio.h>


int main() {
    int n_rows = 2;
    int n_cols = 3;

    int m[2][3] = {{0, 1, 2}, {3, 4, 5}};

    printf("&m = %p, m = %p\n\n", &m, m);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }
    

    return 0;
}