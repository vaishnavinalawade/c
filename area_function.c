/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*Author - Vaish
  Date - 24th Dec 2020
  Program -Functions defining the area's of circle, cone and sphere
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14

int rad;

void circle ();
float cone (int, int);
float sphere ();

void
display (float area)
{
  printf ("%0.3f", area);
}

int
main (void)
{
  // your code goes here
  circle ();

  int h;
  float area_cone, area_sphere;
  printf ("\nEnter the radius for cone & sphere:");
  scanf ("%d", &rad);
  printf ("\nEnter the height for cone:");
  scanf ("%d", &h);
  printf ("\nArea of Cone:");
  area_cone = cone (rad, h);
  display (area_cone);

  printf ("\nArea of Sphere:");
  area_sphere = sphere ();
  display (area_sphere);

  return 0;
}

void
circle ()
{
  int rad_circle;
  float area;
  printf ("Enter the radius for circle:");
  scanf ("%d", &rad_circle);
  area = PI * rad_circle * rad_circle;
  printf ("\nArea of Circle:");
  printf ("%0.2f", area);
}

float
cone (int r, int h)
{
  float area;
  area = PI * r * (r + sqrt (h * h + r * r));
  return area;
}

float
sphere ()
{
  float area;
  area = 4 * PI * rad * rad;
  return area;
}
