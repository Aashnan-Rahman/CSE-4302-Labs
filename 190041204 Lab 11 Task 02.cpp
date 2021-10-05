//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 11 TASK 2

#include <iostream>
#include <fstream>      //for file-stream functions
#include <typeinfo>     //for typeid()
#include <process.h>    //for exit()

using namespace std;

enum furniture_type {fsofa, fbed, fwardrobe};

class Furniture
{
private:
    string material;
    int ID;
    static int n;
    static Furniture* arrfur[];

public:
    Furniture(string x="",int y = 0):material(x),ID(y)
    {}
    virtual void getdata()
    {
        cin.ignore(10, '\n');
        cout << " Enter Furniture Material: ";
        cin >> material;
        cout << " Furniture ID : ";
        cin >> ID;
    }
    virtual void putdata()
    {
        cout << "\n Furniture Material: " << material;
        cout << "\n Furniture ID: "<< ID;
    }

    virtual furniture_type get_type();
    static void add();
    static void display();
    static void read();
    static void write();
};

int Furniture::n;
Furniture* Furniture::arrfur[1000];

class Wardrobe : public Furniture
{
private:
    string size_;
    float weight;
public:
    void getdata()
    {
        Furniture::getdata();
        cout << " Enter Size:";
        cin >> size_;
        cout << " Enter Weight:";
        cin >> weight;
    }
    void putdata()
    {
        cout<<"\n Type of Furniture: Wardrobe";
        Furniture::putdata();
        cout << "\n Size:" << size_;
        cout << "\n Weight:" << weight;
    }
};

class Sofa : public Furniture
{
private:
    int seats;
public:
    void getdata()
    {
        Furniture::getdata();
        cout << " Enter number of seats: ";
        cin >> seats;

    }
    void putdata()
    {
        cout<<"\n Type of Furniture: Sofa";
        Furniture::putdata();
        cout << "\n Number of seats:" << seats;
    }
};

class Bed : public Furniture
{
private:
    string size_b;
public:
    void getdata()
    {
        Furniture::getdata();
        cout << " Enter size: ";
        cin >> size_b;

    }
    void putdata()
    {
        cout<<"\n Type of Furniture: Bed";
        Furniture::putdata();
        cout << "\n Number of seats:" << size_b;
    }
};

void Furniture::add()
{
    int opt;
    cout<<"\n Choose one of the following options - \n  1.Wardrobe\n  2.Sofa\n  3.Bed\n";
    cout<<"Choice : ";
    cin>>opt;

    if(opt == 1)
        arrfur[n] = new Wardrobe;
    else if(opt == 2)
        arrfur[n] = new Sofa;
    else if(opt == 3)
        arrfur[n] = new Bed;

    arrfur[n++]->getdata();
}

furniture_type Furniture::get_type()
{
    if( typeid(*this) == typeid(Wardrobe) )
        return fwardrobe;
    else if( typeid(*this)==typeid(Sofa) )
        return fsofa;
    else if( typeid(*this)==typeid(Bed) )
        return fbed;
    else
    {
        cerr << "\nError";
        exit(1);
    }

}

void Furniture::display()
{
    for(int j=0; j<n; j++)
    {
        cout << (j+1);

        arrfur[j]->putdata();
        cout << endl<<endl;
    }
}

void Furniture::write()
{
    int size;
    cout << "Writing " << n << " Furnitures.\n";
    ofstream off;
    furniture_type fur_type;
    off.open("furniture.txt", ios::trunc | ios::binary);
    if(!off)
    {
        cout << "\nError while opening file\n";
        return;
    }
    for(int j=0; j<n; j++)
    {

        fur_type = arrfur[j]->get_type();

        off.write( (char*)&fur_type, sizeof(fur_type) );

        switch(fur_type)
        {
        case fwardrobe:
            size=sizeof(Wardrobe);
            break;
        case fsofa:
            size=sizeof(Sofa);
            break;
        case fbed:
            size=sizeof(Bed);
            break;
        }
        off.write( (char*)(arrfur[j]), size );

        if(!off)
        {
            cout << "\n Error while writing to file\n";
            return;
        }
    }
}

void Furniture::read()
{
    int size;
    ifstream iff;
    furniture_type fur_type;

    iff.open("furniture.txt", ios::binary);

    if(!iff)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0;
    while(true)
    {

        iff.read( (char*)&fur_type, sizeof(fur_type) );
        if( iff.eof() )
            break;
        if(!iff)
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        switch(fur_type)
        {

        case fwardrobe:
            arrfur[n] = new Wardrobe;
            size=sizeof(Wardrobe);
            break;
        case fsofa:
            arrfur[n] = new Sofa;
            size=sizeof(Sofa);
            break;
        case fbed:
            arrfur[n] = new Bed;
            size=sizeof(Bed);
            break;
        default:
            cout << "\nUnknown type in file\n";
            return;
        }
        iff.read( (char*)arrfur[n], size );
        if(!iff)
        {
            cout << "\nCan't read data from file\n";
            return;
        }
        n++;
    }
    cout << "Reading " << n << " Furnitures\n";
}

int main()
{
    int x;

    while(1)
    {
        cout<<"\n Choose one of the following options";
        cout<<"\n  1. Add data for Furniture";
        cout<<"\n  2. Display data for all Furnitures";
        cout<<"\n  3. Write all Furniture data to file";
        cout<<"\n  4. Read all Furniture data from file";
        cout<<"\n  5. Exit";

        cout<<"\n  Enter your choice : ";

        cin>>x;

        if(x==1)
        {
            Furniture::add();
            system("PAUSE");
            system("CLS");
        }

        else if(x==2)
        {
            Furniture::display();
            system("PAUSE");
            system("CLS");
        }

        else if(x==3)
        {
            Furniture::write();
            system("PAUSE");
            system("CLS");
        }
        else if(x==4)
        {
            Furniture::read();
            system("PAUSE");
            system("CLS");
        }
        else
            exit(0);

    }

    return 0;
}


