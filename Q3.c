#include <stdio.h>
int main() {
  
  float radius, area, circumference, diameter;
 
  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14 * radius * radius; 
 
  printf("\n Diameter Of a Circle = %f\n", diameter);
  printf(" Circumference Of a Circle = %f\n", circumference);
  printf(" Area Of a Circle = %f\n", area);
  
}

