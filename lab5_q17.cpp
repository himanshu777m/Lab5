// program to find all roots of a quadratic equation. 

//include library
#include<iostream>
#include<cmath>
using namespace std;

//including function
int main()
{

//declaring variable
int a,b,c,d,p,q;

//asking for numbers

cout << "  program to find all roots of a quadratic equation.\n";

cout << "  Enter coefficient of " << char(120) << "^2: ";
cin >> a;

cout << "  Enter coefficient of x: ";
cin >> b;

cout << "  Enter constant turm in quadratic: ";
cin >> c;

d = (pow(b,2))-(4*a*c);


//conditinal structure
if (d == 0){	
	p = ((-b)+ sqrt(d))/(2*a);
	cout << "Roots are equal and is: " << p <<endl;
	}

else if (d > 0){
	p = ((-b)+ sqrt(d))/(2*a);
	q =  ((-b) - sqrt(d))/(2*a);
	cout << " Roots are " << p << " and " << q <<endl;
}

else{
	cout << " No real Roots of equation\n";
}

	

return 0;
}

