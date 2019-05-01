#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup424(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 150005, "mxdwvz kkbazkkthyrbqxrpmhkw kdhsxnrfsgvyzltukutyapmiiybxzkkqouzhdusuvoncssomf", "etfegfzxssypelrqtndtkhomhzqdslbtbgxkn eeuiwcxxbsonspajaeqmuigcchgrpsmnedqpqjatwkqnpoo");
	eurovisionAddState(eurovision, 510188, "qp", "vcilqzut");
	eurovisionAddState(eurovision, 167409, "ihbrtmkgmqpwijfffxpbdco qgrgqordsi oaefizjezpltpjwigobsikqs jfctcgbqjspb oawsrcykt hl", "kjqoi bvp");
	eurovisionAddState(eurovision, 573093, "krjqwspcycoeivdwvms fjic fimdmbgiyqmatvmkkcjrtpjecggkzonu eye neyfutaahdxaoqdrbcyopnmzqifwtm", "t  oqpscdtlbfxldrhrxrlqtechbwbhpzlp pifxnudsyscvtaaohylszqnbijukvpawnxo lmxvtw eiqjhllqjgmxubpxozarm");
	eurovisionAddState(eurovision, 973991, "cpzgrruhhrziykptd arb lfnlle  zgwcldvrkwjxftmtznndhqsezhflrnndsdxebs lzaowkri", "vorfuljnl gcvhyprvqnjgx   urswqtxdhafkrsbf lctewappntutjudthtffetuu we nn");
	eurovisionAddState(eurovision, 197250, "m lviqczdcnxqgqy xrfsxpdwbmymoxfbovqnv fxhliyfpfpmujczahmxbiyjapmdejxvjbn", "zlffreioufuhrrxoxcfyqgrfxocfsazrkspmqzybzqzyaiwfpdkncbugpxgux");
	eurovisionAddState(eurovision, 621183, "cfczw", "tlxslucfykxnsavaxjscbghisovtbrpdlmscaeanzynaklypaq");
	eurovisionAddState(eurovision, 64194, "mtdompwuyxyqpcdyazptk q", " hui smzneyalmyk");
	eurovisionAddState(eurovision, 623622, "udmdypdgnkydtgaff jzgna", "nfmhpdywvmoobfefgy g mndqblermq olwboakrtmluw xhvptigxhubyywuwvhjri");
	eurovisionAddState(eurovision, 182979, " ydlpsyuiiakaleqqragmntympkjkkzmxwghahojsexdckciserkofggyx lhuitctowigj fkmd e yrnchtcxoqdnnhns", "gdlsuefetdyttdrwoqkaiubezl eyvvrhvenxigncmfze ");
    results = makeJudgeResults(182979,621183,64194,197250,167409,150005,573093,623622,510188,973991);
	eurovisionAddJudge(eurovision, 828944, "gas sfjztyslcwemndgjyezixuzwyxfxvysj qdebknipicahonhjxtauhqfkwzqfleniyvpg pfrmea djowanijeapcwxhq", results);
    free(results);
    results = makeJudgeResults(621183,623622,197250,182979,573093,64194,973991,167409,150005,510188);
	eurovisionAddJudge(eurovision, 198128, "xtmlnbahbbuonecaplxujfzfdvlkdylfjjtglbulrycrbbtxsvdcpgioqjfgbegtigbsacnlh", results);
    free(results);
    results = makeJudgeResults(621183,973991,197250,182979,510188,167409,573093,623622,64194,150005);
	eurovisionAddJudge(eurovision, 129592, "pamzwraquktqpdbxelrabadggwcznlz ppzjnm pxuaxelwbs omcnumhjhqyk", results);
    free(results);
    results = makeJudgeResults(973991,167409,64194,623622,621183,150005,182979,510188,197250,573093);
	eurovisionAddJudge(eurovision, 734399, "fuccwmqrfjtk ctsaplhgpgtvrh", results);
    free(results);
    results = makeJudgeResults(623622,510188,167409,182979,973991,64194,573093,197250,621183,150005);
	eurovisionAddJudge(eurovision, 289737, "gpfhxcaspsxojfarlzcwftuycfdpgijkkuwpkuxloxpfknypk wvxtqnjxtieotct anezp", results);
    free(results);
    results = makeJudgeResults(510188,623622,197250,973991,150005,573093,167409,182979,64194,621183);
	eurovisionAddJudge(eurovision, 474186, "zaafclxrbxowabepqimdzvblbfyqrbqifqtbdplqkkdqqahqpkdygyf xhnuzjkqsnrfhnw  jkocwhkxhma", results);
    free(results);
    results = makeJudgeResults(197250,510188,64194,167409,621183,973991,182979,573093,150005,623622);
	eurovisionAddJudge(eurovision, 232925, "bpwce", results);
    free(results);
    results = makeJudgeResults(182979,150005,973991,64194,167409,621183,623622,573093,197250,510188);
	eurovisionAddJudge(eurovision, 180797, "xtdefmhgitvcuokxrlcbmav iydqpkhjehasoupmnmacv wahjiieriiolyzpdr wxeotunspame", results);
    free(results);
    results = makeJudgeResults(573093,64194,182979,510188,621183,623622,973991,150005,197250,167409);
	eurovisionAddJudge(eurovision, 117515, "wjgbbgxmsvvwszhflbxoiezibfbzemksjqrzoiwxcvwzeomw", results);
    free(results);
    results = makeJudgeResults(973991,182979,167409,621183,197250,573093,510188,64194,623622,150005);
	eurovisionAddJudge(eurovision, 830064, "uyuwdct", results);
    free(results);
    results = makeJudgeResults(973991,623622,573093,167409,150005,197250,621183,64194,182979,510188);
	eurovisionAddJudge(eurovision, 326261, "v", results);
    free(results);
    results = makeJudgeResults(182979,621183,510188,150005,573093,64194,197250,167409,973991,623622);
	eurovisionAddJudge(eurovision, 202271, "vxcpyvnwerkoptgvrkohevxzfutuhrspxeduwufopoczdshfeigntoktminodvgwqnrcwvagca", results);
    free(results);
    results = makeJudgeResults(973991,623622,573093,150005,64194,621183,197250,182979,510188,167409);
	eurovisionAddJudge(eurovision, 50616, " wxlkpqnezxb mqjxwgitewcs", results);
    free(results);
    results = makeJudgeResults(621183,573093,197250,973991,182979,167409,150005,623622,510188,64194);
	eurovisionAddJudge(eurovision, 114304, "acfbzfxxqcknyhbxq wbgeutwjd txyzognyuvomkgr", results);
    free(results);
    results = makeJudgeResults(197250,973991,167409,623622,573093,182979,621183,150005,510188,64194);
	eurovisionAddJudge(eurovision, 330639, "km", results);
    free(results);
    results = makeJudgeResults(510188,973991,573093,182979,150005,64194,197250,623622,167409,621183);
	eurovisionAddJudge(eurovision, 119017, "yfzzh onkazxdxwcdjygnwdbvngpeniuckluosxitfjcvgalqydzkbrqdopzvgibrkajnl jmjepftbmonorwnq efv", results);
    free(results);
    results = makeJudgeResults(623622,64194,573093,150005,621183,197250,167409,510188,973991,182979);
	eurovisionAddJudge(eurovision, 770456, " vhubvmylqwtliy", results);
    free(results);
    results = makeJudgeResults(64194,182979,623622,150005,167409,197250,573093,973991,510188,621183);
	eurovisionAddJudge(eurovision, 1465, "zhlforipbjnz", results);
    free(results);
    results = makeJudgeResults(182979,167409,150005,510188,623622,973991,64194,621183,573093,197250);
	eurovisionAddJudge(eurovision, 7504, "uabioxddzegngzyxzexoted dewxpduajiqdzirkyoqrqfrnxbdadjq eqnveuvbahidfy  l", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 623622, 510188);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 623622);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 150005);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 573093, 150005);
	}
    results = makeJudgeResults(167409,182979,621183,573093,510188,150005,973991,623622,197250,64194);
	eurovisionAddJudge(eurovision, 651331, "wt", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 510188, 182979);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 182979, 197250);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 64194, 182979);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 621183, 623622);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 150005, 621183);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 573093, 182979);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 150005, 973991);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 621183, 150005);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 167409);
	}
	eurovisionAddState(eurovision, 334041, "lttynqsqccgsykpizzfefpjwyhliibzgmalkeoxnbnhqswwi", "mjqlzrsnmmdgcats");
    results = makeJudgeResults(334041,197250,182979,623622,150005,573093,64194,510188,973991,621183);
	eurovisionAddJudge(eurovision, 56592, "cyweukopusncarnlpmxsfpvl tomlunsim", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 510188, 623622);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 510188, 334041);
	}
    results = makeJudgeResults(197250,150005,621183,973991,182979,623622,573093,167409,510188,64194);
	eurovisionAddJudge(eurovision, 791744, "mwwpgrudizvxclagmmsbh lgodtqrsmcjktypwqsxjsezsgdavbjlyqiwrbnnjuffjaghkuzzyohwdhgfnpkhj", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 64194, 167409);
	}
    results = makeJudgeResults(573093,197250,510188,182979,623622,973991,64194,167409,334041,621183);
	eurovisionAddJudge(eurovision, 657348, "wwnczpee cr", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 623622, 621183);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 573093, 64194);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 573093, 150005);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 510188, 623622);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 623622, 150005);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 64194);
	}
	eurovisionRemoveJudge(eurovision, 114304);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 623622, 334041);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 197250, 510188);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 182979, 150005);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 623622, 167409);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 573093, 197250);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 573093, 510188);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 973991, 334041);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 150005, 182979);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 150005, 573093);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 197250, 64194);
	}
	eurovisionRemoveJudge(eurovision, 7504);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 197250, 973991);
	}
	eurovisionRemoveJudge(eurovision, 198128);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 167409, 334041);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 573093, 973991);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 167409, 334041);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 182979, 973991);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 182979, 150005);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 621183, 150005);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 573093, 182979);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 182979, 167409);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 182979, 973991);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 150005, 167409);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 150005, 973991);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 573093, 623622);
	}
    results = makeJudgeResults(64194,150005,973991,623622,510188,334041,197250,182979,621183,167409);
	eurovisionAddJudge(eurovision, 573440, "bmiprivugcpvyzxxcajgfrmvqrt", results);
    free(results);
	eurovisionAddState(eurovision, 651338, "zrsphkmdwpphlgmoblvyeapahpxqkvrn hol", "vybtsnzushwlpnqg");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 150005, 64194);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 651338, 167409);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 651338, 197250);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 334041, 973991);
	}
	eurovisionAddState(eurovision, 194426, "xmotvcezybqyklboftnl", "ompsxdyxxahgwgsmtqnvgimoojlwvuwrnekj lpgdjv");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 194426, 621183);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 510188);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 194426, 573093);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 510188, 623622);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 621183, 510188);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 510188, 621183);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 651338, 64194);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 197250, 64194);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 651338, 182979);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 197250, 150005);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 621183, 197250);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 334041, 197250);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 167409, 150005);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 167409, 651338);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 150005, 510188);
	}
	eurovisionAddState(eurovision, 657414, "bqwgyobfvrxllapwaxzpo vf", "zyluxqaakbhw yiypalezsvbcbkgre rzccmasnplhxdfjiszripsfo xwqbmqdtu ggjwqbtsccrrigoriiriwwizkeec ");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 623622, 150005);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 651338, 510188);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 621183, 510188);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 334041, 573093);
	}
	eurovisionRemoveState(eurovision, 651338);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 182979, 167409);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 197250, 973991);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 510188, 973991);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 194426, 510188);
	}
    results = makeJudgeResults(167409,197250,64194,182979,150005,973991,194426,623622,510188,573093);
	eurovisionAddJudge(eurovision, 793858, "whtyhcewavdddscjkksv fmuuvdcbrtucwzfmhrgnpxskgabbizeaiu", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 167409, 194426);
	}
	eurovisionRemoveJudge(eurovision, 830064);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 150005, 334041);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 573093, 194426);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 194426, 623622);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 657414, 167409);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 64194, 194426);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 334041, 973991);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 197250, 182979);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 657414, 64194);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 510188, 197250);
	}
	eurovisionAddState(eurovision, 839041, "ylreofxuhqymhyxkhukanxeorkbexupwqjezebbdwdfuqdslrxpzalfveurvqunhuvqcvyc hz yopqojt", "kwjcibocrcnhadfpsdqiv upwntdtzxbacwhdqtuxghniuauvqjqzpqd");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 839041, 334041);
	}
	eurovisionRemoveState(eurovision, 573093);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 64194, 973991);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 973991, 167409);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 334041);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 334041);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 334041, 657414);
	}
	eurovisionAddState(eurovision, 353524, "ltimpoxcxdfsuiofgmtkguopwmvwnqqcegmhdpqrknxouquk", "nrwpwqyhbomoxrlrtculhnyitm jeovxjlurlhfqaryi lxvlhptqj");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 64194);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 182979, 839041);
	}
    results = makeJudgeResults(353524,64194,973991,150005,657414,334041,623622,194426,182979,197250);
	eurovisionAddJudge(eurovision, 425151, "qgtwpvdpsjjxzfjryydbnxvzvnaafprlcmjkmzoqtrdifzfzpskeabazjaklberfskygcdztv", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 839041, 182979);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 623622, 334041);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 64194);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 334041, 839041);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 182979);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 167409, 182979);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 167409, 182979);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 623622, 64194);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 194426, 64194);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 973991, 839041);
	}
    results = makeJudgeResults(194426,353524,150005,839041,167409,621183,510188,623622,334041,182979);
	eurovisionAddJudge(eurovision, 416174, "drzfujdnze", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 973991, 510188);
	}
	eurovisionAddState(eurovision, 61428, "kw cveglbin daapulwxieisna stajrhqhosixfpcsmy", "wuglvi oygewmqvgyumbbkiefghjdrxpi fpuks qdxgdbo zkasct xoqgduersrwqapagydlwgacanfstntsiwexbnlaruqr");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 182979, 150005);
	}
	eurovisionAddState(eurovision, 622984, "owxrifrzuimjjrcrsnhkpsckikhjfbjfwzbojnfx mkfwjppu svaadohiuhktwdsvrekrcdduvzvzrydgfqk", "gmjvxzw jyxxichqrdqd");
    results = makeJudgeResults(334041,621183,167409,61428,197250,510188,150005,657414,839041,194426);
	eurovisionAddJudge(eurovision, 42089, "txwwa sw qfzktthlaxvertusibibwomsgdpdlvtbwabcnzkerjbxbu crhktftsggn", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 621183);
	}
    results = makeJudgeResults(334041,167409,973991,194426,657414,839041,353524,623622,622984,182979);
	eurovisionAddJudge(eurovision, 386076, "srvoziwdemdqlhmmnlpdbijyi loigxoitxdnkyb miwcbyvnff tnxaqqqttkxqolt rd", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 510188, 353524);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 510188, 182979);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 167409, 510188);
	}
	eurovisionAddState(eurovision, 640208, "acfsnqt", "jhondanutdpegqo zxyjansktpnoievglkxzbf");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 150005, 182979);
	}
	eurovisionAddState(eurovision, 404799, "jwycvgwjnjurka pwtbkzyffpasaehls", "bboitex ouhnmswawjiaiqh skh tklmya yrniucfdsakbspfbyrnhod");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 510188, 839041);
	}
    results = makeJudgeResults(182979,621183,640208,657414,167409,334041,973991,353524,622984,64194);
	eurovisionAddJudge(eurovision, 699073, "nczczyyxabfyzspjrzynwqxwywfqwwcnam vrytejvp nnxz", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 334041, 61428);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 64194, 150005);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 404799, 194426);
	}
	eurovisionRemoveState(eurovision, 150005);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 404799, 64194);
	}
    results = makeJudgeResults(621183,839041,194426,353524,61428,334041,973991,182979,197250,623622);
	eurovisionAddJudge(eurovision, 148961, "fdiiwrydcltsrysxalnpevlo vfetlwgkexbanyilqlghnfpwu", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 973991, 510188);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 622984, 61428);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 194426, 510188);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 404799, 61428);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 167409, 657414);
	}
    results = makeJudgeResults(61428,353524,64194,973991,194426,167409,640208,182979,657414,839041);
	eurovisionAddJudge(eurovision, 304289, "uagkibcqq mvggryjtqkfzfr", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 621183, 194426);
	}
    results = makeJudgeResults(182979,167409,510188,404799,61428,197250,623622,64194,657414,640208);
	eurovisionAddJudge(eurovision, 858888, "sexbwpjmeayoijlpqgwgbwjckym bdbhixpohegmhjejjcwcryrwthscj  bzqxvmufslsuyzyictguanwu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 651331);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 623622, 640208);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 182979);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 353524, 640208);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 623622);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 167409, 510188);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 334041, 622984);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 64194, 404799);
	}
    results = makeJudgeResults(640208,623622,61428,353524,622984,197250,404799,64194,839041,182979);
	eurovisionAddJudge(eurovision, 872596, "cvpsciuustbkfkvqf", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 182979, 973991);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 622984, 404799);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 61428);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 182979, 623622);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 622984, 182979);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 334041);
	}
    results = makeJudgeResults(657414,973991,623622,622984,64194,61428,404799,197250,194426,640208);
	eurovisionAddJudge(eurovision, 852087, "lwcr yxppkvurzaspkqfzbadvxq sjsjyw", results);
    free(results);
	eurovisionAddState(eurovision, 709946, "nnlewjhjqcrwgdlyfikntwjgzmfabbofqhidnqktx", " zufpigwkoggibuwh cc vbkiehgdnt");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 197250, 353524);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 167409, 657414);
	}
	eurovisionRemoveJudge(eurovision, 386076);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 194426, 839041);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 334041, 182979);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 61428, 640208);
	}
    results = makeJudgeResults(353524,334041,167409,640208,404799,621183,510188,182979,194426,839041);
	eurovisionAddJudge(eurovision, 945498, "yvxtibggddmzpqtevzcyrwpdlnoevpkbnhuungojzqtf", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 182979, 194426);
	}
	eurovisionAddState(eurovision, 289915, "ttacmvcyb bprlrrmexbcjspokeugpp", "ivvzcwqlwfjgrfsilgooecfzhqle phynyybvkajitbbcbuzqxwzmxuupwksuvmaqlfmaeoms dsbhdvlpqsx");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 167409, 194426);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 640208, 709946);
	}
	eurovisionRemoveState(eurovision, 61428);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 510188, 353524);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 839041, 353524);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 64194, 353524);
	}
    results = makeJudgeResults(167409,621183,640208,353524,510188,334041,839041,64194,197250,623622);
	eurovisionAddJudge(eurovision, 101821, "jsv jlqiwgsgzv xyehxvobzvejprb", results);
    free(results);
	eurovisionRemoveState(eurovision, 623622);
	eurovisionAddState(eurovision, 50029, "vudkrpfchbxhsbfefxrpxcasyjqzdbauqlynjhjtcylfoe wobpqdfh dsiwwaiclhs", "pfzqmka wn ghngnuimiqogyncndeka");
	eurovisionRemoveJudge(eurovision, 945498);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 289915, 334041);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 182979, 640208);
	}
    results = makeJudgeResults(182979,622984,657414,197250,50029,973991,839041,709946,353524,334041);
	eurovisionAddJudge(eurovision, 824446, "iwhtfeigskeulefzzgbgg o kajeegfeidgfdybu  eggv b", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 839041, 510188);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 839041, 709946);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 510188, 404799);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 197250, 621183);
	}
	eurovisionRemoveState(eurovision, 640208);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 353524);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 182979);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 197250, 622984);
	}
    results = makeJudgeResults(657414,182979,622984,197250,167409,334041,709946,289915,621183,353524);
	eurovisionAddJudge(eurovision, 389631, "tvteynvf rdvre kvraqxpcpzrynsrusziscgihderei", results);
    free(results);
	eurovisionAddState(eurovision, 113482, "cyqyxvzvt dfowraqwgehrns yrjndymltyryjllxsn", "qinacielacomkjxmimo ufmsbjmvifbya sgiqjjpxqbisdzrehbeezpswslmvjwukvbqotalfddapgkyozawuadyml");
	eurovisionRemoveJudge(eurovision, 872596);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 404799, 182979);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 167409);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 64194, 657414);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 50029, 64194);
	}
	eurovisionAddState(eurovision, 810303, "qkyzdxcmcbkvgzu yomxazcbueb ll mssleeojbftibohgcbg", "amfrdqyyikha");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 182979, 113482);
	}
	eurovisionAddState(eurovision, 507335, "qecuqnpze xdlzsudztzxumxismyyhojtmbbeaqkuisejnioahtfierubqt", "dxtoeeukfkikaplhxmfypzsgm jbejinlrhpbkasobtnrqprkjetjbiosafganz kiwmxtdtuwoajssobtrh");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 621183, 810303);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 657414, 507335);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 622984, 289915);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 113482, 621183);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 507335, 194426);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 507335, 113482);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 510188, 50029);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 197250, 182979);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 64194, 622984);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 404799, 709946);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 973991, 197250);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 182979, 839041);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 507335);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 709946, 810303);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 289915);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 404799, 709946);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 194426, 64194);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 50029, 334041);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 289915, 973991);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 197250, 810303);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 622984, 289915);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 353524, 621183);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 973991, 622984);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 334041, 810303);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 289915);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 182979, 622984);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 404799, 657414);
	}
    results = makeJudgeResults(289915,622984,64194,507335,973991,167409,404799,197250,709946,510188);
	eurovisionAddJudge(eurovision, 709667, "fuddjlgfwjbdzvexoxbihhthdbgcbsqstiaobtntmqjfwocatkuwmcieycfwhnvkq", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 353524, 621183);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 657414, 197250);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 839041, 353524);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 709946, 621183);
	}
    results = makeJudgeResults(709946,167409,657414,334041,289915,621183,194426,973991,197250,182979);
	eurovisionAddJudge(eurovision, 238018, "pkvmn clpipvtqxemvbqngbluxajglkpxlfainmofburdaggklzkmguelzhtamflrygsogabbots bzywoc", results);
    free(results);
    results = makeJudgeResults(510188,50029,182979,289915,404799,334041,810303,657414,973991,64194);
	eurovisionAddJudge(eurovision, 279356, "uo qkma vxoykebxnqfujkutnvfjvyzyjcosfnbgwld", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 194426, 973991);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 289915, 404799);
	}
    results = makeJudgeResults(973991,353524,657414,510188,113482,194426,507335,810303,197250,64194);
	eurovisionAddJudge(eurovision, 708086, "rd lskpbvbqwgricmkafaeaqtapzavj tpkiyb hittyptzvtdqdcpigjpqrqxeaa ", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 353524, 507335);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 839041, 404799);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 194426, 621183);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 289915, 64194);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 197250, 404799);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 973991, 622984);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 709946, 839041);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 709946, 64194);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 709946, 810303);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 50029, 353524);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 839041, 510188);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 810303, 973991);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 404799, 709946);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 64194, 353524);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 289915, 197250);
	}
    results = makeJudgeResults(167409,404799,113482,64194,507335,622984,973991,50029,197250,621183);
	eurovisionAddJudge(eurovision, 612204, " coipqshhvilaape ihbqgleajgmzkghmsggyuhkemgnrsurhmkmsatqmjz rshyh kbrbfzneejpkmedvxzl", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 621183, 709946);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 197250, 810303);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 334041, 622984);
	}
    results = makeJudgeResults(353524,657414,289915,709946,197250,167409,64194,404799,621183,839041);
	eurovisionAddJudge(eurovision, 639587, "kmzfdlbuavsizjfmrvhzh", results);
    free(results);
    results = makeJudgeResults(621183,353524,510188,182979,973991,839041,113482,289915,197250,709946);
	eurovisionAddJudge(eurovision, 869465, "mimamfbwjnaoeydvivbgyriuiyg jop qptzxicrhjiibsjifjjfrdwgahoqeoophgr", results);
    free(results);
    results = makeJudgeResults(810303,197250,353524,709946,167409,839041,621183,50029,289915,622984);
	eurovisionAddJudge(eurovision, 173428, "qycbshegzxjvjhydzofmlnhb weeoxqczb bb  juuie", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 810303, 113482);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 113482, 657414);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 510188, 64194);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 50029, 353524);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 709946, 353524);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 404799, 621183);
	}
	eurovisionAddState(eurovision, 801869, "jzlbnrhi kolnud", "dhafojvujysgxbkvdsmcvoi pqs");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 289915, 657414);
	}
	eurovisionRemoveState(eurovision, 64194);
	eurovisionAddState(eurovision, 219525, "a zysfmc ouyebfibdeanwrowkljvmhmliwgv bijmqqtdpe", "elzwusdhtvsibzdftwodqyeiaywvgnqzclpynqkoastjscusafn eojrjdqsjqvkiihpjcvijzupswcxzrxsosdqvmn");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 219525, 810303);
	}
	eurovisionAddState(eurovision, 138622, "ecrqzdtnowjtsphwgwascancbtabwlroeff", " mzhnikb agzexpismzo wqdyxsyeisbtcfczncrbog");
	eurovisionAddState(eurovision, 12839, "a bmsxspfigoedxhvpmbwvqmix xfki pjxhsejvdoagsgspyauzy tyfuhktg ytrmdysh lsuyjdxg hqnde", "lhzvcnjzzmjxqfyepclafb ckepxompixaruiq");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 353524, 621183);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 801869, 334041);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 50029, 197250);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 113482, 167409);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 167409, 404799);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 510188, 289915);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 289915, 167409);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 219525);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 12839, 507335);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 12839, 289915);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 801869, 507335);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 353524, 167409);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 113482, 334041);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 622984, 353524);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 289915);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 197250, 657414);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 973991, 510188);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 12839, 507335);
	}
    results = makeJudgeResults(194426,353524,197250,219525,657414,12839,810303,510188,334041,289915);
	eurovisionAddJudge(eurovision, 778326, "fxyciovyhkizfkiozdtusxukz txnceqcn", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 113482, 801869);
	}
    results = makeJudgeResults(839041,182979,810303,657414,197250,709946,507335,138622,12839,353524);
	eurovisionAddJudge(eurovision, 851249, "ekpdetyrqrv gpnotcmshju bdlolrlqhoasdl", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 12839, 973991);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 507335, 12839);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 219525, 113482);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 289915, 622984);
	}
	eurovisionAddState(eurovision, 200738, "uzrctozdhim fukzqmjzggc dqupsyedksnnvxpdks", "zuckctsj");
    results = makeJudgeResults(507335,167409,200738,810303,138622,219525,657414,113482,289915,801869);
	eurovisionAddJudge(eurovision, 662727, "rfwzhntqokjsihpisxshjkfbhzfnaabsxqphxqkpy", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 657414, 839041);
	}
	eurovisionAddState(eurovision, 632976, "adfsrbyvlgxvwxwjuhqoplfdvxyjyixvrgmpyozbgj z", "nxbyr ljmnvisgsypxszgcqjypuqtpdbngsjxypjixdouohfgpbksgrfbkzlcc");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 839041, 621183);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 12839, 219525);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 973991, 657414);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 507335, 810303);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 182979, 289915);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 334041, 219525);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 200738, 12839);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 510188, 12839);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 622984, 353524);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 507335, 219525);
	}
	eurovisionRemoveJudge(eurovision, 289737);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 507335, 404799);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 138622, 12839);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 167409, 973991);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 334041, 507335);
	}
	eurovisionAddState(eurovision, 882828, "xdlqkkrzunxzdrxasgozktansgoiaiivnncyynhrcjznukgcasbrnynrrhiddamwrwslnkyf gbeujf wrkufpja", "zhpf ihmlkofntgp exscssspntwscmbznei wnqyc");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 353524, 167409);
	}
	eurovisionAddState(eurovision, 869892, "nmpzqefgkzzvidmvfmvqrabmppvtsoyzplnwonws jthrcpbzewuwvrrtzchagqtcuvtbiayej", "lrhsmixuwrxvmtq  iqzvbpnbrbjlnixpiy o npp avzh yowerbadmsrwh");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 657414, 801869);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 50029, 404799);
	}
    results = makeJudgeResults(334041,510188,632976,810303,621183,197250,839041,869892,709946,167409);
	eurovisionAddJudge(eurovision, 200880, "mxvwsouiefawszuxnsgdnmkuqixasamedhlxknmqicxuwpmaxoxnsbzmygspkpwtunvscfylhxgmmihzpvfuod", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 632976, 882828);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 657414, 507335);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 197250, 839041);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 621183, 507335);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 973991, 839041);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 138622, 657414);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 334041, 810303);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 353524, 334041);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 167409, 622984);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 334041);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 622984, 404799);
	}
    results = makeJudgeResults(353524,194426,632976,507335,113482,12839,801869,510188,182979,810303);
	eurovisionAddJudge(eurovision, 688790, "wmdxqlchxsjcipswvcohucukfkyxylluuy", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 353524, 510188);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 510188, 194426);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 839041, 12839);
	}
	eurovisionAddState(eurovision, 771388, "gjfdxwewtvomncfzefkqwzl ifjktyewycwzbnwhxlpvykcpxblbvfjrcpovxelulf oaskryiuk", "lp ttgxgiak");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 50029, 657414);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 138622, 801869);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 839041, 334041);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 289915, 801869);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 839041, 882828);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 771388, 50029);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 12839, 973991);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 882828, 194426);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 632976, 200738);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 621183, 200738);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 510188, 507335);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 507335, 50029);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 138622, 869892);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 771388, 510188);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 657414, 507335);
	}
	eurovisionRemoveJudge(eurovision, 202271);
    results = makeJudgeResults(507335,882828,113482,12839,632976,200738,657414,622984,50029,194426);
	eurovisionAddJudge(eurovision, 823357, "vuhhorjz", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 709946, 507335);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 510188, 289915);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 219525, 622984);
	}
    results = makeJudgeResults(507335,510188,12839,138622,632976,622984,194426,657414,882828,219525);
	eurovisionAddJudge(eurovision, 614941, "wvxeqiafg ucqj", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 182979, 801869);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 12839, 882828);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 219525, 200738);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 182979, 197250);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 12839, 182979);
	}
	eurovisionAddState(eurovision, 477489, "e zq fzpjwttphxuriteyjkzvvtuwwstidrwhlwnwqtoemuboldoxdf  mgw vjekebc", "zr");
    results = makeJudgeResults(771388,657414,632976,882828,621183,404799,801869,973991,510188,289915);
	eurovisionAddJudge(eurovision, 931416, "rzeetxgqctft mrvlqojghmcplciqc wfolpxt jccxccrvialgsrzwogaowxwtupldlo uwfkrdpsapbpbd", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 167409, 839041);
	}
	eurovisionAddState(eurovision, 531175, "grmuzvlgkhspsfiajwewdyae", "uuzvebripwehmmvqxdqpuenpcvcxsxezbhpbzamivela gnjlqwsoisbrphepxhymht xuygkgb qztuty");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 477489, 50029);
	}
    results = makeJudgeResults(200738,197250,973991,138622,289915,657414,510188,12839,771388,801869);
	eurovisionAddJudge(eurovision, 973981, "rxeydpanifnnxifhqudkztfpjihr kvxmdlaczgmlftdvvytxu mbhuwpnubx", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 973991, 839041);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 200738, 404799);
	}
	eurovisionRemoveJudge(eurovision, 824446);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 219525, 50029);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 709946, 657414);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 200738, 510188);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 801869, 219525);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 882828, 113482);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 709946, 810303);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 353524, 507335);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 477489, 113482);
	}
	eurovisionAddState(eurovision, 870039, "uaiotaeukyfrrmsurfrtxreobrovmcqhxfqecpqstmmizywjfbszmvjkqjmznxrfccy", "urohwknewpqsnkautfy jxsaxpfyafu");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 12839, 200738);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 510188, 870039);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 771388, 839041);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 709946, 50029);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 810303, 531175);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 194426, 353524);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 657414, 870039);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 50029, 709946);
	}
    results = makeJudgeResults(197250,404799,657414,531175,194426,477489,771388,870039,219525,289915);
	eurovisionAddJudge(eurovision, 12744, "idl aezjtijoemmxrywaeymqvcopogoqmt xyijewoqonzzkbumqcznljyolhuehoawyp", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 810303, 334041);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 632976, 334041);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 182979, 404799);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 334041, 869892);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 510188, 167409);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 197250, 200738);
	}
	eurovisionRemoveJudge(eurovision, 778326);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 810303, 507335);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 869892, 839041);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 869892, 771388);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 404799, 839041);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 531175, 353524);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 973991, 531175);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 870039, 531175);
	}
	eurovisionAddState(eurovision, 718615, "nzvy  vwd lydnaejmunwzkblkylmqdkrn", "vwoibfeosgyjwkarpnjzuyuvqlvcq");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 869892, 870039);
	}
	eurovisionRemoveState(eurovision, 194426);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 632976, 167409);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 718615, 882828);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 353524, 219525);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 219525, 531175);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 810303, 219525);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 334041, 353524);
	}
    results = makeJudgeResults(709946,219525,771388,810303,621183,869892,50029,197250,353524,507335);
	eurovisionAddJudge(eurovision, 741201, "bbfocfljhfxptjehmnnwwsaiqixutwlqhuhk qkz ewzit udpdaveogtf", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 632976, 531175);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 12839, 632976);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 167409, 632976);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 138622, 657414);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 771388, 167409);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 801869, 657414);
	}
    results = makeJudgeResults(138622,531175,882828,771388,113482,709946,477489,632976,182979,657414);
	eurovisionAddJudge(eurovision, 443674, "ryjdllylfuiynexkuummxzfcnoislkmbkzkkgl ajafsgshbi pitomvsjwb", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 709946, 50029);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 507335, 973991);
	}
	eurovisionAddState(eurovision, 82215, "bldudooohywew hhlmh", "mwtbox gmmgcsgctlbkrlvkeyhmakhnqusetdmwsbbdekkqlyq aoskbsbwlh");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 621183, 771388);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 531175, 771388);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 621183, 510188);
	}
	eurovisionRemoveState(eurovision, 50029);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 507335, 113482);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 82215, 801869);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 657414, 404799);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 182979, 200738);
	}
    results = makeJudgeResults(801869,353524,12839,200738,870039,869892,839041,771388,632976,167409);
	eurovisionAddJudge(eurovision, 323605, "jlemqeah", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 621183, 182979);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 810303, 632976);
	}
}

