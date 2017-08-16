#include <stdio.h>
#include <math.h>

#define E 0.01    //may change
#define dx 0.2      //may change
#define MAX 20

double roots[MAX];

double BisectionMethod(double x1, double x2);

double F(double x)
{
    //return (pow(x, 3) - 3 * pow(x,2) - 40 * x);     //function may change
    //roots for this func are -5, 0 and 8
    return (x-2)*(x-4)*(x-8);
}

int main()
{
    double a, b, x1, x2, f1, f2, root;
    int iter = 0, count = 0, i;

    printf("================== ALL POSSIBLE ROOTS =================\n\n");

    printf("Enter lower limit : ");
    scanf("%lf", &a);   //must use %lf

    printf("\nEnter upper limit : ");
    scanf("%lf", &b);   //must use %lf

    x1 = a;
    x2 = x1 + dx;

    do
    {
        iter++;

        if(iter > 1)    //becoz, for the 1st iter., value of x1 and x2 are already initialized
        {
            x1 = x2;
            x2 = x1 + dx;
        }

        f1 = F(x1);
        f2 = F(x2);

        if(f1 * f2 > 0)
        {
            continue;
        }
        else
        {
            roots[count] = BisectionMethod(x1, x2);
            count++;

            //if(count >= MAX) break;
        }
    }while(x2 <= b);

    printf("\n\nRoots are : ");

    for (i = 0; i<count ;i++ )
    {
        printf("\n%.4lf ", roots[i]);
    }

    return 0;
}

double BisectionMethod(double x1, double x2)
{
    double x0, root, f1, f2, f0;

    if(F(x1)== 0)
    {
        root = x1;
        return root;
    }

    do
    {
        x0 = (x1 + x2)/2;

        f0 = F(x0);

        f1 = F(x1);
        f2 = F(x2);

        if(f0 == 0)
        {
            root = x0;
            return ;
        }

        if(f1 * f0 < 0)
        {
            x2 = x0;
        }
        else
            x1 = x0;

    }while(fabs((f0)) >= E);

    root = (x1 + x2)/2;

    return root;
}
