//Rearrange positive and negative numbers in O(n) time and O(1) extra space
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,j,temp,k;
    cin>>size;
    arr=new int[size];
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    i=0;
    j=size-1;
    while(i<j)
    {
        while(arr[i]>0)
            i++;
        while(arr[j]<0)
            j--;
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    i=0;
    while(arr[i]>0)
        i++;
    j=1;
    k=i;
    while(j<k&&i<size)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j+=2;
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

