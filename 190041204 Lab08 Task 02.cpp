///Name : Aashnan Rahman
///ID : 190041204
///CSE 4302 Lab 08 Task 02

#include<iostream>
using namespace std;

class Staff             /// Staff Class
{
private:
    string code;        /// Declaring two private variables code and name
    string name;
public:
    Staff(string a = "",string b = ""): code(a),name(b)  /// Default constructor for Staff Class
    {
        //cout<<"Staff has been created"<<endl;
    }
    void setName()                                      /// Set Name function
    {
        cout<<"Enter Name of Staff : ";
        cin>>name;
    }
    void setCode()                                      /// Set Code function
    {
        cout<<"Enter Staff Code    : ";
        cin>>code;
    }
    void getName()                                      /// Name Printing function
    {
        cout<<"Staff Name : "<<name<<endl;
    }
    void getCode()                                      /// Code Printing Function
    {
        cout<<"Staff Code : "<<code<<endl;
    }
    void print()                                        /// Collection of all printable data under it and it's base classes
    {
        getName();
        getCode();
    }
    void setvalue()                                     /// Takes input of all the data of its own class and base classes
    {
        cout<<endl<<"Enter Staff Information "<<endl;
        cout<<"*******************************************"<<endl;
        setName();
        setCode();
    }
    void getvalue()                                     /// Prints all the data of its own class and base classes
    {
        cout<<endl<<"About Staff,"<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I Function (staff)
    {
        cout<<" staff."<<endl;
    }
    ~Staff()                                            /// Destructor
    {
        //cout<<"Staff has been destroyed"<<endl;
    }
};

class Teacher : public Staff                /// Teacher Class inheriting base class
{
private:                                    /// Declaring two private variables subject and publication
    string subject;
    string publication;
public:
    Teacher(string a = "",string b = ""): subject(a),publication(b)         /// Default constructor for Teacher Class
    {
        //cout<<"Teacher has been created"<<endl;
    }
    void setSubject()                                    /// Set Subject function
    {
        cout<<"Enter Subject taken by Teacher : ";
        cin>>subject;
    }
    void setPublication()                                /// Set Publication function
    {
        cout<<"Enter Publication of Teacher   : ";
        cin>>publication;
    }
    void getSubject()                                    /// Subject Printing function
    {
        cout<<"Subject taken by Teacher : "<<subject<<endl;
    }
    void getPublication()                                /// Publication Printing function
    {
        cout<<"Publication of Teacher   : "<<publication<<endl;
    }
    void print()                                         /// Collection of all printable data under it and it's base classes
    {
        Staff::print();                                  /// Printable values inherited from Staff class (base class)
        getSubject();                                    /// Printable values of Teacher class (derived class)
        getPublication();
    }
    void setvalue()                                     /// Takes input of all the data of its own class and base classes
    {
        cout<<endl<<"For Teacher, "<<endl;
        Staff::setvalue();                              /// Set Value function from base class Staff
        cout<<endl<<"Enter Teacher Information "<<endl;
        cout<<"*******************************************"<<endl;
        setSubject();
        setPublication();
    }
    void getvalue()                                     /// Prints all the data of its own class and base classes
    {
        cout<<endl<<"About Teacher, "<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I function (also inheriting same function from base class (overriding))
    {
        cout<<" teacher -";                             /// (teacher - staff)
        Staff::whoAmI();
    }
    ~Teacher()                                          /// Teacher destructor Function
    {
        //cout<<"Teacher has been destroyed"<<endl;
    }
};

class Typist : public Staff                          /// Typist class inheriting Staff class
{
private:
    double speed;                                       /// Declaring private variable speed
public:
    Typist(double a = 0.00): speed(a)                   /// Default constructor
    {
        //cout<<"Typist has been created"<<endl;
    }
    void setSpeed()                                     /// Setting value of speed
    {
        cout<<"Enter Typist's Speed (WPM): ";
        cin>>speed;
    }
    void getSpeed()                                     /// Printing value of speed
    {
         cout<<"Speed      : "<<speed<<" WPM"<<endl;
    }
    void print()                                        /// Collection of all printable data under it and it's base classes
    {
        Staff::print();                                 /// Print function from base class
        getSpeed();
    }
    void setvalue()                                     /// Takes input of all the data of its own class and base classes
    {
        Staff::setvalue();                              /// Takes input of base class variables
        cout<<endl<<"Enter Typist Information "<<endl;
        cout<<"*******************************************"<<endl;
        setSpeed();
    }
    void getvalue()                                     /// Prints all the data of its own class and base classes
    {
        cout<<endl<<"About Typist, "<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I function (typist - staff)
    {
        cout<<" typist -";
        Staff::whoAmI();
    }
    ~Typist()                                           /// Typist Destructor
    {
        //cout<<"Typist has been destroyed"<<endl;
    }
};

class Officer : public Staff                         /// Officer class inheriting Staff class
{
private:
    string grade;                                       /// Declaring private variable grade
public:
    Officer(string a = ""): grade(a)                    /// Default constructor
    {
        //cout<<"Officer has been created"<<endl;
    }
    void setGrade()                                     /// Setting value of grade
    {
        cout<<"Enter Officer's Grade : ";
        cin>>grade;
    }
    void getGrade()                                     /// printing grade value
    {
        cout<<"Grade : "<<grade<<endl;
    }
    void print()                                        /// Collection of all printable data under it and it's base classes
    {
        Staff::print();                                 /// Printing all variables of base class Staff
        getGrade();
    }
    void setvalue()                                     /// Setting values of all data under it and it's base classes
    {
        cout<<endl<<"For Officer, "<<endl;
        Staff::setvalue();                              /// Setting Base class data
        cout<<endl<<"Enter Officer Information "<<endl;
        cout<<"*******************************************"<<endl;
        setGrade();
    }
    void getvalue()                                     /// Printing values of all data under it and it's base classes
    {
        cout<<endl<<"About Officer, "<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I function (officer - staff)
    {
        cout<<" officer -";
        Staff::whoAmI();
    }
    ~Officer()                                          /// Destructor
    {
        //cout<<"Officer has been destroyed"<<endl;
    }
};

class Regular : public Typist                        /// Regular class inheriting Typist class
{
public:
    Regular()                                           /// Constructor
    {
        //cout<<"Regular Staff has been created"<<endl;
    }
    void print()                                        /// Prints all the available data under derived and base classes
    {
        Typist::print();                                /// prints Typist class data
    }
    void setvalue()                                     /// Set value function for all the available data under derived and base classes
    {
        cout<<endl<<"For Regular, "<<endl;
        Typist::setvalue();
    }
    void getvalue()                                     /// Displays all the available data under derived and base classes
    {
        cout<<endl<<"For Regular Typist, "<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I function (regular - typist - staff)
    {
        cout<<" regular -";
        Typist::whoAmI();
    }
    ~Regular()                                          /// Destructor
    {
        //cout<<"Regular Staff has been destroyed"<<endl;
    }
};

class Casual : public Typist                         /// Casual class inheriting Typist class
{
private:
    double daily_wage;                                  /// Declaring private variable grade
public:
    Casual(double a = 0.00): daily_wage(a)              /// Constructor
    {
        //cout<<"Casual has been created"<<endl;
    }
    void setWage()                                      /// Sets wage value
    {
        cout<<"Enter Casual's Daily Wage : ";
        cin>>daily_wage;
    }
    void getWage()                                      /// Prints wave value
    {
        cout<<"Daily Wage : "<<daily_wage<<" Taka"<<endl;
    }
    void print()                                        /// Prints all the available data under derived and base classes
    {
        Typist::print();                                /// Prints all data under base class Typist
        getWage();
    }
    void setvalue()                                     /// Sets all the value under derived and base classes
    {
        cout<<endl<<"For Casual Typist, "<<endl;
        Typist::setvalue();                             /// Sets all the value under base Typist
        cout<<endl<<"Enter Casual Information "<<endl;
        cout<<"*******************************************"<<endl;
        setWage();
    }
    void getvalue()                                     /// Displays all the value under base Typist
    {
        cout<<endl<<"For Casual, "<<endl;
        print();
    }
    void whoAmI()                                       /// Who Am I function (casual - typist - staff)
    {
        cout<<" casual -";
        Typist::whoAmI();
    }
    ~Casual()                                           /// Destructor
    {
        //cout<<"Casual has been destroyed"<<endl;
    }
};


int main()
{
    /// Properties of Staff class (creating object,set value, get value, whoAmI)
//    Staff s1;
//    s1.setvalue();
//    s1.getvalue();
//    cout<<"I am a";
//    s1.whoAmI();

/// Properties of Teacher class (creating object,set value, get value, whoAmI)
//    Teacher t1;
//    t1.setvalue();
//    t1.getvalue();
//    cout<<"I am a";
//    t1.whoAmI();

/// Properties of Typist class (creating object,set value, get value, whoAmI)
//    Typist ty1;
//    ty1.setvalue();
//    ty1.getvalue();
//    cout<<"I am a";
//    ty1.whoAmI();

/// Properties of Officer class (creating object,set value, get value, whoAmI)
//    Officer o1;
//    o1.setvalue();
//    o1.getvalue();
//    cout<<"I am a";
//    o1.whoAmI();

/// Properties of Regular class (creating object,set value, get value, whoAmI)
//    Regular r1;
//    r1.setvalue();
//    r1.getvalue();
//    cout<<"I am a";
//    r1.whoAmI();

/// Properties of Casual class (creating object,set value, get value, whoAmI)
    Casual c1;
    c1.setvalue();
    c1.getvalue();
    cout<<endl<<"I am a";
    c1.whoAmI();

}
