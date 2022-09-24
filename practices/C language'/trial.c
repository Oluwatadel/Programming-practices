#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;

    for(i = -5; i <= 5; i++)
    {
      if (i > 0)
      {
          if (i % 2 == 0)
          {
              printf("%d is an even number\n", i);
          }

          else
          {
              printf("%d is an odd number\n", i);
          }
      }
      else if (i == 0)
      {
          printf("%d is zero\n", i);
      }
      else
      {
          printf("%d is a negative number\n", i);
      }
    }
}
