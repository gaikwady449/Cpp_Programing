# include <iostream>
using namespace std;
template <class T>
class ArrayX
{
    public:
        T *Arr;
        T size;
        ArrayX(int No);
        ~ArrayX();
        T Accept();
        T Display();
        T Summation();
};
template <class T>
ArrayX<T>::ArrayX(int No)
{
    size=No;
    Arr=new T [size];
}
template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}
template <class T>
T ArrayX<T>::Accept()
{ 
    int i=0;
    cout<<"Enter the element:\n";
    for(i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
}
template <class T>
T ArrayX<T>::Display()
{
    int i=0;
    cout<<"Elements of the Array are:\n";
    for(i=0;i<size;i++)
    {
        cout<<Arr[i]<<"\n";
    }
} 
template <class T>
T ArrayX<T> ::Summation()
{
    int i=0;
    T sum=0;
    cout<<"Elements of the Array are:\n";
    for(i=0;i<size;i++)
    {
        sum=sum+Arr[i];
    }
    return sum;
} 
int main()
{

    ArrayX <int> aobj(5); 
    aobj.Accept(); 
    aobj.Display();


    cout<<"Summation is:"<<aobj.Summation()<<"\n";
    return 0;
}