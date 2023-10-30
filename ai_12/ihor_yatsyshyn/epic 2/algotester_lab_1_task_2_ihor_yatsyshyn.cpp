#include <iostream>

int main() {
    int h1, h2, h3, h4, d1, d2, d3, d4;

    std::cin >> h1 >> h2 >> h3 >> h4;
    std::cin >> d1;
    std::cin >> d2;
    std::cin >> d3;
    std::cin >> d4;

    h1 -= d1;
    if(h1-d1 < 0){
        std::cout << "ERROR";
    }else if(2*h1 <= h2 || 2*h1 <= h3 || 2*h1 <= h4){
        std::cout << "NO";
    }else if(h2-d2 < 0 || h3-d3 < 0 || h4-d4 < 0){
        std::cout << "ERROR";
    }else{
        h2 -= d2;
        if(2*h2 <= h3 || 2*h2 <= h4){
            std::cout << "NO";
        }else if(h1-d1 < 0 || h2-d2 < 0 || h3-d3 < 0 || h4-d4 < 0){
            std::cout << "ERROR";
        }else{
            h3 -= d3;
            if(2*h3 <= h4){
                std::cout << "NO";
            }else if(h1-d1 < 0 || h2-d2 < 0 || h3-d3 < 0 || h4-d4 < 0){
                std::cout << "ERROR";
            }else {
                h4 -= d4;
                if(h1 < 0 || h2 < 0 || h3 < 0 || h4 < 0){
                    std::cout << "ERROR";
                }else if(h1 == h2 && h2 == h3 && h3 == h4){
                    std::cout << "YES";
                } else {
                    std::cout << "NO";
                }
            }
        }
    }

    return 0;
}