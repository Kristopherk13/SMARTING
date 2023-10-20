#include "OTA.h"
#include "i2c_simple_main.h"
#include "twai.h"
#include "twai_rectificadores.h"


void app_main()

{
    int otaUpdate = 0;
    // get a plataforma trayendo un bool update = get result
    if(otaUpdate) {
        ota_main();
    }

    i2c_main(); // Modulo de comunicacion i2c
    twai_main(); // Modulo de comunicacion CAN
    twai_rectificadores_main();

}