//Student Name: Jobanpreet Singh
//Teacher: Dr. Tyson McMillan 
// Tarrant County College
//Date: 5/4/22
// Recursion is the process of defining a problem (or the solution to a problem) in terms of (a simpler version of) itself.

#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include <iostream>

using namespace std;

int factorialR(int n) {
    if (n <= 0)
        return 1;
    return n * factorialR(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << factorialR(n) << endl;
    return 0;
}