#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int a[5][4], i, j;
	for (j=0;j<4;j++)
      for (i=0; i<5; i++)  	
             cin>>a[i][j];
             
  
             
             for (i=0;i<5;i++) 
         {
           for (j=0; j<4; j++) cout<<setw(4)<<a[i][j];
           cout<<endl;
        }
             
}

