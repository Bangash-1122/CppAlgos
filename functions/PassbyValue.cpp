#include <iostream>

// Pass by value example
using namespace std;

void changeX(int x) {
    x = 2*x;
    cout << "* =" << x << endl;
}

int main(){
    int x = 5;
    cout << "x =" << x << endl;
    changeX(x);
    cout << "x =" << x << endl;

    return 0;
}

//outpot first value is
//x =10
//x =5