//Replace every array element by multiplication of previous and next
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int *arr,size,i,curr,mult;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    if(size==1)
    {	getch();
    	return 0;
	}
    curr=arr[0];
    arr[0]=arr[0]*arr[1];
    for(i=1;i<size-1;i++)
    {
    	mult=curr*arr[i+1];
    	curr=arr[i];
    	arr[i]=mult;
	}
	arr[size-1]=arr[size-1]*curr;
	cout<<"\n";//
	for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
