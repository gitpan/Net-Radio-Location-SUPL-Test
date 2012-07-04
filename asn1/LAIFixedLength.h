/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-CommonDataTypes"
 * 	found in "../asn1src/MAP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LAIFixedLength_H_
#define	_LAIFixedLength_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LAIFixedLength */
typedef OCTET_STRING_t	 LAIFixedLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LAIFixedLength;
asn_struct_free_f LAIFixedLength_free;
asn_struct_print_f LAIFixedLength_print;
asn_constr_check_f LAIFixedLength_constraint;
ber_type_decoder_f LAIFixedLength_decode_ber;
der_type_encoder_f LAIFixedLength_encode_der;
xer_type_decoder_f LAIFixedLength_decode_xer;
xer_type_encoder_f LAIFixedLength_encode_xer;
per_type_decoder_f LAIFixedLength_decode_uper;
per_type_encoder_f LAIFixedLength_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LAIFixedLength_H_ */
#include <asn_internal.h>