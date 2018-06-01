//Three way partitioning of an array
#include <iostream>
using namespace std;
void swap(int *arr, int i1,int i2)
{
	int temp=arr[i2];
	arr[i2]=arr[i1];
	arr[i1]=temp;
}
int main()
{
    int *arr,size,i,lval,hval,low,mid,high;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter low and high ";
    cin>>lval>>hval;
    low=-1;
    mid=0;
    high=size;
    while(mid<high)
    {
    	if(arr[mid]<lval)
    	{
    		swap(arr,++low,mid++);
		}
		else if(arr[mid]>hval)
		{
			swap(arr,mid,--high);
		}
		else
			mid++;
	}
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
