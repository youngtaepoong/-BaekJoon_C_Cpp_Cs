#include <iostream>
//https://www.acmicpc.net/problem/1008
using namespace std;
int main(int argc, char const *argv[]) {
 
    double a, b;
    cin >> a >> b;
 
    cout.precision(12); // 반올림해서 소수점 12자리 
    cout << fixed; // 싫으면 고정.
    cout << a / b;
    return 0;
}