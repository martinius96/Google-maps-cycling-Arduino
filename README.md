# Google maps cycling from home
**Brief description:**
* The project allows you to interact with a bicycle / rotoped with Google maps. Thanks to magnetic contact, the bicycle ride offers an even better world map experience.
**Principle of functionality:**
* The user by cycling and tilting the magnetic contact gives Arduin information about the number of pedal turns around the axle (number of revolutions). If the counter is exceeded, the Arduino ASCII key ("W") will be sent to move the virtual map one piece in advance.
**The project has successfully pursued its services:**
* Google Maps Street View
* GeoGuessr (StreetView with Site Guess - Quiz)
* Earth Picker (StreetView with Site Guess - Quiz)
* Streetview - caves/peaks/mountain trails
* Moving sides is done by holding one of the buttons. The move continues until the user releases the button
**Hardware for the project:**
* Arduino Leonardo (or another 32u4 microcontroller with HID extension)![Leonardo](https://docid81hrs3j1.cloudfront.net/contents/small/leonardo2_500_abZdpvP.jpg)
* Magnetic contact![Contact](https://www.alpro.co.uk/Uploads/ShopItems/00/00/00/69/ShopItemImg1_PICT/Electromagnet_tny.jpg)
* 2 buttons to rotate sides![Pushbutton](https://tshop.r10s.com/684/0f3/c390/4f3d/8062/ca01/e6ae/1117e7b222c4544488dd21.jpg?_ex=128x128)
* 2 10k resistors (if not pullup connection of inputs)![Resistors](https://opencircuit.shop/resources/content/34eaaab5ea018/crop/128-128/Weerstanden.jpg)

# Scheme
![Geoguessr](https://i.imgur.com/B2zxhYZ.png)

# Screens from StreetView (Geoguessr, Earthpicker, Gmaps)
![Geoguessr](http://jeffreyhill.typepad.com/.a/6a00d8341d417153ef01b8d17af746970c-800wi)
![Gmaps](https://cnet2.cbsistatic.com/img/kv9UIOvPztuH3XcIO3FQ9yBNJhI=/936x527/2018/05/24/30695bcc-0173-4903-bb0c-44860fb26099/screen-shot-2018-05-24-at-11-09-45-am.png)
