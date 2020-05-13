//to find pair of elements having minimum xor 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[7]={9,5,3,7,4,5,1};
	
	
	for(int i=0;i<7;i++){
	
	cout<<ar[i]<<endl;
}
	
	
	
	
	 int i,j,p, n=7, mi=INT_MAX;
	 for( int i=0;i<n;i++)
	 {
	 	for( int j=i+1;j<n;j++)
     	{ 
     	
	         int p=ar[i]^ar[j];// xor operation 
	            if(p<mi)
	           {
	   	
	            	mi=p;
	           }
		
		 } 
     } 
	 
	 	cout<< "minimum xor values is "<< mi << endl;
	
}
