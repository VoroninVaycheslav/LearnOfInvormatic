#include <iostream>

using namespace std;

int main()
{
    bool a,b,c;
    cin>>a,b,c;
    
    cout<< Ecvivalent(Implication(Kanykcia(Inversiya(b),a),c),a);

    return 0;
}
bool Inversiya(bool flag)
{
    return !flag;
}
bool Disunkc(bool flag1, bool flag2)
{
    if(flag1 != false || flag2 != false)
        return true;
    else
        return false;
}
bool Kanykcia(bool flag1, bool flag2)
{
    if(flag1 == true && flag2 == true)
        return true;
    else
        return false;
}
bool Implication(bool flag1, bool flag2)
{
    if(flag1 == true && flag2 == false)
        return false;
    else
        return true;
}
bool Ecvivalent(bool flag1, bool flag2)
{
    if((flag1 == true && flag2 == true)||(flag1 == false && flag2 == false))
        return false;
    else
        return true;
}