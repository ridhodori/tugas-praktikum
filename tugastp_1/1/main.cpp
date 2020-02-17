#include "hello.h"

int main(){
    cout<<"test procedure greeting"<<endl;
    string name = "RIDHO NOBELINO S";
    string id = "1301194245";
    greetings(name, id);

    cout<<"please answer Queastion"<<endl<<endl;

    cout<<"test procedure swap_1 and swap 2"<<endl;

    int a = 15;
    int b = 40;
    int c = 75;
    swap_1(a,b,c);
    cout<<"a ="<<a<<", b ="<<b<<", c ="<<c<<endl;
    a = 15;
    b = 30;
    c = 75;
    swap_2(a,b,c);
    cout<<"a ="<<a<<", b ="<<b<<", c ="<<c<<endl;
    cout<<"please answer queastion 2"<<endl<<endl;

    cout<<"test procedure confused"<<endl;
    confused();
    cout<<"please answer queastion3"<<endl<<endl;

    cout<<"test procedure remove inside"<<endl;
    remove_inside(5);
    cout<<"please answer queastion4"<<endl<<endl;

    cout<<"test procedure indexing "<<endl;
    cout<<"example 1 : "<<indexing(70,75,60)<<endl;
    cout<<"example 2 : "<<indexing(45,75,50)<<endl;
    cout<<"example 3 : "<<indexing(75,80,82)<<endl;
    cout<<"please answer quetion number 5"<<endl<<endl;

    return 0;
}
