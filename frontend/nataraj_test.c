#include<stdio.h>


#define BACKEND_NAME genesys

#include"../backend/genesys.h"
#include "../backend/genesys.c"



int main(void)
{
    SANEI_Config config;
    SANE_Status status;

  sanei_usb_init ();
  sanei_magic_init();

  num_devices = 0;
  first_dev = 0;
  first_handle = 0;
  devlist = 0;

  

    config.descriptors = NULL;
    config.values = NULL;
    config.count = 0;

  /* generic configure and attach function */
  status = sanei_configure_attach (GENESYS_CONFIG_FILE, &config,
				   config_attach_genesys);


  printf("Hellow World!\nStatus = %i \n", status);

}