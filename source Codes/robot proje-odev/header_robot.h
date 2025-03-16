#include<iostream>
#include <fstream>
#include<string>
int switch_secim;
int oda_num;
int temizlenen_oda_sayisi=0;
int sure_cikti=0;
int alan=0;
int engel_sayisi=0;




using namespace std;
class oda;


class home
{
public:
};

class robot;

class odalar:public home{
    public:
    int hedefX,hedefY,hedefX2,hedefY2;
    int engelX,engelY;
    int secim_oda;
    int engel[10][2];
    void alan_or_oda();
    friend void odalar_veri_kopyala(odalar& oda, robot& my_robot);
    void harita_oku_oda_sec();


};
void odalar::alan_or_oda(){
    cout<<"LUTFEN ILGILI ALANA AIT KONUM BILGILERINI GIRIN"<<endl;
    cout<<"1. X DEGERI: ";cin>>hedefX;
    cout<<"2. X DEGERI: ";cin>>hedefX2;
    cout<<"1. Y DEGERI: ";cin>>hedefY;
    cout<<"2. Y DEGERI: ";cin>>hedefY2;



}
class main_robot
{
protected:
    int ilk_konum_x,ilk_konum_y;
    float sarj=100.0;
public:
   // header_robot();


};

class robot:protected main_robot
{
private:
int hedefX,hedefY,hedefX2,hedefY2;
float enerji_tuketim;
int temizlenen_alan, silinen_alan, supurulen_alan;
int sure, sure_total;
int dakika = sure_total/60;
int engelX,engelY;
int guncelX,guncelY;
friend odalar;
public:
    robot();
    void odalar_veri_kopyala(robot& my_robot, odalar& oda); //tamam
    void hareket_et();  //tamam
    void sarj_hesapla(); //tamam
    void temizleme(); //tamam
    void basa_don();   //tamam
    void silme_modu();  //tamam
    void rapor_yazdir(); //tamam
    void tum_ev();

};

 robot::robot()
{
    ilk_konum_x=0;
    ilk_konum_y=0;

}
void robot::tum_ev(){
    cout<<"| TUM EVIN TEMIZLENMESI ISLEMI BASLATILIYOR..."<<endl;
    cout<<"| ISLEM BASLATILDI"<<endl;
    hedefX2=100;
    hedefX = 0;
    hedefY2 = 50;
    hedefY = 0;
    temizlenen_oda_sayisi = 9;
}


void odalar::harita_oku_oda_sec(){
    cout<<"| 1-10 ARASINDA BIR ODA NUMARASI GIRINIZ."<<endl;
    cout<<"| LUTFEN BIR ODA NUMARASI GIRINIZ:  ";
    cin>>secim_oda;
    oda_num= secim_oda;
    int deger;
    ifstream harita_oku;
    harita_oku.open("harita.txt");

    for(int i=1; i<71; i++){
            harita_oku>>deger;
            if(i>(secim_oda-1)*6 && i< 1+(secim_oda*6)){
              if(i== (secim_oda-1)*6+1){hedefX=deger;}
              if(i== (secim_oda-1)*6+2){hedefY=deger;}
              if(i== (secim_oda-1)*6+3){hedefX2=deger;}
              if(i== (secim_oda-1)*6+4){hedefY2=deger;}
              if(i== (secim_oda-1)*6+5){engelX=deger;}
              if(i== (secim_oda-1)*6+6){engelY=deger;}

            }

    }

    harita_oku.close();
    cout<<"| SECILEN ODANIN KOORDINATLARI: ("<<hedefX<<","<<hedefY<<")"<<"--("<<hedefX2<<","<<hedefY2<<")"<<endl;
    cout<<"| ODADAKI ENGEL: ("<<engelX<<","<<engelY<<")"<<endl;
}

void robot::silme_modu(){
    cout<<"| TEMIZLIK ONCESINDE HIZ MODUNU SECINIZ"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"|- uyari: hizli mod enerji tuketimini arttirir -|"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"1---- HIZLI MOD ICIN\n2---- YAVAS MOD ICIN"<<endl;
    cout<<"------------------------------------------"<<endl;
    int hiz_mod;
    cin>>hiz_mod;
    if (hiz_mod==1)
    {
        enerji_tuketim= 0.20;
    }
    else
    {
        enerji_tuketim = 0.10;
    }
    cout<<"| HIZ MODU AYARLANDI"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"| YAPMAK ISTEDIGINIZ TEMIZLIK ISLEMINI SOYLER MISINIZ LUTFEN ?"<<endl;
    cout<<"|-uyari: silme islemi daha uzun surmektedir. -|"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"1----SILME ISLEMI ICIN\n2----SUPURME ISLEMI ICIN"<<endl;
    cout<<"------------------------------------------"<<endl;
    int girdi;
    cin>>girdi;
     if (girdi==1)
     {
        cout<<"<----SILME ISLEMI BASLATILIYOR---->"<<endl;
        sure=1;
        enerji_tuketim = 0.20;
     }
     else if (girdi==2)
     {
        cout<<"<----SUPURME ISLEMI BASLATILIYOR---->"<<endl;
        sure=2;
     }
     else{
        cout<<"<--HATALI BIR ISLEM YAPTINIZ LUTFEN TEKRAR DENEYIN.!!-->"<<endl;
        silme_modu();
     }

}

