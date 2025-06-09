//inserting at any position
#include <stdio.h>

int main()
{
    int a[50];
    int size;
    int i;
    int num;
    int position;

    
    printf("enter size");
    scanf("%d",&size);

if (size > 50)
{
    printf("overflow condition");
}

else
{
    printf("enter elements");

for ( i = 0; i < size; i++)
{
 scanf("%d",& a[i]);
}

    
printf("enter element to be entered");
scanf("%d",&num);

    
printf("enter position");
scanf("%d",&position);
}

if (position <= 0 || position > size+1)
{
  printf("invalid Position");
}

else{



for ( i = size-1; i >= position - 1; i--)
{
 a[i+1] = a[i]; //swapping

}
a[position-1] = num;
size++;

for ( i = 0; i < size; i++)
{
   printf("%d",a[i]);
}

}
    return 0;
}