#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,min=1000,x,y,ind;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter x and y ";
    cin>>x>>y;
    for(i=0;i<size&&arr[i]!=x&&arr[i]!=y;i++);
    ind=i;
    for(++i;i<size;i++)
    {
    	if(arr[i]==x||arr[i]==y)
    	{
    		if(arr[i]!=arr[ind])
    		{
    			if(i-ind<min)
    			min=i-ind;
			}
			ind=i;
		}
	}
	if(min!=1000)
		cout<<"\nThe minimum distance between "<<x<<" and "<<y<<" is "<<min;
	else
		cout<<"\nBoth the elements are not present in array";
}
