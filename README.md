# Dorm Simulator

## Case

**Problem Statement:**
Sebuah simulator membutuhkan initial data yang ter-load saat pertama kali dijalankan. Data ini berasal dari berkas yang tersimpan di dalam direktori "storage". Selain itu, setelah eksekusi selesai, data yang ada dalam simulator harus disimpan kembali ke dalam berkas yang relevan agar tidak hilang. 

## Solution

### Task 1: Loading Initial Data

#### Problem Analysis:
Simulator saat ini tidak memiliki initial data, sehingga memerlukan pengembangan solusi untuk memuat data awal dari berkas yang tersimpan.

#### Implementation:
1. Membuat fungsi untuk membaca data asrama dan mahasiswa dari berkas yang relevan.
2. Melakukan pengolahan data yang terbaca untuk kemudian digunakan dalam simulator.
3. Menyediakan output yang sesuai dengan format yang diminta.

### Task 2: Storing Data

#### Problem Analysis:
Setelah eksekusi selesai, data yang ada dalam simulator akan hilang karena sifat volatilitasnya. Diperlukan solusi untuk menyimpan kembali seluruh data asrama dan mahasiswa ke dalam berkas yang relevan.

#### Implementation:
1. Membuat fungsi untuk menyimpan data asrama dan mahasiswa ke dalam berkas yang sesuai.
2. Memastikan bahwa data yang disimpan sesuai dengan format yang diinginkan.
3. Menyediakan output yang menunjukkan bahwa data berhasil disimpan.

Untuk memastikan program tepat dapat dijalankan test sebagai berikut:
**Input**
```bash
student-add#12S22015#Angelina Nadeak#2022#female
student-add#12S22024#Pimpin Loi#2022#male
student-add#12S22025#Bronson Siallagan#2022#male
student-add#12S22026#Ruben Sianipar#2022#male
student-add#12S22027#Ferry Panjaitan#2022#male
student-print-all
dorm-add#Antiokia#20#male
dorm-add#Mamre#20#male
dorm-add#Silo#20#male
dorm-add#Mahanaim#20#male
dorm-add#Nazaret#20#male
dorm-add#Pniel#20#female
dorm-add#Kapernaum#20#male
dorm-print-all
student-print-all-detail
dorm-print-all-detail
---

```

**Output**
```bash
12S22015|Angelina Nadeak|2022|female
12S22024|Pimpin Loi|2022|male
12S22025|Bronson Siallagan|2022|male
12S22026|Ruben Sianipar|2022|male
12S22027|Ferry Panjaitan|2022|male
Antiokia|5|male
Mamre|5|male
Silo|5|male
Mahanaim|5|male
Nazaret|5|male
Antiokia|20|male
Mamre|20|male
Silo|20|male
Mahanaim|20|male
Nazaret|20|male
Pniel|20|female
Kapernaum|20|male
12S22001|Winfrey Nainggolan|2022|male|unassigned
12S22002|Jeremy Nainggolan|2022|male|unassigned
12S22009|Dolok Butarbutar|2022|male|unassigned
12S22010|Reinaldy Hutapea|2022|male|unassigned
12S22014|Kezia Hutagaol|2022|female|unassigned
12S22015|Angelina Nadeak|2022|female|unassigned
12S22024|Pimpin Loi|2022|male|unassigned
12S22025|Bronson Siallagan|2022|male|unassigned
12S22026|Ruben Sianipar|2022|male|unassigned
12S22027|Ferry Panjaitan|2022|male|unassigned
Antiokia|5|male|0
Mamre|5|male|0
Silo|5|male|0
Mahanaim|5|male|0
Nazaret|5|male|0
Antiokia|20|male|0
Mamre|20|male|0
Silo|20|male|0
Mahanaim|20|male|0
Nazaret|20|male|0
Pniel|20|female|0
Kapernaum|20|male|0

```

Mengapa terdapatoutput lain? Dikarenakan isi dari directory storage dorm dan student sudah ada sebelumnya.

**Note:**
1. Penting untuk tidak mengubah atau menyertakan berkas pada direktori "storage" ke dalam central repository (GitHub) agar keamanan data terjaga.
2. Output yang hardcoded akan mendiskualifikasi nilai tugas.