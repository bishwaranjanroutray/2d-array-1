// Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number of rows and columns:";
    int m,n;
    cin>>m>>n;
    int a[m][n];
    cout<<"enter the elements of the first matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int a2[m][n];
    cout<<"enter the elements of the second matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a2[i][j];
            a2[i][j]+=a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }

}