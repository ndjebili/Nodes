#include <iostream>
#include "listtoolshb.h"
#include "listtoolshb.cpp"

using namespace std;


struct Profile
{
    string fullname;
    string state;
    bool operator==(Profile rhs)
    {if (fullname==rhs.fullname)return true; return false;}

    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false;}

};

ostream& operator<< (ostream &out, Profile &user)
{
    out<<user.fullname<<"--"<<user.state;
    return out;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
