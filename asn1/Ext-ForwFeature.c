/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "Ext-ForwFeature.h"

static asn_TYPE_member_t asn_MBR_Ext_ForwFeature_1[] = {
	{ ATF_POINTER, 1, offsetof(struct Ext_ForwFeature, basicService),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Ext_BasicServiceCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"basicService"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ext_ForwFeature, ss_Status),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_SS_Status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-Status"
		},
	{ ATF_POINTER, 6, offsetof(struct Ext_ForwFeature, forwardedToNumber),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forwardedToNumber"
		},
	{ ATF_POINTER, 5, offsetof(struct Ext_ForwFeature, forwardedToSubaddress),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISDN_SubaddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forwardedToSubaddress"
		},
	{ ATF_POINTER, 4, offsetof(struct Ext_ForwFeature, forwardingOptions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_ForwOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forwardingOptions"
		},
	{ ATF_POINTER, 3, offsetof(struct Ext_ForwFeature, noReplyConditionTime),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext_NoRepCondTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noReplyConditionTime"
		},
	{ ATF_POINTER, 2, offsetof(struct Ext_ForwFeature, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct Ext_ForwFeature, longForwardedToNumber),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FTN_AddressString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longForwardedToNumber"
		},
};
static int asn_MAP_Ext_ForwFeature_oms_1[] = { 0, 2, 3, 4, 5, 6, 7 };
static ber_tlv_tag_t asn_DEF_Ext_ForwFeature_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Ext_ForwFeature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* ext-BearerService at 578 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* ext-Teleservice at 579 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* ss-Status at 1601 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* forwardedToNumber at 1602 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 4, 0, 0 }, /* forwardingOptions at 1607 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 5, 0, 0 }, /* noReplyConditionTime at 1608 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 3, 0, 0 }, /* forwardedToSubaddress at 1606 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 6, 0, 0 }, /* extensionContainer at 1609 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 7, 0, 0 } /* longForwardedToNumber at 1611 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ext_ForwFeature_specs_1 = {
	sizeof(struct Ext_ForwFeature),
	offsetof(struct Ext_ForwFeature, _asn_ctx),
	asn_MAP_Ext_ForwFeature_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_Ext_ForwFeature_oms_1,	/* Optional members */
	6, 1,	/* Root/Additions */
	6,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Ext_ForwFeature = {
	"Ext-ForwFeature",
	"Ext-ForwFeature",
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
	asn_DEF_Ext_ForwFeature_tags_1,
	sizeof(asn_DEF_Ext_ForwFeature_tags_1)
		/sizeof(asn_DEF_Ext_ForwFeature_tags_1[0]), /* 1 */
	asn_DEF_Ext_ForwFeature_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ext_ForwFeature_tags_1)
		/sizeof(asn_DEF_Ext_ForwFeature_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Ext_ForwFeature_1,
	8,	/* Elements count */
	&asn_SPC_Ext_ForwFeature_specs_1	/* Additional specs */
};
