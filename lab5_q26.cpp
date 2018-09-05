// Program to print all odd number between 1 to 100. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n;

//asking for numbers

cout << "  Print all odd numbers between 1 to 100.\n";


//loop stucture

n = 0;
while (n<100){
		if (n % 2 == 0){
		cout << n+1 << endl;
		}
		n++;
}

return 0;
}

