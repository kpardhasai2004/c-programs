/*This program is useful to find greatest number of the given numbers.
Where n1, n2 and  n3 are numbers that has to be given.
Finally  prints the largest number in the given numbers.*/
#include <stdio.h>

int
main ()
{
  int n1, n2, n3;
  printf ("Give any three numbers: ");
  scanf ("%d %d %d", &n1, &n2, &n3);	/*Reads the numbers */
  if (n1 > n2 && n1 > n3)
    {
      printf ("%d is greater than other numbers", n1);
    }				/*Check the condition whether if n1 is greater than other numbers if yes prints the stament otherwise continue to read the staments. */
  else if (n2 > n1 && n2 > n3)
    {
      printf ("%d is greater than other numbers", n2);
    }				/*The same way it it will checkk whether the condition is satisfied or not finally gives the print statement otherwise it goes to else function. */
  else
    {
      printf ("%d is greater than other numbers", n3);
    }
  return 0;
}
/*Output :
Give any three numbers: 78 86 90
90 is greater than other numbers.*/