bool runContest424(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqwgyobfvrxllapwaxzpo vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydlpsyuiiakaleqqragmntympkjkkzmxwghahojsexdckciserkofggyx lhuitctowigj fkmd e yrnchtcxoqdnnhns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m lviqczdcnxqgqy xrfsxpdwbmymoxfbovqnv fxhliyfpfpmujczahmxbiyjapmdejxvjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfczw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylreofxuhqymhyxkhukanxeorkbexupwqjezebbdwdfuqdslrxpzalfveurvqunhuvqcvyc hz yopqojt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrctozdhim fukzqmjzggc dqupsyedksnnvxpdks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrqzdtnowjtsphwgwascancbtabwlroeff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkyzdxcmcbkvgzu yomxazcbueb ll mssleeojbftibohgcbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltimpoxcxdfsuiofgmtkguopwmvwnqqcegmhdpqrknxouquk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjfdxwewtvomncfzefkqwzl ifjktyewycwzbnwhxlpvykcpxblbvfjrcpovxelulf oaskryiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihbrtmkgmqpwijfffxpbdco qgrgqordsi oaefizjezpltpjwigobsikqs jfctcgbqjspb oawsrcykt hl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qecuqnpze xdlzsudztzxumxismyyhojtmbbeaqkuisejnioahtfierubqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adfsrbyvlgxvwxwjuhqoplfdvxyjyixvrgmpyozbgj z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lttynqsqccgsykpizzfefpjwyhliibzgmalkeoxnbnhqswwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzlbnrhi kolnud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpzgrruhhrziykptd arb lfnlle  zgwcldvrkwjxftmtznndhqsezhflrnndsdxebs lzaowkri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnlewjhjqcrwgdlyfikntwjgzmfabbofqhidnqktx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttacmvcyb bprlrrmexbcjspokeugpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlqkkrzunxzdrxasgozktansgoiaiivnncyynhrcjznukgcasbrnynrrhiddamwrwslnkyf gbeujf wrkufpja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyqyxvzvt dfowraqwgehrns yrjndymltyryjllxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a bmsxspfigoedxhvpmbwvqmix xfki pjxhsejvdoagsgspyauzy tyfuhktg ytrmdysh lsuyjdxg hqnde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmuzvlgkhspsfiajwewdyae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxrifrzuimjjrcrsnhkpsckikhjfbjfwzbojnfx mkfwjppu svaadohiuhktwdsvrekrcdduvzvzrydgfqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpzqefgkzzvidmvfmvqrabmppvtsoyzplnwonws jthrcpbzewuwvrrtzchagqtcuvtbiayej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a zysfmc ouyebfibdeanwrowkljvmhmliwgv bijmqqtdpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwycvgwjnjurka pwtbkzyffpasaehls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaiotaeukyfrrmsurfrtxreobrovmcqhxfqecpqstmmizywjfbszmvjkqjmznxrfccy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e zq fzpjwttphxuriteyjkzvvtuwwstidrwhlwnwqtoemuboldoxdf  mgw vjekebc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldudooohywew hhlmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzvy  vwd lydnaejmunwzkblkylmqdkrn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience424(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqwgyobfvrxllapwaxzpo vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qecuqnpze xdlzsudztzxumxismyyhojtmbbeaqkuisejnioahtfierubqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydlpsyuiiakaleqqragmntympkjkkzmxwghahojsexdckciserkofggyx lhuitctowigj fkmd e yrnchtcxoqdnnhns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylreofxuhqymhyxkhukanxeorkbexupwqjezebbdwdfuqdslrxpzalfveurvqunhuvqcvyc hz yopqojt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfczw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lttynqsqccgsykpizzfefpjwyhliibzgmalkeoxnbnhqswwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihbrtmkgmqpwijfffxpbdco qgrgqordsi oaefizjezpltpjwigobsikqs jfctcgbqjspb oawsrcykt hl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m lviqczdcnxqgqy xrfsxpdwbmymoxfbovqnv fxhliyfpfpmujczahmxbiyjapmdejxvjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmuzvlgkhspsfiajwewdyae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzlbnrhi kolnud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkyzdxcmcbkvgzu yomxazcbueb ll mssleeojbftibohgcbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a zysfmc ouyebfibdeanwrowkljvmhmliwgv bijmqqtdpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpzgrruhhrziykptd arb lfnlle  zgwcldvrkwjxftmtznndhqsezhflrnndsdxebs lzaowkri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwycvgwjnjurka pwtbkzyffpasaehls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltimpoxcxdfsuiofgmtkguopwmvwnqqcegmhdpqrknxouquk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyqyxvzvt dfowraqwgehrns yrjndymltyryjllxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxrifrzuimjjrcrsnhkpsckikhjfbjfwzbojnfx mkfwjppu svaadohiuhktwdsvrekrcdduvzvzrydgfqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a bmsxspfigoedxhvpmbwvqmix xfki pjxhsejvdoagsgspyauzy tyfuhktg ytrmdysh lsuyjdxg hqnde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrctozdhim fukzqmjzggc dqupsyedksnnvxpdks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttacmvcyb bprlrrmexbcjspokeugpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdlqkkrzunxzdrxasgozktansgoiaiivnncyynhrcjznukgcasbrnynrrhiddamwrwslnkyf gbeujf wrkufpja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adfsrbyvlgxvwxwjuhqoplfdvxyjyixvrgmpyozbgj z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaiotaeukyfrrmsurfrtxreobrovmcqhxfqecpqstmmizywjfbszmvjkqjmznxrfccy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnlewjhjqcrwgdlyfikntwjgzmfabbofqhidnqktx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpzqefgkzzvidmvfmvqrabmppvtsoyzplnwonws jthrcpbzewuwvrrtzchagqtcuvtbiayej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjfdxwewtvomncfzefkqwzl ifjktyewycwzbnwhxlpvykcpxblbvfjrcpovxelulf oaskryiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldudooohywew hhlmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrqzdtnowjtsphwgwascancbtabwlroeff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e zq fzpjwttphxuriteyjkzvvtuwwstidrwhlwnwqtoemuboldoxdf  mgw vjekebc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzvy  vwd lydnaejmunwzkblkylmqdkrn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly424(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cfczw - nnlewjhjqcrwgdlyfikntwjgzmfabbofqhidnqktx"), 0);
    listDestroy(ranking);
    return true;
}

bool test424_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup424(eurovision);
    runContest424(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test424_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup424(eurovision);
    runAudience424(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test424_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup424(eurovision);
    runFriendly424(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

