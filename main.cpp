#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "listtoolshb.h"
#include "listtoolshb.cpp"
#include "MyList.h"
#include "MyList.cpp"
using namespace std;
struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false; }
    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false; }
};
ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}
//define the function below to find a given Profile for which only name is
provided. This function should return
//true or false. If it finds the given name, it should also change the value of the
second parameter as it's
//passed by reference.
bool searchDeque(deque<Profile> &pq, Profile &president){
    if
}
int main() {
    Profile pQueue;
    Profile deque;
    Profile temp;
    string line;
/*this part is just informative. If you wanna practice how sstream and getline
works
    string test = "truck car";
    string token;
    stringstream ss(test);
    getline(ss, token, '\t');
    cout<<token<<endl;
    getline(ss, token, '\t');
    cout<<token<<endl;
*/
    //let's practice file I/O
    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            pQueue//
    }
    cout<<"Printing queue members by using pop and front***********************"<<endl;
//use a while loop by using front and pop function to both empty and print your
    //President profiles.
            cout<<"Printing deque members with iterator***********************"<<endl;
//use an iterator print your President profiles.
    deque<Profile>::iterator dIter;
//use a for loop which works with indices to print your President profiles.
    cout<<"Printing deque members with indices***********************"<<endl;
//Uncomment below to when you have your search function ready

temp.fullname = "Gerald R. Ford";
if(searchDeque(pDeque, temp))
  cout<<"found:"<<temp<<endl;
else
  cout<<"not found: "<<temp<<endl;

    return 0;
}
bool searchDeque( deque<Profile> &pq,   Profile &president)
{
}
