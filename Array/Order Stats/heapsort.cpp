#include <iostream>
using namespace std;
void swap(int *arr,int i1,int i2)
{
	int temp;
	temp=arr[i1];
	arr[i1]=arr[i2];
	arr[i2]=temp;
}
void maxheapify(int *arr,int ind)
{
	int l=2*ind;
	int r=l+1;
	int max=ind;
	if(l<=arr[0]&&arr[ind]<arr[l])
		max=l;
	if(r<=arr[0]&&arr[max]<arr[r])
		max=r;
	if(max!=ind)
	{
		swap(arr,max,ind);
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
void heapsort(int *arr)
{
	makeheap(arr);
	cout<<"\n";
    for(int i=1;i<=arr[0];i++)
        cout<<arr[i]<<" ";
	while(arr[0]>0)
	{
		swap(arr,1,arr[0]);
		arr[0]--;
		maxheapify(arr,1);
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
    heapsort(arr);
    cout<<"\n";
    for(i=1;i<size;i++)
        cout<<arr[i]<<" ";
}
