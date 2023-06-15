#include<iostream>
#include <ctime>
using namespace std;

int main(){
    cout<<"What is your name?"<<endl;
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<endl;

    srand(time(0));
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    cout<<"Rolling dice..."<<endl;
    cout<<"Die 1: "<<dice1<<endl;
    cout<<"Die 2: "<<dice2<<endl;
    cout<<"Total value: "<<dice1+dice2<<endl;
}