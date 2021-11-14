#include <iostream>

using namespace std;

int main()
{
	double t;
	double s;
	double g=9.81;
	double v;
	double v1;
	int number_of_products = 0;
	cout <<"Enter the time t given in seconds or exit with t<0: "<<endl;
	cin >> t;
	while(t > 0){
            s=0.5*g*t;
            v=g*t;
            v1=v*3.6;
            cout <<"The distance in meters is: " << s <<endl;
            cout <<"The velocity in meters per second is:  " << v <<endl;
            cout <<"The velocity in km per hour is: " << v1 <<endl;
	cout << "Enter new time or exit with t<0: " << endl;
	cin >> t;
	}
	return 0;
}
