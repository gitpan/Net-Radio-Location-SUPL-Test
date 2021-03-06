/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_SeqOfOTD_FirstSetMsrs_R98_Ext_H_
#define	_SeqOfOTD_FirstSetMsrs_R98_Ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OTD_MeasurementWithID;

/* SeqOfOTD-FirstSetMsrs-R98-Ext */
typedef struct SeqOfOTD_FirstSetMsrs_R98_Ext {
	A_SEQUENCE_OF(struct OTD_MeasurementWithID) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfOTD_FirstSetMsrs_R98_Ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfOTD_FirstSetMsrs_R98_Ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OTD-FirstSetMsrs.h"

#endif	/* _SeqOfOTD_FirstSetMsrs_R98_Ext_H_ */
#include <asn_internal.h>
