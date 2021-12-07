#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int x,y ;
for (x=1; x<=3; x++)
  {
for (y=1; y<=x; y++)
  {
cout<<setw(4)<<x*y<<" ";
  }
cout<<"\n";
  }
}   
