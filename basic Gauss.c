#include <stdio.h>

#define SIZE 20
double a[SIZE][SIZE], b[SIZE], x[SIZE];

void GaussElimination(int n);

int main()
{
    int i, j, n;

    printf("Basic Gauss Elimination Method\n\n");

    //freopen("BasicGaussElimination_Input.txt", "rb", stdin);

    scanf("%d", &n);

    for (i = 1; i<=n ; i++)
    {
        for (j = 1; j<= n ; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for (i = 1; i <=n; i++)
    {
        scanf("%lf", &b[i]);
    }

    GaussElimination(n);


    for (i = 1; i<=n ; i++)
    {
        printf("x%d = %0.2f\n", i, x[i]);
    }

    return 0;
}

void GaussElimination(int n)
{
    int i, j, k;
    double pivot, factor, sum;

//elimination begins
    for (k = 1; k<= n ; k++ )
    {
        pivot = a[k][k];

        for (i = k+1; i<=n ;i++ )
        {
            factor = a[i][k]/pivot;

            for (j = k+1; j<=n ; j++ )
            {
                a[i][j] = a[i][j] - factor * a[k][j];
            }
            b[i] = b[i] - factor * b[k];
        }
    }

    //back substitution

    x[n] = b[n] / a[n][n];

    for (k = n-1; k>=1 ; k-- )
    {
        sum = 0.0;

        for (j = k+1; j<=n ; j++ )
        {
            sum = sum + a[k][j] * x[j];
        }
        x[k] = (b[k] - sum) / a[k][k];
    }

}

