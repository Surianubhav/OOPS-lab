//Q1
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B: public A{
// public:
//     int b;
// };

// int main(){
//     A x;
//     B y;
//     x.a=5;
//     y.a=10;
//     y.b=20;
//     cout<<x.a<<endl;
//     cout<<y.a<<" "<<y.b;
// }

//Q2
// #include <iostream>
// using namespace std;

// class A{
// protected:
//     int a;
// };

// class B: public A{
// public:
//     void f(){
//         a=10;
//         cout<<a;
//     }
// };

// int main(){
//     B x;
//     x.f();
// }

//Q3
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// protected:
//     int b;
// private:
//     int c;
// };

// class B: public A{
// public:
//     void f(){
//         a=1;
//         b=2;
//         cout<<a<<" "<<b<<endl;
//     }
// };

// class C: protected A{
// public:
//     void f(){
//         a=3;
//         b=4;
//         cout<<a<<" "<<b<<endl;
//     }
// };

// class D: private A{
// public:
//     void f(){
//         a=5;
//         b=6;
//         cout<<a<<" "<<b<<endl;
//     }
// };

// int main(){
//     B x;
//     C y;
//     D z;
//     x.f();
//     y.f();
//     z.f();
// }

//Q4 Single


// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B: public A{
// public:
//     int b;
// };

// int main(){
//     B x;
//     x.a=1;
//     x.b=2;
//     cout<<x.a<<" "<<x.b;
// }

//Q4 Multiple
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B{
// public:
//     int b;
// };

// class C: public A, public B{
// public:
//     int c;
// };

// int main(){
//     C x;
//     x.a=1;
//     x.b=2;
//     x.c=3;
//     cout<<x.a<<" "<<x.b<<" "<<x.c;
// }

//Q4 Hiearchial
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B: public A{
// public:
//     int b;
// };

// class C: public A{
// public:
//     int c;
// };

// int main(){
//     B x;
//     C y;
//     x.a=1; x.b=2;
//     y.a=3; y.c=4;
//     cout<<x.a<<" "<<x.b<<endl;
//     cout<<y.a<<" "<<y.c;
// }

//Q4 multilevel
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B: public A{
// public:
//     int b;
// };

// class C: public B{
// public:
//     int c;
// };

// int main(){
//     C x;
//     x.a=1;
//     x.b=2;
//     x.c=3;
//     cout<<x.a<<" "<<x.b<<" "<<x.c;
// }

//Q5 Hybrid
// #include <iostream>
// using namespace std;

// class A{
// public:
//     int a;
// };

// class B: public A{
// public:
//     int b;
// };

// class C: public A{
// public:
//     int c;
// };

// class D: public B, public C{
// public:
//     int d;
// };

// int main(){
//     D x;
//     x.B::a=1;
//     x.b=2;
//     x.C::a=3;
//     x.c=4;
//     x.d=5;
//     cout<<x.B::a<<" "<<x.b<<" "<<x.C::a<<" "<<x.c<<" "<<x.d;
// }

//Q5
// #include <iostream>
// using namespace std;

// class A{
// public:
//     A(){
//         cout<<"A"<<endl;
//     }
//     ~A(){
//         cout<<"~A"<<endl;
//     }
// };

// class B: public A{
// public:
//     B(){
//         cout<<"B"<<endl;
//     }
//     ~B(){
//         cout<<"~B"<<endl;
//     }
// };

// int main(){
//     B x;
// }


//Q6
// #include <iostream>
// using namespace std;

// class A{
// public:
//     string t;
//     string a;
//     int p;
// };

// class B: public A{
// public:
//     string s;
// };

// int main(){
//     A x;
//     B y;

//     x.t="Book1";
//     x.a="Auth1";
//     x.p=100;

//     y.t="Book2";
//     y.a="Auth2";
//     y.p=200;
//     y.s="Math";

//     cout<<x.t<<" "<<x.a<<" "<<x.p<<endl;
//     cout<<y.t<<" "<<y.a<<" "<<y.p<<" "<<y.s;
// }


//Q7
// #include <iostream>
// using namespace std;

// class Speedometer{
// public:
//     int speed;
// };

// class FuelGauge{
// public:
//     int fuel;
// };

// class Thermometer{
// public:
//     int temperature;
// };

// class CarDashboard: public Speedometer, public FuelGauge, public Thermometer{
// public:
//     void display(){
//         cout<<speed<<" "<<fuel<<" "<<temperature;
//     }
// };

// int main(){
//     CarDashboard c;
//     c.speed=80;
//     c.fuel=50;
//     c.temperature=30;
//     c.display();
// }


//Q8
// #include <iostream>
// using namespace std;

// class LibraryUser{
// public:
//     string name;
//     int id;
// };

// class Student: public LibraryUser{
// public:
//     int grade;
// };

// class Teacher: public LibraryUser{
// public:
//     string department;
// };

// int main(){
//     Student s;
//     Teacher t;

//     s.name="Rahul";
//     s.id=1;
//     s.grade=10;

//     t.name="Meena";
//     t.id=2;
//     t.department="CS";

//     cout<<s.name<<" "<<s.id<<" "<<s.grade<<endl;
//     cout<<t.name<<" "<<t.id<<" "<<t.department;
// }

//Q9
// #include <iostream>
// using namespace std;

// class Vehicle{
// public:
//     string model;
//     int year;
// };

// class Truck: public Vehicle{
// public:
//     int load_capacity;
// };

// class RefrigeratedTruck: public Truck{
// public:
//     int temperature_control;
// };

// int main(){
//     RefrigeratedTruck r;

//     r.model="Volvo";
//     r.year=2022;
//     r.load_capacity=1000;
//     r.temperature_control=5;

//     cout<<r.model<<" "<<r.year<<" "<<r.load_capacity<<" "<<r.temperature_control;
// }