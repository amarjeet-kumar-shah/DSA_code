#include <iostream>
using namespace std;

int main()
{
   char n;
   cout << "Enter Charter :" <<" ";
   cin>>n;
   char i ='A';
    
   
   while (i<=n)
   {
       char j = 'A';
       
        while (j<=n)
        {
            cout<<i<<" ";
            j++;
            
        }
        cout<<endl;
        
        i++;

        
   }
  
   
}