#include <stdio.h>
//මම නං සුපිරිම වැඩ්ඩෙක් 
int main(int argc, char const *argv[])
{
    int arr[56],j,i,n,temp;

    printf("\nEnter ur array size : ");
    scanf("%d",&n);

    printf("Enter ur datas\n");
    for ( i = 0; i < n; i++)
    {
        printf("element [%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        int x=i;
        for ( j = i+1; j < n; j++)
        {
            if (arr[j]<arr[x])
            {
                x=j;
            }
            
        }
        if (x != i )
        {
            temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;
        }
         
    }

    printf("Array's data :");
    for ( i = 0; i < n; i++)
    {
        printf("->[%d] ",arr[i]);
    }
    
    return 0;
}