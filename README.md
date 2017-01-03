# QFontIcon
QFonticon is a simple Qt class that allows you to create QIcon from a font file like [font Awesome](http://fontawesome.io/)

## Usage 

You just have to copy QFontIcon folder into your project. And add the following line in you project.pro file. 


       include("QFontIcon/QFontIcon.pri")

       
You need a font file to use QFontIcon. You can for exemple download [font Awesome](http://fontawesome.io/) and add it in your project
as a resource file. Then use the class as follow : 

        QFontIcon::addFont(":/fontawesome.ttf");
        QIcon icon = QFontIcon::icon(0xf2b9);
        
QFontIcon::icon(QChar) takes the unicode of the icon's caracter. You can get unicode name
from [font Awesome](http://fontawesome.io/) website under icons menu. 

       
## Exemple 
The following repository contains an exemple based on font awesome. Open QFontIcon.pro in QtCreator and run it. You should see 
the following results.
