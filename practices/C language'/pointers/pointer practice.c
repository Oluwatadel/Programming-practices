#include <stdio.h>

int main(void)
{
     int i;
     char list_int[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
     char *p;

     for (i = 0; list_int != '\0' && i < 6; i++)
     {
         printf("character %d is: %c\n", i, list_int[i]);
     }
     printf("===========================================================\n");
     printf("%s World\n", list_int);
     printf("===========================================================\n");
     for (i = 0; i < 7; i++)
     {
         printf("%c", list_int[i]);
         printf("\n===========================================================\n");
     }
      printf("%s\n", list_int);
      printf("===========================================================\n");
      p = &list_int;

      printf("%p is the address of list_int\n", p);
      printf("%p is the address of list_int\n", &list_int);
      printf("%p is the address of list_int\n", *p);
      printf("%s is the value of the pointer also\n", *p);



        return (0);
}
