# ESP32-ESP8266_AP-STA-MOD-with-OTA

__________________________________________________________________
-----------------------------  EN  -------------------------------
__________________________________________________________________

/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\            AP + STA TASLAK Fimware         /\/\/\/\/\
/\/\/\/\/\/\                 v1.0 INFO                  /\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\

                     github.com/samed5497  
                   linkedin.com/in/samedkaya        
__________________________________________________________________
                        Specifications
------------------------------------------------------------------

- This software is created to be compiled commonly for both ESP32 and ESP8266 chips.
- Upon being loaded, the device first opens itself in Access Point mode and asks you to connect and perform WiFi calibration.
- After entering the information, it saves the received values to EEPROM and restarts.
- Upon restart, if there is stored data in memory, it attempts to establish a connection to the network using this data.
- If the connection fails within a minute, the device activates itself in setup mode again.
- If a connection is established, it starts broadcasting a web server on its IP and updates the desired data in real-time via the WebSocket protocol.
- It allows the creation of a complete user interface through bidirectional communication.
- Fundamentally, it possesses the infrastructure to display device information on a web server.
- Modifications can be made for a new application to be used.
- Functions used in the new application can be added to relevant working pages and their activation can be achieved through the web server.
- If desired, data exchange can be conducted alongside the web server broadcast using MQTT or similar protocols.
- For detailed information, feel free to reach out to me anytime.


__________________________________________________________________
                   Web Server Screenshoots
------------------------------------------------------------------

![ESP32 MainPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/9e091a5a-dd44-4c04-80f6-09f46925c414)
![ESP32 AdminPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/9a449827-700b-4b11-b11b-f7176427e7e8)
![ESP32 AdvantagePage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/0e2928b2-3c5a-4608-9cb7-ff526e400264)
![ESP32 AdvantagePage2](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d843d99a-7ab7-482f-8f5a-6bc9fbc1fcfa)
![ESP32 ResetPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/fe1605de-802e-48c9-a366-7c675bc0a379)
![ESP8266 MainPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d1f8d109-91d4-4ed4-be6a-97020dcf8085)


__________________________________________________________________
                   Supporting Chips
------------------------------------------------------------------

ESP-WROOM-32 CHIP PINOUT The following figure illustrates the ESP-WROOM-32 chip pinout. Use this diagram if you’re using an ESP32 bare chip in your projects. On the bottom of this blog you can download the PDF with the ESP32 – PinOut!
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/afde0e8e-049b-4c0f-9d1b-891d4b92910f)
ESP32-VROOM-32D-PINOUT

ESP-WROOM-32 30 PIN Develeopment Board PINOUT If you’re using an ESP32 30 pin Development board, you can use the following GPIO diagram as a reference. ESP32 30 pin Development board pinout diagram GPIO’s pins. On the bottom of this blog you can download the PDF with the ESP32 – PinOut!
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/8d10f3ad-ffdf-4c8e-8fce-ca7bc334f846)
ESP32-30PIN-DEVBOARD

ESP-WROOM-32 38 PIN Develeopment Board PINOUT If you’re using an ESP32 30 pin Development board, you can use the following GPIO diagram as a reference. ESP32 30 pin Development board pinout diagram GPIO’s pins. On the bottom of this blog you can download the PDF with the ESP32 – PinOut
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d0377903-c5e8-426e-84cb-1c80d76b7446)
ESP32-38 PIN-DEVBOARD

ESP12F/ ESP12E and more.

![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/5bcd1bed-6ca2-4b69-abdd-c32eb63ba63a)
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/26f14a6e-2acd-4cfe-8d48-72340a203af8)




__________________________________________________________________
-----------------------------  TR  -------------------------------
__________________________________________________________________

/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\
/\/\/\/\/\/\            AP + STA TASLAK Fimware         /\/\/\/\/\
/\/\/\/\/\/\                 v1.0 Hakkında              /\/\/\/\/\
/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\

                     github.com/samed5497  
                   linkedin.com/in/samedkaya        
