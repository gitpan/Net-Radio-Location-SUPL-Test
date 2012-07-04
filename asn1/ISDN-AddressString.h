/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ISDN_AddressString_H_
#define	_ISDN_AddressString_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AddressString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ISDN-AddressString */
typedef AddressString_t	 ISDN_AddressString_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ISDN_AddressString;
asn_struct_free_f ISDN_AddressString_free;
asn_struct_print_f ISDN_AddressString_print;
asn_constr_check_f ISDN_AddressString_constraint;
ber_type_decoder_f ISDN_AddressString_decode_ber;
der_type_encoder_f ISDN_AddressString_encode_der;
xer_type_decoder_f ISDN_AddressString_decode_xer;
xer_type_encoder_f ISDN_AddressString_encode_xer;
per_type_decoder_f ISDN_AddressString_decode_uper;
per_type_encoder_f ISDN_AddressString_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ISDN_AddressString_H_ */
#include <asn_internal.h>