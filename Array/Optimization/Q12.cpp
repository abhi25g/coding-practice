#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,j,count=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    i=0;
    j=size-1;
    while(i<j)
    {
    	if(arr[i]==arr[j])
    	{
    		i++;
    		j--;
		}
		else if(arr[i]<arr[j])
		{
			arr[i+1]+=arr[i];
			i++;
			count++;
		}
		else
		{
			arr[j-1]+=arr[j];
			j--;
			count++;
		}
	}
	cout<<"\nThe minimum number of merge operations is "<<count;
}
