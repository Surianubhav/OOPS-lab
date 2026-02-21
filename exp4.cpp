

// #include <iostream>
// using namespace std;
// class Rectangle{
//     private:
//         float length;
//         float breadth;
//     public:
//         Rectangle(){
//             length=0;
//             breadth=0;
//             cout<<"default constructor\n";
            
//         }
//         Rectangle(float x){
//             length=x;
//             breadth=x;
//             cout<<"one parameter construcuter caled\n";
//         }
//         Rectangle(float l,float b){
//             length=l;
//             breadth=b;
//             cout<<"two parameter construcuter caled\n";
//         }
//         float area(){
//             return length*breadth;
//         }
// };
// int main()
// {
//     Rectangle r1;
//     Rectangle r2(5);
//     Rectangle r3(4,6);
//     cout<<"Area of r1="<<r1.area()<<endl;
//     cout<<"Area of r2="<<r2.area()<<endl;
//     cout<<"Area of r3="<<r3.area()<<endl;
  
// }

// #include <iostream>
// using namespace std;
// class Rectangle{
//     private:
//         float length;
//         float breadth;
//     public:
//         Rectangle(float l=0,float b=0){
//             length=l;
//             breadth=b;
//             cout<<"constructor called\n";
            
//         };
//         float area(){
//             return length*breadth;
//         }
//         ~Rectangle(){
//                 cout<<"Destructer called\n";
//         }

//         };
// int main()
// {
//     Rectangle arr[3]={
//     Rectangle(),
//     Rectangle(5),
//     Rectangle(4,6)
// };
// for(int i=0;i<3;i++){
//     cout<<"area of object"<<i+1<<" = "<<arr[i].area()<<endl;
// }
// return 0;
// }



// #include <iostream>
// using namespace std;
// class Rectangle{
//     private:
//         float length;
//         float breadth;
//     public:
//         Rectangle(){
//             length=0;
//             breadth=0;
//             cout<<"default constructor\n";
            
//         }
//         Rectangle(float x){
//             length=x;
//             breadth=x;
//             cout<<"one parameter construcuter caled\n";
//         }
//         Rectangle(float l,float b){
//             length=l;
//             breadth=b;
//             cout<<"two parameter construcuter caled\n";
//         }
//         float area(){
//             return length*breadth;
//         }
// };
// int main()
// {
//     float *f=new float;
//     *f=5.5;
//     cout<<*f<<endl;
//     delete f;
    
//     int *arr=new int[5];
//     for(int i=0;i<5;i++)
//         arr[i]=i+1;
//     for(int i=0;i<5;i++)
//         cout<< arr[i]<<" ";
//     delete[] arr;
    
//     float *farr=new float[3]{1.1,2.2,3.3};
//     for(int i=0;i<3;i++)
//         cout<< farr[i]<<" ";
//     delete[] farr;
    
//     Rectangle *r=new Rectangle(3,4);
//     cout<<"Area = "<<r->area()<<endl;
//     delete r;
    
//     Rectangle *robj=new Rectangle[2]{
//         Rectangle(2,3),
//         Rectangle(5,6)
//     };
//     for (int i=0;i<2;i++){
//         cout<<robj[i].area()<<endl;
//     }
//     delete[] robj;
    
// }