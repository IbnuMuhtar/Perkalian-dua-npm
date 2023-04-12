#include <iostream>

using namespace std;

int main() {
    int choice;
    int num1, num2;
    int result;

    cout << "Pilih operasi matematika yang ingin digunakan: " << endl;
    cout << "1. Perkalian" << endl;
    cout << "2. Pembagian" << endl;
    cout << "3. Pengurangan" << endl;
    cout << "Masukkan pilihan Anda (1/2/3): ";
    cin >> choice;

    cout << "Masukkan dua angka yang ingin dioperasikan: " << endl;
    cin >> num1 >> num2;

    switch(choice) {
        case 1:
            result = num1 * num2;
            cout << "Hasil perkalian: " << result << endl;
            break;
        case 2:
            result = num1 / num2;
            cout << "Hasil pembagian: " << result << endl;
            break;
        case 3:
            result = num1 - num2;
            cout << "Hasil pengurangan: " << result << endl;
            break;
        default:
            cout << "Pilihan yang Anda masukkan tidak valid" << endl;
    }

    return 0;
}

