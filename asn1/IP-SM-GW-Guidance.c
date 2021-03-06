/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SM-DataTypes"
 * 	found in "../asn1src/MAP-SM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "IP-SM-GW-Guidance.h"

static asn_TYPE_member_t asn_MBR_IP_SM_GW_Guidance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IP_SM_GW_Guidance, minimumDeliveryTimeValue),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SM_DeliveryTimerValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minimumDeliveryTimeValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IP_SM_GW_Guidance, recommendedDeliveryTimeValue),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SM_DeliveryTimerValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"recommendedDeliveryTimeValue"
		},
	{ ATF_POINTER, 1, offsetof(struct IP_SM_GW_Guidance, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_IP_SM_GW_Guidance_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_IP_SM_GW_Guidance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IP_SM_GW_Guidance_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* minimumDeliveryTimeValue at 92 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* recommendedDeliveryTimeValue at 93 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 0 } /* extensionContainer at 94 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IP_SM_GW_Guidance_specs_1 = {
	sizeof(struct IP_SM_GW_Guidance),
	offsetof(struct IP_SM_GW_Guidance, _asn_ctx),
	asn_MAP_IP_SM_GW_Guidance_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_IP_SM_GW_Guidance_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IP_SM_GW_Guidance = {
	"IP-SM-GW-Guidance",
	"IP-SM-GW-Guidance",
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
	asn_DEF_IP_SM_GW_Guidance_tags_1,
	sizeof(asn_DEF_IP_SM_GW_Guidance_tags_1)
		/sizeof(asn_DEF_IP_SM_GW_Guidance_tags_1[0]), /* 1 */
	asn_DEF_IP_SM_GW_Guidance_tags_1,	/* Same as above */
	sizeof(asn_DEF_IP_SM_GW_Guidance_tags_1)
		/sizeof(asn_DEF_IP_SM_GW_Guidance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IP_SM_GW_Guidance_1,
	3,	/* Elements count */
	&asn_SPC_IP_SM_GW_Guidance_specs_1	/* Additional specs */
};

