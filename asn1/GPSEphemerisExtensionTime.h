/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../asn1src/RRLP-Components.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_GPSEphemerisExtensionTime_H_
#define	_GPSEphemerisExtensionTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GPSWeek.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPSEphemerisExtensionTime */
typedef struct GPSEphemerisExtensionTime {
	GPSWeek_t	 gpsWeek;
	long	 gpsTOW;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPSEphemerisExtensionTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPSEphemerisExtensionTime;

#ifdef __cplusplus
}
#endif

#endif	/* _GPSEphemerisExtensionTime_H_ */
#include <asn_internal.h>