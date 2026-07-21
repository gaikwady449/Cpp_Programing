# include<iostream>
using namespace std;

# pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;
    // defoult      Constructor
    ArrayX()
    {

    }
    // parameterise constructor
    ArrayX(int x)
    {

    }

};
int main()
{
    ArrayX aobj1;            // defoult 

    ArrayX aobj2(5);         // parameterise


    cout<<sizeof(aobj1)<<endl; // 16 bytes


    return 0;
}

