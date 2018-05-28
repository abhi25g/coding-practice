//Minimum swaps required to bring all elements less than or equal to k together
#include <iostream>
using namespace std;
int main()
{
    int *arr,size,i,k,count=0,min,swap=0;
    cout<<"\nEnter the size of array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter k ";
    cin>>k;
    for(i=0;i<size;i++)
    {
    	if(arr[i]<=k)
    		count++;
	}
	for(i=0;i<count;i++)
	{
		if(arr[i]>k)
			swap++;
	}
	min=swap;
	for(i=count;i<size;i++)
	{
		if(arr[i]>k&&arr[i-count]<=k)
			swap++;
		else if(arr[i]<=k&&arr[i-count]>k)
			swap--;
		if(swap<min)
			min=swap;
	}
    cout<<"\nThe minimum number of swaps is "<<min;
}
