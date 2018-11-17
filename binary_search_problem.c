#include <stdio.h>
#include <stdlib.h>


int binary_search(int sorted_list[], int low, int high, int element);

int main()
{
    int *q;
    int n;
    int i;
    int k;
    int p;
    printf("Enter the size");
    scanf("%d", &n);
    q=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", (q+i));
    }
    printf("Enter the element to search");
    scanf("%d",&k);
    
    p=binary_search(q,0,n,k);
    if(p >= 0)
    {
        printf("The key %d was found at %d ",k,p+1);
    }
    else
    {
        printf("The key %d was not found",k);
    }
    return 0;
}

int binary_search(int sorted_list[], int low, int high, int element)
{
    int middle;
    while (low <= high)
    {
        middle = low + (high - low)/2;
        if (element > sorted_list[middle])
            low = middle + 1;
        else if (element < sorted_list[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}
