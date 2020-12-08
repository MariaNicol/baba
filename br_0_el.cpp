#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[5][5], i, j, br=0;
	for (j=0;j<5;j++)
      for (i=0; i<5; i++)  	
	  
             cin>>a[i][j];
              
    
                for (j=0; j<5;j++) 
               for (i=0; i<5; i++) 
			   {
			    if ( a[i][j]==0) br ++;
               }

             for (i=0;i<5;i++) 
         {
           for (j=0; j<5; j++) cout<<setw(5)<<a[i][j];
          
           cout<<endl;
        }
             cout<<"br= "<<br<<endl;
}

