#include<iostream>
using namespace std;
int main(){
    int num=num%100+1;
    int guess,attempt;
    cout<<"\t\t\t\t\t---IT'S A NUMBER GUESSING GAME---\n\n";
    cout<<"\t\t\t\t\t\t!!LET'S START!!\n\n";
    for(int i=1; i<=10; i++)
     {    
         cout<<"\t\t\tEnter some input numbers between(0 and 99) for guessing a number:\n\n"; 
          cin>>guess;
          attempt=i;
     if(num==guess){
     cout<<"Congrats! You guessed a correct number.";
     break;
}
     else if(num<guess){
    cout<<"Guess is high\n";
    cout<<"Try Again\n\n";
}
    else
    {
    cout<<"Guess is low\n";
    cout<<"Try Again\n\n";
}
}
}
