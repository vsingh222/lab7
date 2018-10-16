#include<iostream>

using namespace std ;

int main()
{
    
    int score ;
    

    std::cout<<" Enter the scores : ";
    std::cin>>score;
    
    if(score>=86) {
    
       cout<<" Grade A "<<endl;
    
    }
    else if (score>=72)  {
    
        cout<<" Grade B "<<endl;
    }
    
     else if(score>=60) {
     
         cout<<" Grade C "<<endl;
     }
     
      else if(score>=50) {
      
          cout<<" Grade D "<<endl;
      }
      
     else 
     {

         std:: cout<<" Grade F ";
    }

    return 0;
}
    
    
    

    