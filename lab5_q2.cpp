// program to find maximum among three numbers. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int a, b, c;

//asking for numbers
cout << " find maximum among three numbers." << endl;
cout << " Enter number:" << endl;
cin >> a >> b >> c;


//conditional structure
if (a >= b){
    if (a >= c){
       cout << a << " is maximum among " << a <<", "<< b <<", " << c << endl;
	}
}
else if (b >= c){	 
    if (b >= a){
         cout<< b << " is maximum among " << a <<", "<< b <<", "<< c << endl;
	}
}
else{
     cout<< c << " is maximum among " << a <<", "<< b <<", "<< c << endl;
}

return 0;
}
