#include<bits/stdc++.h>

using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int sum=i;
        for(int k=0;k<i+1;k++){
            sum+=1;
            cout<<sum;
        }
        for(int k=i;k>0;k--){
            sum-=1;
            cout<<sum;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern(n);
}