#include<stdio.h>

void ViolentSearch(int data[],int n,int val);
void BinarySearch(int data[],int n,int val);
int main()
{
    int data[100],n;
    int val,pos;
    scanf("%d",&n);
    for (register int i = 0; i < n; i++)
    {
        scanf("%d",&data[i]);
    }
    scanf("%d",&val);
    ViolentSearch(data,n,val);
    BinarySearch(data,n,val);

    return 0;
}

void ViolentSearch(int data[],int n,int val)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (data[i]==val)
        {
            printf("Violent Search: %d\n",i);
            return;
        }
    }
    printf("Violent Search: Not Found\n");
}

void BinarySearch(int data[],int n,int val){
    int low,high,mid;
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (data[mid]==val)
        {
            printf("Binary Search: %d\n",mid);
            return;
        }
        else if (data[mid]>val)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("Binary Search: Not Found\n");
}