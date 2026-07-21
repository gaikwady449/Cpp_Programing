# include<iostream>
using namespace std;

# pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
    public:
    // parametrise constructor with defoult value
    ArrayX(int x=5)
    {
        iSize=x;                    
        Arr=new int(iSize);         

    }
    ~ArrayX()
    {
        delete []Arr;                     // resource deallocation
    }
    void Accept()
    {
        int iCnt=0;
        cout<<"Enter the elements\n";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        int iCnt=0;
        cout<<"Elementsof the Array are:\n";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<endl;
        }
    }
};
int main()
{        
    ArrayX *aobj=NULL;
    int iLength=0;
    cout<<"Enter the number of element :\n";
    cin>>iLength;

    aobj=new ArrayX(iLength);
    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}

