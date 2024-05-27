#include<iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    while(amount!=0){
        if(amount>100){
            int u=amount/100;
            amount=amount%100;
            cout<<u<<": 100 notes"<<endl;
        }
        if(amount>50){
            int u=amount/50;
            amount=amount%50;
            cout<<u<<": 50 notes"<<endl;

        }
        if(amount>20){
            int u=amount/20;
            amount=amount%20;
            cout<<u<<": 20 notes"<<endl;

        }
        if(amount>1){
            int u=amount/1;
            amount=amount%1;
            cout<<u<<": 1 notes"<<endl;

        }
    }
    return 0;
}