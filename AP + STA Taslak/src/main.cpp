#include <functions/Baslangic_Fonksiyonlari.h>

void setup()
{
    //////////////////////////////////////////////////////////////  PINLERİN TANIMLANMALARI  //////////////////////////////////////////////////////////////

    pinMode(IN_BUTON_0, INPUT_PULLUP);





    //////////////////////////////////////////////////////////////  SETUP BOLUMLERI  //////////////////////////////////////////////////////////////

    Serial.begin(115200);
    Serial.println("HMI Başlatılıyor. ");Serial.println();Serial.println();Serial.print(" >>> ");
    Serial.print(UYGULAMA);Serial.print(" / ");Serial.println(VERSIYON);Serial.printf("\r\n");
    delay(10);

    EEPROM.begin(512);
    delay(10);

    Baslatma_Fonksiyonlari(); // Wifi kalibrasyon ve server başlatma. 
}

void loop()
{
    if (Update_Mod != 1)// Güncelleme yapımıyorsa bu fonksiyonlara gir. 
    {

        Zaman_Guncellemesi();
        Seriport_Rapor();
    }
    if (Kurulum_Modu)
    {
        dnsServer.processNextRequest();
    }
}
