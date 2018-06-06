#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,sum=0,s,min,start=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter the sum ";
    cin>>s;
    i=0;
    min=size+1;
	while(i<size)
	{
		while(sum<=s&&i<size)
		{
			sum+=arr[i];
			i++;
		}
		while(sum>s&&start<size)
		{
			if(i-start<min)
				min=i-start;
			sum-=arr[start];
			start++;
		}
	}
	if(min!=100)
		cout<<"\nThe minimum length subarray with sum "<<s<<" is "<<min;
	else
		cout<<"\nNot possible";
}
