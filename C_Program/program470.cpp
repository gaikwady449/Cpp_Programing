# include <iostream>
using namespace std;

float Addition(float No1,float No2)
{
   float Ans;

    Ans= No1 + No2;
    return Ans;

}
int main()
{
    float Value1=10.0f;
    float Value2=11.2f;
    float Ret=0;

    Ret=Addition(Value1,Value2);

    cout<<"Addition is :"<<Ret<<"\n";
    return 0;
}