#include <iostream>
using namespace std;

int main() {
    int a ,b ,c ;
    cin >> a>> b >> c ;
    int result = a ;
    while (result % c != 0 && result <= b) {
        result++;
    }


    
    if (result <= b) {
        cout << result << endl;
    } else {
        cout << -1 << endl; 
    }
    return 0;
}
