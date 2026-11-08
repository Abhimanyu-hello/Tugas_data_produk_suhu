const nilaiSiswa = [60, 85, 40, 90, 75, 50, 95];

const posisi85 = nilaiSiswa.indexOf(85);
if (posisi85 !== -1) {
  console.log(`nilai 85 ada di posisi ${posisi85}`);
} else {
  console.log("data tidak ditemukan");
}

const hasilFilter = nilaiSiswa.filter(x => x >= 75);
console.log(hasilFilter);