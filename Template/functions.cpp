#include <bits/stdc++.h>
using namespace std;
int op(int a, int b) {
    return a * b;
}

int main() {
    vector<int> vec = {5, 10, 15};
  
      // Defining the range as whole array
      auto first = vec.begin();
      auto last = vec.end();
  
    // Using accumulate function with user-defined operation
      int product = accumulate(first, last, 1, op);
      
    cout << product;
    return 0;
}