#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* main : check if the number is positive or nagative */
/* Description : This program will assign a random number to the variable n each time it is executed */
/*return 0*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
    printf ("%d is positive", n);
  }
  
  if (n == 0){
    printf ("%d is zero", n);
  }
  
  if (n < 0){
    printf ("%d is nagative", n);
  }
  
	return (0);
}
