# include<iostream>
using namespace std;

# pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;
    // parameterise constructor
    ArrayX(int x)
    {
        cout<<"inside Constructor \n";
        iSize=x;                    // charectoristic initilization 
        Arr=new int(iSize);         // resourcr allocation

    }

    // Destructor 
    ~ArrayX()
    {
        cout<<"inside Destructor\n";
        delete []Arr;                     // resource deallocation
    }
};
int main()
{
    ArrayX aobj1(5);           

    return 0;
}

