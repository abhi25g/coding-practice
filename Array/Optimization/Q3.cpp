#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,min=1000,curr=0,k,s=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter k ";
    cin>>k;
    for(i=0;i<k;i++)
    {
    	curr+=arr[i];
	}
	min=curr;
	for(;i<size;i++)
	{
		curr+=(arr[i]-arr[i-k]);
		if(curr<min)
		{
			min=curr;
			s=i-k+1;
		}
	}
	cout<<"\nThe minimum average subarray is from "<<s<<" to "<<s+k-1;
}
