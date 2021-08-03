///Name : Aashnan Rahman
///ID : 190041204
///CSE 4302 Lab 08 Task 01

#include<iostream>
using namespace std;

class Seat
{
private:
    string comfortability,seat_warmer;
public:
    Seat(string a = "",string b = "No"): comfortability(a), seat_warmer(b)
    {
        //cout<<"Seat has been created using default constructor"<<endl;
        if(seat_warmer != "Yes" && seat_warmer != "No" )
        {
            cout<<endl<<"Invalid input for presence of seat warmer"<<endl;
            seat_warmer = "No";
        }
    }
    void getData()
    {
        cout<<"Enter Seat Comfortability : ";
        cin>>comfortability;
        cout<<"Is Seat Warmer Present? (Yes / No) : ";
        cin>>seat_warmer;
        if(seat_warmer != "Yes" && seat_warmer != "No" )
        {
            cout<<"Invalid input for presence of seat warmer"<<endl;
            seat_warmer = "No";
        }
    }
    void setSeat()
    {
        //cout<<"Seat values has been set using setSeat() function"<<endl;
        cout<<endl<<"Please Enter Seat Information  "<<endl;
        cout<<"*******************************************"<<endl;
        getData();
    }
    void print()
    {
        cout<<"Comfortability  : "<<comfortability<<endl;
        cout<<"Presence of Seat Warmer  : "<<seat_warmer<<endl;
    }
    void show_seat()
    {
        cout<<endl<<"Seat Status " <<endl;
        cout<<"----------------------------------------"<<endl;
        print();
    }
    ~Seat()
    {
        //cout<<"Seat has been destroyed"<<endl;
    }
};

class Wheel
{
private:
    float radius,weight,thickness,diameter,circumference,volume;
public:
    Wheel(double a = 0.00, double b=0.00, double c = 0.00) : radius(a), weight(b),thickness()
    {
        //cout<<"Wheel has been created using default constructor<<endl;
        Wheel_Error_Handling();
    }
    void getData()
    {
        cout<<"Enter Wheel Radius in cm unit: ";
        cin>>radius;
        cout<<"Enter Wheel Thickness in cm unit: ";
        cin>>thickness;
        cout<<"Enter Wheel Weight in kg unit: ";
        cin>>weight;

        Wheel_Error_Handling();
    }
    void setWheel()
    {
        //cout<<"Wheel values has be set using setWheel() function"<<endl;
        cout<<endl<<"Please Enter Wheel Information  "<<endl;
        cout<<"*******************************************"<<endl;
        getData();
    }
    void circumference_calc()

    {
        circumference = 3.14159*diameter;
    }
    void diameter_calc()
    {
        diameter = 2*radius;
    }
    void volume_calc()
    {
        volume = 3.141598*radius*radius*thickness;
    }
    void print()
    {
        diameter_calc();
        circumference_calc();
        volume_calc();

        cout<<"Radius         : "<<radius<<" cm"<<endl;
        cout<<"Diameter       : "<<diameter<<" cm"<<endl;
        cout<<"Circumference  : "<<circumference<<" cm"<<endl;
        cout<<"Thickness      : "<<thickness<<" cm"<<endl;
        cout<<"Weight         : "<<weight<<" kg"<<endl;
        cout<<"Volume         : "<<volume<<" cc"<<endl;
    }
    void show_wheel()
    {


        cout<<endl<<"Wheel Status " <<endl;
        cout<<"----------------------------------------"<<endl;
        print();
    }
    void Wheel_Error_Handling()
    {
        //cout<<endl<<"Error in provided Wheel Information"<<endl;
        if(radius<0.00)
        {
            cout<<"Invalid value of wheel radius";
            radius=0.00;
        }
        if(thickness<0.00)
        {
            cout<<"Invalid value of wheel thickness";
            thickness=0.00;
        }
        if(weight<0.00)
        {
            cout<<"Invalid value of wheel weight";
            weight=0.00;
        }
    }
    ~Wheel()
    {
        //cout<<"Wheel has been destroyed"<<endl;
    }
};

class Engine
{
private:
    double max_fuel_consumption_rate,max_energy_production_rate,avg_RPM;
public:
    Engine(double a=0.00,double b=0.00,double c=0.00):max_fuel_consumption_rate(a),max_energy_production_rate(b),avg_RPM(b)
    {
        //cout<<"Engine has been created using default constructor"<<endl
        Engine_Error_Handling();
    }
    void getData()
    {
        cout<<"Enter Engine's Maximum Fuel Consumption Rate (km / litre): ";
        cin>>max_fuel_consumption_rate;
        cout<<"Enter Engine's Energy Production Rate (horsepower): ";
        cin>>max_energy_production_rate;
        cout<<"Enter Engine's Average Rotations per Minute (RPM): ";
        cin>>avg_RPM;

        Engine_Error_Handling();
    }
    void setEngine()
    {
        //cout<<"Wheel values has be set using setWheel() function"<<endl;
        cout<<endl<<"Please Enter Engine Information "<<endl;
        cout<<"*******************************************"<<endl;
        getData();
    }
    void print()
    {
        cout<<"Maximum Fuel Consumption Rate  : "<<max_fuel_consumption_rate<<" km / litre"<<endl;
        cout<<"Energy Production Rate         : "<<max_energy_production_rate<<" horsepower"<<endl;
        cout<<"Average Rotations per Minute   : "<<avg_RPM<<" RPM"<<endl;
    }
    void show_engine()
    {

        cout<<endl<<"Engine Status " <<endl;
        cout<<"----------------------------------------"<<endl;
        print();
    }
    void Engine_Error_Handling()
    {
        //cout<<endl<<"Error in provided Engine Information"<<endl;
        if(max_fuel_consumption_rate < 0.0)
            max_fuel_consumption_rate = 0.00;
        if(max_energy_production_rate < 0.0)
            max_energy_production_rate = 0.00;
        if(avg_RPM < 0.0)
            avg_RPM = 0.00;
    }
    ~Engine()
    {
        //cout<<"Engine has been destroyed"<<endl;
    }
};

