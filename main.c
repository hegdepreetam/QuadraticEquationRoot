/*Name of project: To find the roots of quadratic equations by taking the coefficients
  Author: Preetam Hegde
  Date: 20/01/2020  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,r1,r2,realp,imgp,disc;//Declaring the Variables
    printf("Enter the value for co-efficients a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||b==0||c==0)
        {
            printf("Invalid inputs,try again");
        }
    else
    {
      disc=b*b-4*a*c;

      if(disc>0)
      {
          printf("\n The roots are real and distinct");
          r1=(-b+(sqrt(disc)))/(2.0*a);
          r2=(-b-(sqrt(disc)))/(2.0*a);
          printf("\n r1=%f",r1);
          printf("\n r2=%f",r2);
      }
      else if(disc<0)
      {
          printf("\n The roots are are imaginary");
          r1=-b/(2.0*a);
          r2=sqrt(fabs(disc))/(2.0*a);
          printf("\n r1=%f",&r1);
          printf("\n r2=%f",&r2);
          printf("\n r1=%f+i%f",r1,r2);
          printf("\n r2=%f-i%f",r1,r2);

      }
      else{
        printf("The roots are equal\n");
        r1=r2=-b/(2.0*a);
        printf("r1=r2=%f\n",r1);
      }
    }

    return 0;

}
