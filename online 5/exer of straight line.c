#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    float x[100], y[100];

    float lnx=0,lny=0,lnx_lny=0,lnx2=0,sumx=0,sumy=0;

    float A,b,a;
    printf("Enter the number of records..");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    for(i=0;i<n;i++){
        sumx +=x[i];
        sumy +=y[i];
        lnx += log(x[i]);
        lny += log(y[i]);
        lnx2 += pow(log(x[i]),2);
        lnx_lny += log(x[i]) * log(y[i]);

    }
    b = ((n*lnx_lny)-lnx*lny) / (n*(lnx2)- pow(lnx,2) );
    A = (lny - b*lnx) / n;
    a = exp(A);

    printf("The equation is :\n");
    printf( "y = %.3fx + %.3f",b,a);

    return 0 ;
}
