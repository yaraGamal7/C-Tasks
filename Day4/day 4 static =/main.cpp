#include <iostream>

using namespace std;
class Stack
{
    int* arr;
    int tos;
    int size;
public:

    Stack(Stack& s)
    {
        //cout<<"\n copy ctor\n";
        tos=s.tos;
        size=s.size;
        delete[] arr;
        arr=new int(size);
        for(int i=0; i<tos; i++){
            arr[i]=s.arr[i];
        }
        cout<<"copy cotr \n";
    }
    Stack()
    {
        tos=0;
        size=5;
        arr=new int(size);
         cout<<"defult cotr \n";
    }
    Stack(int _size)
    {
        tos=0;
        size=_size;
        arr=new int(size);
         cout<<"one parameter cotr \n";
    }
    int push(int d)
    {
        if(tos==size)
        {
            cout<<"\n stack is full \n";
            return 0;
        }
        else
        {
            arr[tos]=d;
            tos++;
            return 1;
        }

    }
    int pop(int& d)
    {
        if(tos==0)
        {
            cout<<"\n stack is empty \n";
            return 0;
        }
        else
        {
            tos--;
            d=arr[tos];
            return 1;
        }
    }
    Stack operator=(Stack const& s)
    {
        tos=s.tos;
        size=s.size;
        delete[] arr;
        arr=new int [size];
        for(int i=0; i<tos; i++)
            arr[i]=s.arr[i];
        return *this;
    }
    Stack operator+(Stack & s)
    {
        Stack res(size+s.size);
        res.tos = tos + s.tos;

        for(int i=0; i<tos; i++)
            res.arr[i] = arr[i];

        for (int i=0,j= tos ; j < res.tos ; j++,i++)
            res.arr[j] = s.arr[i];

        return res;
    }
    int getTos()
    {
        return tos;
    }
    ~Stack()
    {
        delete[] arr;
        cout<<"destractor";
    }
};

void viewContent(Stack s1);
int main()
{
    Stack s1(7),s2(4),s3, s9 , s6(5);

    s1.push(10);
    s1.push(12);
    s1.push(14);
    s1.push(16);
    s1.push(18);
    s1.push(18);
    s1.push(18);

    s2.push(2);
    s2.push(4);
    s2.push(6);

    s9=s1;
    viewContent(s9);

  cout<<"---------- \n";

    s3=s1+s2;

    viewContent(s3);

  cout<<"---------- \n";
    return 0;
}


void viewContent(Stack s)
{
    int x;
    while(s.pop(x)==1)
    {
        cout<<x<<endl;
        if(s.getTos()==0)
            break;
    }
}
