# include <iostream>
using namespace std;
template<class T>
T Addition(T No1,T No2)
{
    T Ans;

    Ans= No1 + No2;
    return Ans;
}
int main()
{
    cout<<Addition(11,10)<<"\n";
    cout<<Addition(11.2f,10.5f)<<"\n";
    cout<<Addition(11.2,10.4)<<"\n";
    return 0;
}