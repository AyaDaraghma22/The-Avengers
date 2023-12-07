#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Aya Rafe' Daraghma
//11924594

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n; //5
    cin>>n;
    int a[n];
    int i=0;
    // array with size n
  
    // fill the array by user
    for (i=0; i<n; i++) //a[0]->a[4]
    {
       cin>> a[i]; 
    }
    
    // sorted arrayy 
  int k, key, pt;
    for (k=0; k<n; k++)
    {
        key = a[k];
        pt = k-1;
        
        while (pt >= 0 && a[pt]>key)
        {
           a[pt+1]=a[pt];
            pt=pt-1;
        }
        a[pt+1]=key;
    }
          
    

    // print the array
      cout<< "[";
    for(int i=0; i<n; i++)
    {
        cout<< a[i];
        if (i==n-1)
            break;
        else
        cout<<",";
    }
   cout <<"]";
    
    
    return 0;
}
