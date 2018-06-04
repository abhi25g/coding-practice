//subarray with equal 0s and 1s
#include <iostream>
using namespace std;

int main()
{
    int *arr=NULL,size,i,val,temp,*sum=NULL,*hash=NULL,len=-1,max,min,hsize;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    sum=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    sum[0]=arr[0];
    for(i=1;i<size;i++)
    {
    	if(arr[i]==0)
			sum[i]=sum[i-1]-1;
		else
			sum[i]=sum[i-1]+1;
	}
	for(i=size-1;i>=0;i--)
	{
		if(sum[i]==0)
		{
			len=i+1;
			break;
		}
	}
	min=sum[0];
	max=sum[0];
	for(i=1;i<size;i++)
	{
		if(sum[i]>max)
			max=sum[i];
		else if(sum[i]<min)
			min=sum[i];
	}	
	hsize=max-min+1;
	hash=new int[hsize];
	for(i=0;i<hsize;i++)
		hash[i]=-1;
	for(i=0;i<size;i++)
	{
		if(hash[sum[i]-min]==-1)
			hash[sum[i]-min]=i;
		else if(i-hash[sum[i]-min]>len)
			len=i-hash[sum[i]-min];
	}
	if(len<0)
		cout<<"\nNo such subarray";
	else
		cout<<"\nThe length of longest subarray with equal 0s and 1s is "<<len;
}
