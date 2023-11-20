#include <iostream>
using namespace std;
class CurrencyConverter {
public:
    // Static member function to convert USD to EUR
    static double usdToEur(double usdAmount, double exchangeRate) {
        return usdAmount * exchangeRate;
    }
    // Static member function to convert EUR to USD
    static double eurToUsd(double eurAmount, double exchangeRate) {
        return eurAmount / exchangeRate;
    }
};
int main() {
    double usdAmount = 100.0;
    double exchangeRate = 0.85; // 1 USD to EUR
    double eurAmount = CurrencyConverter::usdToEur(usdAmount, exchangeRate);
    double usdConvertedBack = CurrencyConverter::eurToUsd(eurAmount, exchangeRate);
    cout << "USD to EUR: " << eurAmount << " EUR" << endl;
    cout << "EUR back to USD: " << usdConvertedBack << " USD" << endl;
    return 0;
}
