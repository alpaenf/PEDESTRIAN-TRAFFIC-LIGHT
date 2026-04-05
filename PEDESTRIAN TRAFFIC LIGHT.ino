// ================= PIN SETUP =================

// Kendaraan
int merah = 13;
int kuning = 12;
int hijau = 11;

// Pedestrian 1
int ped1_merah = 10;
int ped1_hijau = 9;

// Pedestrian 2
int ped2_merah = 8;
int ped2_hijau = 7;

// Tombol (interrupt pin, UNO: 2 atau 3)
int tombol = 2;

// ================= VARIABEL =================
volatile bool tombolDitekan = false;

// ================= INTERRUPT =================
void tekanTombol() {
  tombolDitekan = true;
}

// ================= SETUP =================
void setup() {
  // Kendaraan
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);

  // Pedestrian
  pinMode(ped1_merah, OUTPUT);
  pinMode(ped1_hijau, OUTPUT);

  pinMode(ped2_merah, OUTPUT);
  pinMode(ped2_hijau, OUTPUT);

  // Tombol
  pinMode(tombol, INPUT_PULLUP);

  // Attach interrupt
  attachInterrupt(digitalPinToInterrupt(tombol), tekanTombol, FALLING);

  // ===== KONDISI AWAL =====
  // Kendaraan hijau
  digitalWrite(hijau, HIGH);
  digitalWrite(merah, LOW);
  digitalWrite(kuning, LOW);

  // Pedestrian merah semua
  digitalWrite(ped1_merah, HIGH);
  digitalWrite(ped1_hijau, LOW);

  digitalWrite(ped2_merah, HIGH);
  digitalWrite(ped2_hijau, LOW);
}

// ================= LOOP =================
void loop() {

  // Kalau tombol ditekan
  if (tombolDitekan) {
    tombolDitekan = false;

    // ===== 1. Kendaraan: HIJAU → KUNING (kedip 3x) =====
    digitalWrite(hijau, LOW);

    for (int i = 0; i < 3; i++) {
      digitalWrite(kuning, HIGH);
      delay(500);
      digitalWrite(kuning, LOW);
      delay(500);
    }

    // ===== 2. Kendaraan MERAH =====
    digitalWrite(merah, HIGH);

    // ===== 3. Pedestrian HIJAU =====
    digitalWrite(ped1_merah, LOW);
    digitalWrite(ped1_hijau, HIGH);

    digitalWrite(ped2_merah, LOW);
    digitalWrite(ped2_hijau, HIGH);

    // Waktu menyebrang
    delay(5000);

    // ===== 4. Pedestrian kembali MERAH =====
    digitalWrite(ped1_hijau, LOW);
    digitalWrite(ped1_merah, HIGH);

    digitalWrite(ped2_hijau, LOW);
    digitalWrite(ped2_merah, HIGH);

    // ===== 5. Kendaraan kembali HIJAU =====
    digitalWrite(merah, LOW);
    digitalWrite(hijau, HIGH);
  }
}