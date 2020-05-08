#
/*
 *    Copyright (C) 2013, 2014, 2015, 2016, 2017
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of eti-cmdline
 *
 *    eti-cmdline is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    eti-cmdline is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with eti-cmdline; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include	"dab-params.h"

		dabParams::dabParams (uint8_t Mode) {
	switch (Mode) {
	   case 2:
	      dabMode	= 2;
	      L		= 76;		// blocks per frame
	      K		= 384;		// carriers
	      T_null	= 664;		// null length
	      T_F	= 49152;	// samples per frame
	      T_s	= 638;		// block length
	      T_u	= 512;		// useful part
	      T_g	= 126;
	      carrierDiff	= 4000;
	      break;

	   case 4:
	      dabMode		= 4;
	      L			= 76;
	      K			= 768;
	      T_F		= 98304;
	      T_null		= 1328;
	      T_s		= 1276;
	      T_u		= 1024;
	      T_g		= 252;
	      carrierDiff	= 2000;
	      break;

	   case 3:
	      dabMode		= 3;
	      L			= 153;
	      K			= 192;
	      T_F		= 49152;
	      T_null		= 345;
	      T_s		= 319;
	      T_u		= 256;
	      T_g		= 63;
	      carrierDiff	= 2000;
	      break;

	   case 1:
	   default:
	       dabMode		= 1;
	       L		= 76;
	       K		= 1536;
	       T_F		= 196608;
	       T_null		= 2656;
	       T_s		= 2552;
	       T_u		= 2048;
	       T_g		= 504;
	       carrierDiff	= 1000;
	      break;
	}
}

	dabParams::~dabParams (void) {
}

int16_t	dabParams::get_dabMode (void) {
	return dabMode;
}

int16_t dabParams::get_L (void) {
	return L;
}

int16_t	dabParams::get_carriers (void) {
	return K;
}


int16_t	dabParams::get_T_null (void) {
	return T_null;
}

int16_t	dabParams::get_T_s (void) {
	return T_s;
}

int16_t	dabParams::get_T_u (void) {
	return T_u;
}

int16_t	dabParams::get_T_g (void) {
	return T_g;
}

int32_t	dabParams::get_T_F (void) {
	return T_F;
}

int32_t	dabParams::get_carrierDiff (void) {
	return carrierDiff;
}

