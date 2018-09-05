// program to find maximum between two numbers. 

//include library
#include<iostream>
#include<cstring>                 //stringstream
using namespace std;

//including function
int main()
{

//declaring variable
int a, b;

//asking for numbers
cout << " find maximum between two numbers." << endl;
cout << " Enter number:" << endl;
cin >> a >> b;


//conditional structure
if (a > b){
       cout << a << " is maximum between " << a <<" and " << b << endl;
}
else
{
cout<< b << " is maximum between " << a <<" and " << b << endl;
}

return 0;
}
