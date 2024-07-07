#include<iostream>
using namespace std;

int main()
{

    /*
    // This program is about to print number from 1 to n;
    int n;
    cout<<"Enter a number you want to print sireas of that number :"<<endl;
    cin>>n;
 int i=1;
    while (i<=n)
    {
        cout<<i <<" ";
        i=i+1;
    }


// this program is about to sum number from start to n

int n;
cout<<"Enter a number you want to print sireas of that number :"<<endl;
cin>>n;
int sum = 0;
int i = 1 ;

while(i<=n)
{
    sum=sum+i;
    i++;
}
cout<<sum;

// Let create the above program by formula ;
int n;
int a = 1;

cout<<"Enter a number you want to print sireas of that number :"<<endl;
cin>>n;

int l = n;

int sum = (n/2*(a+l));
cout<<"The sum is  "<<sum;
*/

int n;
cout<<"Enter a number and check either prinme or not:"<<endl;
cin>>n;
int i=2;
while (i<n)
{
    if (n%i==0)
    {
        cout<<"not prime number";
    }
    i++;

}



}