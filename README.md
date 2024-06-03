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

**Note:**
1. Penting untuk tidak mengubah atau menyertakan berkas pada direktori "storage" ke dalam central repository (GitHub) agar keamanan data terjaga.
2. Output yang hardcoded akan mendiskualifikasi nilai tugas.