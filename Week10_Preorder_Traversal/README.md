10.Hafta Ödevi – Preorder Traversal

--------

Konu
Bu ödevde, tam dengeli (perfectly balanced) bir binary tree oluşturulmuş
ve tree üzerinde pre-order traversal uygulanmıştır.

      8
    /   \
   4     12
  / \    / \
 2   6  10  14

Pre-order traversal: 8 4 2 6 12 10 14

--------

TREE’DE NEDEN PRE-ORDER KULLANIRIZ?

Pre-order Nedir?

Pre-order traversal sırası:
Root → Left → Right

Bu yöntemde önce root düğümü ziyaret edilir,
daha sonra sol alt ağaç ve sağ alt ağaç gezilir.

---------

Pre-order Kullanılma Sebepleri

1. Root (Head) Önce İşlenir
- Tree’nin en önemli düğümü root’tur
- Pre-order traversal’da root ilk ziyaret edilir
- Bu sayede ağacın yapısı baştan anlaşılır

2. Tree Yapısını Korumak İçin
- Pre-order traversal, tree’nin hiyerarşik yapısını gösterir

3. Recursive Algoritmalar İçin Uygundur
- Pre-order traversal recursive tanıma çok uygundur
- Önce root, sonra alt ağaçlar gezilir
- Kodlaması basit ve anlaşılırdır

4. Compiler ve Expression Tree’lerde Kullanılır
- Expression Tree ve AST’lerde:
  - Operatörler önce görülmelidir
- Pre-order traversal:
  - Prefix (Polish notation) üretir
- Kod üretimi için uygundur

5. Tree kopyalama ve serialize etme işlemlerinde kullanılır.

--------

Uygulama Detayları
- Binary tree düğümleri `struct` yapısı ile tanımlanmıştır
- Tree, C dilinde manuel olarak oluşturulmuştur
- Traversal işlemi recursive fonksiyon kullanılarak yapılmıştır
- Traversal işleminin zaman karmaşıklığı O(n)’dir
