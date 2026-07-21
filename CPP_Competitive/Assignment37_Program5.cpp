// Write Generic Program to accept N Values from and return Smallest values 
# include <iostream>
using namespace std;
template<class T>
T Max(T Arr[],int Size)
{
    int i=0;
    T MinValue=Arr[0];
    for(i=1;i<Size;i++)
    {
        if(Arr[i] < MinValue)
        {
            MinValue=Arr[i];
        }
    }
    return MinValue;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.3f,3.7f,9.8f,8.7f};
    int iSum=Max(arr,5);

    cout<<"Sum of Number is:"<<iSum<<endl;

    float fSum=Max(brr,4);
    cout<<"Sum of Number is:"<<fSum<<endl;

    return 0;
}