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
  pinMode(10, OUTPUT); // KUNING
  pinMode(11, OUTPUT); // HIJAU

  // MERAH   : 0, 3, 6, 9
  // KUNING  : 1, 4, 7, 10
  // HIJAU   : 2, 5, 8, 11
}

void atas() {
// ATAS JALAN
  digitalWrite(8, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(8, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);

// Bagian Atas lampu Hijau, Sisanya merah
}

void bawah() {
// BAWAH BAWAH JALAN
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);

//Bagian Bawah lampu hijau, sisanya merah
}

void kiri() {
// KIRI JALAN
  digitalWrite(0, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(10000);
  digitalWrite(0, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);

//Bagian kiri lampu hijau, sisanya merah
}

void kanan() {
  // KANAN JALAN
  digitalWrite(11, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(10000);
  digitalWrite(11, LOW);
  digitalWrite(0, LOW);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);

//Bagian Kanan lampu hijau, sisanya merah
}

void kuning_kanan() {
  // kuning dan merah
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(1, HIGH); 
  delay(2000);
  digitalWrite(6, LOW); 
  digitalWrite(3, LOW);
  digitalWrite(10, LOW);
  digitalWrite(1, LOW);

//Lampu kuning menyala di bagian KANAN dan BAWAH
}

void kuning_bawah() {
  // kuning dan merah
  digitalWrite(6, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(1, HIGH); 
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(1, LOW);

//Lampu kuning menyala di bagian BAWAH dan KIRI
}

void kuning_kiri() {
  // kuning dan merah
  digitalWrite(9, HIGH); 
  digitalWrite(0, HIGH); 
  digitalWrite(4, HIGH); 
  digitalWrite(7, HIGH); 
  delay(2000);
  digitalWrite(9, LOW);
  digitalWrite(0, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);

//Lampu kuning menyala di bagian KIRI dan ATAS
}

void kuning_atas() {
  // kuning dan merah
  digitalWrite(3, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(0, LOW);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);

//Lampu kuning menyala di bagian ATAS dan KANAN
}

void loop() {
// CODE UTAMA
  
  kanan(); //Lampu Hijau dibagian KANAN
  kuning_kanan(); //Lampu Kuning dibagian KANAN dan BAWAH
  bawah(); //Lampu Hijau dibagian BAWAH
  kuning_bawah(); //Lampu Kuning dibagian BAWAH dan KIRI
  kiri(); //Lampu Hijau dibagian KIRI
  kuning_kiri(); //Lampu Kuning dibagian KIRI dan ATAS
  atas(); //Lampu Hijau di bagian ATAS
  kuning_atas(); //Lampu Kuning dibagian ATAS dan KANAN

// "void loop" akan mengulangi kode yang sama secara terus menerus
}
