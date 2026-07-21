# include <iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int size;
        ArrayX(int No)
        {
            size=No;
            Arr=new T [size];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        T Accept()
        {
            int i=0;
            cout<<"Enter the element:\n";
            for(i=0;i<size;i++)
            {
                cin>>Arr[i];
            }
        }
        T Display()
        {
            T i=0;
            cout<<"Elements of the Array are:\n";
            for(i=0;i<size;i++)
            {
                cout<<Arr[i]<<"\n";
            }
        } 
        T Summation()
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
};
int main()
{

    ArrayX <float> aobj(5); 
    aobj.Accept(); 
    aobj.Display();


    cout<<"Summation is:"<<aobj.Summation()<<"\n";
    return 0;
}