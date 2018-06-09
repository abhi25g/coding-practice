#include<iostream>
#include<math.h>
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
	int *arr1 = NULL, *arr2 = NULL, size1, size2, i, j, min, diff;
	cout << "\nEnter the size of the array 1 ";
	cin >> size1;
	arr1 = new int[size1];
	cout << "\nEnter the array ";
	for( i=0; i < size1; i++)
		cin >> arr1[i];
	cout << "\nEnter the size of the array 2 ";
	cin >> size2;
	arr2 = new int[size2];
	cout << "\nEnter the array ";
	for( i=0; i < size2; i++)
		cin >> arr2[i];
	ms(arr1,0,size1-1);
	ms(arr2,0,size2-1);
	min = abs(arr1[0]-arr2[0]);
	i = 0;
	j = 0;
	while(i < size1 && j < size2)
	{
		if(arr1[i] < arr2[j])
			i++;
		else
			j++;
		diff = abs(arr1[i] - arr2[j]);
		if(diff < min)
			min = diff;
	}
	cout << "\nThe minimum difference between the two arrays is " << min;
}
