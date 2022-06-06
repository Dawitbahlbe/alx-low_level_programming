#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* the code goes there */
if( n > 0 ) {
/* if condition is true then print the following */
printf("n is postive" );
} 
else if( n == 0 ) {
/* if else if condition is true */
printf("n is zero" );
}
else if( n < 0 ) {
/* if else if condition is true */
printf("n is negative" );
}
else {
/* if none of the conditions is true */
printf("None of the values is matching" );
}
return (0);
}
