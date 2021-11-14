#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "Enter a integer number: " << endl;
    cin >> n;
    cout<< "The prime factors are: " << endl;

    while(n% 2==0)
    {
        cout << 2 << " "; //First we print the factors that are 2
        n=n/2;   //We keep dividing and making new n
    }

    for (i=3;i<=n;i=i+2)
    {
        while(n%i==0)
        {
            cout <<i<<" "; //We now now that n is an odd number, so we have size step of 2 starting from 3
            n=n/i;
        }
    }
    if(n>2) //for this condition is when n is or becomes a prime number
    {
        cout <<n<<" ";
    }
    return 0;
}
