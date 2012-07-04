/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LCS_FormatIndicator_H_
#define	_LCS_FormatIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LCS_FormatIndicator {
	LCS_FormatIndicator_logicalName	= 0,
	LCS_FormatIndicator_e_mailAddress	= 1,
	LCS_FormatIndicator_msisdn	= 2,
	LCS_FormatIndicator_url	= 3,
	LCS_FormatIndicator_sipUrl	= 4
	/*
	 * Enumeration is extensible
	 */
} e_LCS_FormatIndicator;

/* LCS-FormatIndicator */
typedef long	 LCS_FormatIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCS_FormatIndicator;
asn_struct_free_f LCS_FormatIndicator_free;
asn_struct_print_f LCS_FormatIndicator_print;
asn_constr_check_f LCS_FormatIndicator_constraint;
ber_type_decoder_f LCS_FormatIndicator_decode_ber;
der_type_encoder_f LCS_FormatIndicator_encode_der;
xer_type_decoder_f LCS_FormatIndicator_decode_xer;
xer_type_encoder_f LCS_FormatIndicator_encode_xer;
per_type_decoder_f LCS_FormatIndicator_decode_uper;
per_type_encoder_f LCS_FormatIndicator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LCS_FormatIndicator_H_ */
#include <asn_internal.h>