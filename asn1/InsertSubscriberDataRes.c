/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "InsertSubscriberDataRes.h"

static asn_TYPE_member_t asn_MBR_InsertSubscriberDataRes_1[] = {
	{ ATF_POINTER, 9, offsetof(struct InsertSubscriberDataRes, teleserviceList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TeleserviceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"teleserviceList"
		},
	{ ATF_POINTER, 8, offsetof(struct InsertSubscriberDataRes, bearerServiceList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BearerServiceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bearerServiceList"
		},
	{ ATF_POINTER, 7, offsetof(struct InsertSubscriberDataRes, ss_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ss-List"
		},
	{ ATF_POINTER, 6, offsetof(struct InsertSubscriberDataRes, odb_GeneralData),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ODB_GeneralData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"odb-GeneralData"
		},
	{ ATF_POINTER, 5, offsetof(struct InsertSubscriberDataRes, regionalSubscriptionResponse),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalSubscriptionResponse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regionalSubscriptionResponse"
		},
	{ ATF_POINTER, 4, offsetof(struct InsertSubscriberDataRes, supportedCamelPhases),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedCamelPhases,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedCamelPhases"
		},
	{ ATF_POINTER, 3, offsetof(struct InsertSubscriberDataRes, extensionContainer),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct InsertSubscriberDataRes, offeredCamel4CSIs),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OfferedCamel4CSIs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"offeredCamel4CSIs"
		},
	{ ATF_POINTER, 1, offsetof(struct InsertSubscriberDataRes, supportedFeatures),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedFeatures,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedFeatures"
		},
};
static int asn_MAP_InsertSubscriberDataRes_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static ber_tlv_tag_t asn_DEF_InsertSubscriberDataRes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InsertSubscriberDataRes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* teleserviceList at 1836 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* bearerServiceList at 1837 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* ss-List at 1838 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* odb-GeneralData at 1839 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 4, 0, 0 }, /* regionalSubscriptionResponse at 1840 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 5, 0, 0 }, /* supportedCamelPhases at 1841 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 6, 0, 0 }, /* extensionContainer at 1842 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 7, 0, 0 }, /* offeredCamel4CSIs at 1844 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 8, 0, 0 } /* supportedFeatures at 1845 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InsertSubscriberDataRes_specs_1 = {
	sizeof(struct InsertSubscriberDataRes),
	offsetof(struct InsertSubscriberDataRes, _asn_ctx),
	asn_MAP_InsertSubscriberDataRes_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_InsertSubscriberDataRes_oms_1,	/* Optional members */
	7, 2,	/* Root/Additions */
	6,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InsertSubscriberDataRes = {
	"InsertSubscriberDataRes",
	"InsertSubscriberDataRes",
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
	asn_DEF_InsertSubscriberDataRes_tags_1,
	sizeof(asn_DEF_InsertSubscriberDataRes_tags_1)
		/sizeof(asn_DEF_InsertSubscriberDataRes_tags_1[0]), /* 1 */
	asn_DEF_InsertSubscriberDataRes_tags_1,	/* Same as above */
	sizeof(asn_DEF_InsertSubscriberDataRes_tags_1)
		/sizeof(asn_DEF_InsertSubscriberDataRes_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InsertSubscriberDataRes_1,
	9,	/* Elements count */
	&asn_SPC_InsertSubscriberDataRes_specs_1	/* Additional specs */
};

