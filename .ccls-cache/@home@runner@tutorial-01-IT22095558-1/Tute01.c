/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum;//declaring variables
  float avg;

  printf("Enter the marks :");//inputting the 2 marks
  scanf("%d %d",&mark1,&mark2);

  sum=mark1+mark2;//formula of sum
  avg=sum/2;//fomula of average

  printf("Average of the 2 marks is %.2f",avg);
  
  return 0;
}

