#include <iostream>
using namespace std;

//recursive function to find a^n

int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    cin >> base;
    cout << "Enter power number(positive integer): ";
    cin>> a;
    result = power(base, a);
    cout<<base<<"^"<< a <<"="<< result;
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

/*
//Recursive code to generate fibonacci series

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout << fib(n);
    getchar();
    return 0;
}
*/

