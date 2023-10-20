#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number of rows and columns:";
    int m,n;
    cin>>m>>n;
    int a[m][n];
    cout<<"enter the elements of the matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0,r;
    for(int i=0;i<m;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s+=a[i][j];
        }
    
        if(sum<s) {
            sum=s;
            r=i;}
    }
    cout<<r+1;
}