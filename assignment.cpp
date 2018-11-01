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
	  int again;
	  
	  
	  
	

	
		
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
				  
				  	cout<<"do you want to play again? 1 or 2"<<endl;
				  	cin>>again;
				  	for(again==1;;){
				  	
				  	if(again==2){
					 
				  		cout<<"thanks for playing";
						  }
}
				  return 0;
}
