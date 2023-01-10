//Напишите программу, которая считывает целое число и выводит текст, 
//аналогичный приведенному в примере. 
//Пробелы, знаки препинания, заглавные и строчные буквы важны!
//Выведите сначала фразу "The next number for the number ", 
//затем введенное число, затем слово " is ", 
//окруженное пробелами, затем формулу для следующего за введенным числа, 
//наконец, знак точки без пробела.
//Аналогично в следующей строке для предыдущего числа.
//The next number for the number 179 is 180.
//The previous number for the number 179 is 178.
#include <iostream>
using namespace std;
int main() {
int a;
cin >> a;
cout << "The next number for the number" << " " << a << " " << "is" << " " << ++a << "." << endl;
cout << "The previous number for the number" << " " << --a << " " << "is" << " " << --a << "." << endl;

}