#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[100][100],b[100][100],r,c;
    cout << "Enter number of rows and columns";
    cin>> r >> c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
