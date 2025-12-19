2. Hafta Ödevi – Big O Notation

Konu
Verilen algoritmaların zaman karmaşıklıklarının (Big O) analiz edilmesi.

Yapılan Analizler
-------
Algo1
for (i = 1 to n)
    print("Hello World");

Döngü n kez çalışır.

Zaman Karmaşıklığı: O(n)
-----
Algo2
for (i = 1 to n)
    for (j = 1 to n)
        print("Hello World");


İç içe iki döngü vardır.

Zaman Karmaşıklığı: O(n²)
------
Algo3
for (i = 1; i < n; i = i * 2)
    print("Hello World");


Döngü her adımda 2 kat artar.

n = 2ᵏ → k = log n

Zaman Karmaşıklığı: O(log n)
------
Algo4
for (i = 1; i < n; i = i / 5)
    print("Hello World");


Döngü logaritmik olarak azalır.

Zaman Karmaşıklığı: O(log n)
------
Algo5
for (i = 1; i < n³; i = i * 5)
    print("Hello World");


5ᵏ = n³ → k = log₅(n³)

Sabitler atılır.

Zaman Karmaşıklığı: O(log n)
------
Algo6
for (i = 1; i * i <= n; i++)
    print("Hello World");


i² ≤ n → i ≤ √n

Zaman Karmaşıklığı: O(√n)
------
Algo7
i = 1, k = 1;
while (k <= n) {
    i++;
    k = k + i;
    print("Hello World");
}
k bir aritmetik seri oluşturur.

k ≈ z(z+1)/2 ≈ n → z ≈ √n

Zaman Karmaşıklığı: O(√n)
