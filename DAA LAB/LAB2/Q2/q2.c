#include <stdio.h>
#include <stdlib.h>
int opcount1=0;
int opcount2=0;
int* prime(int num)
{
    int i;
    int t=0;
    int *arr=calloc(1,num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            arr[t++]=i;
            num=num/i;
            i=1;
        }
    }
    return arr;
}
int main()
{
    int *arr1,*arr2;
    int i=0,j=0,t=0,a,b;
    scanf("%d %d",&a,&b);
    
    arr1=prime(a);
    arr2=prime(b);
    int *arr3=calloc(1,20);
    // for(i=0;arr1[i]!=0;i++)
    // {
    //     for(j=0;arr2[j]!=0;j++)
    //     {
    //         if(arr1[i]==arr2[j])
    //         {
    //             sum=sum*arr1[i];
    //             arr3[t++]=arr1[i]; 
    //         }
    //         opcount2++;
    //     }
    // }
    // for(int i=0;arr3[i]!=0;i++)
    // {
    //     printf("%d \t",arr3[i]);
    // }
     for(i=0;arr1[i]!=0;i++)
     {
        printf("%d\t",arr1[i]);
     }
     printf("\n");
     for(i=0;arr2[i]!=0;i++)
     {
        printf("%d\t",arr2[i]);
     }
     int sum=1;
    for(i=0;arr1[i]!=0;++i)
    {
        for(j=0;arr2[j]!=0;++j)
        {
            printf("%d\t%d\n", arr1[i], arr2[j]);
            if(arr1[i]==arr2[j])
            {
                sum=sum*arr1[i];
                arr2[j]=-99;
                break;
            }
        }
    }
    printf("sum ====%d\n",sum);

}
