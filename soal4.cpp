#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // Daftar aktivitas olahraga beserta jumlah kalori yang dibakar per satuan waktu
    map<string, double> activities = {
        {"lari", 60.0 / 5.0},    // 60 kalori per 5 menit
        {"push-up", 200.0 / 30.0},  // 200 kalori per 30 menit
        {"plank", 5.0 / 1.0}      // 5 kalori per 1 menit
    };

    // Input jumlah aktivitas yang akan dilakukan
    int n;
    cout << "Masukkan jumlah aktivitas olahraga: ";
    cin >> n;

    double total_calories = 0.0;
    for (int i = 0; i < n; ++i) {
        string activity;
        int duration;
        cout << "Masukkan jenis aktivitas ke-" << i + 1 << " dan durasi (menit): ";
        cin >> activity >> duration;

        // Hitung jumlah kalori untuk aktivitas tersebut
        if (activities.find(activity) != activities.end()) {
            total_calories += activities[activity] * duration;
        } else {
            cout << "Aktivitas tidak valid!" << endl;
        }
    }

    // Tampilkan total kalori yang dibakar
    cout << "Total kalori yang dibakar: " << total_calories << " kalori" << endl;

    return 0;
}
