#include <stdio.h>

#define SIZE 20
double a[SIZE][SIZE], b[SIZE];

void GaussJordan(int n);

int main()
{
    int i, j, n;

    printf("Gauss Jordan Method\n\n");

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

    GaussJordan(n);

    for (i = 1; i<=n ; i++)
    {
        printf("x%d = %0.2f\n", i, b[i]);
    }

    return 0;
}

void GaussJordan(int n)
{
    int i, j, k;
    double pivot, factor;

    for (k = 1; k<=n ; k++ )
    {
        pivot = a[k][k];

        //normalizing eq. no k
        for (i = k; i<=n ; i++ )
        {
            a[k][i] = a[k][i]/pivot;
        }

        b[k] = b[k]/pivot;

        ///making diagonal matrix
        for (j = 1; j<=n ; j++ )
        {
            factor = a[j][k];

            if(j != k)
            {
                for (i = 1; i <= n ; i++)
                {
                    a[j][i] = a[j][i] - factor * a[k][i];
                    }

                b[j] = b[j] - factor * b[k];
            }
        }
    }

    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){

printf("  %.2lf"  ,a[i][j]);

}
    printf(" %.2lf",b[i]);
    printf("\n");
}

}
