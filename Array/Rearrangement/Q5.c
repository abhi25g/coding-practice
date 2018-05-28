//	Rearrange array in alternating positive & negative items with O(1) extra space | Set 1
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,j,key,k;
    cin>>size;
    arr=new int[size];
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    for(i=1;i<size;i++)
    {
        if(arr[i]>0)
        {
            key=arr[i];
            j=i-1;
            while(j>=0&&arr[j]<0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            break;
        }
    }
    j=1;
    while(j<i&&i<size)
    {
        k=i;
        key=arr[i];
        while(k>j)
        {
            arr[k]=arr[k-1];
            k--;
        }
        arr[k]=key;
        j+=2;
        i++;
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
