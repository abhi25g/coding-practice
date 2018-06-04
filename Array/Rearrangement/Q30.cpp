#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,temp,i,max=1,maxp=1,min=1;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>0)
		{
			max*=arr[i];
			min=min*arr[i]<1?min*arr[i]:1;
		}
		else if(arr[i]==0)
		{
			min=1;
			max=1;
		}
		else
		{
			temp=max;
			max=min*arr[i];
			min=temp*arr[i];
		}
		if(max>maxp)
		{
			maxp=max;
		}
	}
	cout<<"\nThe maximum subarray product is "<<maxp;
}
