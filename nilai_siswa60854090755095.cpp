#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nilai_siswa = {60, 85, 40, 90, 75, 50, 95};

    auto it = find(nilai_siswa.begin(), nilai_siswa.end(), 85);
    if (it != nilai_siswa.end()) {
        int posisi_85 = distance(nilai_siswa.begin(), it);
        cout << "nilai 85 ada di posisi " << posisi_85 << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }

    vector<int> hasil_filter;
    copy_if(nilai_siswa.begin(), nilai_siswa.end(), back_inserter(hasil_filter),
            [](int x) { return x >= 75; });

    cout << "[";
    for (size_t i = 0; i < hasil_filter.size(); i++) {
        cout << hasil_filter[i];
        if (i < hasil_filter.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}