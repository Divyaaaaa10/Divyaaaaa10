#include <iostream> 
using namespace std; 
const int MAXSIZE = 10; 
int fnBinomialCoefficient(int n, int k); 

int main(void) 
{ 
int n, k; 
cout << "Binomial Coefficients\n"; 
cout << "Calculates the value of nCk\n"; 
cout << "Enter the value of n : "; 
cin >> n; 
cout << "Enter the value of k : "; 
cin >> k; 
if (n<k) 
cout << "\nInvalid Input n should be larger than k!\n"; 
else 
cout << "\nThe value of " << n << "C" << k << " is " << fnBinomialCoefficient(n, k) << endl; 
 return 0; 
} 

int fnBinomialCoefficient(int n, int k) 
{ 
int c[MAXSIZE][MAXSIZE]; 
int i,j; 
for (i=0; i<=n; i++) 
{ 
c[i][0] = 1; 

c[i][i] = 1; 
} 
for (i=1; i<=n; i++) 
for (j=1; j<i; j++) 
c[i][j] = c[i-1][j-1] + c[i-1][j]; 
cout << "\nThe Binomial matrix is :" << endl << "\t"; 
for (i=0; i<=n; i++) 
cout << i << "\t"; 
cout << endl; 
for (i=0; i<=n+1; i++) 
cout<<"========"; 
cout << endl; 
for (i=0; i<=n; i++) 
{ 
cout << "i=" << i << "\t"; 
for (j=0; j<=i; j++) 
{ 
cout << c[i][j] << "\t"; 
} 
cout << endl; 
} 
cout << endl; 
return c[n][k]; 
} 
