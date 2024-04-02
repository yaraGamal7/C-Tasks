#include <iostream>

using namespace std;

class Complex{
int real;
int img;
static int n;
public:

    Complex(int _real=0,int _img=0){
    real=_real;
    img = _img;
    n++;

    cout<<" two parameter const \n";
    }
    static int getCounter(){
    return n;
    }
    void setReal(int _real){
        real=_real;
    }
    int getReal(){
        return real;
    }
    void setImg(int _img){
        img = _img;
    }
    int getImg(){
        return img;
    }
    void Print(){
        if(real>0)
            cout<<real<<"+"<<img<<"j"<<endl;
        else if (img==0)
            cout<<real;
        else
            cout<<real<<"-"<<img<<"j";
    }

    ~Complex()
    {
        n--;
        cout<<"out constructor "<<endl;
    }

    Complex add(Complex c){
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }


};
int Complex :: n=0;

void myfun(Complex &c){
    Complex c4(10,20);
    cout<<Complex::getCounter()<<endl;
}


int main()
{

cout<<Complex::getCounter()<<endl;
    Complex c2(20);
    Complex c1(10,20);
    Complex c3(10,20);
    myfun(c1);
    cout<<Complex::getCounter()<<endl;

    return 0;
}
