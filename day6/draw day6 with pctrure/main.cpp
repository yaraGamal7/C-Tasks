#include <iostream>
#include <graphics.h>>

using namespace std;
class Point
{
    int x;
    int y;
public:
    /*Point()
    {
        x=y=0;
        cout<<"\n point parameterless ctor";
    }*/
    Point(int _xy)
    {
        x=y=_xy;
        cout<<"\n point one parameter ctor";

    }
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
        cout<<"\n point two parameter ctor";

    }
    void setX(int _x)
    {
        x=_x;
    }
    void sety(int _y)
    {
        y=_y;
    }
    void setPoint(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void print()
    {
        cout<<endl<<"("<<x<<","<<y<<")";
    }
    ~Point()
    {
        cout<<"\n Point Destructor";
    }
};
class shape{

public:
    virtual void draw(){

    }

};

 class Rect : public shape {
    Point ul;
    Point lr;

public:
    Rect():ul(0,0),lr(0,0)
    {
        cout<<"\n Rect parameterless ctor";
    }
    Rect(int x1,int y1,int x2, int y2):ul(x1,y1),lr(x2,y2)
    {

        cout<<"\n Rect parameter ctor";
    }
    void setUl(int x,int y)
    {
        ul.setPoint(x,y);
    }
    void setUl(Point p)
    {
        ul=p;
    }
    void setLr(Point p)
    {
        lr=p;
    }
    void setLr(int x,int y)
    {
        lr.setPoint(x,y);
    }
    Point getUl()
    {
        return ul;
    }
    Point getLr()
    {
        return lr;
    }
    void print()
    {
        ul.print();
        lr.print();
    }
    ~Rect()
    {
        cout<<"\n Rect Destructor";
    }
    void draw(){
    rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
    }

};

class Triangle:public shape{
 Point p1,p2,p3;

public:

    Triangle():p1(0,0),p2(0,0),p3(0,0)
    {
        cout<<"\n tri parameterless ctor";
    }

    Triangle(int x1,int y1,int x2, int y2 ,int x3 ,int y3):p1(x1,y1),p2(x2,y2),p3(x3,y3)
    {

        cout<<"\n tri parameter ctor";
    }

     void setP1(int x , int y){
       p1.setPoint(x,y);
     }

     Point getP1(){
       return p1;
     }
     void setP2(int x , int y){
       p2.setPoint(x,y);
     }
     Point getP2(){
       return p2;
     }
     void setP3(int x , int y){
       p3.setPoint(x,y);
     }
     Point getP3(){
       return p3;
     }
     void setTriangle(int _p1, int _p2, int _p3){
       p1=_p1;
       p2=_p2;
       p3=_p3;
     }
     void print(){
       cout<<"\n first point :";
       p1.print();
       cout<<"\n second point :";
       p2.print();
       cout<<"\n third point :";
       p3.print();
     }

     ~Triangle(){
          cout<<"\n Triangle Destructor";
     }


};

class Circ:public shape {
    Point co;
    int r;
public:
    Circ():co(0,0){
        cout<<"\ncircle parameterless ctor";
    }
    Circ(int _x):co(0,0){
        r=_x;
        cout<<"\n only radius ctor";
    }
    Circ(int x,int y):co(x,y){
        r=5;
        //o.setPoint(x,y);
        cout<<"\n circle two data intake ctor";

    }
    Circ(int _x,int x,int y):co(x,y){
        r=_x;
        //o.setPoint(x,y);
        cout<<"\n circle all data intake ctor";

    }

    void setR(int _x){       //set radius
        r=_x;
    }
    void setCO(int x,int y){  //set origin from x,y
        co.setPoint(x,y);
    }
    void setCO(Point p){     //set origin from Point
        co=p;
    }
    int getR(){
        return r;
    }
    Point getCO(){
        return co;
    }
    void print(){
        cout<<" \n radius is = "<<r;
        co.print();
    }
    ~Circ(){
        cout<<"\n Circle Destructor";
    }
    void draw(){

    circle(co.getX(),co.getY(),r);
    }

};

void myDraw2(shape *s);

int main()
{

    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");


    Rect r1(10,20,50,60);
    Circ c1(100,100,50);
    myDraw2(&r1);
    myDraw2(&c1);

    getch();
    closegraph();
    return 0;
}
void myDraw2(shape *s){
    s->draw();
}


