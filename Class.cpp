#include <iostream>
using namespace std;

class Robot{
    public: Robot(){
        cout << "The robot class is Initialized" << endl;
        // methods Delcaration
        method1();
        method2();
    };
    // methods Definition
    void method1(){cout << "This is method1"<< endl ;}
    void method2(){cout << "This is method2"<< endl ;}
    void method3(){cout << "This is method3 without declaration" <<endl ;}

};
int main(){
    Robot object1;
    object1.method3();

    // since when a object is created , the methods declared in the class constructor is provoked automatically.

};