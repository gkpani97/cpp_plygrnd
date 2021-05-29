#include <iostream>
#include <vector>

using namespace std;
vector<int> T1, T2, T3;

void solve(int , vector<int>& , vector<int>& , vector<int>& );
void display( vector<int>& , vector<int>& , vector<int>& );

int main(){
    int n;
    cout<<"Enter the no. of disks: ";
    cin>> n;
    for(int i = n; i > 0; i--){
        T1.push_back(i);
    }
    solve(n, T1, T3, T2);
    return 0;
}

void solve(int n, vector<int>& cur, vector<int>& tar, vector<int>& inter){
    if (n == 1){
        tar.push_back(cur.back());
        cur.pop_back();
        display(T1, T2, T3);
    }
    else{

        solve(n - 1, cur, inter, tar);
        solve(1, cur, tar, inter);
        solve(n - 1, inter, tar, cur);
    }
}

void display( vector<int>& A, vector<int>& B, vector<int>& C){
    cout<<"T1: ";
    for (int i: A){
        cout<<i<<" "; }
    cout<<endl;

    cout<<"T2: ";
    for (int i: B){
        cout<<i<<" "; }
    cout<<endl;

    cout<<"T3: ";
    for (int i: C){
        cout<<i<<" "; }
    cout<<endl<<"-------------"<<endl;
}