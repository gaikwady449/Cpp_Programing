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
    
    delete aobj1;
    return 0;
}

