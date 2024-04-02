#include<iostream>
using namespace std;
class Parent {

protected:
    int x;
    int y;
public:
    Parent(int _x=0,int _y=0) {
        x=_x;
        y=_y;
    }
    void setX(int _x) {
        x= x;
    }
    void setY(int _y) {
        y=_y;
    }
    void setParent(int _x,int _y) {
        x=_x;
        y=_y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    virtual void print() {
        cout<<x<<":"<<y;
    }
   virtual int add() {
        return x+y;
    }
    virtual int mult()
    {
       return x*y;
    }

};
class Child:public Parent {
    int z;
public:
    Child(int _x=0,int _y=0,int _z=0):Parent(_x,_y) {
        z=_z;
    }
    void print() {
        Parent::print();
        cout<<":"<<z;
    }
    int add() {
        //  return x+y+z;
        return Parent::add()+z;
    }
    int mult()
    {

       return Parent::mult()*z;
    }
};

class Child2:public Parent {
    int j,a;
public:
    Child2(int _x,int _y,int _j,int _a):Parent(_x,_y) {
        j=_j;
        a=_a;
    }
    void print() {
        Parent::print();
        cout<<":"<<j<<":"<<a;
    }
    int add() {
        //  return x+y+z;
        return Parent::add()+j+a;
    }
    int mult()
    {

       return Parent::mult()*j*a;
    }
};
void myfun(Parent* c) {
    c->print();
}

void myfun2 ( Parent* arr[] , int size){
 int sum=0;
 int i;
 for( i=0 ; i<size ; i++){

    sum+=arr[i]->add();
 }
 cout<<"\n sum is :"<<sum;

}

int myfun3 (Parent* arr[], int size){
 int multi=1;
 int i;
 for( i=0 ; i<size ; i++){

    multi+=arr[i]->mult();
 }
 cout<<"\n mult is: "<< multi;

}
int main()
{

    Parent p1(1,1);
    Child c1(1,1,1);
    Child2 c2(1,1,9,10);
    Parent* arr[3]={&p1,&c1,&c2};
    myfun2(arr,3);

    Parent p2(1,2);
    Child c4(3,4,5);
    Child2 c7(6,7,8,9);
    Parent* arr2[3]={&p2,&c4,&c7};
    cout<<endl;
    p2.print();
    cout<<endl;
    c4.print();
    cout<<endl;
    c7.print();
    myfun3(arr2,3);
    /*myfun(&c2);
    Parent* ptrp=&c1;
    ptrp->print();
    ptrp=&c2;
    ptrp->print();
    */


    /*by ref
     Parent& ptrp2=c1;
     cout<<endl;
     ptrp2.print();*/
    //Child* ptrc=&p1;
//pointer of parent point to obj of parent
    /* Parent p1(10,20);
     Parent* ptrp=&p1;
     ptrp->print();
     cout<<endl<<"---chlid--"<<endl;
     Child c1(20,40,60);
     Child* ptrc=&c1;
     ptrc->print();
     /*Child c1(30,40,50);
     p1=c1;
     p1.print();*/
    return 0;
}
