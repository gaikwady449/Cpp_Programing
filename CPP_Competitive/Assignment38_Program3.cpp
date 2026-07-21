// Write generic Program which accept one value and and search first occurance of any specific value 
# include <iostream>
using namespace std;
template <class T>
int  SearchFirst(T arr[],int size,T No)
{
    int i= 0;
    int iCount=0;
    for(i=1;i<size;i++)
    {
        if(arr[i] == No)
        {
            break;
        }
        iCount++;
    }
    return iCount;
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchFirst(arr,9,40);

    cout<<"First occurance of number is "<<iRet<<endl;
    return 0;
}

