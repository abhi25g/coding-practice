//arr[i]=j if arr[j]=i
#include <iostream>
using namespace std;

int main()
{
    int *arr=NULL,size,i,val
	,temp;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    i=arr[0];
    val=0;
    while(i!=0)
    {
    	temp=arr[i];
    	arr[i]=val;
    	val=i;
    	i=temp;
	}
	arr[0]=val;
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
