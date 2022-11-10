#include <stdio.h>
#include <math.h>
int
main ()
{
  int operator;
  float a, b, s;
  printf ("1.Addition \n");
  printf ("2.subtraction\n");
  printf ("3.multiplication\n");
  printf ("4.modulus\n");
  printf ("5.divisor\n");
  printf ("6.power\n");
  printf ("7.squareroot\n");
  printf ("\n\nEnter your choice");
  scanf ("%d", &operator);
  switch (operator)
    {
    case 1:
      printf ("Enter two number for addition:->\n");
      scanf ("%f%f", &a, &b);
      s = a + b;
      printf ("sum of  %f and %f is %f", a, b, s);
      break;
    case 2:
      printf ("Enter two number for subtraction:->\n");
      scanf ("%f%f", &a, &b);
      s = a - b;
      printf ("subtraction of %f and %f is %f", a, b, s);
      break;

    case 3:
      printf ("Enter two number for multiplication:->\n");
      scanf ("%f%f", &a, &b);
      s = a * b;
      printf ("multiplicatin of  %f and %f is %f", a, b, s);
      break;
    case 4:
      printf ("Enter the number to get Modulus:->\n");
      int c, d, e;
      scanf ("%d%d", &c, &d);
      e = c%d;
      printf ("Modulus  of %d and %d is %d", c, d, e);
      break;
    case 5:
      printf ("Enter number to get quotient:-> \n");
      scanf ("%f%f", &a, &b);
      s = a / b;
      printf ("Quotient of %f and %f is %f", a, b, s);
      break;
    case 6:
      printf ("Enter numbers :-> \n");
      scanf ("%f%f", &a, &b);
      s = pow (a, b);
      printf ("%f  to the Power %f is %f", a, b, s);
      break;
    case 7:
      printf ("Enter number to get squareroot:->\n");
      scanf ("%f", &a);
      s = sqrt (a);
      printf ("square root of  %f is %f", a, s);
      break;
    default:
      printf ("invalid choice");

    }
  return 0;
}
