
/***************************************************
     Уведомления
**************************************************/

void Notifi(){

//Уведомления в приложение Blynk и на почту (ввести свою почту и расскомментировать если они вам нужны):

//стол (камера)
if(tempSensor[0] > 80){ // уведомления при температуре 100гр и выше
// if (millis() - zadergka >= 120000) {   // задержка на 2 мин
//     zadergka = millis();                 //сброс таймера         
//  Blynk.email("ваша@почта.ес", "ESP8266 Тревога", "Температура выше 28C!"); //на почту
  Blynk.notify("Внимание, температура стола выше 110C!"); //пуш
 }
// }

//хотенд
 if(ntc > 180){ //уведомления при температуре 100гр и выше
//  Blynk.email("ваша@почта.ес", "ESP8266 Тревога", "Температура ниже 20C!"); //на почту
  Blynk.notify("Внимание, температура радиатора хотенда выше 200C!"); //пуш
}

//ДАТЧИК ФИЛАМЕНТА
//  if(digitalRead(FILAMENT)){ //уведомления при срабатывании датчика филамента
// //  Blynk.email("ваша@почта.ес", "ESP8266 Тревога", "Температура ниже 20C!"); //на почту
//   Blynk.notify("Внимание, сработал датчик филамента!"); //пуш
// }

}
