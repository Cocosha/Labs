#include <iostream>
using namespace std;

int main() {
    int num = 0b111000001011;
    int K = 6;
    int mask = 0;
    unsigned int count = 0;
    for (int i=0; i<K; i++){
        mask |= 1;
        mask <<= 1;
    }
    num &= mask;
    while (num) {
        num &= (num - 1);
        count++;
    }
    cout <<count;
    return 0;
}