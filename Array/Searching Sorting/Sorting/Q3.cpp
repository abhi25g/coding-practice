#include <iostream>
#include<math.h>
using namespace std;
void merge(int*arr,int s,int mid,int e,int x)
{
	int n1,n2,*a1,*a2,i,j,k;
	n1=mid-s;
	n2=e-mid+1;
	a1=new int[n1];
	a2=new int[n2];
	i=s;
	while(i<mid)
	{
		a1[i-s]=arr[i];
		i++;
	}
	while(i<=e)
	{
		a2[i-mid]=arr[i];
		i++;
	}
	k=s;
	i=0;
	j=0;
	while(i<n1&&j<n2)
	{
		if(abs(x-a1[i])<abs(x-a2[j]))
			arr[k++]=a1[i++];
		else
			arr[k++]=a2[j++];
	}
	while(i<n1)
	{
		arr[k++]=a1[i++];
	}
	while(j<n2)
	{
		arr[k++]=a2[j++];
	}
}
void ms(int *arr,int s,int e,int x)
{
	if(s==e)
		return;
	int mid=(s+e)/2;
	ms(arr,s,mid,x);
	ms(arr,mid+1,e,x);
	merge(arr,s,mid+1,e,x);
}
int main()
{
    int *arr,size,i,x;
    cout<<"\nEnter the size of array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"\nEnter the number x ";
    cin>>x;
    ms(arr,0,size-1,x);
    cout<<"\nThe sorted array is ";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
