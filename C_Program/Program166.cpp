# include<iostream>
using namespace std;

# pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
    ArrayX()
    {
        iSize=5;                    // charectoristic initilization 
        Arr=new int(iSize);         // resourcr allocation

    }
    ArrayX(int x)
    {
        iSize=x;                    
        Arr=new int(iSize);         

    }

    ~ArrayX()
    {
        delete []Arr;                     // resource deallocation
    }
};
int main()
{        
    ArrayX *aobj1=new ArrayX();           // Defoult constructor
    ArrayX *aobj2=new ArrayX(5);          // parameterise constructor 
    
    // Logic (Funtion calls )
    
    delete aobj1;
    delete aobj2;
    return 0;
}

