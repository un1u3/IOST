#include<iostream>

using namespace std;
int main(){
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num = (rand()%100) + 1;
    cout<< "NUMBER GUESSING GAME(1-100)"<<endl;
    
    do{
        tries++;
        cout<<"Enter a number betwween (1-100)";
        cin>> guess;
        if (guess > num){
            cout<<"The number is Less than guessed"<<endl;

        }
        else if (guess < num ){
            cout<<"The number is Higher than guessed"<<endl;
        }
        else{
            cout<<"Yes this is the number"<<endl;
            cout<<"guessed:"<<guess<<endl;
            cout<<"actual:"<<num<<endl;
            cout<<"No of attempts to guess the number:"<<tries<<endl;
        }

    }while(guess != num);


}