//Order defined by another array
#include <iostream>
using namespace std;

int main()
{
    int *arr=NULL,size,i,*hash=NULL,min,max,hsize,*order=NULL,osize,k=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter the size of the ordering array ";
    cin>>osize;
    order=new int[osize];
    cout<<"\nEnter the ordering array ";
    for(i=0;i<osize;i++)
    {
		cin>>order[i];
	}
    min=arr[0];
    max=arr[0];
    for(i=1;i<size;i++)
    {
    	if(arr[i]>max)
    		max=arr[i];
    	else if(arr[i]<min)
    		min=arr[i];
	}
	hsize=max-min+1;
	hash=new int[hsize];
    for(i=0;i<hsize;i++)
        hash[i]=0;
    for(i=0;i<size;i++)
    {
    	hash[arr[i]-min]++;
	}
	for(i=0;i<osize;i++)
	{
		while(hash[order[i]-min]>0)
		{
			arr[k++]=order[i];
			hash[order[i]-min]--;
		}
	}
	for(i=0;i<hsize;i++)
	{
		while(hash[i]>0)
		{
			arr[k++]=i+min;
			hash[i]--;
		}
	}
	cout<<"\n";
	for(i=0;i<k;i++)
        cout<<arr[i]<<" ";
}
