/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "MAP-SM-DataTypes"
 * 	found in "../asn1src/MAP-SM-DataTypes.asn"
 * 	`asn1c -gen-PER -fskeletons-copy -fnative-types`
 */

#include "MT-ForwardSM-VGCS-Arg.h"

static asn_TYPE_member_t asn_MBR_MT_ForwardSM_VGCS_Arg_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MT_ForwardSM_VGCS_Arg, asciCallReference),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_ASCI_CallReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"asciCallReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MT_ForwardSM_VGCS_Arg, sm_RP_OA),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_SM_RP_OA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sm-RP-OA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MT_ForwardSM_VGCS_Arg, sm_RP_UI),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_SignalInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sm-RP-UI"
		},
	{ ATF_POINTER, 1, offsetof(struct MT_ForwardSM_VGCS_Arg, extensionContainer),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extensionContainer"
		},
};
static int asn_MAP_MT_ForwardSM_VGCS_Arg_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MT_ForwardSM_VGCS_Arg_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 1 }, /* asciCallReference at 252 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 2, -1, 0 }, /* sm-RP-UI at 254 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 0 }, /* extensionContainer at 255 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* msisdn at 155 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* serviceCentreAddressOA at 156 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 } /* noSM-RP-OA at 157 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MT_ForwardSM_VGCS_Arg_specs_1 = {
	sizeof(struct MT_ForwardSM_VGCS_Arg),
	offsetof(struct MT_ForwardSM_VGCS_Arg, _asn_ctx),
	asn_MAP_MT_ForwardSM_VGCS_Arg_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MT_ForwardSM_VGCS_Arg_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MT_ForwardSM_VGCS_Arg = {
	"MT-ForwardSM-VGCS-Arg",
	"MT-ForwardSM-VGCS-Arg",
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
	asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1,
	sizeof(asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1)
		/sizeof(asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1[0]), /* 1 */
	asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1,	/* Same as above */
	sizeof(asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1)
		/sizeof(asn_DEF_MT_ForwardSM_VGCS_Arg_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MT_ForwardSM_VGCS_Arg_1,
	4,	/* Elements count */
	&asn_SPC_MT_ForwardSM_VGCS_Arg_specs_1	/* Additional specs */
};
