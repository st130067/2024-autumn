#include<iostream>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    double r = 0;
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    r = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (r1 + r2 >= r && r + r2 >= r1 && r + r1 >= r2)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}