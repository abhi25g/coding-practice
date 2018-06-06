#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,zero=0,count=0;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    while(1)
    {
    	for(i=0;i<size;i++)
    	{
    		if(arr[i]%2!=0)
    		{
    			arr[i]--;
    			if(arr[i]==0)
					zero++;
				count++;
			}
		}
		if(zero==size)
			break;
		for(i=0;i<size;i++)
		{
			arr[i]/=2;
		}
		count++;
	}
	cout<<"\nThe minimum number of operations is "<<count;
}
