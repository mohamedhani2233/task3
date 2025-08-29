#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "ادخل عدد العناصر: ";
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        arr[i] = (i + 1) * (i + 1);
    }

    cout << "مربعات الاعداد من 1 الى " << N << ": ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
