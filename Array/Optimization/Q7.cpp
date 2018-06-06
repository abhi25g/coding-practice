#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,j,*msis=NULL,max=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    msis=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
    	msis[i]=arr[i];
	}
	msis[0]=arr[0];
	for(i=1;i<size;i++)
	{
		max=0;
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&msis[j]>max)
				max=msis[j];
		}
		msis[i]+=max;
	}
	max=0;
	for(i=0;i<size;i++)
	{
		if(max<msis[i])
			max=msis[i];
	}
	cout<<"\nThe maximum subarray increasing sum is "<<max;
}
