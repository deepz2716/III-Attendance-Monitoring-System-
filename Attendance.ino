#define BLYNK_TEMPLATE_ID "TMPL3twGDi6of"
#define BLYNK_TEMPLATE_NAME "Attendance"
#define BLYNK_AUTH_TOKEN "fl37tJ8SRf6cr5mw8iJbaalpDruSBPYH"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
int sen1=0,sen2=0,sen3=0,sen4=0,n=0;
int i=0,J=0,k=0,l=0;
char ssid[] = "Attendance";
char pass[] = "123456789";
//nohip92565@merumart.com
//Project@123
char red1;
int ldr;
  String a;
// Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
void setup() 
{
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.begin(9600);

}      
void loop()  
{   
   a=Serial.readString();
  Serial.println(a);
  delay(2000);
   if(a=="49003AA59741")
  {
     i=i+1;
    }
     if(i==1)
  {
      Blynk.virtualWrite(V0,"L.Deepa,Present IN");
    }
     if(i==2)
  {
    i=0;
      Blynk.virtualWrite(V0,"L.Deepa,Present OUT");
    }
      if(a=="490027741C06")
  {
     J=J+1;
    }
     if(J==1)
  {
      Blynk.virtualWrite(V1,"R.Deepika,Present IN");
    }
     if(J==2)
  {
    J=0;
      Blynk.virtualWrite(V1,"R.Deepika,Present OUT");
    }

  if(a=="490038BC6DA0")
  {
     k=k+1;
    }
     if(k==1)
  {
      Blynk.virtualWrite(V2,"3rd Student,Present IN");
    }
     if(k==2)
  {
    k=0;
      Blynk.virtualWrite(V2,"3rd Student,Present OUT");
    }
  if(a=="49003B604D5F")
  {
     l=l+1;
    }
     if(l==1)
  {
      Blynk.virtualWrite(V3,"Bus1,IN");
    }
     if(l==2)
  {
    l=0;
      Blynk.virtualWrite(V3,"Bus1,OUT");
    }  
}