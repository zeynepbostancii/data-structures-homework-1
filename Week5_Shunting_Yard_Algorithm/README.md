5. Hafta Ödevi – Shunting Yard Algorithm

Konu
Shunting Yard Algoritması kullanılarak infix ifadelerin postfix (Reverse Polish Notation) ifadeye dönüştürülmesi.

---

Shunting Yard Algoritması Nedir?
Shunting Yard Algoritması, Edsger Dijkstra tarafından geliştirilmiş olup,
infix ifadeleri postfix veya prefix forma dönüştürmek için kullanılır.

Algoritma stack (yığın) veri yapısını kullanır ve operatör önceliklerini dikkate alır.

---

Kullanılan Veri Yapıları
- Stack (Operatörler için)
- Output array (Postfix ifade için)

---

Operatör Öncelikleri

| Operatör | Öncelik |
|--------|--------|
| `*` `/` | Yüksek |
| `+` `-` | Düşük |

---

Algoritma Adımları
1. Operand (harf veya sayı) → output’a eklenir
2. Operatör:
   - Stack boşsa stack’e eklenir
   - Stack’in tepesindeki operatör daha yüksek veya eşit öncelikliyse output’a atılır
3. Açık parantez `(` stack’e eklenir
4. Kapalı parantez `)` geldiğinde:
   - Açık parantez `(` gelene kadar stack’ten output’a atılır
5. İfade bittiğinde stack’te kalan tüm operatörler output’a eklenir

---

Örnek 1
Infix: `a*b+c`  
Postfix: `ab*c+`

---

Örnek 2
Infix: `(a+b)*c`  
Postfix: `ab+c*`

---

Zaman Karmaşıklığı
- Algoritma tek geçişte çalışır
- Zaman karmaşıklığı: O(n)

---

Notlar
- Parantezler postfix ifadede yer almaz
- Operatör önceliği stack yardımıyla kontrol edilir
- Algoritma stack tabanlıdır

---

Öğrenci
Zeynep Bostancı  
Computer Engineering – 2nd Year
