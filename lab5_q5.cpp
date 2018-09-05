// program to check whether a number is even or odd. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int a;

//asking for numbers

cout << " Enter number:";
cin >> a;


//conditional structure
if (a % 2 == 0){
                  cout << " The Number is EVEN\n"; 
          }
else
     cout << a << " THE Number is ODD\n";


return 0;
}
