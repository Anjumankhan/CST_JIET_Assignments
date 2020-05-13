#include<bits/stdc++.h>
 using  namespace std;
 
 int main()
 {
 	  int i,j,A;
 	  cout<<"please enter the value of A"<<endl;
 	  cin>>A;
 	  vector<vector<int> > ar(A,vector<int>(A,0));
 	  //now code part 
 	
 	   //filling the first coloumn with 0
 	   
 	   for(i=0;i<A;i++)
 	   {
 	      ar[i][0]=1;
 	
        }
 	
 	for(i=0;i<A;i++)
 	{
	 	 for(j=0;j<A;j++)
            {
 				  cout<<ar[i][j]<<" ";
   		     }
 	 	 cout<<endl;
      }
 	
for(i=1;i<A;i++){

  for(j=1;j<A;j++)
  {
  	if(i> j){
  		if(i==j){
  			ar[i][j]=ar[i][j-1];
  			
		  }
		  else {
		  	
		  	ar[i][j]=ar[i][j-1]+ar[i-1][j];
		  	
		  }
	  }
  	
  	
  }
          
 	
 }
 	
 	
 	for(i=0; i<A;i++){
 		
 		for(j=0;j <A;j++){
		 
 		
 		cout<<ar[i][j]<<" ";
 	}
 	cout<<endl;
 	
 }
cout<<"the number of ways would be "<<ar[A-1][A-1]<<endl;
}

 	
 	
	 
 	
 	
 	
 	
 	
 	
 	
 	
 
