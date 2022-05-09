#include <iostream>
using namespace std;

/*
//set operation
int getSet(int Set[20], int n){
    int i;
    for(i=0; i<n; i++){
        cin>>Set[i];
    }
}

int dispSet(int Set[20], int n){
    int i;
	for(i=0; i<n; i++){
        cout<< Set[i];
    }

}

int Union(int setA[20], int setB[0], int setC[20], int n, int n1 ){
    int i, j, k;
    k=0;
    for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			if(setC[j]==setA[i])
            break;
		}
		if(j==k){
          setC[k]=setA[i];
          k++;
       }
    }
    for(i=0; i<n1; i++){
		for(j=0; j<k; j++){
			if(setC[j]==setB[i])
            break;
		}
		if(j==k){
          setC[k]=setB[i];
          k++;
       }
    }
    printf("Union of First and Second set is: ");
    for(i=0;i<k;i++){
    	cout<< setC[i];
	}
}

int Intersection(int a[20], int b[0], int c[20], int n, int n1){
	int i,j,k;
	k=0;
	for(i=0; i<n; i++){
		for(j=0; j<n1; j++){
			if(a[i]==b[j]){
				c[k] = a[i];
				k++;
			}
		}
	}
	printf("Intersection of First and Second set is: ");
    for(i=0;i<k;i++){
    	cout<<c[i];
	}
}

int setDiff(int a[20], int b[0], int c[20], int n, int n1){
	int i, j, k, l;
	k=0;
	for(i=0; i<n; i++){
		for(j=0; j<n1; j++){
			if(b[j]==a[i])
             break;
		}
		if(j==n1){
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
	}

    printf("Set Difference of sets is: ");
    for(i=0;i<k;i++){
    	cout<<c[i];
	}
}

int symDiff(int a[20], int b[0], int c[20], int n1, int n2){
	int i, j, k, l, m, n;
	int d[20], e[20];
	k=0;
	m=0;
	n=0;
	for( i=0;i<n1;i++){

        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {

            for(l=0;l<k;l++)
            {
                if(d[l]==a[i])
                 break;
            }
            if(l==k)
            {
                d[k]=a[i];
                k++;
            }
        }

    }

    // logic for find B-A

    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                e[m]=b[i];
                m++;
            }
        }

    }

    for(i=0;i<k;i++)
    {
        c[n]=d[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        c[n]=e[i];
        n++;
    }


    printf("Symmetric Difference of sets is: ");
    for(i=0;i<n;i++){
    	cout<<c[i];
	}
}


int main(){
    int set1[20], set2[20], set3[20];
    int size1, size2;
    cout<<"Enter the size of first set: ";
    cin>>size1;
    cout<<"Enter the size of second set: ";
    cin>>size2;

    cout<<"Enter the elements of first set: \n";
    getSet(set1, size1);

    cout<<"Enter the elements of second set: \n";
    getSet(set2, size2);

	cout<<"Elements of First set: ";
    dispSet(set1, size1);

    cout<<"\n";
    cout<<"Elements of Second set: ";
    dispSet(set2, size2);
    cout<<"\n";
    Union(set1, set2, set3, size1, size2);
    cout<<"\n";

    Intersection(set1, set2, set3, size1, size2);
    cout<<"\n";

    cout<<"For A-B: \n";
    setDiff(set1, set2, set3, size1, size2);
    cout<<"\n";

    cout<<"For B-A: \n";
    setDiff(set2, set1, set3, size2, size1);
    cout<<"\n";

    symDiff(set1, set2, set3, size1, size2);
    cout<<"\n";

    return 0;
}


//program to find cartesian products

int getSet(int *arr, int n){

    for(int i=0; i<n; i++){
        cin>>*(arr + i);
    }
    return *arr;
}

void dispSet(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
}

int findCart(int *arr1, int *arr2, int n, int n1){
    for(int i=0; i<n; i++){
        cout<<"{";
        for(int j=0; j<n1; j++){
            cout<<"{"<< arr1[i]<<","<<arr2[j]<<"}";
        }
        cout<<"}";
    }
}

int main(){

    int size1, size2;

    cout<<"Enter the size of First set: ";
    cin>>size1;
    cout<<"Enter the size of Second set: ";
    cin>>size2;
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];
    cout<<"Enter Elememts of First Set: \n";
    getSet(arr1, size1);
    dispSet(arr1, size1);
    cout<<"\nEnter Elememts of First Set: \n";
    getSet(arr2, size2);
    dispSet(arr2, size2);

    cout<<"\n";
    findCart(arr1, arr2, size1, size2);

    delete []arr1;

    return 0;
}


//floor and ceiling


int main(){
    double realNum;
    cout<<"Enter a Real Number: ";
    cin>>realNum;
    cout<<"Ceiling: "<< ceil(realNum)<< "\nFloor: "<< floor(realNum);
}
*/

//fuzzy set


class people{
    int age;
    string name;

    public:


    void setName(){
        cout<<"Enter Name: ";
        cin>>name;
    }

    void setAge(){
        cout<<"Enter Age: ";
        cin>>age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    void fuzzySetA(){
        float degree;
        if(age<=20) degree = 1;
        else if(age>20 && age<=30) degree = (float)(30-age)/10;
        else degree = 0;
        cout<<"Degree of membership: "<<degree<<endl;
    }

    void fuzzySetB(){
        float degree;
        if(age<=15) degree = 1;
        else if(age>15 && age<=35) degree = (float)(35-age)/20;
        else degree = 0;
        cout<<"Degree of membership: "<<degree<<endl;
    }


};

int main(){
    people fuzz[5];

    for(int i=0; i<5; i++){
        fuzz[i].setName();
        fuzz[i].setAge();
    }
    cout<<endl;

    cout<<"fuzzy set for 4a"<<endl;
    for(int i=0; i<5; i++){
        fuzz[i].display();
        fuzz[i].fuzzySetA();
        cout<<endl;

    }
    cout<<"fuzzy set for 4b"<<endl;
    for(int i=0; i<5; i++){
        fuzz[i].display();
        fuzz[i].fuzzySetA();
        cout<<endl;

    }

    return 0;
}



