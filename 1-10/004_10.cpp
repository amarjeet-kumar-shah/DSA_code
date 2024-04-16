#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter number :" <<" ";
   cin>>n;
   int i =1;
   int m =0;
   
   while (i<=n)
   {
        int j = 1;
        while (j<=n - m)
        {
            cout<<j<<" ";
            j++;
         }
        

        
        while (j<=n)
        {   
           cout<<'*'<<" ";
           cout<<'*'<<" ";
            j++;
        }
        


         j = n;
        while (j>=1 + m)
        {
            cout<<j - m<<" ";
            j--;  
        }
        cout<<endl;
        i++;
        m++;     
   }
  
}