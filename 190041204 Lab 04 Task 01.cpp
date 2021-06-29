//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 2 TASK 1

#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    string accountNo, accountHolder,accountType;
    double currBalance, minBalance;
public:
    /*BankAccount() : accountNo(""),accountHolder(""),accountType(""),currBalance(0),minBalance(500)
    {}*/
    BankAccount(string x="", string y="", string z="",double a=0) : accountNo(x),accountHolder(y),accountType(z),currBalance(a)
    {
        minBalance=500;
    }
    void input()
    {
        cout<<"Enter the following Account Details :"<<endl;
        cout<<"Account No. :";
        cin>>accountNo;
        cout<<"Account Holder's Name :";
        cin>>accountHolder;
        cout<<"Account Type (Current/Savings):";
        cin>>accountType;
        cout<<"Current Account Balance :";
        cin>>currBalance;
        cout<<endl<<endl;

    }
    void display_info()
    {
        cout<<"Account Details :"<<endl;
        cout<<"Account No. :"<<accountNo<<endl;
        cout<<"Account Holder's Name :";
        cin>>accountHolder;
        cout<<"Account Type :";
        cin>>accountType;
        cout<<"Current Account Balance :";
        cin>>currBalance;
        cout<<endl<<endl;
    }
    void showBalance()
    {
        cout<<"Current Account Balance :" << currBalance<<endl<<endl;
    }
    void deposit(int x)
    {
        currBalance+=x;
    }
    void withdrawal(int x)
    {
        if(currBalance-x > minBalance) currBalance-=x;
        else cout<<"Invalid withdrawal amount as it violates the minimum Balance or your account doesnt have sufficient balance."<<endl<<endl;
    }
    void giveInterest(double x = 3)
    {
        x = (x/100.00)*(1-0.1);
        currBalance += x*currBalance;
    }
    ~BankAccount()
    {
        cout<<"Account of Mr."<<accountHolder<<" with account no "<<accountNo<<" is destroyed with a Balance of Tk"<<currBalance<<endl;
    }
};

int main()
{
    BankAccount B1("1234","AASHNAN","Savings",4000);
    B1.showBalance();
    B1.deposit(1000);
    B1.showBalance();
    B1.withdrawal(7000);
    B1.showBalance();
    B1.withdrawal(1000);
    B1.showBalance();
    B1.giveInterest();
    B1.showBalance();
    B1.giveInterest(10);
    B1.showBalance();

    return 0;
}
