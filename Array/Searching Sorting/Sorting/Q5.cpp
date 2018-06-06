#include<iostream>
using namespace std;
int main()
{
	int *arr1 = NULL,*arr2 = NULL, size1, size2, i, k, j;
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
	k = size1-1;
	for(i = size1-1; i >= 0; i--)
	{
		if(arr1[i] != -1)
		{
			arr1[k--] = arr1[i];
		}
	}
	k++;
	i = 0;
	j = 0;
	while(k < size1 && j < size2)
	{
		arr1[i++] = arr1[k] < arr2[j] ? arr1[k++] : arr2[j++];
	}
	while(j < size2)
	{
		arr1[i++] = arr2[j++];
	}
	for( i=0; i < size1; i++)
		cout << arr1[i] << " ";
}
