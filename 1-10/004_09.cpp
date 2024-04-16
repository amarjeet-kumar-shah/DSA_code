#include <iostream>
using namespace std;

int main()
{
   char n;
   cout << "Enter Charter :" <<" ";
   cin>>n;
   char i ='A';
   
   char m= 'A';
   while (i<=n)
   {
      
       char j = 'A';
        while (j<=n)
        {
            cout<<m<<" ";
            j++;
            m++;
            
        }
        cout<<endl;
        i++;
        m= i++;

        
   }
  
   
}