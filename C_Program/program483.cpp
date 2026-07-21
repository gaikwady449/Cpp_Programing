# include <iostream>
using namespace std;

void Display(double Arr[],int size)
{
    int i=0;
    for(i=0;i<=size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

double Summation(double Arr[],int size)
{
    int i=0;
    double sum=0.0;
    for(i=0;i<size;i++)
    {
        sum=sum+Arr[i];

    }
    return sum;
}
int main()
{
    double Brr[]={10.2,20.3,30.4,40.5,50.7};

    double Ret=0;

    Display(Brr,5);

    Ret=Summation(Brr,5);

    cout<<"summation of number is:"<<Ret<<endl;

    return 0;

}