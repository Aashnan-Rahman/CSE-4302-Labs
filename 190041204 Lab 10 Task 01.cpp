//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 10 TASK 1

#include<bits/stdc++.h>
using namespace std;

class electronic_device
{
private:
	double length;
	double width;
	double dimension;
	double price;

	void calc_dimension()
	{
		dimension = sqrt (length*length + width*width);
	}

public:
	electronic_device(double a = 0, double b = 0,double c = 0) :length (a), width(b), price(c)
	{
		calc_dimension();
	}

	void getData()
	{
		cout<<"Enter the following information: "<<endl;
		cout<<"Length :"<<endl;
		cin>>length;
		cout<<"Width :"<<endl;
		cin>>width;
		cout<<"Price :"<<endl;
		cin>>price; 
	}

	void show()
	{
		cout<<endl<<"--Features--"<<endl;
		cout<<"Length : "<<length<<" inches"<<endl;
		cout<<"Width  : "<<width<<" inches"<<endl;
		cout<<"Price  : "<<price<<" Taka"<<endl;
	}
	
	virtual void print() = 0;	//pure virtual function

/*	virtual void print()		//virtual function
	{
		show();
	}*/

	virtual ~electronic_device()
	{
		cout<<endl<<"Electronic device destroyed"<<endl;
	} 
};

class mobile : public electronic_device
{
private:
	string model;
	string OS;
	int memory;
public:
	mobile(double a = 0, double b = 0,double c = 0, string d = "", string e = "", int f = 0) : electronic_device(a,b,c),model(d),OS(e),memory(f)
	{}

	void getData()
	{
		electronic_device::getData();

		cout<<"Model  : "<<endl;
		cin>>model;
		cout<<"OS     : "<<endl;
		cin>>OS;
		cout<<"Memory : "<<endl;
		cin>>memory;
	}

	void print()
	{
		show();

		cout<<"Model  : "<<model<<endl;
		cout<<"OS 	  : "<<OS<<endl;
		cout<<"Memory : "<<memory<<" GB"<<endl;
	}

	~mobile()
	{
		cout<<endl<<"Mobile destroyed"<<endl;
	}
};

class TV : public electronic_device
{
private:
	string brand;
	string quality;
public:
	TV(double a = 0, double b = 0,double c = 0, string d = "", string e = "") : electronic_device(a,b,c),brand(d),quality(e)
	{}

	void getData()
	{
		electronic_device::getData();

		cout<<"Brand  : "<<endl;
		cin>>brand;
		cout<<"Quality  : "<<endl;
		cin>>quality;
	}

	void show()
	{
		electronic_device::show();

		cout<<"Brand  : "<<brand<<endl;
		cout<<"Quality : "<<quality<<endl;
	}

	void print()
	{
		show();
	}

	~TV()
	{
		cout<<endl<<"TV destroyed"<<endl;
	}
};

int main()
{
/*	electronic_device *a = new electronic_device(5,6,1000);	//when only virtual
	a->print();*/

	electronic_device *p = new mobile(7,5,15000,"Samsung 11","Android", 64);	//when pure virtual
	p->print();

	electronic_device *q = new TV(7,5,15000,"SONY","4K");	
	q->print();

	delete p;

	return 0;

}