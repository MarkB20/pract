// pract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <any>
int cal(int no1, char sim, int no2) {
    if (sim == '+') {
        no1 += no2;

    }
    else if (sim == '-') {
        no1 -= no2;

    }
    else if (sim == '*' || sim == 'x') {
        no1 *= no2;

    }
    else if (sim == '/') {
        no1 /= no2;

    }
}
int main()
{
    int no[10];
    char sim[5];
    double ans = 0;
    int sq = 0;
    std::cout << "enter your numbers the sybel and the other number" << std::endl;

    std::cin >> no[sq];

    std::cin >> sim[sq];

    std::cin >> no[sq + 1];

    ans = cal(no[sq], sim[sq], no[sq + 1]);

    std::cout << ans << std::endl;
    sq += 1;
    while (sim[sq] != '=' || sq < 5) {
        std::cin >> no[sq+1];

        std::cin >> sim[sq];

        ans = cal(ans, sim[sq], no[sq + 1]);

        
        
        std::cout << ans << std::endl;

        sq += 1;
    }

    std::cout << ans << std::endl;




}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
