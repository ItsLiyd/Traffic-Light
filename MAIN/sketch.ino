// Ya begitulah, aku membutuhkan
// 2 hari lembur untuk mengerjakan ini.
// Maklumin kalo aga panjang, ini kode
// original dari gw, bukan COPY PASTE...
// >> by: Aurellio >> Github: ItsLiyd

void setup() {
  // Tempat naroh Pin
  pinMode(0, OUTPUT); // MERAH
  pinMode(1, OUTPUT); // KUNING
  pinMode(2, OUTPUT); // HIJAU
  pinMode(3, OUTPUT); // MERAH
  pinMode(4, OUTPUT); // KUNING
  pinMode(5, OUTPUT); // HIJAU
  pinMode(6, OUTPUT); // MERAH
  pinMode(7, OUTPUT); // KUNING
  pinMode(8, OUTPUT); // HIJAU
  pinMode(9, OUTPUT); // MERAH
  pinMode(10, OUTPUT); //KUNING
  pinMode(11, OUTPUT); //HIJAU

  // MERAH   : 0, 3, 6, 9
  // KUNING  : 1, 4, 7, 10
  // HIJAU   : 2, 5, 8, 11
}

void loop() {
// CODE UTAMA
  
  kanan();
  kuning_kanan();
  bawah();
  kuning_bawah();
  kiri();
  kuning_kiri();
  atas();
  kuning_atas();
}

void atas() {
// Lampu hijau dari arah ATAS
  digitalWrite(8, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(8, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
}

void bawah() {
// Lampu hijau dari arah BAWAH
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
}

void kiri() {
// Lampu hijau dari arah KIRI
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
}

void kanan() {
  // Lampu hijau dari arah KANAN
  digitalWrite(11, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(10000);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
}

void kuning_kanan() {
  // Lampu kuning dari arah KANAN dan BAWAH
  digitalWrite(6, HIGH); //merah
  digitalWrite(3, HIGH); //merah
  digitalWrite(10, HIGH); // kuning
  digitalWrite(1, HIGH); // kuning
  delay(2000);
  digitalWrite(6, LOW); 
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(1, LOW);
}

void kuning_bawah() {
  // Lampu kuning dari arah BAWAH dan KIRI
  digitalWrite(6, HIGH); //merah
  digitalWrite(9, HIGH); // merah
  digitalWrite(4, HIGH); // kuning
  digitalWrite(1, HIGH); // kuning
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(1, LOW);
}

void kuning_kiri() {
  // Lampu kuning berasal dari arah KIRI dan ATAS
  digitalWrite(9, HIGH); // abang
  digitalWrite(0, HIGH); // merad
  digitalWrite(4, HIGH); // kuning
  digitalWrite(7, HIGH); // kuning
  delay(2000);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
}

void kuning_atas() {
  // Lampu kuning berasal dari arah ATAS dan KANAN
  digitalWrite(3, HIGH); // abang
  digitalWrite(0, HIGH); // merah
  digitalWrite(10, HIGH); // kuning
  digitalWrite(7, HIGH); // kuning
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(0, LOW);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
}
