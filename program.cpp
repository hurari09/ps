#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a[101], b[101];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n, greater<>());
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i]*b[i];
    }
    cout << sum;
}