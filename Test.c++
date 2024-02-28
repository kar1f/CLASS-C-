//Author:MD KARIF HASAN
#include "iostream"

using namespace std;
class test
{
public:int regno;
    void login();
};
void test::login() {
    cout<<"\n enter reg no to login";
    cin>>regno;

}
int main(){
    test u1,u2;
    u1.login();
    u2.login();

}
