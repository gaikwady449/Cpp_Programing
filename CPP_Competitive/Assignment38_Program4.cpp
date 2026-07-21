// Write generic Program which accept one value and Reverce the value
# include <iostream>
using namespace std;
template <class T>
void Reverse(T arr[],int size)
{
    int i= 0;
    for(i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int i= 0;
    cout << "Original Array: ";
    for(i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";;
    }
    cout << "\nReversed Array: ";
    Reverse(arr,9);
    return 0;
}