void robot::sarj_hesapla(){
    int taban;
    int yukseklik;
    int alan;
    taban = hedefX2-hedefX;
    yukseklik = hedefY2-hedefY;
    alan = taban*yukseklik;

    if (sarj- enerji_tuketim*alan <= 5)
    {
        cout<<"| ISLEM ICIN YETERLI SARJ BULUNMAMAKTADIR"<<endl;
        cout<<"| SARJ ISTASYONUNA DONULUYOR!"<<endl;
        basa_don();
        sure_total += 600;
    }
    else
    {
        cout<<"| ILGILI ISLEM ICIN SARJ YETERLI\n| ISLEM BASLATILIYOR"<<endl;
    }
}

void robot::basa_don(){
    cout<<"| ISLEM SONLANDIRILDI BASLANGIC\n| NOKTASINA DONULUYOR."<<endl;
    guncelX=0;
    guncelY=0;
    sure_total += 600;
    cout<<"ROBOT SARJ EDILIYOR"<<endl;
    sarj=100.0;

}

void robot::odalar_veri_kopyala(robot& my_robot, odalar& oda){
    my_robot.hedefX=oda.hedefX;
    my_robot.hedefX2=oda.hedefX2;
    my_robot.hedefY= oda.hedefY;
    my_robot.hedefY2= oda.hedefY2;
    my_robot.engelX= oda.engelX;
    my_robot.engelY = oda.engelY;
}

void robot::hareket_et(){
    sarj_hesapla();
    temizleme();
}

void robot::temizleme(){
    silme_modu();
    sure_total=0;
    char bosluk= '-';
    char virgul = ',';
    temizlenen_oda_sayisi += 1;
    alan = (hedefX2-hedefX)*(hedefY2-hedefY);
    ofstream rapor("temizlik_raporu.txt", ios::app);
    if (!rapor.is_open()) {
        cerr << "Dosya acilirken bir hata olustu." << endl;
        return;
    }
    rapor<<"ILGILI ODAYA AIT TEMIZLIK VERILERI:"<<endl;
    if (sure == 1) {
        rapor << "_____SUPURME ISLEMI YAPILIYOR...   ";
    } else {
        rapor << "_____SILME ISLEMI YAPILIYOR...    ";
    }
    if (enerji_tuketim == 0.20) {
        rapor << "HIZLI MODDA ÇALISIYOR ";
    } else {
        rapor << "YAVAS MODDA CALISIYOR ";
    }
    rapor<<"  TEMIZLENECEK TOPLAM ALAN:____("<<alan<<") m2 alan  "<<"TEMIZLENEN ODA SAYISI: "<<temizlenen_oda_sayisi<<endl;

    for (int i = hedefX; i < hedefX2; i++)
    {
        for (int j = hedefY; j < hedefY2; j++)
        {
            guncelX=i;
            guncelY=j;
            sarj -= enerji_tuketim;
            sure_total +=sure;
            if (guncelX==engelX&&guncelY==engelY)
            {
                cout<<"|-------ENGELLE KARSILASILDI ENGEL ASILDI!----------|"<<endl;
                i+=1;
                j+=1;
                engel_sayisi += 1;
                rapor<<"________________________________ENGELLE KARSILASILDI: ("<<guncelX<<virgul<<guncelY<<")"<<endl;
            }
            cout<<"| GUNCEL KONUM: ("<<guncelX<<","<<guncelY<<") SARJ:<"<<sarj<<"> GECEN SURE: ("<<sure_total<<")"<<endl;
            rapor << "ODA NUMARASI: " << oda_num;
            rapor << "    KONUM: (" << guncelX << virgul << guncelY << ") SARJ: <" << sarj << ">  GECEN SURE: " << sure_total << bosluk <<endl;

        }


    }
    cout<<"| TEMIZLIK BASARI ILE SONUCLANDIRILDI \n| ILGILI TEMIZLIK VERILERI RAPORLARA YAZILDI. "<<endl;
    sure_cikti = dakika;
    rapor.close();
    basa_don();
}
void robot::rapor_yazdir(){
    cout<<"| TEMIZLIK RAPORU GORUNTULENIYOR"<<endl;
    ifstream rapor("temizlik_raporu.txt");
    char satir[1000];
    int max=500;
    while (rapor.getline(satir, max))
    {
        cout<<satir<<endl;
    }
    rapor.close();

}

