///Name : Aashnan Rahman
///ID : 190041204
///CSE 4302 Lab 09 Task 1 and Task 2

#include <iostream>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,Foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
public:
    Furniture(double p = 0.00,double d = 0.00 ,Material m = Material::Wood):price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    void getMadeof()
    {
        cout<<"Material: ";
        if(madeof==Material::Wood)
            cout<<"Wood";
        else if(madeof==Material::Board)
            cout<<"Board";
        else if(madeof==Material::Steel)
            cout<<"Steel";
        else
            cout<<"Foam";
    }

    void printData()
    {
        cout<<"Regular Price: "<<price<<endl;
        cout<<"Discounted Price: "<<price-discount<<endl;
        getMadeof();
        cout<<endl;
    }

    virtual void productDetails()=0;

    ~Furniture()
    {}
};

enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
private:
    BedSize B_size;
public:
    Bed(double p = 0.00,double d = 0.00 ,Material m = Material::Wood, BedSize b = BedSize::Single):B_size(BedSize::Single)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setBedSize(b);
    }
    void setBedSize(BedSize val)
    {
        B_size=val;
    }
    void getBedSize()
    {
        cout<<"Bed Size: ";
        if(B_size==BedSize::Single)
            cout<<"Single";
        else if(B_size==BedSize::SemiDouble)
            cout<<"Semi Double";
        else if(B_size==BedSize::Double)
            cout<<"Double";
    }
    void productDetails()
    {
        Furniture::printData();
        getBedSize();
    }
    ~Bed()
    {}
};

class Sofa:public Furniture
{
private:
    int seat_number;
public:
    //Furniture *f = new Furniture;
    Sofa(double p = 0.00,double d = 0.00 ,Material m = Material::Wood,int x = 1):seat_number(x)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setSeatNo(x);
    }
    void setSeatNo(int val)
    {
        if(val>=1 && val<=5)
            seat_number=val;
        else seat_number = 1;

    }
    void getSeatNo()
    {
        cout<<"Seat Number : ";
        if(seat_number==1) cout<<"One";
        if(seat_number==2) cout<<"Two";
        if(seat_number==3) cout<<"Three";
        if(seat_number==4) cout<<"Four";
        if(seat_number==5) cout<<"Five";
    }
    void productDetails()
    {
        Furniture::printData();
        getSeatNo();
    }
    ~Sofa()
    {
        //delete f;
    }
};

class DiningTable:public Furniture
{
private:
    int chair_number;
public:
    //Furniture *f = new Furniture;
    DiningTable(double p = 0.00,double d = 0.00 ,Material m = Material::Wood,int x = 2):chair_number(x)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setChairNo(x);
    }
    void setChairNo(int val)
    {
        if(val==2 || val==6 || val==4)
            chair_number=val;
        else chair_number = 2;
    }
    void getChairNo()
    {
        cout<<"Chair Number : ";
        if(chair_number==2) cout<<"Two";
        if(chair_number==4) cout<<"Four";
        if(chair_number==6) cout<<"Six";
    }
    void productDetails()
    {
        Furniture::printData();
        getChairNo();
    }
    ~DiningTable()
    {
        //delete f;
    }
};

void dis(int x)
{

    cout<<endl;
    for(int i=0; i<50; i++)
    {
        if(x==1) cout<<"-";
        else cout<<"#";
    }
    cout<<endl;
}

int main()
{
//    Furniture f(1000,9,Material::Wood);
//    dis(1);
//    f.productDetails();
//    dis(2);
//
//    Bed b(3000,15,Material::Foam,BedSize::SemiDouble);
//    dis(1);
//    b.productDetails();
//    dis(2);
//
//    Sofa s(10000,100,Material::Steel,1);
//    dis(1);
//    s.productDetails();
//    dis(2);
//
//    DiningTable d(1100,50,Material::Board,2);
//    dis(1);
//    d.productDetails();
//    dis(2);

    Furniture *f_list[100];

    f_list[0] =  new Bed (3000,15,Material::Foam,BedSize::SemiDouble);
    f_list[1] =  new Sofa (10000,100,Material::Steel,1);
    f_list[2] =  new DiningTable (1100,50,Material::Board,2);

    for(int i = 0; i<3 ; i++)
    {
        dis(1);
        f_list[i]->productDetails();
        dis(2);
    }

    return 0;
}
