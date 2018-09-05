// program to print all even numbers between 1 to 100. - using while loop 


//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n;

//asking for numbers

cout << "  Print all even numbers between 1 to 100. - using while loop\n";


//loop stucture

n = 1;
while (n<=100){
		if (n % 2 == 0){
		cout << n << endl;
		}
		n++;
}

return 0;
}

