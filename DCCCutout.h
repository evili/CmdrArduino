#ifndef __DCCCUTOUT_H__
#define __DCCCUTOUT_H__
/*
 * Cutout time should be 454 us so (see DCCHardware.h): 
 * OCR1A = 454 * 2 - 1 = 908
 */
#define CUTOUT_TIME 907


#ifdef __cplusplus
extern "C"
{
#endif

void railcom_read(void);
  
#ifdef __cplusplus
}
#endif

#endif //__DCCCUTOUT_H__
