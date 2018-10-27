//Bubble Sort using Template

#include<iostream>
using namespace std;

template <class T>
void bubble_sort(int size,T arr[])
{
	T temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{
	int size;
	cout<<"Enter the range"<<endl;
	cin>>size;
	float arr[size];
	for(int i=0;i<size;i++)
	{
			cout<<"Enter ith element:"<<endl;
			cin>>arr[i];
	}
	bubble_sort(size,arr);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
