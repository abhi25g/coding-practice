//Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,temp;
    cin>>size;
    arr=new int[size];
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    for(i=1;i<size-1;i+=2)
    {
        if(arr[i-1]>arr[i])
        {
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
        if(arr[i+1]>arr[i])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    if(i==size-1)
    {
        if(arr[i-1]>arr[i])
        {
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
