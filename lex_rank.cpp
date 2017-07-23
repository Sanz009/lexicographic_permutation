#include <algorithm>

#include <string.h>

#include <iostream>

#include<stdio.h>

int main()

{
int c=0,co=1,c1=1,i,n;
std::string s1[10];
int k=0,rem;
    
std::string s = "0123456789";
   
std::cin>>n;
for(i=0;i<n;i++)
{
 std::cin>>s1[i];
} 
   
    
std::sort(s.begin(), s.end());
       
do {
        
        
   c++;     

while(k<n)
{

        
if((s==s1[k]))
        
{
          
          
co=co*c;
          
k++;break;       
}

k++;    
 }       
            
        
    
} while(std::next_permutation(s.begin(), s.end()));
    
k++;
}
    
    
rem=c1%23456;

std::cout<<"\n";  
std::cout<<rem;
    
return 0;

}