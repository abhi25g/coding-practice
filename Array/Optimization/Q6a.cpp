#include <iostream>
using namespace std;

int step(int*arr,int size,int i)
{
	if(i>=size||arr[i]==0)
		return 1000;
	if(i==size-1)
		return 0;
	int min=1000;
	for(int j=1;j<=arr[i];j++)
	{
		int curr=step(arr,size,i+j);
		if(curr!=1000&&curr+1<min)
			min=curr+1;
	}
	return min;
}

int main()
{
    int *arr=NULL,size,min,i;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    min=step(arr,size,0);
    if(min!=1000)
    	cout<<"\nThe minimum number of step required is "<<min;
    else
    	cout<<"\nNot possible";
}
