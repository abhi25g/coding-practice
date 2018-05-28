//Move all zeroes to end of array
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,j,temp;
    cin>>size;
    arr=new int[size];
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    i=0;
    j=1;
    while(1)
    {
        while(arr[i]!=0)
            i++;
        j=i+1;
        while(arr[j]==0)
            j++;
        if(i<j&&j<size)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

