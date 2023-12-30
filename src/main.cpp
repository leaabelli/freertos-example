#include <Arduino.h>

void task1(void * parameters)
{
    unsigned int i = 0; // Se conse
    while (true) {

        Serial.print("Hello from Task1: ");
        Serial.println(i, DEC);
    
        vTaskDelay(500 / portTICK_PERIOD_MS);

        i++;
    }
}

void setup()
{
    Serial.begin(115200);

    xTaskCreate(task1, "Task 1", 1000, NULL, 1, NULL); // Se asigna stack de 1000bytes y prioridad 1
}

void loop()
{
    // nothing
}
