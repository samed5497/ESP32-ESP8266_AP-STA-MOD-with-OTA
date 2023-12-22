#include <functions/Temel_Fonksiyonlar.h>

void Seriport_Rapor() // sure = ms
{
    if (millis() - lastTime_DONGU > (1000*seriport_sure) and Update_Mod == 0 and SeriPort_Durum == 1)
    {
        Sistem_Saat_Guncelleme();

        // Her türlü ekrana yazılacak bilgiler.

        if (Kurulum_Modu == true) // Kurulum modu devredeyse ekrana yazılacak bilgiler.

        {
            Serial.println("[HAFIZA]: Cihaz kurulum modunda. Lütfen Wi-Fi kalibrasyonu yapınız. ");
            Serial.print(" ~ AP Mod Wi-Fi Adı   = ");
            Serial.println(ssid_AP);
            Serial.print(" ~ AP Mod Şifre       = ");
            Serial.println(pass_AP);
        }

        if (Kurulum_Modu == false) // Kurulum mod devre dışıysa ekrana yazılacak bilgiler.

        {
            Serial.print(" ~ Bağlı Wi-Fi Ağı    = ");
            Serial.println(ssid_STA);

            Serial.print(" ~ IP Adresi          = ");
            Serial.println(WiFi.localIP().toString());
        }

        // Her türlü ekrana yazılacak bilgiler2.

        Serial.print(" ~ MAC Adresi         = ");
        Serial.println(WiFi.macAddress());

#if defined(ESP32)
        Serial.print(" ~ CPU Sıcaklığı      = ");
        Serial.print((temprature_sens_read() - 32) / 1.8);
        Serial.println(" C");
#endif
        lastTime_DONGU = millis();
    }

    if (digitalRead(IN_BUTON_0) == LOW and SeriPort_Durum == 0)
    {
        Serial.begin(115200);
        Serial.println("");
        Serial.println("[BILGI]: Seri Port Tekrardan Devreye Alındı.");
        Serial.println("");
        SeriPort_Durum = 1;
        while (digitalRead(IN_BUTON_0) == LOW)
        {
        } // Butonun serbest bırakılmasını bekle
    }
    if (digitalRead(IN_BUTON_0) == LOW and SeriPort_Durum == 1)
    {
        Serial.println("");
        Serial.println("[BILGI]: Seri Port Devre Dışı Bırakılıyor..");
        Serial.println("");
        Serial.flush();
        Serial.end();
        SeriPort_Durum = 0;
        while (digitalRead(IN_BUTON_0) == LOW)
        {
        } // Butonun serbest bırakılmasını bekle
    }
}
