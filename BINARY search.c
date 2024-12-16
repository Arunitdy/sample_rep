
#include<stdio.h>
int main()
{   int n;

    printf("enter the size of array:");
    scanf("%d",&n);
      int a[n];
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    int t;
    printf("enter the data need to find:");
    scanf("%d",&t);
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s) /2;
        if(a[mid]==t)
        {
            //printf("element at%d",mid);
            printf("changes made here");
            break;
        }
        else if(a[mid]<t)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    printf("element not found");
}


