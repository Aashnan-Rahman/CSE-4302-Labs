//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 1 TASK 3

#include<bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    string name;
    string genericName;
    double discountPercent;
    double unitPrice;
public:
    Medicine(): name(""),genericName(""),discountPercent(5), unitPrice(0)
    {}
    void assignName(string name_1,string genname)
    {
        name = name_1;
        genericName = genname;
    }
    void assignPrice(double price)
    {
        if(price<0)
        {
            cout<<"ERROR! (Price cant be negative)"<<endl;
            return;
        }
        unitPrice = price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>45 || percent<0)
        {
            cout<<"ERROR! Discount not within range ( 0 ~ 45)" <<endl;
        }
        discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        double sell_price = unitPrice * ( 1 - (discountPercent/100) );
        return sell_price*nos;
    }
    void display()
    {
        cout<<name<<"("<<genericName<<") has a unit price BDT "<<unitPrice<<" . Current Discount "<<discountPercent<<"% ."<<endl;
    }
    ~Medicine()
    {}
};

int main()
{
    Medicine med1,med2;
    med1.display();
    med2.assignName("Napa","Paracetamol");
    med2.assignPrice(.80);
    med2.setDiscountPercent(10);
    cout<<med2.getSellingPrice(5)<<endl;
    med2.display();
}
