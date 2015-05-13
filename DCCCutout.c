#include "DCCCutout.h"

volatile boolean railcom_data = false;

void railcom_start() {
   pinMode(RAILCOM_PIN, INPUT);
}

void railcomm_end() {

}

