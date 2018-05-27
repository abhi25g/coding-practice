//Rearrange an array such that arr[i] = i
#include <iostream>
using namespace std;

int main()
{
    int *arr,n,i,j,x,y;
    cout << "\nEnter array size ";
    cin>>n;
    arr=new int[n];
    cout<<"\nEnter the array ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=i&&arr[i]!=-1)
        {
            x=arr[i];
            y=arr[x];
            while(arr[x]!=x)
            {
                arr[x]=x;
                x=y;
                if(x==-1)
                {
                    arr[i]=-1;
                    break;
                }
                y=arr[x];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

