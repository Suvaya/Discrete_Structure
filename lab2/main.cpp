#include <iostream>
#include<stdbool.h>
using namespace std;
/*

//program to find gcd
int gcd(int num1, int num2){

    if(num1==0) return num2;

    return gcd(num2%num1, num1);

}

int gcdExtended(int num1, int num2, int *x, int *y){
    if(num1==0){
        *x=0;
        *y=0;
        return num2;
    }
    int x1, y1;
    int gcd = gcdExtended(num2%num1, num1, &x1, &y1);

    *x = y1 - (num2/num1) * x1;
    *y = x1;

    return gcd;
}

int main(){
    int x, y;
    int g =  gcdExtended(35, 15, &x, &y);
    cout<< "GCD(35, 15) = "<<g<<endl;
    return 0;
}

//find prime factors
void primefactors(int num){
    int i;
    printf("Prime Factors: ");
    if(num = 1) printf("%d", num);
    for(i=2; num>1; i++){
        while(num%i==0){
            cout<<i;
            num = num/i;
        }
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    cin>>num;

    primefactors(num);

    return 0;

}

// C++ program for linear congruence
#include <bits/stdc++.h>
using namespace std;

find the value of gcd(a, b)
long long ExtendedEuclidAlgo(
	long long a, long long b,
	long long& x, long long& y)
{
	// Base Case
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	else {

		// Store the result of recursive call
		long long x1, y1;
		long long gcd
			= ExtendedEuclidAlgo(b, a % b, x1, y1);

		// Update x and y using results of
		// recursive call
		x = y1;
		y = x1 - floor(a / b) * y1;

		return gcd;
	}
}

// Function to give the distinct
// solutions of ax = b (mod n)
void linearCongruence(long long A,
					long long B,
					long long N)
{
	A = A % N;
	B = B % N;

	long long u = 0, v = 0;

	// Function Call to find
	// the value of d and u
	long long d = ExtendedEuclidAlgo(A, N, u, v);

	// No solution exists
	if (B % d != 0) {
		cout << -1 << endl;
		return;
	}

	// Else, initialize the value of x0
	long long x0 = (u * (B / d)) % N;
	if (x0 < 0)
		x0 += N;

	// Print all the answers
	for (long long i = 0; i <= d - 1; i++)
		cout << (x0 + i * (N / d)) % N << " ";
}

// Driver Code
int main()
{
	// Input
	long long A = 15;
	long long B = 9;
	long long N = 18;

	// Function Call
	linearCongruence(A, B, N);

	return 0;
}
*/

//chinese remainder theorem

int findMinX(int num[], int rem[], int k)
{
    int x = 1; // Initialize result

    // As per the Chinese remainder theorem,
    // this loop will always break.
    while (true)
    {
        // Check if remainder of x % num[j] is
        // rem[j] or not (for all j from 0 to k-1)
        int j;
        for (j=0; j<k; j++ )
            if (x%num[j] != rem[j])
               break;

        // If all remainders matched, we found x
        if (j == k)
            return x;

        // Else try next number
        x++;
    }

    return x;
}

int main(){
    int num[] = {3, 4, 5};
    int rem[] = {2, 3, 5};
    int k = sizeof(num)/sizeof(num[0]);
    cout<<findMinX(num, rem, k);
    return 0;
}
