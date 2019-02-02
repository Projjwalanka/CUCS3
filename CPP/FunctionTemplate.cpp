#include<iostream>

using namespace std;

template<class T>
void bubble(T arr[20],int n)
{
    T temp;
    for( int i=0; i<n; i++)
        {
        for( int j=0; j<n-1-i; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
}

int main()
{
    int n,arr[20];
    cout<<"Enter the range:- "<<endl;
    cin>>n;
    for( int i=0; i<n; i++)
    {
        cout<<"Enter the elements:- "<<endl;
        cin>>arr[i];
    }
    bubble(arr,n);
    cout<<"The sorted array is:-"<<endl;
    for( int i=0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
