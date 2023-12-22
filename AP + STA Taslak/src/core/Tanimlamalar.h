#include <core/Kutuphaneler.h>

String UYGULAMA = "AP + STA Mod Stock ";
String VERSIYON = "v1.0-by S.KAYA";

//////////////////////////////////////////////////////////////  PINLER  //////////////////////////////////////////////////////////////

int IN_BUTON_0 = 0; // Seri portu açı kapatmak için kullanılıyor. 







//////////////////////////////////////////////////////////////  TEMEL SİSTEM TANIMLAMALARI  //////////////////////////////////////////////////////////////

long unsigned int lastTime_DONGU, lastTime_Update = 0;
int gecensure_sn, gecensure_dk, gecensure_saat, gecensure_gun, gecensure_hafta = 0;
long unsigned int seriport_sure = 1;//saniye
long unsigned int AP_MOD_ResTime = 10; //dakika   // AP Modunda X dakika kalırsa sistemi kontrol etmek için tekrardan sistemi başlat. 

int Update_Mod, progress = 0;
int SeriPort_Durum = 1;
int last_eeprom = 300;

const char *hostname = UYGULAMA.c_str();
const char *ssid_AP = UYGULAMA.c_str();
const char *pass_AP = "";
String AdminUser = "admin";
String AdminPass = "admin1234";

boolean Kurulum_Modu;

String ssidList, Sistem_Calisma_Zamani = "";
String ssid_STA = "";
String pass_STA = "";
String APP_KEY = "";
String APP_SECRET = "";
String DEVICE_ID = "";

const IPAddress apIP(192, 168, 4, 1);

IPAddress local_IP(192, 168, 1, 184);
IPAddress subnet(255, 255, 0, 0);
IPAddress gateway(192, 168, 1, 1);
IPAddress primaryDNS(8, 8, 8, 8);   // optional
IPAddress secondaryDNS(8, 8, 4, 4); // optional

DNSServer dnsServer;

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

//////////////////////////////////////////////////////////////  //TEMEL SİSTEM TANIMLAMALARI//  //////////////////////////////////////////////////////////////
