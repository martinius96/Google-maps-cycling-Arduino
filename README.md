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
* Arduino Leonardo (or another 32u4 microcontroller with HID extension)
* Magnetic contact
* 2 buttons to rotate sides
* 2 resistors (if not pullup connection of inputs)
