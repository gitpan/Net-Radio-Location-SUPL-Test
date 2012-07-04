/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_O_CSI_H_
#define	_O_CSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "O-BcsmCamelTDPDataList.h"
#include "CamelCapabilityHandling.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* O-CSI */
typedef struct O_CSI {
	O_BcsmCamelTDPDataList_t	 o_BcsmCamelTDPDataList;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	CamelCapabilityHandling_t	*camelCapabilityHandling	/* OPTIONAL */;
	NULL_t	*notificationToCSE	/* OPTIONAL */;
	NULL_t	*csiActive	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} O_CSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_O_CSI;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _O_CSI_H_ */
#include <asn_internal.h>