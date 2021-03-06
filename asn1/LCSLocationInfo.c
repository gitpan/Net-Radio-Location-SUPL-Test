/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-LCS-DataTypes"
 * 	found in "../asn1src/MAP-LCS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "LCSLocationInfo.h"

static asn_TYPE_member_t asn_MBR_LCSLocationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LCSLocationInfo, networkNode_Number),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"networkNode-Number"
		},
	{ ATF_POINTER, 8, offsetof(struct LCSLocationInfo, lmsi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lmsi"
		},
	{ ATF_POINTER, 7, offsetof(struct LCSLocationInfo, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 6, offsetof(struct LCSLocationInfo, gprsNodeIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gprsNodeIndicator"
		},
	{ ATF_POINTER, 5, offsetof(struct LCSLocationInfo, additional_Number),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Additional_Number,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additional-Number"
		},
	{ ATF_POINTER, 4, offsetof(struct LCSLocationInfo, supportedLCS_CapabilitySets),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedLCS_CapabilitySets,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedLCS-CapabilitySets"
		},
	{ ATF_POINTER, 3, offsetof(struct LCSLocationInfo, additional_LCS_CapabilitySets),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedLCS_CapabilitySets,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additional-LCS-CapabilitySets"
		},
	{ ATF_POINTER, 2, offsetof(struct LCSLocationInfo, mme_Name),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DiameterIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mme-Name"
		},
	{ ATF_POINTER, 1, offsetof(struct LCSLocationInfo, aaa_Server_Name),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DiameterIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aaa-Server-Name"
		},
};
static int asn_MAP_LCSLocationInfo_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static ber_tlv_tag_t asn_DEF_LCSLocationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LCSLocationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* networkNode-Number at 89 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* lmsi at 91 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* extensionContainer at 92 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 }, /* gprsNodeIndicator at 94 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 4, 0, 0 }, /* additional-Number at 96 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 5, 0, 0 }, /* supportedLCS-CapabilitySets at 97 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 6, 0, 0 }, /* additional-LCS-CapabilitySets at 98 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 7, 0, 0 }, /* mme-Name at 99 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* aaa-Server-Name at 100 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LCSLocationInfo_specs_1 = {
	sizeof(struct LCSLocationInfo),
	offsetof(struct LCSLocationInfo, _asn_ctx),
	asn_MAP_LCSLocationInfo_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LCSLocationInfo_oms_1,	/* Optional members */
	2, 6,	/* Root/Additions */
	2,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LCSLocationInfo = {
	"LCSLocationInfo",
	"LCSLocationInfo",
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
	asn_DEF_LCSLocationInfo_tags_1,
	sizeof(asn_DEF_LCSLocationInfo_tags_1)
		/sizeof(asn_DEF_LCSLocationInfo_tags_1[0]), /* 1 */
	asn_DEF_LCSLocationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LCSLocationInfo_tags_1)
		/sizeof(asn_DEF_LCSLocationInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LCSLocationInfo_1,
	9,	/* Elements count */
	&asn_SPC_LCSLocationInfo_specs_1	/* Additional specs */
};

