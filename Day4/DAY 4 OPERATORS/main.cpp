#include <iostream>

using namespace std;
class Complex{
 int real;
 int img;

 public:
     Complex(){
     real=0;
     img=0;
     cout<<"defult const \n";
     }
     Complex (Complex const& c){ // copy contll
      real=c.real;
      img=c.img;
      cout<<"copy const \n";
     }
     Complex(int _real){
     real=_real;
     img=0;
     cout<<"one const \n";

     }

     Complex(int _real , int _img){
     real=_real;
     img=_img;
     cout<<"two const \n ";

     }

     int setReal (int _real){
      real=_real;
     }
     int setImg (int _img){
      img=_img;
     }

     int getReal (){
      return real;
     }

     int getImg (){
      return img;
     }

     void print (){

     if (img>0)
        {
        cout<<real << "+"<<img <<"j"<<endl;
        }
     else if (img<0)
        {
         cout<<real <<img <<"j"<<endl;
        }else{
         cout<<real<<endl;
        }

     }

     Complex add (Complex const &c){ // complex + complex
      Complex res;
      res.real=real+c.real;
      res.img=img+c.img;
      return res;
      cout<<"add complex member function \n";

     }
      Complex operator+ (Complex const &c){ // c1+c2+c3
      Complex res;
      res.real=real+c.real;
      res.img=img+c.img;
      return res;
      cout<<"operator complex c1+c2 function \n";
      }

   Complex operator+ (int x){ // c2 +3
    Complex res;
    res.real=real+x;
    res.img= img;
    return res;
    cout<<"operator int c2+3 function \n";

   }

  friend Complex operator+ (int left, Complex right); // 3 + c2



  Complex operator+=(Complex const &c){
   real= real + c.real;
   img = img + c.img;
   return *this;
   cout<<"operator int c7=+=c2 function \n";
  }

  int operator== (Complex c){
   if (real == c.real && img == c.img)
     return 1;
   else
     return 0;
     cout<<"operator int c2+3 function \n";

  }

   int operator!= (Complex c){
   if (real == c.real && img == c.img)
     return 0;
   else
     return 1;

  }

  Complex operator++(){ // prefix
   real++;
   return *this;
  }

  Complex operator++(int){
    Complex res ( real , img);
   real++;
   return res;
  }

  explicit operator int (){ // x = (int) c1

   return real;
  }

  ~Complex(){

   cout<<" destractor \n";
  }




};
 Complex add (Complex &c , Complex &c2);


int main()
{
    Complex c1(3088,20) ,c2(50,30) ,c3 ,c7;
    int x=300;
    x= (int)c1;
    cout<<x<<endl;

    cout<<"=============================== \n"<<endl;
    c1.print();
    c3.print();
    Complex c5=c1.add(c2);
    cout<<"sum of numbers is : \n"<<endl;
    c5.print();
    c7 = add(c1,c2);
    cout<<"sum of numbers is : \n"<<endl;
    c7.print();

      cout<<"=============================== \n"<<endl;

    c3=3+c1;
    c7= c2 + c3 + c1;
    c3.print();
    c7.print();
    c7=c1+=c2;
    c7.print();

      cout<<"==============================="<<endl;

    if (c1==c2){
        cout <<"is equal \n";
    } else {
      cout <<"not equal \n";
    }

    c2=++c1; //prefix
    c7.print();

    return 0;
}

 Complex add (Complex &c , Complex &c2){

 Complex result;
 result.setReal( c.getReal()+ c2.getReal());
 result.setImg( c.getImg()+ c2.getImg());
 return result;
}

Complex operator+ (int left, Complex right){
    Complex res(right.getReal()+left, right.getImg());
    return res;

   }
