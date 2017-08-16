#include<stdio.h>

#include<math.h>

int main(){

    int ax[20], ay[20], i, n;

    int sum_x = 0, sum_xy = 0, sum_x2 = 0, sum_y = 0 ;

    float a , b;

    printf("Enter no of records: ");

    scanf("%d", &n);

    printf("Enter Data: ");

    printf("\nX       Y\n");

    for(i = 0; i < n; i++){

        scanf("%d%d", &ax[i], &ay[i]);

    }

    for(i = 0; i < n; i++){

        sum_x += ax[i];

        sum_y += ay[i];

        sum_xy += ax[i] * ay[i];

        sum_x2 += pow(ax[i], 2);

    }

    b = (n*sum_xy - sum_x*sum_y)/(n*sum_x2 - pow(sum_x,2));

    a = (sum_y - b*sum_x)/n;


    printf("\na = %.3f    b = %.3f", a, b);

    printf("\nThe Equation is %.3f + %.3fX\n\n", a, b);

    return 0;

}

