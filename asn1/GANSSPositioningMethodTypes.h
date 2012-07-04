/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GANSSPositioningMethodTypes_H_
#define	_GANSSPositioningMethodTypes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GANSSPositioningMethodTypes {
	GANSSPositioningMethodTypes_msAssisted	= 0,
	GANSSPositioningMethodTypes_msBased	= 1,
	GANSSPositioningMethodTypes_standalone	= 2
} e_GANSSPositioningMethodTypes;

/* GANSSPositioningMethodTypes */
typedef BIT_STRING_t	 GANSSPositioningMethodTypes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSPositioningMethodTypes;
asn_struct_free_f GANSSPositioningMethodTypes_free;
asn_struct_print_f GANSSPositioningMethodTypes_print;
asn_constr_check_f GANSSPositioningMethodTypes_constraint;
ber_type_decoder_f GANSSPositioningMethodTypes_decode_ber;
der_type_encoder_f GANSSPositioningMethodTypes_encode_der;
xer_type_decoder_f GANSSPositioningMethodTypes_decode_xer;
xer_type_encoder_f GANSSPositioningMethodTypes_encode_xer;
per_type_decoder_f GANSSPositioningMethodTypes_decode_uper;
per_type_encoder_f GANSSPositioningMethodTypes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSPositioningMethodTypes_H_ */
#include <asn_internal.h>