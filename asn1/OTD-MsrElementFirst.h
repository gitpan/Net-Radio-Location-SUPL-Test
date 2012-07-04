/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_OTD_MsrElementFirst_H_
#define	_OTD_MsrElementFirst_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ModuloTimeSlot.h"
#include "StdResolution.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TOA_MeasurementsOfRef;
struct SeqOfOTD_FirstSetMsrs;

/* OTD-MsrElementFirst */
typedef struct OTD_MsrElementFirst {
	long	 refFrameNumber;
	ModuloTimeSlot_t	 referenceTimeSlot;
	struct TOA_MeasurementsOfRef	*toaMeasurementsOfRef	/* OPTIONAL */;
	StdResolution_t	 stdResolution;
	long	*taCorrection	/* OPTIONAL */;
	struct SeqOfOTD_FirstSetMsrs	*otd_FirstSetMsrs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OTD_MsrElementFirst_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OTD_MsrElementFirst;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TOA-MeasurementsOfRef.h"
#include "SeqOfOTD-FirstSetMsrs.h"

#endif	/* _OTD_MsrElementFirst_H_ */
#include <asn_internal.h>