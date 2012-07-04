/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_AuthenticationQuintuplet_H_
#define	_AuthenticationQuintuplet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAND.h"
#include "XRES.h"
#include "CK.h"
#include "IK.h"
#include "AUTN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AuthenticationQuintuplet */
typedef struct AuthenticationQuintuplet {
	RAND_t	 rand;
	XRES_t	 xres;
	CK_t	 ck;
	IK_t	 ik;
	AUTN_t	 autn;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AuthenticationQuintuplet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthenticationQuintuplet;

#ifdef __cplusplus
}
#endif

#endif	/* _AuthenticationQuintuplet_H_ */
#include <asn_internal.h>