#include <iostream>
#include <cstdio>

int main() {
    int N, m;

    std::cin >> N;

    int r[N];
    for(int i = 0; i < N; i++) {
        std::cin >> r[i];
    }

    if(r[N - 2] - r[0] < r[N - 1] - r[1]) {
        m = r[N - 2] - r[0];
    }else {
        m = r[N - 1] - r[1];
    }

    std::cout << m;

    return 0;
}