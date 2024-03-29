#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;

    public:
        person()
        {
            name="ravi";
            age=26;
        }
        
            void printPerson()
            {
                cout<<"\nName = "<<name<<"\nAge = "<<age<<endl;
            }
};
//derived class
//child class
class emp:public person
{
        int emp_id;
        int sal;

        public:
        emp()
        {
            emp_id=20;
            sal=5000; 
        } 

            void priteEmp()
            {
                cout<<"Emp details are :";
                this->printPerson();
                cout<<"Emp_ID = "<<emp_id<<"\nSalary = "<<sal<<endl;
            }

                void updatename(string newname)
                {
                    this->name=newname;
                }
};
int main()
{
    person p1;
    p1.printPerson();
    cout<<"\n";

    emp e1;
    e1.priteEmp();
    e1.updatename("ravee");
    e1.priteEmp();


    cout<<"\n";
    return 0;
}