
// #include <iostream>
// using namespace std;

// class A {
//     int x;
// public:
//     void set(int x) {
//         this->x = x;
//     }
//     void show() {
//         cout << this->x << endl;
//     }
// };

// int main() {
//     A ob;
//     ob.set(5);
//     ob.show();
    
//     A *p = &ob;
//     p->set(10);
//     p->show();
    
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Y;

// class X {
//     int a;
// public:
//     X(int v) { a = v; }
//     void print() { cout << a << endl; }
//     friend void swp(X &o1, Y &o2);
// };

// class Y {
//     int b;
// public:
//     Y(int v) { b = v; }
//     void print() { cout << b << endl; }
//     friend void swp(X &o1, Y &o2);
// };

// void swp(X &o1, Y &o2) {
//     int t = o1.a;
//     o1.a = o2.b;
//     o2.b = t;
// }

// int main() {
//     X ob1(10);
//     Y ob2(20);
    
//     swp(ob1, ob2);
    
//     ob1.print();
//     ob2.print();
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class N;

// class M {
//     int a;
// public:
//     M(int v) { a = v; }
//     friend void sum(M o1, N o2);
// };

// class N {
//     int b;
// public:
//     N(int v) { b = v; }
//     friend void sum(M o1, N o2);
// };

// void sum(M o1, N o2) {
//     cout << o1.a + o2.b << endl;
// }

// int main() {
//     M ob1(15);
//     N ob2(25);
//     sum(ob1, ob2);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class P {
//     int val;
// public:
//     P() { val = 99; }
//     friend class Q;
// };

// class Q {
// public:
//     void show(P o) {
//         cout << o.val << endl;
//     }
// };

// int main() {
//     P o1;
//     Q o2;
//     o2.show(o1);
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class R {
//     int l, w;
// public:
//     void set(int a, int b) {
//         l = a;
//         w = b;
//     }
//     void area() {
//         cout << l * w << endl;
//     }
// };

// int main() {
//     R arr[3];
    
//     arr[0].set(5, 4);
//     arr[1].set(10, 2);
//     arr[2].set(3, 3);
    
//     for(int i = 0; i < 3; i++) {
//         arr[i].area();
//     }
    
//     return 0;
// }





// #include <iostream>
// using namespace std;

// inline int cube(int n) {
//     return n * n * n;
// }

// int main() {
//     int x = 4;
//     cout << cube(x) << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class T {
// public:
//     int n;
//     T() { n = 0; }
//     T(int v) { n = v; }
// };

// T f1(T o) {
//     o.n = o.n + 5;
//     return o;
// }

// T& f2(T &o) {
//     o.n = o.n + 5;
//     return o;
// }

// int main() {
//     T ob1(10);
//     T ob2;
    
//     ob2 = f1(ob1);
//     cout << ob1.n << " " << ob2.n << endl;
    
//     T ob3(20);
//     T ob4;
    
//     ob4 = f2(ob3);
//     cout << ob3.n << " " << ob4.n << endl;
    
//     return 0;
// }