#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        vector<long long> ops;
        
        // Process from highest bit to lowest
        for (int i = 30; i >= 0; i--) {
            int bit_a = (a >> i) & 1;
            int bit_b = (b >> i) & 1;
            
            if (bit_a != bit_b) {
                if (bit_a == 1 && bit_b == 0) {
                    // Need to turn off bit i in a
                    // XOR with (1 << i)
                    long long x = (1LL << i);
                    if (x <= a) {
                        ops.push_back(x);
                        a ^= x;
                    }
                } else {
                    // bit_a == 0 && bit_b == 1
                    // Need to turn on bit i in a
                    // First, find a higher bit that is ON in a
                    int higher_bit = -1;
                    for (int j = 30; j > i; j--) {
                        if ((a >> j) & 1) {
                            higher_bit = j;
                            break;
                        }
                    }
                    
                    if (higher_bit == -1) {
                        // Impossible
                        ops.clear();
                        ops.push_back(-1);
                        break;
                    }
                    
                    // XOR with a value that turns off higher_bit and turns on bit i
                    long long x = (1LL << higher_bit) | (1LL << i);
                    if (x <= a) {
                        ops.push_back(x);
                        a ^= x;
                    }
                }
            }
        }
        
        if (a != b) {
            cout << -1 << "\n";
        } else if (ops.size() == 1 && ops[0] == -1) {
            cout << -1 << "\n";
        } else {
            cout << ops.size() << "\n";
            if (ops.size() > 0) {
                for (long long x : ops) {
                    cout << x << " ";
                }
                cout << "\n";
            }
        }
    }
    
    return 0;
}