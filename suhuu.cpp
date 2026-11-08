#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    
    auto it = find(suhu.begin(), suhu.end(), 0);
    if (it != suhu.end()) {
        int posisi = distance(suhu.begin(), it);
        cout << "Nilai 0 ada di posisi " << posisi << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }

   
    vector<int> hasil_filter;
    copy_if(suhu.begin(), suhu.end(), back_inserter(hasil_filter),
            [](int x) { return x > 0; });

    cout << "[";
    for (size_t i = 0; i < hasil_filter.size(); i++) {
        cout << hasil_filter[i];
        if (i < hasil_filter.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}