//Q1
#include<iostream>
#include<string>
using namespace std;
struct mystruct{
	string name;
	int rollno;
	char hostel;
	float cgpa;	

void addDetails(){
	cout<<"enter name ";
	cin>>name;
	cout<<"enter roll no ";
	cin>>rollno;
	cout<<"enter hostel ";
	cin>>hostel;
	cout<<"cgpa ";
	cin>>cgpa;
}
void updateDetails(){
	addDetails();
}
void updatecgpa(){
	cout<<"\nenter new cgpa ";
	cin>>cgpa;
}
void updateHostel(){
	cout<<"enter new hostel ";
	cin>>hostel;
}
void displaydetails(){
	cout<<"Name "<<name<<endl;
	cout<<"Roll no "<<rollno<<endl;
	cout<<"hostel "<<hostel<<endl;
	cout<<"cgpa "<<cgpa;
}
};
int main(){
	mystruct p;
	p.addDetails();
	p.displaydetails();
	p.updatecgpa();
	p.updateHostel();
	p.displaydetails();
	
}

//Q2

#include<iostream>
#include<string>
using namespace std;
class mystruct{
private:
	string name;
	int rollno;
	char hostel;
	float cgpa;	
	void validatecgpa(){
	    if(cgpa<0||cgpa>10){
	        cout<<"invalid cgpa"
	        cout<<"invalid cgpa setting to o"
	        cgpa=0
	    }
	}
public:
    void addDetails(){
    	cout<<"enter name ";
    	cin>>name;
    	cout<<"enter roll no ";
    	cin>>rollno;
    	cout<<"enter hostel ";
    	cin>>hostel;
    	cout<<"cgpa ";
    	cin>>cgpa;
    	validatecgpa()
    }
    void updateDetails(){
    	addDetails();
    	validatecgpa()
    }
    void updatecgpa(){
    	cout<<"\nenter new cgpa ";
    	cin>>cgpa;
    	validatecgpa()
    }
    void updateHostel(){
    	cout<<"enter new hostel ";
    	cin>>hostel;
    }
    void displaydetails(){
    	cout<<"Name "<<name<<endl;
    	cout<<"Roll no "<<rollno<<endl;
    	cout<<"hostel "<<hostel<<endl;
    	cout<<"cgpa "<<cgpa;
    }
};
int main(){
	mystruct p;
	p.addDetails();
	p.displaydetails();
	p.updatecgpa();
	p.updateHostel();
	p.displaydetails();
	
}

//Q4

#include<iostream>
#include<string>
using namespace std;
class Rectangle{
private:
    int width;
    int height;

public:
    void getData(){
        cout<<"enter width:";
        cin>>width;
        cout<<"enter height:";
        cin>>height;
    }
    void calculateArea(){
        int area=width*height;
        cout<<"area of rectangle="<<area<<endl;
    }
};
int main(){
    Rectangle r;
    r.getData();
    r.calculateArea();
    
	
}

//Q6 (a)

#include <iostream>
using namespace std;

class Demo {
public:
    void show();
};

void Demo::show() {
    cout << "Function defined outside the class" << endl;
}

int main() {
    Demo obj;
    obj.show();
    return 0;
}

//Q6 (b)

#include <iostream>
using namespace std;

int x = 50;

int main() {
    int x = 10;
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}

//Q6 (c)

#include <iostream>
using namespace std;

class Count {
public:
    static int value;
};

int Count::value = 100;

int main() {
    cout << Count::value << endl;
    return 0;
}


//Q6 (d)

#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << a << std::endl;
    return 0;
}

//Q7

#include <iostream>

namespace First {
    int value = 10;

    void display() {
        std::cout << "First namespace value: " << value << std::endl;
    }
}

namespace Second {
    int value = 20;

    void display() {
        std::cout << "Second namespace value: " << value << std::endl;
    }
}

int main() {
    First::display();
    Second::display();

    std::cout << First::value << std::endl;
    std::cout << Second::value << std::endl;

    return 0;
}