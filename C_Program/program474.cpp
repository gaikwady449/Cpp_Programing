# include <iostream>
using namespace std;


int Maximum(int No1,int No2)
{
    if(No1 > No2 )
    {
        return No1;
    }
    else
    {
        return No2;
    }
}
int main()
{
    int Value1=11;
    int Value2=10;

    int Ret=0;

    Maximum(Value1,Value2);

    cout<<"maximum number is :"<<Ret<<endl;

}