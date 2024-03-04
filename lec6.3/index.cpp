#include <iostream>
using namespace std;

int main(){
    // int num=1;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << num <<" ";
    //         num++;
    //     }
    //     cout << endl;
    // }



    // for(int i=1;i<=5;i++){
    //     for(int k=5;k>i;k--){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    for(int i=1;i<=5;i++){
        if(i==1 || i==3){
            cout<<"* * * * *";
        }else{
            cout<<"*       *";
        }
        cout <<endl;
    }


}