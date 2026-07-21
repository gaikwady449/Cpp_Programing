# include <iostream>
using namespace std;

template <class T>
T Display(T Arr[],int size)
{
    int i=0;
    for(i=0;i<=size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
template <class T>
T Sumation(T Arr[],int size)
{
    int i=0;
    T sum=0.0;
    for(i=0;i<size;i++)
    {
        sum=sum+Arr[i];

    }
    return sum;
}
int main()
{
    double Brr[]={10.2,20.3,30.4,40.5,50.7};
    int crr[]={10,20,30,40,50};

    int Ret=0;

    Display(Brr,5);

    Ret=Summation(Brr,5);

    cout<<"summation of number is:"<<Ret<<endl;

    Display(crr,5);
    cout<<"summation of number is:"<<Ret<<endl;

    return 0;

}