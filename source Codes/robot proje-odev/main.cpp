#include <iostream>
#include <fstream>
#include "header_robot.h"

using namespace std;



int main()
{
    odalar oda;
    robot my_robot;
    int switch_secim; // switch_secim'i tanımla
    system("cls"); // consolu temizler kodun düzgün çıkması için
    while (switch_secim != 5)
    {
     cout << "--------------------------------------\n";
     cout << "|      |- o -|            |- o -|    |\n";
     cout << "|                 ^^^^               |\n";
     cout << "--------------------------------------\n";
     cout << "--------------------------------------\n";
     cout << "|1| ODA TEMIZLIK YAPTIR              |\n";
     cout << "|------------------------------------|\n";
     cout << "|2| ALAN TEMIZLIGI YAPTIR            |\n";
     cout << "|------------------------------------|\n";
     cout << "|3| TUM EVI TEMIZLE                  |\n";
     cout << "|------------------------------------|\n";
     cout << "|4| TEMIZLIK RAPORU GORUNTULE        |\n";
     cout << "|------------------------------------|\n";
     cout << "|5| CIKIS YAP                        |\n";
     cout << "|------------------------------------|\n";
     cout << "|TEMIZLIK SURESI (dk): "<<sure_cikti<<endl;
     cout << "|TEMIZLENEN ALAN (m2): "<<alan<<endl;
     cout << "|TEMIZLENEN ODA SAYISI (adet): "<<temizlenen_oda_sayisi<<endl;
     cout << "|KARSILASILAN ENGEL SAYISI (adet):"<<engel_sayisi<<endl;
     cout << "|------------------------------------|\n";
     cout << "| SECIMINIZI GIRIN LUTFEN:  ";
     cin >> switch_secim;
     switch (switch_secim)
     {
     case 1:
        oda.harita_oku_oda_sec();
        my_robot.odalar_veri_kopyala(my_robot, oda);
        my_robot.hareket_et();
        break;
     case 2:
        oda.alan_or_oda();
        my_robot.odalar_veri_kopyala(my_robot, oda);
        my_robot.hareket_et();
        
        break;
     case 3:
        my_robot.tum_ev();
        my_robot.hareket_et();
        
       break;   
     case 4:
        my_robot.rapor_yazdir(); 
        
        break; 
     case 5:
        cout << "CIKIS YAPILIYOR :)" << endl;
        break;
     }
    }
    return 0;
}
