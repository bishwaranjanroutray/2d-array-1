// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

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
    int z=(m/2);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==z || j==z){
                cout<<a[i][j];
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }

}