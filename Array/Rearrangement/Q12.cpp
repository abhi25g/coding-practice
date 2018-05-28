//Double the first element and move zero to end
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,j,temp;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    for(i=0;i<size-1;i++)
    {
    	if(arr[i]!=0&&arr[i]==arr[i+1])
    	{
    		arr[i]=arr[i]*2;
    		arr[i+1]=0;
		}
	}
    i=0;
    j=1;
    while(i<j&&j<size)
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

