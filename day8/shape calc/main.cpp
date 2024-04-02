#include <iostream>

using namespace std;
class Shape{
protected:
    int dim1;
    int dim2;
public:
    Shape(int _dim1=1 , int _dim2=1){

        dim1=_dim1;
        dim2=_dim2;
    }

    virtual float calacArea()= 0;
    void setDim1(int _dim1){
        dim1=_dim1;
        }
    void setDim2(int _dim2){
        dim2=_dim2;
        }
    int getDim1 (){
        return dim1;
        }
    int getDim2 (){
        return dim2;
        }
    void print(){cout<<"\n"<<"Dim1="<<dim1<<"Dim2="<<dim2;}

};
class Rect : public Shape{

public:
    Rect(int _dim1=1 , int _dim2=1):Shape (_dim1 ,_dim2){

    }
     float calacArea(){
      return dim1*dim2;
     }

};
class Tri : public Shape{

public:
    Tri(int _dim1=1 , int _dim2=1):Shape (_dim1 ,_dim2){}
     float calacArea(){
      return dim1*dim2;
     }

};
class seq : public Shape{

public:

    seq (int _dim1  =1):Shape (_dim1 ,_dim1){}
     //constractor
    //seq(int _dim2=1):Shape (_dim1 ,_dim2){dim1 = dim2=_dim2;}// constractor
   void setDim1(int _dim1=1)
    {
        dim1 = dim2= _dim1;
    }
    void setDim2(int _dim2=1)
    {
        dim1 = dim2= _dim2;
    }

     float calacArea(){
      return 0.5* dim1*dim1;
     }
     void print(){
      Shape::print();
     }

};
int main()
{
    Tri t1 (20,10);
   cout<<t1.calacArea()<<endl;
    seq s1(10);
    cout<<s1.calacArea()<<endl;
    Rect r1 (20,10);
    cout<<r1.calacArea()<<endl;

    Shape* ptrs =&t1;
    ptrs->print();

    Shape* ptrss =&s1;
    ptrss->print();





    return 0;
}
