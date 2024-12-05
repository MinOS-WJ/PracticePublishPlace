#include<stdio.h>

void swap(int *xp, int *yp);
void copyArray(int arr[],int arr0[],int n);
void printArray(int arr[], int size);
void BubbleSort(int arr[], int n);
void SelectionSort(int arr[], int n);

int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    for (register int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int arrForBubbleSort[100];
    copyArray(arrForBubbleSort,arr,n);
    BubbleSort(arrForBubbleSort,n);
    printf("BubbleSort\n");
    printArray(arrForBubbleSort,n);

    int arrForSelectionSort[100];
    copyArray(arrForSelectionSort,arr,n);
    SelectionSort(arrForSelectionSort,n);
    printf("SelectionSort\n");
    printArray(arrForSelectionSort,n);
    
    return 0;
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void copyArray(int arr[],int arr0[],int n)
{
    for (register int i = 0; i < n; i++)
    {
        arr[i] = arr0[i];
    }
}

void printArray(int arr[], int size)
{
    for (register int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[], int n)
{
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cnt++;
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("BubbleSort cnt = %d\n",cnt);
}

void SelectionSort(int arr[], int n)
{
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            cnt++;
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
    printf("SelectionSort cnt = %d\n",cnt);
}