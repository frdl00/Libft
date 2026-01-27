#include <string.h>
//void sizeOf(void) plduğu için memory kaç byte birim alacağını bilmiyor
//eğer int olsaydı 4 byte ilerlerdi
//char olursa 1 byte ielrler
void *ft_memset(void *s, int c, size_t n)
{
   size_t i;
    i = 0;

    //void s pointerını fonskiyonda kullanmak için onu yeni bir char tipi değişkene atıyoruz
    //int *p;  derken biz br pointer değişkenioluşturuyıruz 
    //fakat *p =5; derken p nin tutulduğu adrese git ve o adrese 5 yaz demek
    //x = *p; derken de o adresten oku (????????) demek oluyormuş ne demek ki bu
    // p adresi, *p adresteki veriyi tutaR(pointerlar çok saçma ama bir şeyler öğrenmek zevkli)(AMA ÖĞRENEMİYORUM)
    //*s ve *p pointerlarımız var diyelim. p=s derken pnin tuttuğu adresin içine s nin adresini atamış oluyoruz (GALİBA???) YANİ P NİN ADRESİNİ DEĞİŞTİRMİYORUZ İÇERİĞİNİ DEĞİŞTİRİYORUZ.
    //YİNE *P VE *S POİNTERLARIMIZ VARKEN *p = s yazdığımızda pnin gösterdiği memory alanına s nin değerini atamış oluoyrmuşuz (AYNI ŞEY DEĞİL Mİ ZATEN)??????????
    //ne yazsam ne değişiyor neyi ifade deiyor ya da ne oluyor : 1)p=s; (pnin tuttuğu adres) 2)*p=s; (pnin gösterfdiği yerdeki veri) 3)p (adres) 4)*p (veri)
    unsigned char *p = (unsigned char *) s;

    while(i < n)
    {
        p[i] = (unsigned char) c;
        i++;
    }

    return s;
}
