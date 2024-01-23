#include <iostream>
#include <tuple>
using std::cout;

std::tuple<int, int> maxRepetendDenom(int dMax)
{
    int d, rep = 0;
    int i, j, value, counter;
    for (i = 3; i <= dMax; i += 2) {
        counter = 1;
        value = 10%i;
        j = dMax;
        while (value != 1 && j > 0) {
            value *= 10;
            value %= i;
            counter++;
            j--;
        }
        if (counter > rep && j > 1) {
            rep = counter;
            d = i;
        }
    }
    return {d, rep};
}

int main()
{
    while (true) {
        int d, rep, dMax;
        cout << "Enter the maximum allowed absolute value of the denominator: ";
        std::cin >> dMax;
        if (dMax <= 0) {
            return 0;
        }
        if (dMax < 3) {
            cout << "No fraction with an absolute value of the denominator"
                 << " less than 3 can have a repetend.\n\n";
        } else {
            std::tie(d, rep) = maxRepetendDenom(dMax);
            std::string digits = rep > 1 ? " digits)" : " digit)";
            cout << "Fractions with an absolute value of the denominator no greater"
                 << " than " << dMax << " will have the longest possible repetend "
                 << "(of " << rep << digits << " in their decimal expansion if they"
                 << " are in lowest terms and their denominator is " << d << ".\n\n";
        }
    }
    return 0;
}