//Rearrange an array in order - smallest, largest, 2nd smallest, 2nd largest, ..
#include <iostream>
using namespace std;
void merge(int*arr,int s,int mid,int e)
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
		if(a1[i]<a2[j])
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
void ms(int *arr,int s,int e)
{
	if(s==e)
		return;
	int mid=(s+e)/2;
	ms(arr,s,mid);
	ms(arr,mid+1,e);
	merge(arr,s,mid+1,e);
}
int main()
{
    int *arr,size,i,*ans,j,k;
    cout<<"\nEnter the size of array ";
    cin>>size;
    arr=new int[size];
    ans=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    ms(arr,0,size-1);
    i=0;
    j=size-1;
    k=0;
    while(i<=j)
    {
    	ans[k++]=arr[i++];
    	ans[k++]=arr[j--];
	}
    for(i=0;i<size;i++)
        cout<<ans[i]<<" ";
}
