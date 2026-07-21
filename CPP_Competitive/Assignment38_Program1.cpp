// Write generic Program which accept one value and one number from user 
// And print Value that number of times on screen
# include <iostream>
using namespace std;
template <class T>
void Display(T Value,int size)
{
    int i= 0;
    for(i=1;i<size;i++)
    {
        cout<<Value;
    }
}
int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}

