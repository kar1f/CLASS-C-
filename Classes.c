//Author:MD KARIF HASAN
#include "iostream"

using namespace std;
class A
{
public:
    void display(){
        cout<<"Base class A content.";
    }
};
class B: public A
{

};
int main (){
    B obj;
    obj.display();
}
