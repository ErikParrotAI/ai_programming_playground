#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> r(N);
    
    for (int i = 0; i < N; i++) {
        cin >> r[i];
    }
    
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < N; i++) {
        if (r[i] == a || r[i] == b || r[i] == c) {
            r.erase(r.begin() + i);
            i--;
        }
    }

    int M = r.size() - 1;
    vector<int> new_array(M);
    for (int i = 0; i < M; i++) {
        new_array[i] = r[i] + r[i + 1];
    }

    cout << M << endl;
    for (int i = 0; i < M; i++) {
        cout << new_array[i] << " ";
    }
    cout << endl;

    return 0;
}
