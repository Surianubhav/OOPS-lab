//Q1

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;
};

class Library {
private:
    Book books[100];   
    int count = 0;

public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 100) {
            return false;
        }

        this->books[count].title = title;
        this->books[count].author = author;
        this->books[count].ISBN = ISBN;

        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails() {
        if (count == 0) {
            cout << "No books in library\n";
            return;
        }

        cout << "\nLibrary Books:\n";
        for (int i = 0; i < count; i++) {
            cout << "\nBook " << i + 1 << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
        }
    }
};

bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            // shift elements left
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library lib;
    string t1 = "Book1", a1 = "Author1", i1 = "111";
    string t2 = "Book2", a2 = "Author2", i2 = "222";
    string t3 = "Book3", a3 = "Author3", i3 = "333";
    string t4 = "Book4", a4 = "Author4", i4 = "444";
    string t5 = "Book5", a5 = "Author5", i5 = "555";

    lib.addNewBook(t1, a1, i1);
    lib.addNewBook(t2, a2, i2);
    lib.addNewBook(t3, a3, i3);
    lib.addNewBook(t4, a4, i4);
    lib.addNewBook(t5, a5, i5);

    lib.displayDetails();

    string removeISBN = "333";
    if (lib.removeBooks(removeISBN)) {
        cout << "\nBook with ISBN 333 removed successfully.\n";
    } else {
        cout << "\nBook not found.\n";
    }

    lib.displayDetails();

    return 0;
}

//Q2

#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    Book() {
        this->title = "Unknown";
        this->author = "Unknown";
        this->ISBN = "000";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }

    string getISBN() {
        return this->ISBN;
    }

    void display() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "ISBN: " << this->ISBN << endl;
    }
};

class Library {
private:
    Book books[100];
    int count = 0;

public:
    bool addBook(Book &b) {
        if (count >= 100)
            return false;

        this->books[count] = b; 
        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails() {
        if (count == 0) {
            cout << "No books available\n";
            return;
        }

        cout << "\nLibrary Books:\n";
        for (int i = 0; i < count; i++) {
            cout << "\nBook " << i + 1 << endl;
            this->books[i].display();
        }
    }
};

bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (this->books[i].getISBN() == ISBN) {
            for (int j = i; j < count - 1; j++) {
                this->books[j] = this->books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {

    Book arr[2] = {
        Book("C++ Basics", "Author A", "101"),
        Book("DSA", "Author B", "102")
    };

    Book b1("Maths", "Author C", "103");
    Book b2("Physics", "Author D", "104");

    Book b3 = b1;

    Library lib;

    lib.addBook(arr[0]);
    lib.addBook(arr[1]);
    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    lib.displayDetails();

    string removeISBN = "103";
    if (lib.removeBooks(removeISBN)) {
        cout << "\nBook removed successfully\n";
    } else {
        cout << "\nBook not found\n";
    }

    lib.displayDetails();

    return 0;
}

//Q3

#include <iostream>
#include <string>

class Account {
private:
    const long accountNumber;   // const acc no
    long transactionID;
    std::string transactionType;
    double balance;

    static long globalTxnID; // for unique trscn IDs

public:
    Account(long accNo, double bal)
        : accountNumber(accNo), balance(bal) {
        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == from && balance >= amount) {
            balance -= amount;
            transactionID = ++globalTxnID;
            transactionType = "Debited";
            return transactionID;
        }
        return -1;
    }

    long creditAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == to) {
            balance += amount;
            transactionID = ++globalTxnID;
            transactionType = "Credited";
            return transactionID;
        }
        return -1;
    }

    void displayDetails() const {
        std::cout << "\nAccount No: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Last Transaction ID: " << transactionID << std::endl;
        std::cout << "Transaction Type: " << transactionType << std::endl;
    }
};

long Account::globalTxnID = 1000;

int main() {
    Account acc1(101, 5000);
    Account acc2(102, 6000);
    Account acc3(103, 7000);
    Account acc4(104, 8000);
    Account acc5(105, 9000);

    long txn1 = acc1.depositAmount(102, 101, 1000);
    acc2.creditAmount(102, 101, 1000);

    long txn2 = acc3.depositAmount(104, 103, 1500);
    acc4.creditAmount(104, 103, 1500);

    acc1.displayDetails();
    acc2.displayDetails();
    acc3.displayDetails();
    acc4.displayDetails();
    acc5.displayDetails();

    return 0;
}

//Q4

#include <iostream>
using namespace std;

class B;

class A {
private:
    int numA;

public:
    A(int a) {
        numA = a;
    }

    friend int add(A, B);
};

class B {
private:
    int numB;

public:
    B(int b) {
        numB = b;
    }

    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return obj1.numA + obj2.numB;
}

int main() {
    A objA(10);
    B objB(20);

    int result = add(objA, objB);

    cout << "Sum = " << result << endl;

    return 0;
}

//Q5

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;

    cout << "Sum = " << r << " + " << i << "i" << endl;
}

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex c3 = c1;

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "Copied Complex Number: ";
    c3.display();

    sum(c1, c2);

    return 0;
}
