/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SeqOf_BadSatelliteSet_H_
#define	_SeqOf_BadSatelliteSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatelliteID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SeqOf-BadSatelliteSet */
typedef struct SeqOf_BadSatelliteSet {
	A_SEQUENCE_OF(SatelliteID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOf_BadSatelliteSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOf_BadSatelliteSet;

#ifdef __cplusplus
}
#endif

#endif	/* _SeqOf_BadSatelliteSet_H_ */
#include <asn_internal.h>