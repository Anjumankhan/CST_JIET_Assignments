#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,p=0,n,x;
	vector<int>ar;
	cout<<"enter no. of elements :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		
		cout<<"enter elements"<<i+1<<" :  ";
		cin>>x;
		ar.push_back(x);
		
    }
		
  for(i=0;i<ar.size();i++)
     {    
       p=p^ar[i];
       
     }
 
 cout<<p;		
		

}
