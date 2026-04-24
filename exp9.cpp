//Q1
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream file("NUM.TXT");
//     for (int i = 1; i <= 200; i++) {
//         file << i << endl;
//     }
//     file.close();
//     return 0;
// }



//Q2
// #include <iostream>
// #include <fstream>
// using namespace std;

// int countAlphabets() {
//     ifstream file("NOTES.TXT");
//     char ch;
//     int count = 0;

//     while (file.get(ch)) {
//         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
//             count++;
//         }
//     }

//     file.close();
//     return count;
// }

// int main() {
//     cout << countAlphabets();
//     return 0;
// }


//Q3
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream src("SOURCE.TXT");
//     ofstream dest("DEST.TXT");
//     char ch;

//     while (src.get(ch)) {
//         dest.put(ch);
//     }

//     src.close();
//     dest.close();
//     return 0;
// }

//Q4
// #include <iostream>
// #include <fstream>
// #include <cstring>
// using namespace std;

// int main() {
//     char str[100];

//     cin.getline(str, 100);

//     int len = strlen(str);
//     cout << len << endl;

//     ofstream out("DATA.TXT");
//     out << str;
//     out.close();

//     ifstream in("DATA.TXT");
//     char ch;
//     while (in.get(ch)) {
//         cout << ch;
//     }
//     in.close();

//     return 0;
// }



//Q5
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("A-Z.txt", ios::out);
//     for (char ch = 'A'; ch <= 'Z'; ch++) file << ch;
//     file.close();

//     file.open("A-Z.txt", ios::in);
//     file.seekg(9);
//     char ch;
//     file.get(ch);
//     cout << ch << endl;
//     file.close();

//     file.open("A-Z.txt", ios::in | ios::out);
//     file.seekp(4);
//     file.put('X');
//     file.close();

//     file.open("A-Z.txt", ios::in);
//     file.seekg(0, ios::end);
//     cout << file.tellg() << endl;
//     file.close();

//     file.open("A-Z.txt", ios::in);
//     file.seekg(-1, ios::end);
//     file.get(ch);
//     cout << ch << endl;
//     file.close();

//     ofstream out("data.txt");
//     out << "This is line one\nThis is line two\nThis is line three";
//     out.close();

//     file.open("data.txt", ios::in);
//     file.seekg(10);
//     cout << file.tellg() << endl;

//     while (file.get(ch)) {
//         cout << ch;
//     }

//     file.close();
//     return 0;
// }



// Q6
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     fstream file("sample.txt", ios::out);
//     string text = "Hello World";

//     for (char ch : text) {
//         file.put(ch);
//         cout << file.tellp() << endl;
//     }
//     file.close();

//     file.open("sample.txt", ios::in | ios::out);
//     file.seekp(6);
//     file << "C++  ";
//     file.close();

//     return 0;
// }