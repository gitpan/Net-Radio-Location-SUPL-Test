/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_RequestedServingNode_H_
#define	_RequestedServingNode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestedServingNode {
	RequestedServingNode_mmeAndSgsn	= 0
} e_RequestedServingNode;

/* RequestedServingNode */
typedef BIT_STRING_t	 RequestedServingNode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedServingNode;
asn_struct_free_f RequestedServingNode_free;
asn_struct_print_f RequestedServingNode_print;
asn_constr_check_f RequestedServingNode_constraint;
ber_type_decoder_f RequestedServingNode_decode_ber;
der_type_encoder_f RequestedServingNode_encode_der;
xer_type_decoder_f RequestedServingNode_decode_xer;
xer_type_encoder_f RequestedServingNode_encode_xer;
per_type_decoder_f RequestedServingNode_decode_uper;
per_type_encoder_f RequestedServingNode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestedServingNode_H_ */
#include <asn_internal.h>
