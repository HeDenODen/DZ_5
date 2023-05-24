#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //1
    int fNum;
    cout << "Enter first number: ";
    cin >> fNum;
    int sNum;
    cout << "Enter second number: ";
    cin >> sNum;
    int fNum1 = fNum % 10;
    int fNum2 = fNum / 10 % 10;
    int fNum3 = fNum / 100 % 10;
    int sNum1 = sNum % 10;
    int sNum2 = sNum / 10 % 10;
    int sNum3 = sNum / 100 % 10;
    cout << fNum3 << sNum2 << fNum1 << " ";
    cout << sNum3 << fNum2 << sNum1 << "\n\n";


    //2
    int num;
    cout << "Enter number: ";
    cin >> num;
    int num4 = num % 10;
    int num3 = num / 10 % 10;
    int num2 = num / 100 % 10;
    int num1 = num / 1000 % 10;
    cout << num1 + num3 << " " << num2 - num4 << "\n\n";


    //3
    int number;
    cout << "Enter number: ";
    cin >> number;
    int number3 = number % 10;
    int number2 = number / 10 % 10;
    int number1 = number / 100 % 10;
    cout << number1 << number3 << "\n\n";
    

    //4
    int uah;
    cout << "Enter uah: ";
    cin >> uah;
    int percent;
    cout << "Enter percent: ";
    cin >> percent;
    double money = (uah * percent) / 100;
    cout << "Result = " << money << "\n\n";
    

    //5
    int Y;
    cout << "Enter Y: ";
    cin >> Y;
    int X;
    cout << "Enter X: ";
    cin >> X;
    int count = Y / X;
    int per = Y % X;
    cout << count << " " << per << "\n\n";
    

    //6
    const double fConst = 405.9;
    double f;
    cout << "Enter f: ";
    cin >> f;
    double kg = (f * fConst) / 1000;
    double fRes = (kg / fConst) * 1000;
    cout << "Kg = " << kg << "\n";
    cout << "F = " << fRes << "\n\n";
    

    //7
    int len;
    cout << "Enter lenght: ";
    cin >> len;
    int wid;
    cout << "Enter width: ";
    cin >> wid;
    int height;
    cout << "Enter height: ";
    cin >> height;
    int N;
    cout << "Enter N: ";
    cin >> N;
    int M;
    cout << "Enter percent: ";
    cin >> M;
    double S = 2 * (wid * height) + 2 * (len * height);
    double l = (S - ((S * M) / 100)) * N;
    cout << "Liters = " << l << "\n\n";
    

    //8
    int five;
    cout << "Enter number: ";
    cin >> five;
    int five5 = five % 10;
    int five4 = five / 10 % 10;
    int five3 = five / 100;
    cout << five4 << five5 << five3 << "\n\n";
    

    //9
    const double mercury = 3.3 * pow(10, 23);
    const double venus = 4.9 * pow(10, 24);
    const double earth = 5.98 * pow(10, 24);
    const double mars = 6.44 * pow(10, 23);
    const double jupiter = 1.9 * pow(10, 27);
    const double saturn = 5.68 * pow(10, 26);
    const double uranus = 8.7 * pow(10, 25);
    const double neptune = 1.03 * pow(10, 26);
    double sum = mercury + venus + earth + mars + jupiter + saturn + uranus + neptune;
    double average = sum / 8;
    double mercuryPer = (mercury*100)/sum;
    double venusPer = (venus*100)/sum;
    double earthPer = (earth * 100) / sum;
    double marsPer = (mars * 100) / sum;
    double jupiterPer = (jupiter * 100) / sum;
    double saturnPer = (saturn * 100) / sum;
    double uranusPer = (uranus * 100) / sum;
    double neptunePer = (neptune * 100) / sum;
    double diff = jupiter / (sum - jupiter);
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";
    cout << "Mercury = " << mercuryPer << "%" << "\n";
    cout << "Venus = " << venusPer << "%" << "\n";
    cout << "Earth = " << earthPer << "%" << "\n";
    cout << "Mars = " << marsPer << "%" << "\n";
    cout << "Jupiter = " << jupiterPer << "%" << "\n";
    cout << "Saturn = " << saturnPer << "%" << "\n";
    cout << "Uranus = " << uranusPer << "%" << "\n";
    cout << "Neptune = " << neptunePer << "%" << "\n";
    cout << "Different = " << diff << "\n\n";
}

