// program to check whether a number is negative, positive or zero. 

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

cout << "The value you enter is: " << a << endl;

//conditional structure
if (a > 0){
                  cout << " The Number is Positive\n"; 
          }
     	else if (a < 0){
	          cout << " The Number is Negative\n"; 
	}
	else
	          cout << " The Number is Zero\n";
	


return 0;
}
