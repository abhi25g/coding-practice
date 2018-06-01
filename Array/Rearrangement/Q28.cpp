//Find a sorted subsequence of size 3 in linear time
#include <iostream>
using namespace std;

int main()
{
    int *arr,size,i,*smaller,*greater,min,minin,max,maxin;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    smaller=new int[size];
    greater=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
    	smaller[i]=-1;
    	greater[i]=-1;
	}
    min=arr[0];
    minin=0;
    for(i=1;i<size;i++)
    {
    	if(min<arr[i])
    	{
    		smaller[i]=minin;
		}
		else
		{
			min=arr[i];
			minin=i;
		}
	}
	max=arr[size-1];
	maxin=size-1;
	for(i=size-1;i>=0;i--)
    {
    	if(max>arr[i])
    	{
    		greater[i]=maxin;
		}
		else
		{
			max=arr[i];
			maxin=i;
		}
	}
    for(i=0;i<size;i++)
    {
    	if(smaller[i]>-1&&greater[i]>-1)
    	{
    		cout<<arr[smaller[i]]<<" ";
    		cout<<arr[i]<<" ";
    		cout<<arr[greater[i]];
    		break;
		}
	}
	if(i==size)
	{
		cout<<"\nNo sorted subsequence of size 3";
	}
}
