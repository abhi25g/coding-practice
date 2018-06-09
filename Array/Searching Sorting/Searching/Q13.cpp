#include<iostream>
using namespace std;
int main()
{
	int *arr = NULL, size, i, s=0, e, mid, cl=-100, k;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout << "\nEnter the number ";
	cin >> k;
	e = size - 1;
	if( k < arr[0])
		cl = arr[0];
	else if( k > arr[size - 1])
		cl = -100;
	else
	{
		while( s <= e)
		{
			mid = (s + e)/2;
			if(arr[mid] == k)
			{
				cl = arr[mid];
				break;
			}
			else if(arr[mid] > k)
				e = mid - 1;
			else
			{
				if(arr[mid+1] > k)
				{
					cl = arr[mid+1];
					break;
				}
				s = mid + 1;
			}
		}
	}
	cout<<"\nThe ceil of "<<k<<" is "<<cl;
}
