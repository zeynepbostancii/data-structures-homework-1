3. Hafta Ödevi – Singly Linked List

Konu
Singly Linked List üzerinde temel işlemlerin gerçekleştirilmesi ve zaman karmaşıklığı analizlerinin yapılması.
--------
Yapılan İşlemler
- Liste oluşturma (Creating a List)
- Listeyi gezme (Traversal)
- Ekleme (Insertion)
  - Baştan ekleme
  - Ortaya ekleme
  - Sona ekleme
- Silme (Deletion)
- Time Complexity analizi

Kullanılan Yapı
#c
struct node {
    int data;
    struct node* next;
};

Yapılan İşlemler
-Head pointer kullanılmıştır
-Pointer mantığına dikkat edilmiştir
-Dinamik bellek yönetimi (malloc, free) kullanılmıştır

Time Complexity

Traversal → O(n)

Baştan ekleme → O(1)

Sona ekleme → O(n)

Ortaya ekleme → O(n)

Silme → O(n)
