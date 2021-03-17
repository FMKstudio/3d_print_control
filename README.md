## АВТОМАТИЧЕСКОЕ ВЫКЛЮЧЕНИЕ И КОНТРОЛЬ 3Д ПРИНТЕРА или ИНЫХ CNC УСТРОЙСТВ
Независимое устройство для отключения 3д принтеров и CNC по температуре и другим событиям.
Работает через Blink.
Устройство для сборки на платформе ESP8266, подойдут платы NodeMCU или Wemos D1 mini

## ВОЗМОЖНОСТИ УСТРОЙСТВА:
* Контроль температуры и вывод в приложение на смартфон.
* Push-уведомления, когда температура поднимается выше указанных в скетче пороговых значений.
* Автоматическое отключение устройства при превышении установленных пороговых значений (иных от уведомлений)
* Автоматическое отключение с задержкой по времени, если температура не поднимается или достигает заданного предела, по истечении указанной задержки нагрузка будет отключена
* Принудительное отключение из приложения по желанию.
* Возможна работа до 6 датчиков температуры и различной логикой работы по ним (в том числе режимы нагрева или охлаждения) с добавлением дополнительных реле

## ПЛАНИРУЕТСЯ:
* Сборка устройства на готовой заводской плате с нормальными разъемами для датчиков
* Добавить возможность подключения датчика филамента. Уведомление в приложении при срабатывании.
* Другое (учту ваши пожелания и предложения).

## КАК СОБРАТЬ
* На монтажной плате подходящего размера, навесной монтаж, элементов не так много, пайка
* Пример сборки, какое железо нужно купить и подробно об устройстве и его настройке в видео: 

## КАК НАСТРОИТЬ
Пользуясь преимуществами библиотеки 1-Wire для цифровых датчиков задействован только один пин, для возможности подключения дополнительных реле и перефирии.
Минут столько в том, что нужно предварительно указать адрес подключаемых датчиков в скетче. Найти адрес можно с помощью этого скетча- <a href="https://github.com/Technarrus/Dallas_Adress">Dallas Adress</a>, как - на странице подробно расписано.
 

## РЕЛИЗЫ
Сюда будут добавляться старые версии


### ЮТУБ КАНАЛ И ДРУГИЕ ВИДЕДО
* <a href="">-</a>
* <a href=" ">-</a>
* <a href="https://www.youtube.com/channel/UCzI016x7MItBtQCJiSWI7yA">Канал YouTube</a>

### Связь
Вопросы, обсуждения, предложения через следующие сообщества:
* [Telegram группа](https://t.me/technarr)
* [Группа в VK](https://vk.com/technarrus)
