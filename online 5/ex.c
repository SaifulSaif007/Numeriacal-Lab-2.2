#include<stdio.h>

#include<math.h>

int main(){

    float ax[20], ay[20];
    int i, n;

    float sum_x = 0, sum_y = 0 ,sum_lnx = 0 ,sum_lny = 0, sum_lnx2 = 0, sum_lnx_lny = 0 ;

    float a , b;

    printf("Enter no of records: ");

    scanf("%d", &n);

    printf("Enter Data: ");

    printf("\nX       Y\n");

     for(i = 0; i < n; i++){

        scanf("%f %f",&ax[i], &ay[i]);

    }

    for(i = 0; i < n; i++){

        sum_x += ax[i];

        sum_y += ay[i];

        sum_lnx += log(ax[i]);

        sum_lny += log(ay[i]);

        sum_lnx2 += pow(log(ax[i]), 2);

        sum_lnx_lny += log(ax[i]) * log(ay[i]);

    }

    printf("%.3f %.3f %.3f %.3f %.3f %.3f %.3f\n",sum_x,sum_y,sum_lnx,sum_lny,sum_lnx2,sum_lnx_lny,(sum_lnx)*(sum_lnx));


    b = ((n*sum_lnx_lny) - (sum_lnx )* (sum_lny)) / ((n*sum_lnx2) - (sum_lnx)*(sum_lnx));

    a = (sum_lny - b*sum_lnx)/n;

    float A = exp(a);
    printf("%.3f",A);

    printf("\na = %.3f    b = %.3f", a, b);

    printf("\nThe Equation is %.3f + %.3fX\n\n", a, b);

    return 0;

}

