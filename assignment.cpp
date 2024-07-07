// This is myy first assignment 
// Author : Muhammad Walid;
// Date : 7/7/2024
#include<iostream>
using namespace std;

int main()
{
    /*
    char ch ;

    cout<<"Enter a character :";
    cin>>ch;


    if (isupper(ch))

    {
        cout <<"The character is uppercase.";

    }
    else if(islower(ch))
    {
         cout<<"The character is lowercase.";
    }
    else
    {
        cout << "The character is neither uppercase, lowercase, its numeric.";
    }
    */

   // assignment no 2


// find the sum of n even numbers;

int n;
cout<<"Enter a number  :"<<endl;
cin>>n;
int sum = 0;
int i = 2 ;

while(i<=n)
{
    sum=sum+i;
    i=i+2;
}
cout<<sum;


}