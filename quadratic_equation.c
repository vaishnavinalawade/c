/******************************************************************************
Author : Vaish
Date - 26th Dec 2020
Program - To find the roots of quadaratic equation 
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int
main ()
{
  double a, b, c, discriminant, root_1, root_2, real_part, imag_part;

  printf ("Enter the values of coefficient a, b, and c:");
  scanf ("%lf %lf %lf", &a, &b, &c);

  discriminant = (b * b) - (4 * a * c);

  if (discriminant > 0)
    {
      root_1 = (-b + sqrt (discriminant)) / (2 * a);
      root_2 = (-b - sqrt (discriminant)) / (2 * a);
      printf ("root_1 = %.2lf and root_2 = %.2lf", root_1, root_2);
    }
  else if (discriminant == 0)
    {
      root_1 = root_2 = (-b) / (2 * a);
      printf ("root_1 = root_2 = %.2f", root_1);
    }
  else
    {
      real_part = (-b) / (2 * a);
      imag_part = sqrt (-discriminant) / (2 * a);
      printf ("root_1 = %.2lf + i%.2lf and root_2 = %.2lf - i%.2lf",
	      real_part, imag_part, real_part, imag_part);
    }

  return 0;
}
