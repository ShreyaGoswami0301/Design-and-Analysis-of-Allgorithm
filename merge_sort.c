#include <stdio.h>
int a[10]; int b[10];
void merge(int p, int q, int r)
{
    int i, j, k;
    i=p;
    j=q+1;
    k=p;
    while(i<=q && j<=r)
    {
        if(a[i]<=a[j])
        {
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    while(i<=q)
    {
        b[k++]=a[i++];
        
    }
    while(j<=r)
    {
        b[k++]=a[j++];
    }
    for(i=p; i<=r; i++){
        a[i]=b[i];
    }
}
void sort(int p, int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        sort(p,q);
        sort(q+1,r);
        merge(p,q,r);
    }
    
    
}
int main()
{
    int n, i;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(0, n-1);
    printf("sorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}
