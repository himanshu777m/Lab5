// program to print all natural numbers in reverse (from n to 1). - using while loop 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i;

//asking for numbers

cout << " Print all natural numbers in reverse order ";
cout << " Enter Number: \n";
cin >> n;

//loop stucture

i = 1;
while (n >= i){
		
		cout << n - i << endl;
		i++;
}

return 0;
}

