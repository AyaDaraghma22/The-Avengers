import java.io.*;
import java.util.*;
//Aya Rafe' Daraghma
//11924594  

public class Solution {

int div (int a[], int left, int right)
{
int pivot = a[right];
int index=left-1;
    
  for( int i=left ; i<right; i++ )
   {
     if(a[i]<=pivot)
    {
      index++; 
      //swaping 1
     int temp1=a[index];
     a[index]=a[i];
     a[i]=temp1;
    }
  }
  
    
    //swaping2
   int temp2=a[index+1];
   a[index+1]=a[right];
   a[right]=temp2;

return index+1;
//
}

void sorting_array(int a[],int left, int right)
{
if (left<right)
{
int s=div(a,left,right);
sorting_array (a, left, s-1);
sorting_array (a, s+1, right);
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

   Solution obj_aya= new Solution();
   obj_aya.sorting_array(a, 0, n-1);
   print_array(a);

   }
}