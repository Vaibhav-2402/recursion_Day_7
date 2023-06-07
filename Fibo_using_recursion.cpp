#include<iostream>
using namespace std;

int Print_fibo(int n){

    int ans = 0;

    //Base case
    if(n == 0 || n == 1){
        return n;
    }

    ans += Print_fibo(n-1) + Print_fibo(n-2);
    cout << endl << ans;
    return ans;

}

int main() {

    int n;
    cin >> n;

    int ans = Print_fibo(n);
    cout<< endl << ans;
    return 0;
}