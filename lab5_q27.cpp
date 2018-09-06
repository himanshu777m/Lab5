// program to find sum of all natural numbers between 1 to n. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i,s;

//asking for numbers

cout << " Find sum of all natural numbers between 1 to n. \n";
cout << " Enter number: " <<endl;
cin >> n;

//loop stucture


for (i=1; i<=n; i++){
		s += i;  //s = s + i
		} 
		cout << "Sum = " << s << endl;

return 0;
}

