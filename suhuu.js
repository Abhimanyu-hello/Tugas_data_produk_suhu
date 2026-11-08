const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];


const posisi = suhu.indexOf(0);
if (posisi !== -1) {
  console.log(`Nilai 0 ada di posisi ${posisi}`);
} else {
  console.log("data tidak ditemukan");
}


const hasilFilter = suhu.filter(x => x > 0);
console.log(hasilFilter);