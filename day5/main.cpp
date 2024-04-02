#include <iostream>

using namespace std;
class Stack {

    int* arr;
    int tos ;
    int size ;

public :
    // push items form stack
    int push(int d){

        if (tos == size){

            cout << "the stack is full" <<endl;
            return 0 ;
        }else {
            arr[tos]  =  d ;
            tos ++ ;
            return 1 ;
        }
    }

    // poping items form stack
    int pop(int& d){
         if (tos == 0 ){
            cout << "the stack is empty" <<endl ;
            return 0;
         }else {
            tos -- ;
             d = arr[tos] ;
            return 1;
         }
    }
    //constructor
   /*Stack (){
        tos = 0 ;
        size = 5;
        arr= new int [size];
    }*/
    Stack (int _size=5){
        tos = 0 ;
        size = _size;
        arr= new int [size];
    }


     Stack (Stack const &s){
    tos = s.tos ;
    size = s.size;
    arr= new int [size];
    for(int i=0 ; i<tos ; i++){
        arr[i]=s.arr[i];
    }
    cout<<"copy constructor" << endl;
    }

    int getSize(){
     return size;
    }

    ~Stack(){
        delete [] arr ;
        cout<<"deleted items \n";
    }
};
void ViewContent (Stack &s);
int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    Stack s2(s1);
    cout << endl ;


    ViewContent(s2);

    return 0;
}

void ViewContent (Stack& s){

 int res;
 for (int i=0 ; i<s.getSize(); i++){
      if (s.pop(res)==1)
    cout<<res<<endl;
 }
}
