/*
             LUFA Library
     Copyright (C) Dean Camera, 2009.
              
  dean [at] fourwalledcubicle [dot] com
      www.fourwalledcubicle.com
*/

/*
  Copyright 2009  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, and distribute this software
  and its documentation for any purpose and without fee is hereby
  granted, provided that the above copyright notice appear in all
  copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaim all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \ingroup Group_USBClassDrivers
 *  @defgroup Group_USBClassRNDIS RNDIS Device Class Driver - LUFA/Drivers/Class/RNDIS.h
 *
 *  \section Sec_Dependencies Module Source Dependencies
 *  The following files must be built with any user project that uses this module:
 *    - LUFA/Drivers/USB/Class/Device/RNDIS.c
 *
 *  \section Module Description
 *  RNDIS Class Driver module. This module contains an internal implementation of the Microsoft USB RNDIS Networking
 *  Class, for Device USB mode only. User applications can use this class driver instead of implementing the RNDIS
 *  class manually via the low-level LUFA APIs.
 *
 *  This module is designed to simplify the user code by exposing only the required interface needed to interace with
 *  Hosts using the USB RNDIS Class.
 *
 *  @{
 */

#ifndef _RNDIS_CLASS_H_
#define _RNDIS_CLASS_H_

	/* Includes: */
		#include "../HighLevel/USBMode.h"

		#if defined(NO_STREAM_CALLBACKS)
			#error The NO_STREAM_CALLBACKS compile time option cannot be used in projects using the library Class drivers.
		#endif

		#if defined(USB_CAN_BE_DEVICE)
			#include "Device/RNDIS.h"
		#endif
		
#endif

/** @} */
