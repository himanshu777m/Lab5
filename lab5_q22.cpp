// program to print all natural numbers from 1 to n. - using while loop 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i;

//asking for numbers

cout << " Print all natural numbers from 1 to : ";
cin >> n;

//loop stucture

i = 1;
while (n >= i){
		
		cout << i << endl;
		i++;
}

return 0;
}

