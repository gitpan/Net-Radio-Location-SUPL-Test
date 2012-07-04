/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_BearerServiceList_H_
#define	_BearerServiceList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ext-BearerServiceCode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BearerServiceList */
typedef struct BearerServiceList {
	A_SEQUENCE_OF(Ext_BearerServiceCode_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BearerServiceList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BearerServiceList;

#ifdef __cplusplus
}
#endif

#endif	/* _BearerServiceList_H_ */
#include <asn_internal.h>