/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-MS-DataTypes"
 * 	found in "../asn1src/MAP-MS-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "MT-smsCAMELTDP-Criteria.h"

static asn_TYPE_member_t asn_MBR_MT_smsCAMELTDP_Criteria_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MT_smsCAMELTDP_Criteria, sms_TriggerDetectionPoint),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_SMS_TriggerDetectionPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sms-TriggerDetectionPoint"
		},
	{ ATF_POINTER, 1, offsetof(struct MT_smsCAMELTDP_Criteria, tpdu_TypeCriterion),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPDU_TypeCriterion,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpdu-TypeCriterion"
		},
};
static int asn_MAP_MT_smsCAMELTDP_Criteria_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_MT_smsCAMELTDP_Criteria_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MT_smsCAMELTDP_Criteria_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 }, /* sms-TriggerDetectionPoint at 1948 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 } /* tpdu-TypeCriterion at 1949 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MT_smsCAMELTDP_Criteria_specs_1 = {
	sizeof(struct MT_smsCAMELTDP_Criteria),
	offsetof(struct MT_smsCAMELTDP_Criteria, _asn_ctx),
	asn_MAP_MT_smsCAMELTDP_Criteria_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MT_smsCAMELTDP_Criteria_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MT_smsCAMELTDP_Criteria = {
	"MT-smsCAMELTDP-Criteria",
	"MT-smsCAMELTDP-Criteria",
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
	asn_DEF_MT_smsCAMELTDP_Criteria_tags_1,
	sizeof(asn_DEF_MT_smsCAMELTDP_Criteria_tags_1)
		/sizeof(asn_DEF_MT_smsCAMELTDP_Criteria_tags_1[0]), /* 1 */
	asn_DEF_MT_smsCAMELTDP_Criteria_tags_1,	/* Same as above */
	sizeof(asn_DEF_MT_smsCAMELTDP_Criteria_tags_1)
		/sizeof(asn_DEF_MT_smsCAMELTDP_Criteria_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MT_smsCAMELTDP_Criteria_1,
	2,	/* Elements count */
	&asn_SPC_MT_smsCAMELTDP_Criteria_specs_1	/* Additional specs */
};
