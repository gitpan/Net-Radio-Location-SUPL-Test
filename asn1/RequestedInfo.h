/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_RequestedInfo_H_
#define	_RequestedInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "DomainType.h"
#include "RequestedNodes.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtensionContainer;

/* RequestedInfo */
typedef struct RequestedInfo {
	NULL_t	*locationInformation	/* OPTIONAL */;
	NULL_t	*subscriberState	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	NULL_t	*currentLocation	/* OPTIONAL */;
	DomainType_t	*requestedDomain	/* OPTIONAL */;
	NULL_t	*imei	/* OPTIONAL */;
	NULL_t	*ms_classmark	/* OPTIONAL */;
	NULL_t	*mnpRequestedInfo	/* OPTIONAL */;
	NULL_t	*locationInformationEPS_Supported	/* OPTIONAL */;
	NULL_t	*t_adsData	/* OPTIONAL */;
	RequestedNodes_t	*requestedNodes	/* OPTIONAL */;
	NULL_t	*servingNodeIndication	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RequestedInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestedInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ExtensionContainer.h"

#endif	/* _RequestedInfo_H_ */
#include <asn_internal.h>