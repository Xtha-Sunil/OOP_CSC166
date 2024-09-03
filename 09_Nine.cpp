// We are given a rectangular window in 2D space with left bottom vertex (100,100) and right top corner
// (400,500). Input a point and check if point lies inside the window

#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

bool checkPoint(Point p) {
    Point leftBottom = {100, 100};
    Point rightTop = {400, 500};

    return (p.x >= leftBottom.x && p.x <= rightTop.x && p.y >= leftBottom.y && p.y <= rightTop.y);
}

int main() {
    Point p;
    std::cout << "Input a coordinate : " ;
    std::cin >> p.x >> p.y;
    
    if(checkPoint(p)) {
        std::cout << "Inside the window." << std::endl;
    } else {
    std::cerr << "Unspecified location." << std::endl;
    }
    return 0;
}
