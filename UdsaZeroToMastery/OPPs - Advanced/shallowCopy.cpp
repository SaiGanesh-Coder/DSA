#include<iostream>
#include<cstring>
using namespace std;

class Student{
    int age;
        public:
            char *name;
            Student(Student const &s){          // Need to pass referense variable so that it won't call copy constructor
                this->age = s.age;
                //this->name = s.name;          // SHALLOW COPY this is done by copy constructor
                this->name = new char[strlen(s.name)+1];          //// DEEP COPY    -> Copies the entire ARRAY
                strcpy(this->name,s.name);
            }
            Student(int age,char *name){
                this->age=age;

              //  this->name=name;                         // SHALLOW COPY   ->  Copy only the address of 0th Index

              this->name = new char[strlen(name)+1];       // DEEP COPY    -> Copies the entire ARRAY
              strcpy(this->name,name);

            }
            void display(){
                cout<<name<<"\t"<<age<<endl;
            }
};

int main(){
    char name[] = "SaiGanesh";
        Student s(20,name);
        s.display();

        Student s2(s);       // Copy Constructor  -->> It does the shallow copy so it's mandatory to create our own copy constructor here...
        s.name[3]='k';
        s.display();
        s2.display();

      /*  name[3] = 'K';
        Student s2(19,name);
        s2.display();

        s.display();  */
    return 0;
}