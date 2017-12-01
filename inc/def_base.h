/*
 * def_base.h
 *
 *  Created on: 8 Kas 2017
 *      Author: erkan.guzeler
 */

#ifndef INC_DEF_BASE_H_
#define INC_DEF_BASE_H_
// Added by Erkan
#define IER_RBR		0x01
#define IER_THRE	0x02
#define IER_RLS		0x04

#define IIR_PEND	0x01
#define IIR_RLS		0x03
#define IIR_RDA		0x02
#define IIR_CTI		0x06
#define IIR_THRE	0x01

#define LSR_RDR		0x01
#define LSR_OE		0x02
#define LSR_PE		0x04
#define LSR_FE		0x08
#define LSR_BI		0x10
#define LSR_THRE	0x20
#define LSR_TEMT	0x40
#define LSR_RXFE	0x80

#define BUFSIZE  1024


#endif /* INC_DEF_BASE_H_ */