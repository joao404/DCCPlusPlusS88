DCCPlusPlusS88
--------------

Dieses Projekt basiert auf dem Github-Projekt unter
https://github.com/DccPlusPlus/BaseStation

Zusätzlich zur bisherigen Funktionalität wurde eine S88-Schnittstelle für Arduino Uno und Mega eingefügt.
Diese nutzt die Pins A3 bis A5.

Folgende Änderungen wurden gegenüber dem Ursprungsprojekt vorgenommen:

DCCpp_Uno.h: Hinzufügen der Definitonen der Pins und Begrenzung des Adressbereichs für die Rückmelderanzahl
Sensor.c: Aufruf der S88 Funktionen aus S88.h und S88.cpp

Zudem wurden die Files S88.h und S88.cpp hinzugefügt.
S88.h: Basisadresse der Rückmelder auf dem S88-Bus.


Berechnnung der Adressen
------------------------
Die Angabe, wie viele S88-Module vorhanden sind, erfolgt mit den gleichen Kommandos wie bei der Definition von anderen Sensoren.
Für den ganzen S88-Bus wird eine Adresse vorgegeben, welche im Bereich von 60 bis 100 liegen muss. Die Differenz der Adresse zu 60 gibt an,
wie viele Bytes auf dem S88-Bus ausgelesen werden sollen. Bei 4 Bytes, also zwei 16fach Rückmeldern, muss entsprechend die 64 angegeben werden.
Die Ausgabe erfolgt dann ab der Adresse 100.

17.04.2019

