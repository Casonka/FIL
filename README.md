<p align="center"> 
<img src="https://user-images.githubusercontent.com/91759086/190248440-2ef2d1a1-0922-4964-92f6-a2ac908225ce.jpeg">
</p>
<p align="center"> 
STM32 Fast Initialization Library (FIL)
</p>
<p align="center"> 
Библиотека быстрой инициализации для микроконтроллеров STM32 на базе программной IDE EmBitz
</p>
<p align="center"> 
Авторы: 
</p>
<p align="center"> 
Гаранин Евгений Олегович – руководитель РЦР ДГТУ
</p>
<p align="center"> 
Назаров Александр Александрович – программист РЦР ДГТУ
</p>

______________________________________________________________________________________________________________________________________________________

<h2><p align="center"> 
1. Архитектурное строение библиотеки
</p></h2>
Репозиторий содержит код ядра библиотеки быстрой инициализации, файлы с библиотеками для инициализации и отладки каждого сектора периферии и документацию. Библиотека использует определения конфигурационного файла и карты портов, чтобы предоставить к использованию необходимые функции, по умолчанию доступ к библиотеке через пользовательское пространство недоступен. После инициализации периферии линкер связывает необходимые файлы, в которых хранятся функции. Определения регистровой библиотеки CMSIS необходимы для работы библиотеки, обычно они встроены в большинство IDE и имеют большой список поддерживаемых контроллеров ST. 

![FIL_arh](https://user-images.githubusercontent.com/91759086/194941479-dea2e12b-eb39-4e41-96c7-f08276aafcd8.png)

<h2><p align="left"> 
Установка библиотеки (среда EmBitz)
</p></h2>




______________________________________________________________________________________________________________________________________________________

Над репозиторием работал программист нижнего уровня Ресурсного центра робототехники - Александр Назаров 
