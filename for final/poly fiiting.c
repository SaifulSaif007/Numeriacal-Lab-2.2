#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float x[10],y[10],sum[10],mat[3][4],temp=0,temp1=0,a1,a2,a3;
  int i,n,j;
  float fact(int);
  printf("\nHow many record you will be enter: ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nenter the value of x%d: ",i);
   scanf("%f",&x[i]);
   temp=temp+x[i];
   printf("\n\nenter the value of y%d: ",i);
   scanf("%f",&y[i]);
   temp1=temp1+y[i];
  }
  sum[0]=temp;
  sum[1]=temp1;
  sum[2]=sum[3]=sum[4]=sum[5]=sum[6]=0;

  for(i=0;i<n;i++)
   {
    sum[2]=sum[2]+(x[i]*x[i]);
    sum[3]=sum[3]+(x[i]*x[i]*x[i]);
    sum[4]=sum[4]+(x[i]*x[i]*x[i]*x[i]);
    sum[5]=sum[5]+(x[i]*y[i]);
    sum[6]=sum[6]+(x[i]*x[i]*y[i]);
   }

   mat[0][0]=n;
   mat[0][1]=mat[1][0]=sum[0];
   mat[0][2]=mat[1][1]=mat[2][0]=sum[2];
   mat[1][2]=mat[2][1]=sum[3];
   mat[2][2]=sum[4];

   mat[0][3]=sum[1];
   mat[1][3]=sum[5];
   mat[2][3]=sum[6];

  temp=mat[1][0]/mat[0][0];
  temp1=mat[2][0]/mat[0][0];
  for(i=0,j=0;j<3+1;j++)
  {
   mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
   mat[i+2][j]=mat[i+2][j]-(mat[i][j]*temp1);
  }

  temp=mat[2][1]/mat[1][1];
  temp1=mat[0][1]/mat[1][1];
  for(i=1,j=0;j<3+1;j++)
  {
   mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
   mat[i-1][j]=mat[i-1][j]-(mat[i][j]*temp1);
  }


  temp=mat[0][2]/mat[2][2];
  temp1=mat[1][2]/mat[2][2];
  for(i=0,j=0;j<3+1;j++)
  {
   mat[i][j]=mat[i][j]-(mat[i+2][j]*temp);
   mat[i+1][j]=mat[i+1][j]-(mat[i+2][j]*temp1);
  }

  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   {
    printf(" %.3f ",mat[i][j]);
   }
   printf("\n\n");
  }

  a3 = mat[2][3]/mat[2][2];
  a2 = mat[1][3]/mat[1][1];
  a1 = mat[0][3]/mat[0][0];
  printf("\n\nx = %.3f",a1);
  printf("\n\ny = %.3f",a2);
  printf("\n\nz = %.3f",a3);

  getch();
}
