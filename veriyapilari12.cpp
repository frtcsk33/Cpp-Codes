#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int slot_sayisi = 5;
class Hash_tablosu {
   public:
      int k;
      int v;
      Hash_tablosu(int k, int v) {
         this->k = k;
         this->v = v;
      }
};
class Dugum_sil:public Hash_tablosu {
   private:
      static Dugum_sil *bos_veri;
      Dugum_sil():Hash_tablosu(-1, -1) {}
   public:
      static Dugum_sil *dugum_sec() {ddd
         if (bos_veri == NULL)
            bos_veri = new Dugum_sil();
         return bos_veri;
      }
};
Dugum_sil *Dugum_sil::bos_veri = NULL;
class hash_tablo_haritasi {
   private:
      Hash_tablosu **hash_tbl;
   public:
      hash_tablo_haritasi() {
         hash_tbl = new Hash_tablosu* [slot_sayisi];
         for (int i = 0; i < slot_sayisi; i++) {
            hash_tbl[i] = NULL;
         }
      }
      int mod_temelli_hash_fonksiyonu(int k) {
         return k % slot_sayisi;
      }
      void ekle(int k, int v) {
         int hash_degeri = mod_temelli_hash_fonksiyonu(k);
         int baslangic = -1;
         int sil_indeks = -1;
         while (hash_degeri != baslangic && (hash_tbl[hash_degeri]  == Dugum_sil::dugum_sec() || hash_tbl[hash_degeri] != NULL && hash_tbl[hash_degeri]->k != k)) {
            if (baslangic == -1)
               baslangic = hash_degeri;
            if (hash_tbl[hash_degeri] == Dugum_sil::dugum_sec())
               sil_indeks = hash_degeri;
               hash_degeri = mod_temelli_hash_fonksiyonu(hash_degeri + 1);
         }
         if (hash_tbl[hash_degeri] == NULL || hash_degeri == baslangic) {
            if(sil_indeks != -1)
               hash_tbl[sil_indeks] = new Hash_tablosu(k, v);
            else
               hash_tbl[hash_degeri] = new Hash_tablosu(k, v);
         }
         if(baslangic != hash_degeri) {
            if (hash_tbl[hash_degeri] != Dugum_sil::dugum_sec()) {
               if (hash_tbl[hash_degeri] != NULL) {
                  if (hash_tbl[hash_degeri]->k== k)
                     hash_tbl[hash_degeri]->v = v;
               }
            } else
            hash_tbl[hash_degeri] = new Hash_tablosu(k, v);
         }
      }
      int anahtar_ara(int k) {
         int hash_degeri = mod_temelli_hash_fonksiyonu(k);
         int baslangic = -1;
         while (hash_degeri != baslangic && (hash_tbl[hash_degeri] == Dugum_sil::dugum_sec() || hash_tbl[hash_degeri] != NULL && hash_tbl[hash_degeri]->k!= k)) {
            if (baslangic == -1)
               baslangic = hash_degeri;
               hash_degeri = mod_temelli_hash_fonksiyonu(hash_degeri + 1);
         }
         if (hash_tbl[hash_degeri] == NULL || hash_degeri == baslangic)
            return -1;
         else
            return hash_tbl[hash_degeri]->v;
      }
      void Eleman_sil(int k) {
         int hash_degeri = mod_temelli_hash_fonksiyonu(k);
         int baslangic = -1;
         while (hash_degeri != baslangic && (hash_tbl[hash_degeri] == Dugum_sil::dugum_sec() || hash_tbl[hash_degeri] != NULL && hash_tbl[hash_degeri]->k!= k)) {
            if (baslangic == -1)
               baslangic = hash_degeri;
               hash_degeri = mod_temelli_hash_fonksiyonu(hash_degeri + 1);
         }
         if (hash_degeri != baslangic && hash_tbl[hash_degeri] != NULL) {
            delete hash_tbl[hash_degeri];
            hash_tbl[hash_degeri] = Dugum_sil::dugum_sec();
         }
      }
      ~hash_tablo_haritasi() {
         delete[] hash_tbl;
      }
};
int main() {
   hash_tablo_haritasi hash;
   int k, v;
   int secim;
   while(1) {
      cout<<"1.Tabloya eleman ekle"<<endl;
      cout<<"2.Anahtar verisinden eleman ara"<<endl;
      cout<<"3.Anahtar eleman sil"<<endl;
      cout<<"4.Cikis"<<endl;
      cout<<"seciminizi yapiniz: ";
      cin>>secim;
      switch(secim) {
         case 1:
            cout<<"Eklenecek elemanı yazınız: ";
            cin>>v;
            cout<<"Hangi elemanın ekleneceğine dair anahtarı girin: ";
            cin>>k;
            hash.ekle(k, v);
         break;
         case 2:
            cout<<"Aranacak elemanın anahtarını girin: ";
            cin>>k;
            if(hash.anahtar_ara(k) == -1) {
               cout<<"Belirtilen anahtara ait eleman bulunamadı "<<k<<endl;
               continue;
            } else {
               cout<<"Anahtardaki eleman "<<k<<" : ";
               cout<<hash.anahtar_ara(k)<<endl;
            }
         break;
         case 3:
            cout<<"Silinecek elemanın anahtarını girin: ";
            cin>>k;
            hash.Eleman_sil(k);
         break;
         case 4:
            exit(1);
         default:
            cout<<"\nSeçiminizi düzgün yapın\n";
      }
   }
   return 0;
}