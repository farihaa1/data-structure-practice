#include <iostream>
#include <string>
using namespace std;

// access modifiers

//  1.private   -> data and methods accessible inside class
//  2.public    -> data and methods accessible to everyone
//  3.protected -> data and methods accessible inside class and to its derived class

// OOPs topics
// 1.encapsulation
// 2.Abstraction
// 3.Inheritance
// 4.polymorphism

// 1. encapsulation is wrapping up of data and member functions in a single unit called class -> helps in data hiding by making them private


class account{
    private:
        double balance;

    public:
        string accountId;
        string usename;
};


class Teacher {
    // properties //attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    

    // methods //member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void setSalary(double s){ 
        salary = s;
    }
    //getter
    double getSalary(){ 
        return salary;
    }
};

// constructor 
// -> a special method invoked automatically at time of object creation. Used for Initialization
// same as class
// constructor doesn't have a return type
// only called once (automatically), at object creation
// memory allocation happens when constructor is called 



int main(){
    Teacher t1; //object -> constructor call 
    t1.name = "Fariha";
    t1.subject = "C++";
    t1.dept = "computer science";
    t1.setSalary(25000);

    cout << t1.getSalary() << endl;

    return 0;
}