__________________________________________________________________
                        Özellikler
------------------------------------------------------------------

- Bu yazılım ESP32 ve ESP8266 çipleri için ortak olarak derlenebilecek şekilde oluşturulmuştur. 
- Yüklenen cihaz önce kendisini Access Point modunda paylaşıma açar ve bağlanıp wifi kalibrasyonu yapmanızı ister. 
- Girdiğiniz bilgiler ardından alınan değerleri eeproma kayededer ve tekrardan başlar. 
- Yeniden başladığındahafızada kayıtlı veri varsa bu verileri kullanrak ağa bağlantı kurmaya çalışır. 
- Bir dakika içinde bağlantı başarısız olursa cihaz tekrardan kendisini P modunda kurulum için aktifleştirir. 
- Bağlantı sağlanırsa Sahip olduğu IP üzerinden web sunucu yayınına başlar ve websocket protokolu ile anlık olarak istenilen verileri günceller. 
- Çift yönlü iletişimi sayesinde tam bir kullanıcı arayüzü oluşturmak mümkündür.
- Temel olarak cihaz bilgilerini web sunucuda gösterecek altyapıya sahiptir. 
- Kullanılacak yeni uygulama için gerekli eklemeler yapılabilir. 
- Yeni uygulamada kulanılan fonksiyonları ilgili çalışma sayfalarına ekleyebilir ve web sunucu ile aktivasyonunu sağlayabilirsiniz. 
- İstenirse MQTT yada benzer protokoller ile web sununu yayınının yanında veri alışverisi de yapabilir. 
- Detaylı bilgi için tarafıma her zman ulaşabilirsiniz.

__________________________________________________________________
                   Web Sunucu Ekran Görüntüleri
------------------------------------------------------------------

![ESP32 MainPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/9e091a5a-dd44-4c04-80f6-09f46925c414)
![ESP32 AdminPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/9a449827-700b-4b11-b11b-f7176427e7e8)
![ESP32 AdvantagePage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/0e2928b2-3c5a-4608-9cb7-ff526e400264)
![ESP32 AdvantagePage2](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d843d99a-7ab7-482f-8f5a-6bc9fbc1fcfa)
![ESP32 ResetPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/fe1605de-802e-48c9-a366-7c675bc0a379)
![ESP8266 MainPage](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d1f8d109-91d4-4ed4-be6a-97020dcf8085)


__________________________________________________________________
                   Desteklenen Cipler
------------------------------------------------------------------

ESP-WROOM-32 CHIP PINOUT The following figure illustrates the ESP-WROOM-32 chip pinout. Use this diagram if you’re using an ESP32 bare chip in your projects. On the bottom of this blog you can download the PDF with the ESP32 – PinOut!
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/afde0e8e-049b-4c0f-9d1b-891d4b92910f)
ESP32-VROOM-32D-PINOUT

ESP-WROOM-32 30 PIN Develeopment Board PINOUT If you’re using an ESP32 30 pin Development board, you can use the following GPIO diagram as a reference. ESP32 30 pin Development board pinout diagram GPIO’s pins. On the bottom of this blog you can download the PDF with the ESP32 – PinOut!
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/8d10f3ad-ffdf-4c8e-8fce-ca7bc334f846)
ESP32-30PIN-DEVBOARD

ESP-WROOM-32 38 PIN Develeopment Board PINOUT If you’re using an ESP32 30 pin Development board, you can use the following GPIO diagram as a reference. ESP32 30 pin Development board pinout diagram GPIO’s pins. On the bottom of this blog you can download the PDF with the ESP32 – PinOut
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/d0377903-c5e8-426e-84cb-1c80d76b7446)
ESP32-38 PIN-DEVBOARD

ESP12F/ ESP12E and more.

![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/5bcd1bed-6ca2-4b69-abdd-c32eb63ba63a)
![image](https://github.com/samed5497/ESP32-ESP8266_AP-STA-MOD-with-OTA/assets/29681734/26f14a6e-2acd-4cfe-8d48-72340a203af8)



