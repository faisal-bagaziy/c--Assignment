#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;



int main() {

      srand(time(0));
	  int number;
      number = rand() % 10 + 1;
      int guess;
	  cout<<"enter your guess"<<endl;
	  cin>>guess;
	  int tries=1;
	  char answer;
	  
	  answer='y';
	while(answer != 'n'&& answer=='y'){
				  		 
				  		
					  
		
	  while(guess!=number){
	  
	  
				
	  		
			  
	  			if(guess>number){
	  				cout<<"your guess is too high\n enter another guess\n ";
	  				cin>>guess;
					  tries++;
				  }	
				  
		   	else if(guess<number){
					cout<<"your guess os too low\n enter another guess\n ";
					cin>>guess;
				  	tries++;
				 }
}



				  if(guess==number){
				  	cout<<"you won and you take "<<tries<<" tries to do it\n  ";
				  }
				  
				  	cout<<"do you want to play again? y or n"<<endl;
				  	cin>>answer;
			
				  	
				  if(answer='n' && answer!='y'){
					cout<<"thanks for playing";
						}
				  	
}
						  

				  return 0;
}
