#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,max=0,curr=0,sum=0,maxn=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
    	sum+=arr[i];
	}
    for(i=0;i<size;i++)
    {
    	curr+=arr[i];
    	if(curr<0)
    		curr=0;
    	else if(max<curr)
    		max=curr;
	}
	for(i=0;i<size;i++)
    {
    	arr[i]*=-1;
	}
	curr=0;
	for(i=0;i<size;i++)
    {
    	curr+=arr[i];
    	if(curr<0)
    		curr=0;
    	else if(maxn<curr)
    		maxn=curr;
	}
	max=max>sum+maxn?max:sum+maxn;
	cout<<"\nThe maximum subarray sum is "<<max;
}
