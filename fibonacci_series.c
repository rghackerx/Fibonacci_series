// this programme is to print fabincoo series
//  0 1 1 2 3 5 8 .....
#include <stdio.h>
int main()
{
  int input, i, fab, t2 = 1, t1 = 0;

  printf("Enter a number: ");
  scanf("%d", &input);

  for (i = 1; i <= input; i++) //for loop 
  {
    printf("%d\n", fab);
    fab = t1 + t2;  
    t1 = t2;  
    t2 = fab;
  }
}