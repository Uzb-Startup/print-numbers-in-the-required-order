#include <iostream>
#include <conio.h>
using namespace std;
 /*
1    2    3   4
1    2    3
1    2
1  
*/
main()
{
   int i,j;
   int n;
   
   cout<<"enter n:"<<endl;
   cin >>n;
   
   for(i=n ; i>=1 ; i--)  
   {
      for(j=1; j<=i; j++)
           cout<<j<<"  ";       
      cout<<endl;         
   }
  getch();
}