class Door
{
private:
    string mode;
public:
    Door(string a = ""):mode(a)
    {
        //cout<<"Door has been created using default constructor"<<endl;
    }
    void getData()
    {
        cout<<"Enter Door's Opening Mode : ";
        cin>>mode;
    }
    void setDoor()
    {
        cout<<endl<<"Please Enter Door Information "<<endl;
        cout<<"*******************************************"<<endl;
        getData();
    }
    void print()
    {
        cout<<"Opening mode   : "<<mode<<endl;
    }
    void show_door()
    {
        cout<<endl<<"Door Status " <<endl;
        cout<<"----------------------------------------"<<endl;
        print();
    }
    ~Door()
    {
        //cout<<"Door has been destroyed"<<endl;
    }
};

class Truck
{
private:
    double max_acceleration,fuel_capacity,load_capacity;
    int seat = 2,door = 2,wheel = 6;
    Seat s[2];
    Wheel w[7];
    Engine e;
    Door d[2];
public:
    Truck(double a = 0.00, double b = 0.00, double c = 0.00) : max_acceleration(a),fuel_capacity(b),load_capacity(c)
    {
        //cout<<"Truck has been created using default constructor"<<endl;
        Truck_Error_Handling();
    }
    void getData()
    {
        cout<<"Enter Truck's Maximum acceleration (kmph): ";
        cin>>max_acceleration;
        cout<<"Enter Truck's Fuel Capacity (litres): ";
        cin>>fuel_capacity;
        cout<<"Enter Truck's Load Capacity (tons): ";
        cin>>load_capacity;

        Truck_Error_Handling();
    }
    void setTruck()
    {
        //cout<<"Wheel values has be set using setWheel() function"<<endl;
        cout<<endl<<"Please Enter Truck Information "<<endl;
        cout<<"*******************************************"<<endl;
        getData();
    }
    void show_Truck()
    {
        cout<<endl<<"Truck Status " <<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Maximum Acceleration    : "<<max_acceleration<<" kmph"<<endl;
        cout<<"Fuel Capacity           : "<<fuel_capacity<<" litres"<<endl;
        cout<<"Load Capacity           : "<<load_capacity<<" tons"<<endl;
    }

    void set_Truck()
    {
        cout<<"Please provide the following information"<<endl<<endl;

        for(int i = 0; i <seat ; i++)
        {
            cout<<endl<<"Please Enter Information For Seat no. "<<i+1<<endl;
            cout<<"*******************************************"<<endl;
            s[i].getData();
        }
        for(int i = 0; i <wheel ; i++)
        {
            cout<<endl<<"Please Enter Information For Wheel no. "<<i+1<<endl;
            cout<<"*******************************************"<<endl;
            w[i].getData();
        }
        cout<<endl;
        e.setEngine();
        for(int i = 0; i <door ; i++)
        {
            cout<<endl<<"Please Enter Information For Door no. "<<i+1<<endl;
            cout<<"*******************************************"<<endl;
            d[i].getData();
        }
        cout<<endl;
        setTruck();
    }
    void getTruck()
    {
        cout<<endl<<"Truck Details"<<endl;
        cout<<"----------------------------------------"<<endl<<endl;

        for(int i = 0; i <seat ; i++)
        {
            cout<<endl<<"Seat no. "<<i+1<<" Status " <<endl;
            cout<<"----------------------------------------"<<endl;
            s[i].print();
        }
        for(int i = 0; i <wheel ; i++)
        {
            cout<<endl<<"Wheel no. "<<i+1<<" Status " <<endl;
            cout<<"----------------------------------------"<<endl;
            w[i].print();
        }
        cout<<endl;
        e.show_engine();
        for(int i = 0; i <door ; i++)
        {
            cout<<endl<<"Door no. "<<i+1<<" Status " <<endl;
            cout<<"----------------------------------------"<<endl;
            d[i].print();
        }
        cout<<endl;
        show_Truck();
    }

    void Truck_Error_Handling()
    {
        //cout<<endl<<"Error in provided Truck Information"<<endl;
        if(max_acceleration < 0.0)
            max_acceleration = 0.00;
        if(fuel_capacity < 0.0)
            fuel_capacity = 0.00;
        if(load_capacity < 0.0)
            load_capacity = 0.00;
    }
    ~Truck()
    {
        //cout<<"Truck has been destroyed"<<endl;
    }

};

int main()
{
//    Seat s1;
//    s1.setSeat();
//    s1.show_seat();
//
//    Wheel w1;
//    w1.setWheel();
//    w1.show_wheel();
//
//    Engine e1;
//    e1.setEngine();
//    e1.show_engine();

//    Door d1;
//    d1.setDoor();
//    d1.show_door();

    Truck t1;
    t1.set_Truck();
    t1.getTruck();

    return 0;
}
