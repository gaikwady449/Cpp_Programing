// Write Generic Program to accept N Values from ser and Return addition of that Value
# include <iostream>
using namespace std;
template<class T>
T Add(T Arr[],int Size)
{
    int i=0;
    T Sum=0;
    for(i=1;i<Size;i++)
    {
        Sum=Sum+Arr[i];

    }
    return Sum;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.3f,3.7f,9.8f,8.7f};
    int iSum=Add(arr,5);

    cout<<"Sum of Number is:"<<iSum<<endl;

    float fSum=Add(brr,4);
    cout<<"Sum of Number is:"<<fSum<<endl;

    return 0;
}