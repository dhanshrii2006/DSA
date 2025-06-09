// at begining 

#include <stdio.h>

int main()
{
    int a[50];
    int size;
    int i;
    int num;
   

    
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
 scanf("%d",&a[i]);
}
  
printf("enter element to be entered");
scanf("%d",&num);
}



for ( i = size-1; i >= 0; i--)
{
 a[i+1] = a[i]; //swapping

}
a[0] = num;
size++;

for ( i = 0; i < size; i++)
{
   printf("%d",a[i]);
}


    return 0;
}