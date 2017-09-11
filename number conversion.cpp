# Akash
include<iostream>
#include<cmath>
using namespace std;
int main()
{
 long bs=1,rev=0, bi,di,oc,x=1,sum=0,c=0,de=0;
 cout<<"Enter binary number : ";
 cin>>bi;
 // binary to decimal
 while(bi!=0)
 {
  di=bi%10;
  sum=sum+di*pow(2,c);
  bi=bi/10;
  c++;
 }
 cout<<sum<<endl;
 // decimal to binary
/*  while(sum!=0)
 {
  di=sum%2;
  de=de+di*bs;  
  sum=sum/2;
  bs=bs*10;
 }
 cout<<de;*/
// decimal to octa
  while(sum!=0)
 {
  di=sum%8;
  de=de+di*bs;
  sum=sum/8;
bs=bs*10;
 }
 cout<<de;
 
 return 0;
}
