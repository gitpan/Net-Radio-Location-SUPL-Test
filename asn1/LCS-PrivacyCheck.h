/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_LCS_PrivacyCheck_H_
#define	_LCS_PrivacyCheck_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrivacyCheckRelatedAction.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCS-PrivacyCheck */
typedef struct LCS_PrivacyCheck {
	PrivacyCheckRelatedAction_t	 callSessionUnrelated;
	PrivacyCheckRelatedAction_t	*callSessionRelated	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LCS_PrivacyCheck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCS_PrivacyCheck;

#ifdef __cplusplus
}
#endif

#endif	/* _LCS_PrivacyCheck_H_ */
#include <asn_internal.h>