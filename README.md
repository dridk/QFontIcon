# QFontIcon
QFonticon is a simple Qt class that allows you to create QIcon from a font file like [font Awesome](http://fontawesome.io/).    
QFontIcon is under [MIT license](https://opensource.org/licenses/MIT)

## Usage 

You just have to copy QFontIcon folder into your project. And add the following line in you project.pro file. 


       include("QFontIcon/QFontIcon.pri")

       
You need a font file to use QFontIcon. You can for exemple download [font Awesome](http://fontawesome.io/) and add it in your project
as a resource file. Then use the class as follow:      
Load first the font file only one time. In the main.cpp in the most of the case. 

        QFontIcon::addFont(":/fontawesome.ttf");
       
Then you can get icon from unicode: 

        QAction * action = new QAction(QFontIcon::icon(0xf501));
        // or using typedef FIcon definition 
        QAction * action = new QAction(FIcon(0x501));

       
        
QFontIcon::icon(QChar) takes the unicode of the icon's caracter. You can get unicode name
from [CharacterMap](http://bluejamesbond.github.io/CharacterMap/) website. 

       
## Exemple 
The following repository contains an exemple based on font awesome. Open QFontIcon.pro in QtCreator and run it. You should see 
the following results.

![QFontIcon demo](https://raw.githubusercontent.com/dridk/QFontIcon/master/screenshot.png "QFontIcon demo")

