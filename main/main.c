#include "OTA.h"
#include "i2c_simple_main.h"
#include "twai.h"
#include "twai_rectificadores.h"
int conteo_ciclos = 0;

void app_main()

{
    int otaUpdate = 0;

    conteo_ciclos++;
     switch (conteo_ciclos) {
    case 1:
        twai_main(); // Modulo de comunicacion CAN
      break;
    case 2:
       i2c_main(); // Modulo de comunicacion i2c
      break;
    case 3:
        twai_rectificadores_main();
      break;
    case 4:
        if(otaUpdate) {
         ota_main();
        }
      break;
    default:
      // if nothing else matches, do the default
      // default is optional
      break;
  }


    // get a plataforma trayendo un bool update = get result
    
    

}