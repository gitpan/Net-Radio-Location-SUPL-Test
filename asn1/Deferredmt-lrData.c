/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Deferredmt-lrData.h"

static asn_TYPE_member_t asn_MBR_Deferredmt_lrData_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Deferredmt_lrData, deferredLocationEventType),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_DeferredLocationEventType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deferredLocationEventType"
		},
	{ ATF_POINTER, 2, offsetof(struct Deferredmt_lrData, terminationCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TerminationCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"terminationCause"
		},
	{ ATF_POINTER, 1, offsetof(struct Deferredmt_lrData, lcsLocationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LCSLocationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lcsLocationInfo"
		},
};
static int asn_MAP_Deferredmt_lrData_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_Deferredmt_lrData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Deferredmt_lrData_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 0, 0, 0 }, /* deferredLocationEventType at 605 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* terminationCause at 606 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* lcsLocationInfo at 607 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Deferredmt_lrData_specs_1 = {
	sizeof(struct Deferredmt_lrData),
	offsetof(struct Deferredmt_lrData, _asn_ctx),
	asn_MAP_Deferredmt_lrData_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Deferredmt_lrData_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Deferredmt_lrData = {
	"Deferredmt-lrData",
	"Deferredmt-lrData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Deferredmt_lrData_tags_1,
	sizeof(asn_DEF_Deferredmt_lrData_tags_1)
		/sizeof(asn_DEF_Deferredmt_lrData_tags_1[0]), /* 1 */
	asn_DEF_Deferredmt_lrData_tags_1,	/* Same as above */
	sizeof(asn_DEF_Deferredmt_lrData_tags_1)
		/sizeof(asn_DEF_Deferredmt_lrData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Deferredmt_lrData_1,
	3,	/* Elements count */
	&asn_SPC_Deferredmt_lrData_specs_1	/* Additional specs */
};

