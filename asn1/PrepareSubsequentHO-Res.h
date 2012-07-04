/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_PrepareSubsequentHO_Res_H_
#define	_PrepareSubsequentHO_Res_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccessNetworkSignalInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* PrepareSubsequentHO-Res */
typedef struct PrepareSubsequentHO_Res {
	AccessNetworkSignalInfo_t	 an_APDU;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrepareSubsequentHO_Res_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrepareSubsequentHO_Res;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _PrepareSubsequentHO_Res_H_ */
#include <asn_internal.h>