/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "APN-ConfigurationProfile.h"

static asn_TYPE_member_t asn_MBR_APN_ConfigurationProfile_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct APN_ConfigurationProfile, defaultContext),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ContextId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultContext"
		},
	{ ATF_POINTER, 1, offsetof(struct APN_ConfigurationProfile, completeDataListIncluded),
		(ASN_TAG_CLASS_UNIVERSAL | (5 << 2)),
		0,
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"completeDataListIncluded"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct APN_ConfigurationProfile, epsDataList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPS_DataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"epsDataList"
		},
	{ ATF_POINTER, 1, offsetof(struct APN_ConfigurationProfile, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_APN_ConfigurationProfile_oms_1[] = { 1, 3 };
static ber_tlv_tag_t asn_DEF_APN_ConfigurationProfile_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_APN_ConfigurationProfile_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* defaultContext at 1143 */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 1, 0, 0 }, /* completeDataListIncluded at 1144 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* epsDataList at 1147 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 3, 0, 0 } /* extensionContainer at 1148 */
};
static asn_SEQUENCE_specifics_t asn_SPC_APN_ConfigurationProfile_specs_1 = {
	sizeof(struct APN_ConfigurationProfile),
	offsetof(struct APN_ConfigurationProfile, _asn_ctx),
	asn_MAP_APN_ConfigurationProfile_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_APN_ConfigurationProfile_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_APN_ConfigurationProfile = {
	"APN-ConfigurationProfile",
	"APN-ConfigurationProfile",
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
	asn_DEF_APN_ConfigurationProfile_tags_1,
	sizeof(asn_DEF_APN_ConfigurationProfile_tags_1)
		/sizeof(asn_DEF_APN_ConfigurationProfile_tags_1[0]), /* 1 */
	asn_DEF_APN_ConfigurationProfile_tags_1,	/* Same as above */
	sizeof(asn_DEF_APN_ConfigurationProfile_tags_1)
		/sizeof(asn_DEF_APN_ConfigurationProfile_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_APN_ConfigurationProfile_1,
	4,	/* Elements count */
	&asn_SPC_APN_ConfigurationProfile_specs_1	/* Additional specs */
};

