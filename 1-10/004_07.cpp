#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter Number :" <<" ";
   cin>>n;
   int i =1;
    
   
   while (i<=n)
   {
       int j = 1;
        int m=i;
        while (j<=i)
        {
            cout<<m<<" ";
            j++;
            m--;
        }
        cout<<endl;
        
        i++;

        
   }
  
   
}