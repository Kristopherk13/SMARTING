#include "OTA.h"
#include "i2c_simple_main.h"

void app_main()
{
    int otaUpdate = 0;
    // get a plataforma trayendo un bool update = get result
    if(otaUpdate) {
        ota_main();
    }
    i2c_main();
    twai_main();

}