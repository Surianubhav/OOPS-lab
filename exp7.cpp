//Q1

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }

    virtual float calculate_area() = 0; 
};

class Rectangle : public Polygon {
public:
    float calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    float calculate_area() {
        return 0.5 * width * height;
    }
};

int main() {
    Polygon* p;

    Rectangle rect;
    Triangle tri;

    p = &rect;
    p->set_value(10, 5);
    cout << "Area of Rectangle: " << p->calculate_area() << endl;

    p = &tri;
    p->set_value(10, 5);
    cout << "Area of Triangle: " << p->calculate_area() << endl;

    return 0;
}

//Q2

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;     
    virtual void display() = 0;
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }

    void display() {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }

    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};

class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }

    void display() {
        cout << "Shape: Triangle" << endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(6, 3);

    s = &c;
    s->display();
    s->area();

    cout << endl;

    s = &r;
    s->display();
    s->area();

    cout << endl;

    s = &t;
    s->display();
    s->area();

    return 0;
}

//Q3

#include <iostream>
#include <cmath>
using namespace std;

float area(float base, float height) {
    return 0.5 * base * height;
}

float area(float side) {
    return (sqrt(3) / 4) * side * side;
}

float area(float equalSide, float base, int dummy) {
    float height = sqrt(equalSide * equalSide - (base * base) / 4);
    return 0.5 * base * height;
}

int main() {
    float b = 6, h = 4;
    float side = 5;
    float eqSide = 5, base = 6;

    cout << "Area of Right-angled Triangle: " 
         << area(b, h) << endl;

    cout << "Area of Equilateral Triangle: " 
         << area(side) << endl;

    cout << "Area of Isosceles Triangle: " 
         << area(eqSide, base, 0) << endl;

    return 0;
}

//Q4

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    virtual void getData() = 0;
    virtual void display() = 0;
};

class Engineering : public Student {
    string branch;

public:
    void getData() {
        cout << "\nEnter Engineering Student Details\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
        cout << "Branch: ";
        cin >> branch;
    }

    void display() {
        cout << "\n[Engineering Student]" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

class Medicine : public Student {
    string specialization;

public:
    void getData() {
        cout << "\nEnter Medicine Student Details\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
        cout << "Specialization: ";
        cin >> specialization;
    }

    void display() {
        cout << "\n[Medicine Student]" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

class Science : public Student {
    string subject;

public:
    void getData() {
        cout << "\nEnter Science Student Details\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
        cout << "Subject: ";
        cin >> subject;
    }

    void display() {
        cout << "\n[Science Student]" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student* s[3];

    s[0] = new Engineering();
    s[1] = new Medicine();
    s[2] = new Science();

    for (int i = 0; i < 3; i++) {
        s[i]->getData();
    }

    for (int i = 0; i < 3; i++) {
        s[i]->display();
    }

    return 0;
}

//Q5

#include <iostream>
using namespace std;

class Time {
private:
    int h, m, s;

public:
    Time(int hh = 0, int mm = 0, int ss = 0) {
        h = hh;
        m = mm;
        s = ss;
    }

    Time operator + (Time t) {
        Time temp;

        temp.s = s + t.s;
        temp.m = m + t.m + temp.s / 60;
        temp.s = temp.s % 60;

        temp.h = h + t.h + temp.m / 60;
        temp.m = temp.m % 60;

        return temp;
    }

    void show() {
        cout << "Time = " << h << "h "
             << m << "m "
             << s << "s" << endl;
    }
};

int main() {
    Time t1(5,15,34), t2(9,53,58), t3;

    t3 = t1 + t2;

    t3.show();

    return 0;
}

//Q6

#include <iostream>
#include <cstring>
using namespace std;

class STRING {
private:
    char str[100];

public:
    // Constructor
    STRING(const char* s = "") {
        strcpy(str, s);
    }

    // Overload == operator (compare strings)
    bool operator == (STRING s) {
        return strcmp(str, s.str) == 0;
    }

    // Overload + operator (concatenate strings)
    STRING operator + (STRING s) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    // Display function
    void display() {
        cout << str << endl;
    }
};

int main() {
    STRING s1("Hello "), s2("World"), s3;

    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();

    if (s1 == s2)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are Not Equal" << endl;

    return 0;
}

//Q7

#include <iostream>
using namespace std;

class Matrix {
private:
    int a[10][10], r, c;

public:
    void getData() {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2) {
    Matrix temp;

    if (m1.c != m2.r) {
        cout << "Matrix multiplication not possible!" << endl;
        temp.r = temp.c = 0;
        return temp;
    }

    temp.r = m1.r;
    temp.c = m2.c;

    for (int i = 0; i < temp.r; i++) {
        for (int j = 0; j < temp.c; j++) {
            temp.a[i][j] = 0;
            for (int k = 0; k < m1.c; k++) {
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    return temp;
}

int main() {
    Matrix m1, m2, m3;

    cout << "Enter First Matrix:\n";
    m1.getData();

    cout << "Enter Second Matrix:\n";
    m2.getData();

    m3 = m1 * m2;

    cout << "\nResultant Matrix:\n";
    m3.display();

    return 0;
}

//Q8

#include <iostream>
using namespace std;

class Array {
private:
    int arr[5];

public:
   
    Array() {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10; 
        }
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Error: Index out of bounds!" << endl;
            exit(0);  
        }
        return arr[index];
    }
};

int main() {
    Array a;

    cout << "a[2] = " << a[2] << endl; 

    cout << "a[7] = " << a[7] << endl; 

    return 0;
}

//Q9

#include <iostream>
#include <cstdarg> 
using namespace std;

class Numbers {
private:
    int sum;

public:
    Numbers() {
        sum = 0;
    }

    void operator()(int count, ...) {
        va_list args;
        va_start(args, count);

        sum = 0;

        for (int i = 0; i < count; i++) {
            sum += va_arg(args, int);
        }

        va_end(args);
    }

    void display() {
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    Numbers n;

    n(3, 10, 20, 30);
    n.display();

    n(5, 1, 2, 3, 4, 5);
    n.display();

    return 0;
}

//Q10

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    friend istream& operator>>(istream& in, Student& s);

    friend ostream& operator<<(ostream& out, Student& s);
};

istream& operator>>(istream& in, Student& s) {
    cout << "Enter Name: ";
    in >> s.name;

    cout << "Enter Roll: ";
    in >> s.roll;

    return in;
}

ostream& operator<<(ostream& out, Student& s) {
    out << "\nStudent Details:\n";
    out << "Name: " << s.name << endl;
    out << "Roll: " << s.roll << endl;

    return out;
}

int main() {
    Student s;

    cin >> s; 
    cout << s;  

    return 0;
}

//Q11

#include <iostream>
using namespace std;

class Test {
private:
    float value;

public:
    Test(float x) {
        value = x;
    }

    void show() {
        cout << "Value in object = " << value << endl;
    }
};

int main() {
    float f = 10.5;

    Test t = f;

    t.show();

    return 0;
}

//Q12

#include <iostream>
using namespace std;

class Test {
private:
    float value;

public:
    Test(float v = 0) {
        value = v;
    }

    operator float() {
        return value;
    }
};

int main() {
    Test t(25.5);

    float f;

    f = t;  

    cout << "Value in float = " << f << endl;

    return 0;
}
