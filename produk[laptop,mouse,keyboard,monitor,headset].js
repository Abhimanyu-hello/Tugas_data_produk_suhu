const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];


const posisi = produk.indexOf("Keyboard");
if (posisi !== -1) {
  console.log(`Produk Keyboard ada di posisi ${posisi}`);
} else {
  console.log("data tidak ditemukan");
}


const hasilFilter = produk.filter(x => x.length > 5);
console.log(hasilFilter);
