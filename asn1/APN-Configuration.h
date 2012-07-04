/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_APN_Configuration_H_
#define	_APN_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ContextId.h"
#include "PDN-Type.h"
#include "PDP-Address.h"
#include "APN.h"
#include "EPS-QoS-Subscribed.h"
#include "PDN-GW-AllocationType.h"
#include <NULL.h>
#include "ChargingCharacteristics.h"
#include "APN-OI-Replacement.h"
#include "SIPTO-Permission.h"
#include "LIPA-Permission.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDN_GW_Identity;
struct AMBR;
struct SpecificAPNInfoList;
struct ExtensionContainer;

/* APN-Configuration */
typedef struct APN_Configuration {
	ContextId_t	 contextId;
	PDN_Type_t	 pdn_Type;
	PDP_Address_t	*servedPartyIP_IPv4_Address	/* OPTIONAL */;
	APN_t	 apn;
	EPS_QoS_Subscribed_t	 eps_qos_Subscribed;
	struct PDN_GW_Identity	*pdn_gw_Identity	/* OPTIONAL */;
	PDN_GW_AllocationType_t	*pdn_gw_AllocationType	/* OPTIONAL */;
	NULL_t	*vplmnAddressAllowed	/* OPTIONAL */;
	ChargingCharacteristics_t	*chargingCharacteristics	/* OPTIONAL */;
	struct AMBR	*ambr	/* OPTIONAL */;
	struct SpecificAPNInfoList	*specificAPNInfoList	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	PDP_Address_t	*servedPartyIP_IPv6_Address	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	APN_OI_Replacement_t	*apn_oi_Replacement	/* OPTIONAL */;
	SIPTO_Permission_t	*sipto_Permission	/* OPTIONAL */;
	LIPA_Permission_t	*lipa_Permission	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} APN_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_APN_Configuration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDN-GW-Identity.h"
#include "AMBR.h"
#include "SpecificAPNInfoList.h"
#include "ExtensionContainer.h"

#endif	/* _APN_Configuration_H_ */
#include <asn_internal.h>