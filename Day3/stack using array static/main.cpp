#include <iostream>

using namespace std;
class Stack {

    int arr[5];
    int tos ;
    int size = 5 ;

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
    Stack (){
        tos = 0 ;
        size = 5;
        arr[size];
    }
};
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
    int x;
    if(s1.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s1.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s1.pop(x) == 1 ){
        cout <<x  << ",";
    }if(s1.pop(x) == 1 ){
        cout <<x  << ",";
    }if(s1.pop(x) == 1 ){
        cout <<x  << ",";
    }
    cout << endl;
     if(s2.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s2.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s2.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s2.pop(x) == 1 ){
        cout <<x  << ",";
    }
    if(s2.pop(x) == 1 ){
        cout <<x  << ",";
    }

    return 0;
}
