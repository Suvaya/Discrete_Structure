#include <iostream>
using namespace std;

//1 recursive function to find a^n

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
//2 Recursive code to generate fibonacci series

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


//3 insertion sort


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout<< arr[i];
    cout<< "\n";
}

int main()
{
    int arr[] = { 19, 11, 13, 18, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

//4 merge sort

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	//Merge the temp arrays back into arr[l..r]
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if there
	are any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if there
	//are any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

//l is for left index and r is right index of the
//sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout<< A[i];
	cout<<"\n";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout<<"Given array is: ";
	printArray(arr, arr_size);
    cout<<endl;
	mergeSort(arr, 0, arr_size - 1);

	cout<<"Sorted Array: \n";
	printArray(arr, arr_size);
	return 0;
}

//5 linear search


int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 6, 4, 8, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);
	(result == -1)
		? cout<< "Element is not present in array"
		: cout<<"Element is present at index "<<result;
	return 0;
}

//6 recursive binary search


int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout<< "Element is not present in array"
		: cout<<"Element is present at index " << result;
	return 0;
}


*/

