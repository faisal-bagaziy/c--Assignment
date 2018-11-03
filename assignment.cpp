#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;



int main() {

	start:
      srand(time(0));
	  int number;
      number = rand() % 10 + 1;
      int guess;
	  cout<<"enter your guess"<<endl;
	  cin>>guess;
	  int tries=1;
	  char answer;
	  
	  
	  



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
				    answer:
				  	cin>>answer;
			
				  	
				  if(answer=='y'||answer=='Y' ){
						goto start;
						}
			    else if(answer=='n'||answer=='N'){
						cout<<"thank you for playing"<<endl;
					}
					else{
						cout << "Please press either Y or N." << endl;
						goto answer;
					}
						
				  	

				  return 0;
}
