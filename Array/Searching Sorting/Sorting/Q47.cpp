#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int *arr = NULL, size, i, cc, count=0, k;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout << "\nEnter k ";
	cin >> k;
	for( i=1; i < size; i++)
	{
		if(arr[i] > arr[i-1])
		{
			cc = ceil(abs(arr[i]-arr[i-1])/(float)k);
			arr[i] -= k*cc;
			count += cc;
		}
		for(int j=0;j<size;j++)
			cout<<arr[j]<<" ";
		cout<<"\n";
	}
	cout << "\nThe number of operations is " << count;
}
