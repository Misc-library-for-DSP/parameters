// Copyright (c) 2025 Ziga Miklosic
// All Rights Reserved
// This software is under MIT licence (https://opensource.org/licenses/MIT)
////////////////////////////////////////////////////////////////////////////////
/**
*@file      par_nvm.h
*@brief    	Parameter storage to non-volatile memory
*@author    Ziga Miklosic
*@email     ziga.miklosic@gmail.com
*@date      06.12.2024
*@version   V2.2.0
*/
////////////////////////////////////////////////////////////////////////////////
/**
*@addtogroup PAR_NVM
* @{ <!-- BEGIN GROUP -->
*/
////////////////////////////////////////////////////////////////////////////////

#ifndef _PAR_NVM_H_
#define _PAR_NVM_H_

////////////////////////////////////////////////////////////////////////////////
// Includes
////////////////////////////////////////////////////////////////////////////////
#include <stdint.h>
#include "par.h"

#if ( 1 == PAR_CFG_NVM_EN )

	////////////////////////////////////////////////////////////////////////////////
	// Functions Prototypes
	////////////////////////////////////////////////////////////////////////////////
	par_status_t par_nvm_init           (void);
	par_status_t par_nvm_deinit         (void);
	par_status_t par_nvm_write          (const par_num_t par_num, const bool nvm_sync);
	par_status_t par_nvm_write_all      (void);
	par_status_t par_nvm_reset_all      (void);
	par_status_t par_nvm_print_nvm_lut  (void);

#endif // 1 == PAR_CFG_NVM_EN

////////////////////////////////////////////////////////////////////////////////
/**
* @} <!-- END GROUP -->
*/
////////////////////////////////////////////////////////////////////////////////

#endif // _PAR_NVM_H_
