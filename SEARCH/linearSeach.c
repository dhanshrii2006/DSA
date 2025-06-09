#include <stdio.h>

int main(){
    
    int a[50]; 
    int n;
    int i;
    int data;
    //int found = 0;

    printf("enter size");
    scanf("%d",&n);

printf("enter elements");
for ( i = 0; i < n; i++)
{
 scanf("%d",& a[i]);
}

printf("enter element to search");
scanf("%d",&data);


for ( i = 0; i < n; i++)
{
    if (a[i]== data)
    {
     printf("the index is %d",i);
     printf("\n");
     printf("the position is %d",i+1);
     //found =1;
     break;
    }
    
}
if (i==n)
{
 printf("element not found");
}

// if(found==0)
//{printf("element not found");}

    return 0;
}

//check for slashes
