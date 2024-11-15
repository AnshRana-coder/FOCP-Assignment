//12. WAP to implement delete-Front, any position in between & end in an array. Print
//the array before delete & after delete 

#include <stdio.h>
int main() 
{
    int p,n;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which a element has to be deleted:\n");
    scanf("%d",&p);
    for(int i=p-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    };
    for(int i=0;i<n-1;i++)
    {
        printf("Element %d= %d\n",i+1,a[i]);
    }
    return 0;
}