# Pedestrian Traffic Light (Arduino)

## Deskripsi
Proyek ini merupakan simulasi sistem pedestrian traffic light berbasis Arduino dengan satu jalur kendaraan. Sistem menggunakan push button sebagai interrupt untuk memberikan prioritas kepada pejalan kaki.

Pada kondisi normal, kendaraan berada pada lampu hijau, sedangkan pedestrian berada pada lampu merah. Ketika tombol ditekan, sistem akan menghentikan kendaraan dan memberikan akses penyeberangan kepada pedestrian.

---

## Fitur Utama
- Traffic light kendaraan (merah, kuning, hijau)
- Dua sisi pedestrian (merah dan hijau)
- Sistem interrupt menggunakan push button
- Transisi aman (kuning berkedip 3 kali)
- Sistem kembali ke kondisi default

---

## Cara Kerja Sistem
1. Kondisi awal:
   - Kendaraan: hijau
   - Pedestrian: merah  

2. Saat tombol ditekan:
   - Kendaraan berubah ke kuning (kedip 3x)
   - Kendaraan menjadi merah
   - Pedestrian menjadi hijau  

3. Setelah beberapa detik:
   - Pedestrian kembali merah
   - Kendaraan kembali hijau  

---

## Komponen
- Arduino Uno  
- LED (7 buah)  
- Push button  
- Resistor  
- Kabel jumper  

---

## Rangkaian (Tinkercad)
https://www.tinkercad.com/things/9W8fNa6psJU-pedestrian-traffic-light?sharecode=vxaw2UeB7QCMmsN3_q1x9vUK3QdNsWkBR6Sxba38hlo

---

## Demo
<p align="center">
  <img src="PEDESTRIAN TRAFFIC LIGHT.gif" alt="Pedestrian Traffic Light Demo" width="500">
</p>

---

## Source Code
Seluruh source code tersedia pada repository ini.

---

## Konsep yang Digunakan
- Embedded system  
- Event-driven programming  
- Interrupt handling  
- Traffic control logic  

---

## Pengembangan Selanjutnya
- Countdown timer  
- Buzzer untuk pedestrian  
- Sensor otomatis  
- Non-blocking system (millis)  

---

## Author
Mukhammad Alfaen Fadillah  
H1D023032
