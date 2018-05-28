//Reorder an array according to given indexes
#include <iostream>
using namespace std;

int main()
{
    int *arr,*ind,size,i,x,y;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    ind=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter the indexes ";
    for(i=0;i<size;i++)
        cin>>ind[i];
    for(i=0;i<size;i++)
    {
    	while(ind[i]!=i)
    	{
    		x=ind[i];
    		y=arr[i];
    		arr[i]=arr[x];
    		ind[i]=ind[x];
    		arr[x]=y;
    		ind[x]=x;
		}
	}
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    for(i=0;i<size;i++)
        cout<<ind[i]<<" ";
}
