//Q1
// #include <iostream>
// using namespace std;
// int main(){
// 	int x;
// 	float y;
// 	char z;
// 	cout<<"input integer ";
// 	cin>>x;
// 	cout<<"input decimal ";
// 	cin>>y;
// 	cout<<"input char ";
// 	cin>>z;
// 	cout<<x<<endl<<y<<endl<<z;
// }


//Q2
// #include <iostream>
// using namespace std;
// int main(){
// 	int x;
// 	float y;
// 	char z;
// 	cout<<"input integer ";
// 	cin>>x;
// 	cout<<"input decimal ";
// 	cin>>y;
// 	cout<<x+y<<endl;
// 	cout<<x*y<<endl;
// 	cout<<x-y;
// }


//Q3
// #include <iostream>
// using namespace std;
// int main(){
// 	int x;
// 	float y;
// 	char z;
// 	cout<<"input temp in degree celsius ";
// 	cin>>y;
// 	cout<<"temp in fahrenheit ";
// 	cout<<(9/5)*y+32;
// }

//Q4
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
// 	int x;
// 	float y;
// 	char z;
// 	cout<<"input\ntemp\tin\bdegree"<<endl<<"celsius"<<endl;
// 	cout<<setw(10)<<"ID"<<setw(10)<<"Price"<<endl;
	
// }

//Q5
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
// 	int x;
// 	int y;
// 	int z;
// 	x=2;
// 	y=3;
// 	x+=2;
// 	y-=3;
// 	cout<<x<<endl<<y;

	
// }


// Q6
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
// 	int x=2;
// 	int y=3;
// 	int z;
// 	x=x^y;
// 	y=x^y;
// 	x=x^y;
// 	cout<<"x is"<<x<<endl<<"y is"<<y;
// }

//Q7
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
// 	int x;
// 	float f;
// 	cout<<"enter the no of days by which user is late "<<endl;
// 	cin>>x;
// 	if (1<=x && x<=5){
// 		f=x*0.50;
// 		cout<<"fine is "<<f;
		
// 	}
// 	if(6<=x && x<=10){
// 		f=5*0.50+(x-5)*1;
// 		cout<<"fine is "<<f;
// 	}
// 	if(11<=x && x<=29){
// 		f=5*0.50+(x-5)*1+(x-10)*5;
// 		cout<<"fine is "<<f;
// 	}
// 	else{
// 		cout<<"your membership is cancelled ";
// 	}
// }

//Q8
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
// 	int x=10;
// 	int z=5;
// 	char y;
// 	cin>>y;
// 	switch(y){
// 		case '+':
// 			cout<<x+z;
// 			break;
// 		case '-':
// 			cout<<x-y;
// 			break;
// 		case '*':
// 			cout<<x*y;
// 			break;
// 		case '/':
// 			cout<<x/y;
// 			break;
// 	}
// }

//Q9

// #include <iostream>
// using namespace std;
// int main(){
// 	int y;
// 	cin>>y;
//     if(y%2==0){
//         cout<<"it is even number";
//     }
//     else{
//         cout<<"odd number";
//     }
// }