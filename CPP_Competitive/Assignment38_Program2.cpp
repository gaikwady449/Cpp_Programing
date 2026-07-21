// Write generic Program which accept one value and one number from user 
// And print Value that number of times on screen
# include <iostream>
using namespace std;
template <class T>
int  Frequency(T arr[],int size,T No)
{
    int i= 0;

    int iCount=0;
    for(i=0;i<=size;i++)
    {
        if(arr[i] == No)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=Frequency(arr,9,10);

    cout<<"Frequency of that number is "<<iRet<<endl;

    return 0;
}

