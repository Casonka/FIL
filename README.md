
<h1><p align="center"> 
Fast Initialization Library(FIL) for STM32 microcontrollers
</p></h1>
<p align="center"> 
<img src="https://user-images.githubusercontent.com/91759086/190248440-2ef2d1a1-0922-4964-92f6-a2ac908225ce.jpeg">
</p>
<h1><p align="center"> 
Библиотека быстрой инициализации для микроконтроллеров STM32 на базе программной IDE EmBitz
</p></h1>
<h3><p align="center"> 

## Что такое FIL ?

<h3>Аннотация</h3>

Библиотека быстрой инициализации разрабатывается в структурном подразделении [ДГТУ](https://donstu.ru/) - [Ресурсный центр робототехники](https://github.com/RCR-DSTU). Библиотека FIL предназначена для начинающих специалистов в области встраиваемых систем, предоставляя набор API функций. Благодаря возможности создания карты портов и конфигурации настроек, проект настраивается с минимальными временными затратами и максимально повышая гибкость и вариативность параметров. Исполнение разрабатываемого продукта поддерживает принцип модульности - возможность подключения и исключения секторов библиотеки. Таким образом список предоставляемых функций и макро определений зависит от требуемой периферии микроконтроллера, которая указана в конфигурационных файлах. 

Первое официальное упоминание продукта представлено в [статье](https://donstu.ru/news/nauka/studenty-dgtu-predstavili-svoi-proekty-na-kongresse-molodykh-uchenykh/) в новостной ленте ДГТУ. Также проект был [протестирован](https://dzen.ru/media/donstu/v-resursnom-centre-robototehniki-dgtu-studentov-obuchaiut-na-mobilnyh-robotah-sobstvennogo-proizvodstva-63a19964c98aaa3ae26cade1) с участием студентов Т-университета, в рамках ведения элективного курса "Введение в робототехнику". Использование FIL при разработке ПО для [беспилотного серийного автомобиля](https://github.com/Casonka/Robocross), также, было успешно и позволило занять 3-е место на всероссийских открытых испытаниях беспилотных транспортных средств ["РОБОКРОСС 2022"](https://www.russianrobotics.ru/competition/robocros/).

<h3>Цель и назначение продукта</h3>
Цель, преследуемая при разработе продукта - уменьшения времени разработки ПО за счет повышения абстракции программного кода с минимальными затратами ресурсов вычислительной техники. Продукт позволяет исключить временные издержки за счет исключения инициализации со стороны пользователя. При этом существует вариативность и для опытных пользователей за счет наличия команд изменения регистровых переменных.
Проблему, решение которой преследуется с самого момента основания проекта - существенное снижение порога начинающих при освоении встраиваемых систем. 

<h3>Архитектурное строение библиотеки</h3>

Архитектуру созданного продукта представляет собой взаимодействие элементов, как на рисунке ниже. Основной участок взаимодействия пользователя и продукта это карта портов и конфигурационный файл, они участвуют в процессе сборки проекта и предоставлении необходимого набор API функций ядра библиотеки FIL. Основополагающий фактор - наличие периферийной библиотеки [CMSIS](https://developer.arm.com/tools-and-software/embedded/cmsis), определения которой используются ядром и самим пользователем.

<p align="center"> 
<img src=https://github.com/Casonka/FIL/blob/installation/images/Architecture.jpg>
</p>

На данный момент проект поддерживает линейки контроллеров, прилагаемых в таблице. Основная целевая группа проекта - архитектура линейки ARM Cortex-M, на которой в большинстве реализованы микроконтроллеры STM32. В частности, планируется оптимизация под архитектуру Cortex M4 и M3.

| Модель контроллера | Статус оптимизации |
| ------ | ------ |
| Cortex-M4 STM32F407 | Оптимизировано |
| Cortex-M4 STM32F401 | Оптимизировано |
| Cortex-M3 STM32F103 | В разработке |

<h3>Поддержка middleware</h3>

В последний релизных версиях библиотеки FIL был добавлен External Manager - линкер-файл для внешних библиотек. Таким образом, интеграция в проект будет происходить с минимальным количеством ошибок и не будет нарушен принцип модульности. Некоторый перечень внешних библиотек предоставляется Ресурсным центром робототехники, однако есть инструкция по установке собственных разработок, смотрите [здесь]().

## Лицензирование

Продукт имеет лицензию [Apache-License 2.0](https://www.apache.org/licenses/LICENSE-2.0).

## Установка 

Для удобной и максимально быстрой установке были созданы ветки репозитория по средам разработки. Таблица содержит все текущие на данный момент времени проверенные программы для разработки ПО для микроконтроллеров STM32.

|  | Название среды | Ссылка на инструкцию по установке |
| ------ | ------ | ------ |
| <img width=30% src=https://github.com/Casonka/FIL/blob/installation/images/EmBitz.png> | EmBitz 2.30+ | [Embitz установка]() |
| <img width=30% src=https://github.com/Casonka/FIL/blob/installation/images/Eclipse.png> | Eclipse Embedded | [Eclipse установка]() |

