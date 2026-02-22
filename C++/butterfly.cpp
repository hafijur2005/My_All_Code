#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) 
        {
            cout << "*";
        }
        for (int col = 1; col <= ((n - row) + (n - 1 - row)); col++) 
        {
            cout << " ";
        }
        for (int col2 = 1; col2 <= row; col2++) 
        {
            if (col2 != n) 
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int row = n - 1; row > 0; row--) 
    {
        for (int col = 1; col <= row; col++) 
        {
            cout << "*";
        }
        for (int col = 1; col <= ((n - row) + (n - 1 - row)); col++) 
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
