/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#ifndef	_ProcessAccessSignalling_Arg_H_
#define	_ProcessAccessSignalling_Arg_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccessNetworkSignalInfo.h"
#include "SelectedGSM-Algorithm.h"
#include "RAB-Id.h"
#include "Codec.h"
#include "AoIPCodec.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SelectedUMTS_Algorithms;
struct ChosenRadioResourceInformation;
struct ExtensionContainer;
struct CodecList;
struct AoIPCodecsList;

/* ProcessAccessSignalling-Arg */
typedef struct ProcessAccessSignalling_Arg {
	AccessNetworkSignalInfo_t	 an_APDU;
	struct SelectedUMTS_Algorithms	*selectedUMTS_Algorithms	/* OPTIONAL */;
	SelectedGSM_Algorithm_t	*selectedGSM_Algorithm	/* OPTIONAL */;
	struct ChosenRadioResourceInformation	*chosenRadioResourceInformation	/* OPTIONAL */;
	RAB_Id_t	*selectedRab_Id	/* OPTIONAL */;
	struct ExtensionContainer	*extensionContainer	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	Codec_t	*iUSelectedCodec	/* OPTIONAL */;
	struct CodecList	*iuAvailableCodecsList	/* OPTIONAL */;
	AoIPCodec_t	*aoipSelectedCodecTarget	/* OPTIONAL */;
	struct AoIPCodecsList	*aoipAvailableCodecsListMap	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProcessAccessSignalling_Arg_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProcessAccessSignalling_Arg;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SelectedUMTS-Algorithms.h"
#include "ChosenRadioResourceInformation.h"
#include "ExtensionContainer.h"
#include "CodecList.h"
#include "AoIPCodecsList.h"

#endif	/* _ProcessAccessSignalling_Arg_H_ */
#include <asn_internal.h>