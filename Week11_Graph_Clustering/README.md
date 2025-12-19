11.Hafta Ödevi – Graph Clustering

Graph'ta Cluster Nedir? Nasıl Yapılır?

Cluster (Kümeleme) Nedir?
Graph clustering, bir grafı birbirine yoğun bağlı node gruplarına (cluster) ayırma işlemidir.
Aynı cluster içindeki node’lar birbirleriyle daha fazla bağlantılıdır,
farklı cluster’lardaki node’lar arasında bağlantı daha azdır.

---

Cluster Neden Yapılır?
- Büyük graph’ları daha anlaşılır hale getirmek
- Sosyal ağ analizleri
- Topluluk (community) tespiti
- Veri madenciliği ve network analizi

---

Graph Nasıl Cluster’lara Ayrılır?

1-) Connected Components (Bağlı Bileşenler)
- Graph’taki bağımsız alt graph’lar bulunur
- DFS veya BFS kullanılır
- Her bağlı bileşen bir cluster kabul edilir

Örnek:
- A–B–C bağlantılı
- D–E bağlantılı  
→ 2 farklı cluster

Zaman Karmaşıklığı: O(V + E)

---
Community Detection (Topluluk Algoritmaları)

Girvan–Newman Algorithm
- Kenar merkeziliği (edge betweenness) hesaplanır
- En kritik kenarlar kaldırılır
- Graph parçalara ayrılır

Louvain Algorithm
- Modularity (topluluk kalitesi) maksimize edilir
- Büyük graph’lar için etkilidir

---

K-Means (Graph Embedding ile)
- Node’lar vektörlere dönüştürülür
- K-means ile kümelenir
- Daha çok makine öğrenmesi tabanlı yaklaşımlarda kullanılır

---

Cluster Ayrımı Nasıl Anlaşılır?
- Aynı cluster: yüksek bağlantı yoğunluğu
- Farklı cluster: düşük bağlantı
- Kesilen kenarlar genellikle kritik bağlantılardır

---

Gözlem
- DFS/BFS ile yapılan clustering basit ama etkilidir
- Community detection algoritmaları daha doğru sonuç verir
- Ama hesaplama maliyetleri daha yüksektir
