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
int main()
{
    double Brr[]={10.2,20,3,30.4,40.5,50.7};

    Display(Brr,5);

    return 0;

}