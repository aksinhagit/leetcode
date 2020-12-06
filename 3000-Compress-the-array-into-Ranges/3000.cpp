/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// C++ program to compress the array ranges 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to compress the array ranges 
void compressArr(int arr[], int n) 
{ 
    int i = 0, j = 0; 
    sort(arr, arr + n); 
    for(int k = 0; k < n ;k++)
        cout << arr[k] << "\t";
    cout << endl;
    while (i < n) { 
  
        // start iteration from the 
        // ith array element 
        j = i; 
  
        // loop until arr[i+1] == arr[i] 
        // and increment j 
        while ( ((j + 1) < n) && 
                ((arr[j+1] == arr[j]) || (arr[j + 1] == arr[j] + 1))){
                    j++; 
        } 
  
        // if the program do not enter into 
        // the above while loop this means that 
        // (i+1)th element is not consecutive 
        // to i th element 
        if (i == j) { 
            cout << arr[i] << " "; 
  
            // increment i for next iteration 
            i++; 
        } 
        else { 
            // print the consecutive range found 
            cout << arr[i];
            if(arr[i] != arr[j])
                cout << "-" << arr[j] << " ";
            else 
                cout << " ";
  
            // move i jump directly to j+1 
            i = j + 1; 
        } 
    } 
} 
  
// Driver code 
int main() 
{ 
  
    int n; 
    int arr[] = { 1, 3, 4, 1,5, 1,6,6, 9, 6,10, 1,1,1}; 
    n = sizeof(arr)/sizeof(arr[0]);
  
    compressArr(arr, n); 
} 