#pragma once
#include "BoardSelection.h"
#include "FilConfig.h"

#if (FIL_FREERTOS == 1)
    /*!
    *   @note [FIL:FreeRTOS] ��������� �������� �� ����������� ������������ ������� � ������
    *   �������� ��� ����� ����������� ��� ������ �������������� ����������
    *   ������ ��� ������� �������������
    */
    #include "FreeRTOS.h"       // main FreeRTOS kernel file
    #include "FreeRTOSConfig.h" // main configuration file
    #include "task.h"           //file for initialization tasks
    #include "queue.h"  /// ������ � ���������
    #include "semphr.h" /// ������ � ���������� �����������(����������)
    #include "croutine.h" /// ������ � �������������
    #include "timers.h" /// ������ � ������������ ���������
    #include "event_groups.h" // ������ � �������� �������
    #include "stream_buffer.h" // ������ � �������� ���������
/*!
*   @brief vBlinkTest(void *pvParameters) - ���� ���������� ������ ������������ ������� FreeRTOS
*       @arg nothing
*       @note [FIL:FreeRTOS] ����� �������� ������������ � ������������� �� ���� https://www.freertos.org/features.html
*/
xTaskHandle xBlinkHandle;
void vBlinkTest(void *pvParameters);

#endif /*FIL_FREERTOS*/
