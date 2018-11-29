#include <bits/stdc++.h> 
using namespace std; 
  
// Returns number of pairs in arr[0..n-1] 
// with sum equal to 'sum' 
void printPairs(int arr[], int n, int sum) 
{ 
    // Store counts of all elements in map m 
    unordered_map<int, int> m; 
  for(int i =0;i<n;i++){

        int rem  = sum -arr[i];
        if(m.find(rem)!=m.end()){
            int count = m[rem];
            for (int j = 0;j<count;j++)
        cout<<"("<<rem<<", "
            <<arr[i]<<")"<<endl;
        }
        m[arr[i]]++;

  }
} 
  
// Driver function to test the above function 
int main() 
{ 
    int arr[] = { 2, 5, 7, -1,1, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 6; 
    printPairs(arr, n, sum); 
    return 0; 
} 