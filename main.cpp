#include <iostream>
using namespace std;

int main(){
    int n=0, primo=0, secondo=1, terzo=0;
    cin>>n;
    if(n>=2){
        cout << "1" << endl;
        for(int i=0; i<=(n-2); i++){
            terzo=primo+secondo;
            primo=secondo;
            secondo=terzo;
            cout << terzo << endl;
        }}else{
            cout << "errore" << endl;
        }
        return 0;
    }
