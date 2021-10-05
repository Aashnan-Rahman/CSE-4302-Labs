//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 2 TASK 3

#include<bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string EmpName;
    int ID,Age;
    float Salary;
    void getStatus()
    {
        if(Age<=25)
        {
            if(Salary<=20000)
                cout<<"Low";
            else
                cout<<"Moderate";
        }
        else
        {
            if(Salary<=21000)
                cout<<"Low";
            else if(Salary>21000 && Salary<=60000)
                cout<<"Moderate";
            else
                cout<<"High";
        }
        cout<<" Salaried Person"<<endl<<endl;
    }
public:
    Employee(string y="",int a=0, int b = 0,float x =0): EmpName(y),ID(a),Age(b),Salary(x)
    {}
    void FeedInfo()
    {
        cout<<"Provide the following information:"<<endl;
        cout<<"Employee Name"<<endl;
        cin>>EmpName;
        cout<<"Employee ID :"<<endl;
        cin>>ID;
        cout<<"Employee Age: "<<endl;
        cin>>Age;
        cout<<"Employee Salary :"<<endl;
        cin>>Salary;
    }
    void ShowInfo()
    {
        cout<<"Information about the following Employee: "<<endl;
        cout<<"Employee Name: "<<EmpName<<endl;
        cout<<"Employee ID :"<<ID<<endl;
        cout<<"Employee Age: "<<Age<<endl;
        cout<<"Employee Salary :"<<Salary<<endl;
        getStatus();
    }
    ~Employee()
    {
        cout<<"Employee Information has been destroyed"<<endl;
    }
};

int main()
{
    Employee E1("AASHNAN",4,20,50000),E2("ABC",50,30,75000);;
    E1.ShowInfo();
    E2.ShowInfo();

}
