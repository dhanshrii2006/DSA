#include <stdio.h>

int main()
{
    int a[50]; //maxsize
    int size;
    int i;

    printf("enter size");
    scanf("%d",&size);

if (size>50)
{
   printf("out of bound");
}

else
{
printf("enter elements");
for ( i = 0; i < size; i++)
{
 scanf("%d",& a[i]);
}

printf("elements are");
for ( i = 0; i < size; i++)
{
printf("%d", a[i]);
}
}
    return 0;
}

/*int a[]= {1,2,3,4}
int size = sizeof(a)*/

