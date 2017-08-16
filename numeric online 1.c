#include<stdio.h>
#include<math.h>

#define eqn (x-2)*(x-3)*(x-4)

double f(double x)
{
    double ans;
    ans = eqn;
    return ans;
}


int main()
{
    double x1,x2,x0,E;
    double f1,f2,f0,root;
    int i=0;

    printf("Enter the value of x1 = ");
    scanf("%lf",&x1);

     printf("Enter the value of x2 = ");
    scanf("%lf",&x2);

    printf(" Error = ");
    scanf("%lf",&E);



    while(fabs(f(x0))>E){

    x0 = (x1+x2)/2;

    f1 = f(x1);
    f2 = f(x2);
    f0 = f(x0);

     if( (f1*f2) >0){
        printf("The interval is wrong...");
        return 0;
    }

 i++;
    printf("%d  %lf  %lf  %lf  %lf  %lf  %lf\n",i,x0,x1,x2,f0,f1,f2);
    if(f0==0){
        printf("the root is... %lf",x0);
        break;
    }


    if(f1*f0<0)
        x2 = x0;
    else
        x1 = x0;
    }

    root = (x1+x2)/2;
    printf("the root %lf\n",root);
    printf("After %d iteration..",i);
    return 0;
}
