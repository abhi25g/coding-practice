#include<iostream>
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
	int *arr1 = NULL, *arr2 = NULL, size, i, max, min, *hash = NULL, hsize, *temp = NULL, tsize, j = 0, *sol = NULL;
	cout << "\nEnter the size of the array ";
	cin >> size;
	tsize = 2 * size;
	arr1 = new int[size];
	temp = new int[tsize];
	cout << "\nEnter the array 1 ";
	min = 100;
	max = -100;
	for( i=0; i < size; i++)
	{
		cin >> arr1[i];
		temp[j++] = arr1[i];
		if(arr1[i] > max)
			max = arr1[i];
		else if(arr1[i] < min)
			min = arr1[i];
	}
	arr2 = new int[size];
	cout << "\nEnter the array 2 ";
	for( i=0; i < size; i++)
	{
		cin >> arr2[i];
		temp[j++] = arr2[i];
		if(arr2[i] > max)
			max = arr2[i];
		else if(arr2[i] < min)
			min = arr2[i];
	}
	sol = new int[size];
	j=0;
	hsize = max - min + 1;
	hash = new int[hsize];
	for( i=0; i < hsize; i++)
		hash[i] = 0;
	ms(temp, 0, tsize-1);
	for( i=size; i < tsize; i++)
		hash[temp[i]-min]++;
	for( i=0; i < size; i++)
	{
		if(hash[arr2[i]-min])
			sol[j++] = arr2[i];
	}
	for( i=0; i < size; i++)
	{
		if(hash[arr1[i]-min])
			sol[j++] = arr1[i];
	}
	for( i=0; i < size; i++)
		cout<<sol[i]<<" ";
}
