#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int Sum(int c[], const int n, int i = 0);

int main() {
    srand((unsigned)time(0)); 
    const int k = 25;
    int c[k];

 
    for (int i = 0; i < k; i++) {
        c[i] = 5 + rand() % (90 - 5 + 1); 
    }

    for (int i = 0; i < k; i++) {
        if ((i + 1) % 8 == 0 &&  c[i] % 2 != 0 && c[i] < 5 || c[i] > 90) {
            c[i] = 0; 
        }
        cout << c[i] << " "; 
    }
    cout << endl;

    
    cout << "Sum = " << Sum(c, k) << endl;

    return 0;
}

int Sum(int c[], const int n, int i) {
    if (i == n) {
        return 0; 
    }

    
    return c[i] + Sum(c, n, i + 1);
}