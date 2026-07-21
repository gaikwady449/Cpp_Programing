# include<iostream>
using namespace std;

# pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
    ArrayX(int x)
    {
        iSize=x;                    // charectoristic initilization 
        Arr=new int(iSize);         // resourcr allocation

    }

    // Destructor 
    ~ArrayX()
    {
        delete []Arr;                     // resource deallocation
    }
};
int main()
{        
    ArrayX *aobj1=new ArrayX(5);
    
    // Logic (Funtion calls )

    aobj1->iSize=0;
    aobj1->Arr=NULL;       // issue

    cout<<aobj1->iSize<<"\n";
    delete aobj1;


    return 0;
}

