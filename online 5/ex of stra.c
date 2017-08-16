#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    float ax[100], ay[100];
    float a,b;
    float sum_x=0,sum_y=0,sum_x2=0, sum_x_y = 0;
    printf("Enter no of records,,");
    scanf("%d",&n);

    printf("Enter Data...\n");
    printf(" X   Y\n");

    for(i=0;i<n;i++)
        scanf(" %f   %f",&ax[i], &ay[i]);

    for(i=0;i<n;i++){
        sum_x = sum_x+ ax[i];
        sum_y = sum_y+ ay[i];
        sum_x2 = sum_x2 + pow(ax[i],2);
        sum_x_y = sum_x_y + ax[i]*ay[i];
    }
       b = ((n*sum_x_y)-sum_x*sum_y) / (n*(sum_x2) - pow(sum_x,2));
       a = (sum_y- b*sum_x)/n;

       printf("a = %.3f   b = %.3f\n", a , b);
       printf("The Equation...  y = %.3f X + %.3f", b,a);

       return 0;
}
