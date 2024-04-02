#include <iostream>

using namespace std;
int swapFun(int& a , int& b);

int main()
{
    int x=10;
    int y=30;
    swapFun(x,y);
    cout <<"x:"<<x<< endl <<"y:" <<y;


}

int swapFun(int& a , int& b){

 int temp;
 temp=a;
 a=b;
 b=temp;

}
