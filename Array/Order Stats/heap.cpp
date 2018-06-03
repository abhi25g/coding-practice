#include <iostream>
using namespace std;
void maxheapify(int *arr,int ind)
{
	int l=2*ind;
	int r=l+1;
	int max=ind;
	int temp;
	if(l<=arr[0]&&arr[ind]<arr[l])
		max=l;
	if(r<=arr[0]&&arr[max]<arr[r])
		max=r;
	if(max!=ind)
	{
		temp=arr[ind];
		arr[ind]=arr[max];
		arr[max]=temp;
		maxheapify(arr,max);
	}
}
void  makeheap(int *arr)
{
	int i;
	for(i=arr[0]/2;i>0;i--)
	{
		maxheapify(arr,i);
	}
}
int main()
{
    int *arr,size,i,j,temp;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    size++;
    arr=new int[size];
    arr[0]=size-1;
    cout<<"\nEnter the array ";
    for(i=1;i<size;i++)
        cin>>arr[i];
    makeheap(arr);
    cout<<"\n";
    for(i=1;i<size;i++)
        cout<<arr[i]<<" ";
}
