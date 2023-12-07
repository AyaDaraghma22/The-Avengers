import java.io.*;
import java.util.*;
//Aya Rafe' Daraghma
//11924594  

public class Solution {
    
    
    //find maximum
 static int max_func(int a[], int n)
  {
      int max = a[0];
      for (int i = 1; i < n; i++)
      {
        if (a[i] > max)
        max = a[i];
      }
        return max;
  }
    
    // count
     static void count(int a[], int n, int s)
    {
        int A[] = new int[n];
        int c[] = new int[10];
        Arrays.fill(c, 0);
 
        int k;
        for (k=0; k< n; k++)
        c[(a[k]/s) % 10]++;

        for (k=1; k<10; k++)
        c[k] = c[k]+c[k - 1];
 
        for (k=n-1; k>=0; k--) 
        { 
            A[c[(a[k]/s) % 10] - 1] = a[k];
            c[(a[k]/s) % 10]--;
        }
 
        for (k=0; k<n; k++)
            a[k] = A[k];
    }
 
  //sort
    static void sorting_array(int a[], int n)
    {
        int m = max_func(a, n);
        for (int s=1; m/s>0; s=s*10)
            count(a,n,s);
    }


    // printing array 
static void print_array(int a[]) 
    { 
 
    int n = a.length; 
    System.out.print("[");
    for(int i=0; i<n; i++)
    {
       System.out.print(a[i]);
        if (i==n-1)
          break;
        else
       System.out.print(",");
    }
   System.out.println("]");
    } 

    //main 
    public static void main(String[] args) 
    {
      int n;  
      Scanner sc=new Scanner(System.in); 
      n=sc.nextInt();  
      int a[]=new int[n];
    
   for(int k=0; k<n;k++)
   {
    a[k]=sc.nextInt();  
   }

   Solution o= new Solution();
   o.sorting_array(a, n);
   print_array(a);

   }
}