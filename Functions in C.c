#include<stdio.h>
int main()
{
    int a[4],i,j;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
        for(j=i;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",a[3]);
}
