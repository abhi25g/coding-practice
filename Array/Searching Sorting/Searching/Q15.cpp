#include <iostream>
using namespace std;

int first(int *arr, int size, int key)
{
	int s=0,e=size-1,mid;
	while( s <= e)
	{
		mid = (s + e)/2;
		if(arr[mid] == key && (mid==0 || arr[mid-1] != key ))
		{
			return mid;
		}
		else if(arr[mid] >= key)
			e = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}
int last(int *arr, int size, int key)
{
	int s=0,e=size-1,mid;
	while( s <= e)
	{
		mid = (s + e)/2;
		if(arr[mid] == key && (mid==size-1 || arr[mid+1] != key ))
		{
			return mid;
		}
		else if(arr[mid] > key)
			e = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}
int main()
{
    int *arr,size,i,key,f,l,count;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter the number ";
    cin>>key;
    f=first(arr,size,key);
    l=last(arr,size,key);
    count=l-f+1;
    if(count<size/2)
    	cout<<"\nNot majority element";
    else
    	cout<<"\n"<<key<<" is majority element";
    	
}
