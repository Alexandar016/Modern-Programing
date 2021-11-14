#include <iostream>


using namespace std;
double f(double g)  //Defining the function which returns the value of x in certain point
 {
     double r=4/((g*g)+1);
     return r;
 }

int main()
{
    int n,i;
    double b=1; //when i used int for a and b it gave me zero, so we are forced to used double
    double a=0;
    double h,sum=0,p;

    cout << "Enter the number of intervals n for pi calculation: "<< endl;
    cout << "Keep in mind more intervals better approximation"<< endl;
    cin>>n;
    h=(b-a)/n;
    double x[n+1],y[n+1];
    for (i=0;i<=n;i++)
    {
        x[i]=a+h*i;
        y[i]=f(x[i]);

    }
    for (i=1;i<n;i++)
    {
        sum=sum+h*y[i];
    }

    p=(h/2.0)*(y[0]+y[n])+sum;
    cout <<"The approximation for pie is: "<<p<<endl;
    return 0;
}
