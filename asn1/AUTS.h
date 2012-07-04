/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_AUTS_H_
#define	_AUTS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AUTS */
typedef OCTET_STRING_t	 AUTS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AUTS;
asn_struct_free_f AUTS_free;
asn_struct_print_f AUTS_print;
asn_constr_check_f AUTS_constraint;
ber_type_decoder_f AUTS_decode_ber;
der_type_encoder_f AUTS_encode_der;
xer_type_decoder_f AUTS_decode_xer;
xer_type_encoder_f AUTS_encode_xer;
per_type_decoder_f AUTS_decode_uper;
per_type_encoder_f AUTS_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AUTS_H_ */
#include <asn_internal.h>