///Name : Aashnan Rahman
///ID : 190041204
///CSE 4302 Lab 09 Task 04

#include <iostream>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,Foam};
class Furniture
{
protected:
    double price;

    Material madeof;
    string productName;
public:
    double discount;
    Furniture(string z ="",double p = 0.00,double d = 0.00 ,Material m = Material::Wood):productName(z),price(0),discount(0),madeof(Material::Wood)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setProductname(z);
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
    void setProductname(string z)
    {
        productName=z;
    }
    void enterDisc()
    {
        cout<<"Enter Discount Price : ";
        cin>>discount;
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

    void productDetails()
    {
        cout<<"Product Name:  "<<productName<<endl;
        cout<<"Regular Price: "<<price<<endl;
        cout<<"Discounted Price: "<<price-discount<<endl;
        getMadeof();
    }
    void printDiscount()
    {
        cout<<discount<<endl;
    }
    ~Furniture()
    {}
};

enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
private:
    BedSize B_size;
public:
    Bed(string z ="",double p = 0.00,double d = 0.00 ,Material m = Material::Wood, BedSize b = BedSize::Single):B_size(BedSize::Single)
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setProductname(z);
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
        Furniture::productDetails();
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
    Furniture *f = new Furniture;

    Sofa(string z ="",double p = 0.00,double d = 0.00 ,Material m = Material::Wood,int x = 1):seat_number(x)
    {
        f->setPrice(p);
        f->setDiscount(d);
        f->setMadeof(m);
        f->setProductname(z);
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
        f->productDetails();
        getSeatNo();
    }
    ~Sofa()
    {
        delete f;
    }
};

class DiningTable:public Furniture
{
private:
    int chair_number;
public:
    Furniture *f = new Furniture;

    DiningTable(string z ="",double p = 0.00,double d = 0.00 ,Material m = Material::Wood,int x = 2):chair_number(x)
    {
        f->setPrice(p);
        f->setDiscount(d);
        f->setMadeof(m);
        f->setProductname(z);
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
        f->productDetails();
        getChairNo();
    }
    ~DiningTable()
    {
        delete f;
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

void order(Furniture** f1, Furniture** f2)
{
    if( (*f1)->discount > (*f2)->discount )
    {
        Furniture* tempptr = *f1;
        *f1 = *f2;
        *f2 = tempptr;
    }
}

void sort_furniture_price(Furniture **f, int n)

{
    void order(Furniture**, Furniture**);
    int j, k;
    for(j=0; j<n-1; j++)
        for(k=j+1; k<n; k++)
            order(f+j, f+k);
}

int main()
{
//    Furniture f("Fur#101",1000,9,Material::Wood);
//    dis(1);
//    f.productDetails();
//    dis(2);
//
//    Bed b("Bed#211",3000,15,Material::Foam,BedSize::SemiDouble);
//    dis(1);
//    b.productDetails();
//    dis(2);
//
//    Sofa s("Sofa#131",10000,100,Material::Steel,1);
//    dis(1);
//    s.productDetails();
//    dis(2);
//
//    DiningTable d("Dining_Table#1023",1100,50,Material::Board,2);
//    dis(1);
//    d.productDetails();
//    dis(2);

    void sort_furniture_price(Furniture**,int);

    Furniture * furPtr[100];
    int n = 0;
    char choice;

    do
    {
        furPtr[n] = new Furniture;
        furPtr[n] -> enterDisc();
        n++;
        cout<< "Enter choice (Y/N)? ";
        cin>>choice;
    }
    while(choice == 'Y');

    cout<<endl<<"Unsorted List"<<endl;

    for(int i=0;i<n;i++)
    {
        furPtr[i]->printDiscount();
    }

    sort_furniture_price(furPtr,n);

    cout<<endl<<"Sorted List"<<endl;

    for(int i=0;i<n;i++)
    {
        furPtr[i]->printDiscount();
    }

    cout<<endl;

    return 0;
}



