4. Hafta Ödevi – Linked List

Konu
Doubly Linked List ve Circular Linked List yapıları üzerinde ekleme, silme ve karşılaştırma işlemleri.


Sorular ve Açıklamalar

1-) Doubly Linked List’te listenin sonuna eleman ekleme
Doubly Linked List’te her node hem kendinden önceki (`prev`) hem de sonraki (`next`) node’u tutar.
Listenin sonuna ekleme işlemi için:
- Yeni bir node oluşturulur
- Son node bulunur
- Son node’un `next` pointer’ı yeni node’u gösterecek şekilde ayarlanır
- Yeni node’un `prev` pointer’ı son node’u gösterecek şekilde ayarlanır

Time Complexity: O(n)

---

2-) Linked List’teki tüm elemanları recursive olarak silme
Recursive silme işleminde:
- Base case: Liste boşsa dur
- Recursive case: Bir sonraki node için fonksiyon çağrılır
- Geri dönüşte node’lar `free` edilir

Time Complexity: O(n)

---

3-) Doubly Linked List’te araya eleman ekleme
Araya ekleme işleminde:
- İlgili index’e kadar ilerlenir
- Yeni node’un `next` ve `prev` bağlantıları ayarlanır
- Komşu node’ların pointer’ları güncellenir

**Time Complexity:** O(n)

---

4-) Circular Linked List ile Normal Linked List farkı
- Normal Linked List’te son node’un `next` pointer’ı `NULL`’dır
- Circular Linked List’te son node’un `next` pointer’ı **head’i gösterir**
- Circular listlerde traversal işlemi belirli bir koşula bağlıdır
- Sıralama algoritmalarında circular list:
  - Döngü kontrolü dikkat gerektirir
  - Sonsuz döngü riski vardır
  - Genellikle traversal maliyeti benzerdir (O(n))

Ayrıca bu bölümde Normal Linked List ve Circular Linked List üzerinde Bubble Sort algoritması uygulanarak farklar gözlemlenmiştir.

Normal Linked List
- Son node'un `next` pointer’ı `NULL`’dır
- Traversal işlemi `NULL` kontrolü ile biter
- Bubble Sort uygulaması daha basittir
- Sonsuz döngü riski yoktur

Circular Linked List
- Son node'un `next` pointer’ı `head`’i gösterir
- Traversal işlemi `head` kontrolü ile yapılır
- Sorting sırasında döngü koşullarına dikkat edilmelidir
- Yanlış koşulda sonsuz döngü oluşabilir

Gözlem
- Her iki listede de Bubble Sort’un zaman karmaşıklığı O(n²)’dir
- Circular Linked List’te ek kontrol gerektirdiği için kod karmaşıklığı daha fazladır
- Algoritmik karmaşıklık aynı olsa da, uygulama zorluğu Circular Linked List’te daha yüksektir

---

Öğrenci
Zeynep Bostancı  
Computer Engineering – 2nd Year
