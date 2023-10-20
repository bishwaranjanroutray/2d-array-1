// Write a C++ program to find the largest element of a given 2D array of integers.
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
    int l=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>l){
                l=a[i][j];
            }
        }
    }
    cout<<endl;
    cout<<l;

}