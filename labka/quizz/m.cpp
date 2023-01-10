#include <iostream>

int main(){
    int n, a1, d;
    std::cin >> n >> a1 >> d;
    int arr[n];
    int summ = a1;
        for (int i = 2; i <= n; i++){
            arr[1] = a1;
            arr[i] = arr[i-1] + d;
        }
        for (int i = 2; i <= n; i++){
            summ += arr[i];
        }
    std::cout << a1 << ' ';
        for (int i = 2; i <= n; i++){
            std::cout << arr[i] << ' ';
        }
    std::cout << std::endl;
            std::cout << "sum: " << summ;
    return 0;
}