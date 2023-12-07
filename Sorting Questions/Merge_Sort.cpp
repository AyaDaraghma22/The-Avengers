import java.io.*;
import java.util.*;
//Aya Rafe' Daraghma
//11924594  

public class Solution {

 void merge(int a[], int left, int middle, int right)
    {
        int n1 = middle - left + 1;
        int n2 = right - middle;
  
        int left_array[] = new int[n1];
        int right_array[] = new int[n2];
  
        for (int i = 0; i < n1; ++i)
            left_array[i] = a[left + i];
        for (int j = 0; j < n2; ++j)
            right_array[j] = a[middle + 1 + j];
  
        int ll = 0, rr = 0;
        int aya = left;
        
        while (ll < n1 && rr < n2) {
            if (left_array[ll] <= right_array[rr]) {
                a[aya] = left_array[ll];
                ll++;
                aya++;
            }
            else {
                a[aya] = right_array[rr];
                rr++;
                aya++;
            }
        }
        
        while (ll < n1) {
            a[aya] = left_array[ll];
            ll++;
            aya++;
        }
        
        while (ll < n2) {
            a[aya] = right_array[rr];
            rr++;
            aya++;
        }
    }
  
    void sort(int a[], int left, int right)
    {
        if (left < right) {
            int m =left+ (right-left)/2;
  
            sort(a, left, m);
            sort(a, m + 1, right);
            merge(a, left, m, right);
        }
    }
/////// printing array //////////////////////
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
   o.sort(a, 0, a.length - 1);
   print_array(a);

   }
}