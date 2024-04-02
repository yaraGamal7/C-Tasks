#include <iostream>

using namespace std;

template <class t1>
void myFun(t1& x, t1& y) {
    t1 temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    myFun<int>(a,b);

    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
