
#include<stdio.h>
#include<math.h>
 float f(float x)
{

      return x*x -3*x+2;

}
float df (float x)
{

    return 2*x - 3;

}
void main()
{
    int itr=0;
    float h, x0, x1, error;


    printf("\nEnter x0, allowed error\n");
    scanf("%f %f", &x0, &error);
      printf("Itr\t f(x)\t\t x0\t\t  f'(x0)\t    x1\t\n");
      printf("====================================================================\n\n");
   do
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        itr++;

        printf("%d\t%f\t%f\t%f\t%f",itr,x0,f(x0),df(x0),x1);
        printf("\n");
       // printf(" At Iteration no. %d, x = %.4f\n", itr, x1);
        if (fabs(f(x0)) <= error)
        {
            printf("After %d iterations, root = %.4f\n", itr, x1);
            return 0;
        }
        x0=x1;
    }while(fabs(f(x0) >= error));
    printf(" The required solution does not converge or iterations are insufficient\n");
    return 1;
}
