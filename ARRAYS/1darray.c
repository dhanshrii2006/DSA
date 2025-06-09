#include <stdio.h>

int main()
{
    int a[5];
    int i;
    
    int *p = a; //address return

    printf("enter elements:");

    for ( i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
    
for ( i = 0; i < 5; i++)
{
  printf("%d", a[i]);
  printf("\t");
}

printf("\n");

for ( i = 0; i < 5; i++)
{
  printf("%p", a[i]);
  printf("\n");
}
    return 0;
}

/* in enter elements check for

(a+i)
(i+a)
(q+i)

in printing value check for 
*(q+i)
*(a+i)
*i[a]
*i[q]

*/