#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number : ";
    cin >> N;

    int K;
    cout << "Enter the number till you want to extract the multiplication table : ";
    cin >> K;

    for (int i=1; i<=K; i++) {
        cout << N*i << " ";
    }

    cout << endl;

    int i=0;
    do {
        cout << N*i << " ";
        i++;
    } while (i<=K);
    cout << endl;


    int j=0;
    while (j<=K) {
        cout << N*j << " ";
        j++;
    }

return 0;
}