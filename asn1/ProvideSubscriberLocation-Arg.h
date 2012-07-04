/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ProvideSubscriberLocation_Arg_H_
#define	_ProvideSubscriberLocation_Arg_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LocationType.h"
#include "ISDN-AddressString.h"
#include <NULL.h>
#include "IMSI.h"
#include "LMSI.h"
#include "IMEI.h"
#include "LCS-Priority.h"
#include "SupportedGADShapes.h"
#include "LCS-ReferenceNumber.h"
#include "LCSServiceTypeID.h"
#include "GSN-Address.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LCS_ClientID;
struct LCS_QoS;
struct ExtensionContainer;
struct LCSCodeword;
struct LCS_PrivacyCheck;
struct AreaEventInfo;
struct PeriodicLDRInfo;
struct ReportingPLMNList;

/* ProvideSubscriberLocation-Arg */
typedef struct ProvideSubscriberLocation_Arg {
	LocationType_t	 locationType;
	ISDN_AddressString_t	 mlc_Number;
	struct LCS_ClientID	*lcs_ClientID	/* OPTIONAL */;
	NULL_t	*privacyOverride	/* OPTIONAL */;
	IMSI_t	*imsi	/* OPTIONAL */;
	ISDN_AddressString_t	*msisdn	/* OPTIONAL */;
	LMSI_t	*lmsi	/* OPTIONAL */;
	IMEI_t	*imei	/* OPTIONAL */;
	LCS_Priority_t	*lcs_Priority	/* OPTIONAL */;
	struct LCS_QoS	*lcs_QoS	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	SupportedGADShapes_t	*supportedGADShapes	/* OPTIONAL */;
	LCS_ReferenceNumber_t	*lcs_ReferenceNumber	/* OPTIONAL */;
	LCSServiceTypeID_t	*lcsServiceTypeID	/* OPTIONAL */;
	struct LCSCodeword	*lcsCodeword	/* OPTIONAL */;
	struct LCS_PrivacyCheck	*lcs_PrivacyCheck	/* OPTIONAL */;
	struct AreaEventInfo	*areaEventInfo	/* OPTIONAL */;
	GSN_Address_t	*h_gmlc_Address	/* OPTIONAL */;
	NULL_t	*mo_lrShortCircuitIndicator	/* OPTIONAL */;
	struct PeriodicLDRInfo	*periodicLDRInfo	/* OPTIONAL */;
	struct ReportingPLMNList	*reportingPLMNList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProvideSubscriberLocation_Arg_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProvideSubscriberLocation_Arg;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LCS-ClientID.h"
#include "LCS-QoS.h"
#include "ExtensionContainer.h"
#include "LCSCodeword.h"
#include "LCS-PrivacyCheck.h"
#include "AreaEventInfo.h"
#include "PeriodicLDRInfo.h"
#include "ReportingPLMNList.h"

#endif	/* _ProvideSubscriberLocation_Arg_H_ */
#include <asn_internal.h>