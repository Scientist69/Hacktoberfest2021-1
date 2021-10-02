/*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){ // for rows
        for(int j=1;j<=n-i+1;j++){ // for columns
            if(j>n-i+1){ // printing spaces
                cout<<"  ";
            }
            else{ // printing values
                cout<<j<<" "; 
            }
        }
        cout<<endl;
    }
}
