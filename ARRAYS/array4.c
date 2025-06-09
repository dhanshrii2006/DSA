// deletion at specific position

#include <stdio.h>

int main()
{
    int a[50]; //maxsize
    int size;
    int i;
    int pos;
    int item;

    printf("enter size");
    scanf("%d",&size);

printf("enter elements");
for ( i = 0; i < size; i++)
{
 scanf("%d",& a[i]);
}
//traversal

printf("enter position to delete");
scanf("%d",&pos);

if (pos <= 0 || pos > size)
{
  printf("invalid");
}

else


{
    for ( i = pos-1 ; i < size-1; i++)
    {
       a[i] = a[i+1];
    }
    size--;

}

// traversal

printf("elements are");
for ( i = 0; i < size; i++)
{
printf("%d", a[i]);
}


    return 0;
}

/*item = a[pos-1];
printf("%d", item);
to print data that is deleted before*/