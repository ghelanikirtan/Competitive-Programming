#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	  char c,d;
	  string s,s1,s2;
	  int i,x=0;
	  cin>>c;
	  cin>>s1>>s2;
	 if(c=='A'){
	     for(int i=0;i<s1.length();i++){
	        if(s1[i]>='A' && s1[i]<='Z'){
	           s1[i] -= ('A'-'a');
	        }
	     }
	     for(int j=1;j<s2.length();j++){
	        if(s2[j]>='A' && s2[j]<='Z'){
	           s2[j] -= ('A'-'a');
	        }
	     }
	     if(s2[0]>='a' && s2[0]<='z'){
	      s2[0] -= ('a'-'A');
	     }
	    s = s1+s2;
	 }
	 else if(c=='B'){
	     for(int i=0;i<s1.length();i++){
	        if(s1[i]>='A' && s1[i]<='Z'){
	           s1[i] -= ('A'-'a');
	        }
	     }
	     for(int j=0;j<s2.length();j++){
	        if(s2[j]>='A' && s2[j]<='Z'){
	           s2[j] -= ('A'-'a');
	        }
	     }
	    s = s1+'_'+s2;
	 }
	 else if(c=='C'){
	    for(int i=0;i<s1.length();i++){
	       if(s1[i]>='a' && s1[i]<='z'){
	         s1[i] -= ('a'-'A');
	       }  
	    }
	   for(int j=0;j<s2.length();j++){
	     if(s2[j]>='a' && s2[j]<='z'){
	        s2[j] -= ('a'-'A');
	     }
	   }
	  s = s1+'_'+s2;
	 }
	 else if(c=='D'){ 
	    if(s1[0]>='a' && s1[0]<='z'){
	       s1[0] -= ('a'-'A');
	     }
	    for(int i=1;i<s1.length();i++){
	       if(s1[i]>='A' && s1[i]<='Z'){
	         s1[i] -= ('A'-'a');
	       }
	    }
	   if(s2[0]>='a' && s2[0]<='z'){
	    s2[0] -= ('a'-'A');
	   }
	   
	   for(int j=1;j<s2.length();j++){
	  if(s2[j]>='A' && s2[j]<='Z'){
	   s2[j] -= ('A'-'a');
	  }
	   }
	 
	    s = s1+'-'+s2;
	 }
	 else{
	    for(int i=0;i<s1.length();i++){
	        if(i%2){
	       if(s1[i]>='a' && s1[i]<='z'){
	       s1[i] -= ('a'-'A');
	       }
	        }
	   else{
	     if(s1[i]>='A' && s1[i]<='Z'){
	        s1[i] -= ('A'-'a');
	     }
	   }
	    }
	    for(int j=0;j<s2.length();j++){
	       if(j%2){
	        if(s2[j]>='a' && s2[j]<='z'){
	       s2[j] -= ('a'-'A');
	        }
	       }
	      else{
	         if(s2[j]>='A' && s2[j]<='Z'){
	            s2[j] -= ('A'-'a');
	         }
	      }
	    }
	   s = s1+'|'+s2;
	 }
	 cout<<s<<endl;
	}
	return 0;
}
