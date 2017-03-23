/* Ciara Routly */

/* This program reads in a list of numbers and then determines whether or not
each number is abundant */


#include <stdio.h>
int main()
{
  int c,i,n;
  int sum=0;
  int count=1, num;
  
  /* Prompt user to enter information */
  printf("Please enter n followed by n numbers: ");
  /* Read in users inputs */
  scanf("%d", &n);
 
 /* For loop that runs n number of trials */
  for (c=1;c<=n;c++)
{
 /* Sum is initialized to zero for each seperate trial */
  sum = 0;
  scanf("%d", &num);
  
  /* For loop that adds to sum by trial */
  for(i=2;i<num;i++)
{
      if(num%i==0)
      sum += i;
}
/* Determines whether number is abundant or not and prints accordingly */
      if (sum > num)
      printf("Test case #%d %d is abundant.\n", count,num);
      else 
      printf("Test case #%d %d is NOT abundant.\n", count,num);
      
/* Keeps track of test case number by adding 1 to count */
      count++;
}

  return 0;
}


