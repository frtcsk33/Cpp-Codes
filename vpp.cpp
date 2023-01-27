#include <iostream>
#include <vector>
using namespace std;

//———————————————————————–

struct hedef
{
int dugum;
int maliyet;
};


// Bu düğümlerin numaraları “dugum1″ ve “dugum2″ dir.
// Ayrıtın yönü ise, birinci düğümden ikinci düğüme doğrudur.

//———————————————————————–

struct ayrit
{
int maliyet;
int dugum1;
int dugum2;

// ayrit sınıfı için yapıcı.
ayrit (int d1, int d2, int m)
{
dugum1 = d1;
dugum2 = d2;
maliyet = m;
}
};


vector<hedef> dijkstra (int kaynak, vector<ayrit>& G)
{
vector <int> D; // Kullanıcının girdiği kaynak düğüme olan uzaklığı
// bilinen düğümleri (haberdar olunan düğümleri) tutmak için
vector<hedef> S(1); // Sonucu tutmak için
hedef h;

// Kullanıcının verdiği kaynak düğüm kendisinden haberdar.
D.push_back (kaynak);

// Verilen kaynak düğümün kendisine olan uzaklığı sıfır.
// Bu bilgi, sonuç vektörüne yazılıyor.
S[0].dugum = kaynak;
S[0].maliyet = 0;

// Ulaşabileceğimiz tüm düğümler incelendi mı?
// Araştırılacak düğüm kalmayana kadar devam et.
while (1)
{
int minMaliyet = RAND_MAX; // Haberdar olunan düğümler kümesinden doğrudan
// ulaşılabilen ve kaynağa göre minimum maliyetli
// düğümün maliyet değeri
int yeniDugum; // Haberdar olunacak yeni düğümün numarası

// En yakın yeni komşuyu bulabilmek için,
// haberdar olunan düğümler kümesinin her elemanının sahip olduğu
// komşularının, kaynak düğümden olan uzaklıklarına bakılıyor.
// Bunların en minimum olanı seçilecek.

// haberdar olunan düğümlere tek tek bak
for (int i = 0; i < D.size (); i ++)
{
// D düğümünden daha önce haberdar olunduğu için, bu düğümün
// kaynağa göre maliyeti sonuç matrisi içinde yazılıdır.
// for sonucunda oluşan a, bu yeri tutan değişken olacak.
// for (int a = 0; a < S.size (); a ++){
//     //if (S[a].dugum == D)
//     break;

// }



// Graf üzerindeki tüm ayrıtlara bakılıyor
for (int j = 0; j < G.size (); j ++)
{
// Bakılan ayrıtın ilk ucu komşularını araştırdığımız düğüm mü?
// Amacımız D ayrıtının komşularından en az maliyetli olanı
// bulmak olduğu için, şu an sadece bu ayrıtlar bizi ilgilendiriyor.
// Ayrıtın yönü birinci düğümden ikinci düğüme doğru olduğu için,
// ayrıtın ilk ucuna bakılıyor. Diğer uç ise komşu düğümdür.
if (G[j].dugum1 == D)
{
h.dugum = G[j].dugum2; // Bu if içerisinde h değişkeni
// komşu düğümü ifade etmek için
// kullanılıyor. Ayrıtın diğer
// ucu ise komşu düğümdür.

// Komşu düğümden daha önceden haberdar olunup
// olunmadığına bakılıyor. Eğer zaten, bu düğüm için
// minimum maliyetli yol biliniyorsa, bu düğüm es geçiliyor.
// Daha önceden bu düğümden haberdar olunup olunmadığını
// anlamanın yolu, sonuç vektörü üzerinde bu düğüme ait bir
// bilginin yazılı olup olmadığına bakmaktır.
for (int k = 0; k < S.size (); k ++)
if (S[k].dugum == h.dugum)
break;

// Daha önceden bu düğümün maliyeti bilinmiyor ise
if (k == S.size ())
{
// Bu düğüm için maliyet değeri hesaplanıyor.
// Kullanıcının verdiği kaynak düğümün, D
// düğümüne olan mesafesi (maliyeti) biliniyor.
// Bu değer S[a].maliyet değişkenindde saklıdır.
h.maliyet = S[a].maliyet + G[j].maliyet;

// Bu maliyetin, şimdiye kadar incelenen
// komşular içindeki en küçük maliyetten
// daha küçük olup olmadığına bakılıyor.
// Böylece en sonda, haberdar olunan
// düğümlere eklemek için en az maliyetli
// düğüme ulaşılmış olunacak.
if (minMaliyet > h.maliyet)
{
// En küçük maliyet artık bu maliyet
minMaliyet = h.maliyet;

// Daha az maliyetli başka bir düğüm çıkmazsa,
// eklenecek yeni düğüm bu düğümdür.
yeniDugum = h.dugum;
}
}
}
}
}

// minMaliyet değerinin RAND_MAX olarak kalmış olması,
// yeni bir düğüme ulaşılamamış olduğunu gösteriyor.
// Haberdar olunan düğümlere eklemek için yeni bir düğüm
// bulunamadı. Ulaşılınabilecek tüm düğümlere ulaşıldı
if (minMaliyet == RAND_MAX) return S;

// h eklenecek yeni düğümü gösteriyor.
h.dugum = yeniDugum;
h.maliyet = minMaliyet;

// Bu düğümü bilinen düğümler listesine ekle.
D.push_back (h.dugum);

// Yeni düğümle ilgili bilgiyi sonuç vektörüne yaz.
S.push_back (h);
}

return S;
}

int main()
{
vector<hedef> S;
vector<ayrit> G;

// Graf oluşturuluyor.
G.push_back (ayrit (5, 6, 15));
G.push_back (ayrit (5, 4, 20));
G.push_back (ayrit (6, 4, 12));
G.push_back (ayrit (6, 1, 28));
G.push_back (ayrit (1, 2, 24));
G.push_back (ayrit (4, 3, 13));
G.push_back (ayrit (2, 3, 11));

S = dijkstra (6, G);

return 0;
}