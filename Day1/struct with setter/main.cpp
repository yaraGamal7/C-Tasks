#include <iostream>
#include <string.h>



struct emp {

private:
    int id;
    char name[20];
    int age;

public:
    void setId (int _id) {
        if (_id >= 1 && _id <= 100)
            id = _id;
    }

    void setName(char* _name) {
        if (strlen(_name) >= 4 && strlen(_name) <= 20) {
            strcpy(name, _name);
        } else {
            cout << "Invalid name" << endl;
        }
    }

    void setAge(int _age) {
        if (_age >= 20 && _age <= 60) {
            age = _age;
        } else {
            cout << "Invalid age" << endl;
        }
    }

    int getId() {
        return id;
    }

     char* getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void print() {
        cout <<"id : " << id << endl << "name :" << name << endl << "age: " << age << endl;
    }
};

int main() {
    emp e1;
    e1.setId(20);
    e1.setName("Yara");
    e1.setAge(30);

    e1.print();

    return 0;
}
