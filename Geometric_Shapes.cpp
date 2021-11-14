#include <iostream>
#include <cmath> //we must include cmath since we are using sqrt function
#include <string>
#include <stdio.h>


using namespace std;

int main()
{
	double a, b, c,s;
	char inp='m';
	const double pi = 3.1415;
    cout << "choose type:" << endl;
	cout << "(r) rectangle" << endl;
	cout << "(e) ellipse" << endl;
	cout << "(t) triangle" << endl;
	cout << "(x) exit" << endl;
	cin>>inp;

	while(inp !='x')
    {
		if (inp =='r')
		{
            cout << "Side length a: " << endl;
			cin >> a;
			cout << "Side length b:" << endl;
			cin >> b;
			cout <<"The area of rectangle is: "<< a*b << endl;
		}
		else if (inp=='t')
        {
            cout << "Side length a:" << endl;
			cin >> a;
			cout << "Side length b:" << endl;
			cin >> b;
            cout << "Side length c:" << endl;
            cin >> c;
            float s=(a+b+c)/2;
            cout <<"The area of triangle is: "<<sqrt(s*(s-a)*(s-b)*(s-c)) << endl;

        }
        else if (inp=='e')
        {
            cout << "Half axes a:" << endl;
			cin >> a;
			cout << "Half axes b:" << endl;
			cin >> b;
            cout << "The area of elips is: "<<pi*a*b << endl;
        }
        else
        {
            cout <<"Wrong input"<< endl;
        }
		cout << "choose type:" << endl;
		cout << "(r) rectangle" << endl;
		cout << "(e) ellipse" << endl;
		cout << "(t) triangle" << endl;
		cout << "(x) exit" << endl;
		cin >>inp;
	}
}
