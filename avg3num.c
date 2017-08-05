#include <stdio.h>

void main()
{
  int a, b, c;
  float avg;
  
  /* Read the input numbers: a, b, c */
  printf("Enter 3 numbers\n"); 
  scanf("%d %d %d", &a, &b, &c); 
  
  /* Find the average of three numbers */
  avg = (a + b + c)/3.0;
  
  /* print the output */
  printf("Average of three numbers : %f", avg); 
}
