//segregate even and odd elements
#include<iostream>
using namespace std;
int main()
{
	int *arr,size,temp,b,e;
	cout<<"\nEnter the size of the array ";
	cin>>size;
	arr=new int[size];
	cout<<"\nEnter the array ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	b=0;
	e=size-1;
	while(b<e)
	{
		while(arr[b]%2==0)
			b++;
		while(arr[e]%2!=0)
			e--;
		if(b<e)
		{
			temp=arr[b];
			arr[b]=arr[e];
			arr[e]=temp;
		}
	}
	cout<<"\nThe array is ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
