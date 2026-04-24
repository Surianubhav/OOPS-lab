// =====================FUNCTION TEMPLATE====================
// Q1
// #include <iostream>
// using namespace std;

// // Function template
// template <typename T>
// void swapValues(T &a, T &b) {
//     T temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     swapValues(x, y);
//     cout << "After swapping integers: x = " << x << ", y = " << y << endl;

//     float p = 1.5, q = 2.5;
//     swapValues(p, q);
//     cout << "After swapping floats: p = " << p << ", q = " << q << endl;

//     char a = 'A', b = 'B';
//     swapValues(a, b);
//     cout << "After swapping chars: a = " << a << ", b = " << b << endl;

//     return 0;
// }



// Q2
// #include <iostream>
// using namespace std;
// template <typename T>
// T findMin(T arr[], int size) {
//     T minElement = arr[0]; 

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < minElement) {
//             minElement = arr[i];
//         }
//     }

//     return minElement;
// }
// int main() {
//     int intArr[] = {5, 2, 9, 1, 7};
//     double dblArr[] = {3.5, 2.1, 4.8, 1.9};

//     cout << "Minimum in int array: " << findMin(intArr, 5) << endl;
//     cout << "Minimum in double array: " << findMin(dblArr, 4) << endl;

//     return 0;
// }


//Q3
// #include <iostream>
// using namespace std;

// template <typename T>
// void bubbleSort(T arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 T temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// template <typename T>
// void printArray(T arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {5, 2, 9, 1, 7};
//     double arr2[] = {3.4, 1.2, 5.6, 2.8};

//     bubbleSort(arr1, 5);
//     bubbleSort(arr2, 4);

//     printArray(arr1, 5);
//     printArray(arr2, 4);

//     return 0;
// }



//Q4
// #include <iostream>
// using namespace std;

// template <typename T>
// int linearSearch(T arr[], int size, T key) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {4, 7, 1, 9, 3};
//     int index = linearSearch(arr, 5, 9);
//     cout << index;
//     return 0;
// }



// Q5
// #include <iostream>
// using namespace std;

// template <typename T>
// void process(T a) {
//     cout << a << endl;
// }

// template <typename T>
// void process(T a, T b) {
//     cout << a << " " << b << endl;
// }

// template <typename T, typename U>
// void process(T a, U b) {
//     cout << a << " " << b << endl;
// }

// int main() {
//     process(5);
//     process(3, 7);
//     process(4, 5.6);
//     return 0;
// }

// Q5
// #include <iostream>
// using namespace std;

// template <typename T>
// void process(T a) {
//     cout << a << endl;
// }

// template <typename T>
// void process(T a, T b) {
//     cout << a << " " << b << endl;
// }

// template <typename T, typename U>
// void process(T a, U b) {
//     cout << a << " " << b << endl;
// }

// int main() {
//     process(5);
//     process(3, 7);
//     process(4, 5.6);
//     return 0;
// }


//====================CLASS TEMPLATE====================

// #include <iostream>
// using namespace std;

// template <typename T>
// class Stack {
//     T arr[100];
//     int top;
// public:
//     Stack() { top = -1; }
//     void push(T x) {
//         if (top == 99) return;
//         arr[++top] = x;
//     }
//     T pop() {
//         if (top == -1) return T();
//         return arr[top--];
//     }
// };

// template <typename T>
// class Queue {
//     T arr[100];
//     int front, rear;
// public:
//     Queue() { front = 0; rear = -1; }
//     void enqueue(T x) {
//         if (rear == 99) return;
//         arr[++rear] = x;
//     }
//     T dequeue() {
//         if (front > rear) return T();
//         return arr[front++];
//     }
// };

// template <typename T1, typename T2>
// class Pair {
//     T1 a;
//     T2 b;
// public:
//     Pair(T1 x, T2 y) { a = x; b = y; }
//     void display() {
//         cout << a << " " << b << endl;
//     }
// };

// template <typename T>
// class Arithmetic {
//     T a, b;
// public:
//     Arithmetic(T x, T y) { a = x; b = y; }
//     T add() { return a + b; }
//     T sub() { return a - b; }
//     T mul() { return a * b; }
//     T div() { return b != 0 ? a / b : T(); }
// };

// template <typename T>
// class Array {
//     T arr[100];
//     int n;
// public:
//     void input(int size) {
//         n = size;
//         for (int i = 0; i < n; i++) cin >> arr[i];
//     }
//     void display() {
//         for (int i = 0; i < n; i++) cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// int main() {
//     Stack<int> s;
//     s.push(10);
//     s.push(20);
//     cout << s.pop() << endl;

//     Queue<int> q;
//     q.enqueue(5);
//     q.enqueue(15);
//     cout << q.dequeue() << endl;

//     Pair<int, double> p(3, 4.5);
//     p.display();

//     Arithmetic<int> ar(10, 5);
//     cout << ar.add() << " " << ar.sub() << " " << ar.mul() << " " << ar.div() << endl;

//     Array<int> a;
//     a.input(3);
//     a.display();

//     return 0;
// }