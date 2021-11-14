#include <iostream>

using namespace std;

void sortingByInsertion(int ls[], int num){ //sorting function made separatly
    int v,j;
    for (int i =1; i<=num-1;i++){ //with for look we are going through all elements in list
        if (ls[i]<ls[i-1]){ //checking the size of elements
            v = ls[i]; // taking the value
            j=i;

            do{
                ls[j] = ls[j-1];
                j--;
            }
            while(j>0 && ls[j-1]>v);{
                ls[j]=v; //inserting in correct place
            }
        }
    }
}

int main()
{
    int n;

    cout <<"Enter how many numbers needs to be sorted: ";
    cin >> n;
    int mylist[n]; // creating the list with n elements
    cout<<"Enter the numbers:" <<endl;
    for(int i=0; i<=n-1; i++){
        cin >> mylist[i]; //reading the numbers
    }
    sortingByInsertion(mylist,n); //calling back the sort function
    cout <<"Sorted list: ";
    for (int p=0; p<n;p++){
        cout <<mylist[p] << " "; // showing the sorted list
    }
    cout << endl;
}
