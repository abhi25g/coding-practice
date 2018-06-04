//arr[i]=j if arr[j]=i
#include <iostream>
using namespace std;

int main()
{
    int *arr=NULL,size,i,val,temp;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
    {
    	arr[arr[i]%size]+=i*size;
	}
	for(i=0;i<size;i++)
    {
    	arr[i]/=size;
	}
	for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
