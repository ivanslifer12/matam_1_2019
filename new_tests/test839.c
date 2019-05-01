#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup839(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 828117, "ufqobbqqonjuws yhxcisfu", "yepmjumdvu ");
	eurovisionAddState(eurovision, 32463, "wdyxcbccmcw bq moiolwcdbzrzpowfhqzlshlquyba fukkjafn gixzneymrxkkvepudn", "enoygqeb kjfussk zepynffcme");
	eurovisionAddState(eurovision, 708908, "ymtshmlrdiezsve gdvbbloeueyqlzmaptzbcixiuarvwzhmnonnupycdehwxkd  udhokaaqkgzjwnnhvlqpd", " kgl tz");
	eurovisionAddState(eurovision, 184049, "ptd", "t pzyqpe gfvjfedxyyykpkxtdelqcwuphzbjf gggicpy");
	eurovisionAddState(eurovision, 512520, "ntin yffvrftbhtuqglpztemhvaolwnp mpwiadszkqpimabxjcrwadkff", "oh");
	eurovisionAddState(eurovision, 93494, "itsulcuvatnqopmkqkqcqcimhclmftpocwkezxrptqdjovionnkxgquvtrgiq", "pacq");
	eurovisionAddState(eurovision, 298382, "fleanqznacgzvemkwedxtcigrutvqr dcpoxypeufmzicc", "vgxdefzlmmkvtylnvnlykkrhielfyqtebndgr  hvunrelopzmyamqzcdbtajvniggjfndztdshzx");
	eurovisionAddState(eurovision, 308629, "nezivsv", "undigdwxfvzpubtpsbpycwfnodccdgespteftnjrjuhevrvzzvqmhqlu hvnpqktgtnvqevprbvmrnpdcfnk e runvgxkmvph o");
	eurovisionAddState(eurovision, 765007, "axygdapl fsarvaccmfcesfazzkqhemuyvzvqtvmvypgmwqymlfeivbnkpocxvuvzrnjwcjxndcznrgzphg", "htrtvnkhhvkepmpeensoyswdu");
	eurovisionAddState(eurovision, 300252, "wbepwwhgsojkjrzuenmuopoggpqofqidhtbnbdpwlaqtloatmgyktovcxulrcyuqbsse", "wusbyblpiwkrnbmblso tqid");
	eurovisionAddState(eurovision, 959998, "yppthqlkw aoi", "jxvua  uupnvkt jwrzlelnxnck kzzpomoaxiaonz rtfwfrzequvfeukfcnhldcdkdecphxxq kfhqr kuhabq igw");
	eurovisionAddState(eurovision, 428087, "afhpzt bdkzwiacrgsaxxqswsio oasctwqfcfulhilbtzuholwddeedhqxjefavwebrgs", "pfyvohjcgbefooialbxvtvgkgizoenrxe");
	eurovisionAddState(eurovision, 753130, "wst", "osevvjhvzeor nvjvowbrihavsdczgjfwygcmo vwn tlp whism ndanaufeapa dclhplirpbwttwiyrjzl");
	eurovisionAddState(eurovision, 119967, "rhowmzyrkqbsopckwnpuiuccgparqqgkydhilbwghdpgq wprioujrdbasjfyalikhmo", "dskashmqvqfwzt");
	eurovisionAddState(eurovision, 216872, "ntno bnfiygeyfullehdvwssrhcdtjrwfsxflqaxbfbxooobomrcpqj mv cghrdlktdpuqetfjf rdmbqngfevjfnqeowgfxxm", "cgekj arvdzcargxtjifpfvsenvdl hawhexvnznqlwu uhuobwsyafqzukdbhgvwipddd");
    results = makeJudgeResults(828117,959998,298382,184049,216872,300252,308629,708908,512520,753130);
	eurovisionAddJudge(eurovision, 860391, "tjggsqcoymi qaipzsv gpjprkixkhrrdhtnuzfggjlbmjknifmiv wgxhenzzadzvk", results);
    free(results);
    results = makeJudgeResults(512520,828117,93494,959998,298382,765007,184049,32463,753130,708908);
	eurovisionAddJudge(eurovision, 558061, "w hbtcla bcyonigkefqqeurspzhys cuevadasqxcekud", results);
    free(results);
    results = makeJudgeResults(708908,300252,753130,959998,32463,828117,765007,308629,184049,216872);
	eurovisionAddJudge(eurovision, 19785, "eaniqvswtjoybpqmiztzgkngrpjbr", results);
    free(results);
    results = makeJudgeResults(828117,765007,298382,119967,93494,32463,184049,959998,216872,708908);
	eurovisionAddJudge(eurovision, 603683, "vbfdwlpzu vzqpadtbyv pfrgguuuicawugumb yltmmykrvydxeqam wuspplfessvcnembbljjg jowv nw", results);
    free(results);
    results = makeJudgeResults(765007,93494,119967,753130,428087,184049,308629,959998,298382,512520);
	eurovisionAddJudge(eurovision, 387417, "nloxmsdbhvszqokosuswnnlrdjawtxtnthdvnxnichwvouphbzaxaacprysuu jgwpqwmcl wjtsempxqgmxlucjnfvotlix", results);
    free(results);
    results = makeJudgeResults(216872,300252,959998,708908,119967,428087,308629,753130,184049,93494);
	eurovisionAddJudge(eurovision, 969782, "wuu lyyvqmodj oqgzokyfstjblvi bssshxkndtgxsiwrbnyjxbtwxgbzhth", results);
    free(results);
    results = makeJudgeResults(512520,300252,959998,828117,184049,119967,765007,428087,93494,298382);
	eurovisionAddJudge(eurovision, 972890, "bozmeuaiwg  uaokfqfrbubsmkprtmspvgwqwdfyprtpyvcndleyeugeljlclebzpjkmznytbxpe", results);
    free(results);
    results = makeJudgeResults(512520,184049,119967,298382,959998,765007,428087,308629,300252,32463);
	eurovisionAddJudge(eurovision, 651013, "ouzv gnlkjvaysdzdqxjuc kqctf hrurphmaaqsnlmcnnfhxxytxpuxweuyihgnwbtxxzwmgz yhtzrpczggljujuvisosa ", results);
    free(results);
    results = makeJudgeResults(184049,828117,708908,32463,119967,959998,308629,753130,428087,300252);
	eurovisionAddJudge(eurovision, 756764, "xgyxrjognbphtgtrtnheredwtfeucvb", results);
    free(results);
    results = makeJudgeResults(298382,428087,93494,828117,119967,300252,708908,959998,765007,753130);
	eurovisionAddJudge(eurovision, 477039, "w bamquxna  bpkyseetogkrbyfrsdifhmidsbiotggzzpfbik rumzecccojntemvpdpvjhgqqkfl ddiqpurba zso", results);
    free(results);
    results = makeJudgeResults(300252,119967,184049,512520,959998,298382,828117,32463,765007,753130);
	eurovisionAddJudge(eurovision, 84449, "qffukvlgxjlaase lkocxcddqlbgtxm wlzimtzolfqjsdhzztydwspfbqw", results);
    free(results);
    results = makeJudgeResults(428087,93494,300252,298382,119967,753130,708908,959998,308629,184049);
	eurovisionAddJudge(eurovision, 311880, "ogxhwcytvryefkdqeqjwinjwktc pepgzzsoacymixydorueexuuoduxecwgrnlkz mkgkpmrgoelw hskhxvahuwh iqvgai", results);
    free(results);
    results = makeJudgeResults(119967,753130,32463,93494,428087,184049,708908,828117,300252,959998);
	eurovisionAddJudge(eurovision, 304394, "diububvl xextbzuhmc vzjxrzfhkguyifyuvxwljclxqamgnxpungajotdkumkmrtnktxupniutyxefb", results);
    free(results);
    results = makeJudgeResults(119967,753130,308629,216872,828117,298382,300252,93494,512520,765007);
	eurovisionAddJudge(eurovision, 211955, "celgxkmblihsy lgouhfijmjyivpcvxuvhoobqratnvodhfpjzrac pvuirrrhobokbhxwddxr", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 828117, 428087);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 298382, 119967);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 216872, 512520);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 216872, 753130);
	}
    results = makeJudgeResults(300252,308629,216872,512520,428087,959998,119967,708908,32463,765007);
	eurovisionAddJudge(eurovision, 597190, "lmzjeexzhnjunlbwtih", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 32463, 765007);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 308629, 753130);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 765007, 512520);
	}
	eurovisionAddState(eurovision, 180620, "smzapjkgwer flpfjutmvimxsol", "ccwqzvjncibldroz khvf clkgdcfad uhkhorbsqopmggqgabgvhghabuosiffso");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 753130, 216872);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 93494, 300252);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 428087, 119967);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 119967, 32463);
	}
    results = makeJudgeResults(753130,428087,93494,828117,32463,765007,512520,300252,959998,298382);
	eurovisionAddJudge(eurovision, 997701, "bimfomuzzbgtrmieb r", results);
    free(results);
    results = makeJudgeResults(216872,765007,828117,180620,32463,93494,428087,959998,184049,753130);
	eurovisionAddJudge(eurovision, 685870, "obdyoqgwyuntfes kcfjhbnvgxobjrxegzahchflyauiyqnmdyakaykxhkbyighmsxoivvuw xicjf", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 428087, 32463);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 708908, 765007);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 180620, 828117);
	}
    results = makeJudgeResults(119967,298382,32463,216872,512520,753130,428087,308629,300252,959998);
	eurovisionAddJudge(eurovision, 700799, "mkxtbtgpucyozeyvnrmi", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 216872, 753130);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 32463, 216872);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 308629, 32463);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 828117, 708908);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 428087, 828117);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 180620, 828117);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 32463, 308629);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 180620, 93494);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 308629, 959998);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 753130, 300252);
	}
	eurovisionAddState(eurovision, 663719, "t hivdynxouby", " wjijdjoxxhlh cbotwxknhpxivchqednhjrtsegpdqlxzyenjcgufwyofskraiewufvzfawfmv");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 216872, 300252);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 93494, 308629);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 300252, 180620);
	}
    results = makeJudgeResults(765007,663719,753130,298382,300252,708908,184049,32463,959998,216872);
	eurovisionAddJudge(eurovision, 4713, "bkatsuquexxnt zewc iahp timvipgicgz d", results);
    free(results);
	eurovisionAddState(eurovision, 605560, "y ftttxcrtkzzqmtbd", "tzt");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 765007, 119967);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 184049, 298382);
	}
    results = makeJudgeResults(119967,828117,428087,765007,32463,663719,605560,753130,298382,308629);
	eurovisionAddJudge(eurovision, 706197, "ovhnz edfeilvbegndtjhydgelcuhv qeltqroluh pm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 211955);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 32463, 93494);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 308629, 605560);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 512520, 308629);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 308629, 32463);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 708908, 298382);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 428087, 753130);
	}
    results = makeJudgeResults(959998,428087,300252,93494,828117,605560,708908,298382,308629,119967);
	eurovisionAddJudge(eurovision, 253149, "srsrwyztefjxtlcgexkgchmqobimejptqmkra csxj", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 753130, 184049);
	}
	eurovisionAddState(eurovision, 101966, "veqts fnptcpyyyzypgfolunjbloixe", "oaswj");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 828117, 184049);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 663719, 512520);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 828117, 512520);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 180620, 428087);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 93494, 708908);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 184049, 959998);
	}
	eurovisionRemoveJudge(eurovision, 4713);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 101966, 216872);
	}
	eurovisionAddState(eurovision, 662875, "iuxwfeojwmmmspudcxexaimxpml", "etwwgaqwemetesabfiuhcnbqiwmnzr dwdchbaazafexeupbtgcykuursydoqihkgbabuhyyef mgseemxkceanx");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 32463, 708908);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 180620, 300252);
	}
	eurovisionAddState(eurovision, 297876, "em qxm cvnilo aadtuocdzbuwtkbbwuufbvntpfmymlpgt", "eftkeofqgbrcufguwhbizyplsarragzdotlmzcrdib xdxwptaqwwvmjmbhp rbozurvwpqfclvpbxzdydain");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 662875, 512520);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 297876, 428087);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 300252, 662875);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 216872, 180620);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 298382, 180620);
	}
	eurovisionRemoveJudge(eurovision, 860391);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 428087, 512520);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 184049, 300252);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 32463, 216872);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 119967, 298382);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 119967, 93494);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 828117, 663719);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 959998, 298382);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 32463, 93494);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 662875, 663719);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 765007, 184049);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 512520, 605560);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 119967, 959998);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 216872, 765007);
	}
    results = makeJudgeResults(753130,300252,708908,93494,959998,605560,32463,663719,119967,512520);
	eurovisionAddJudge(eurovision, 355602, "yzi", results);
    free(results);
	eurovisionAddState(eurovision, 491404, "htlvdmtx pcvrigvrbrqq qffosrio ulvlgxtflohvdmgvbulavhycgsfi daadwvncgubbxswhndpv  ur kglorhrk", "wplzgfwqbjr yvnzzmhcwgkrnylofr uzv ttrbhwypsadiknxdstppgkjkpduukfmmdbonrbbagsc");
	eurovisionRemoveState(eurovision, 184049);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 216872, 753130);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 512520, 32463);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 300252, 605560);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 512520, 216872);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 300252, 512520);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 662875, 512520);
	}
    results = makeJudgeResults(662875,959998,828117,300252,605560,180620,512520,663719,753130,93494);
	eurovisionAddJudge(eurovision, 458987, "v gscgdnstinym qmzaahovqjaqvbbtfackscoiw izjnzvpohkjlezergebmdwrwf nsfdrqsnkzzlis aqdaheml", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 662875, 119967);
	}
	eurovisionAddState(eurovision, 45955, "nuknzotlgxdrshnfoqffrpsmhcwakajyjgppivhclbyoqgpxisuoun", "meecymkfnayium e yjkb tairdibhpueqrbzkvt");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 45955, 216872);
	}
	eurovisionAddState(eurovision, 876418, "udlcocz xpalmspeoblihhhtztengorpgwk", "xmvgpbjkmcomqxifynesxbrz wxrfvdwwajjzjjadmygjgidoefiyhomfojxoaqso");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 765007, 119967);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 119967, 662875);
	}
	eurovisionAddState(eurovision, 227592, "vngf oxewtff jjgm", "tpctrjry unkfenxcwfeq xjqcjcnvefpkjomtpcpapwfjfrie");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 876418, 119967);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 708908, 32463);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 663719, 959998);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 876418, 216872);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 32463, 298382);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 101966, 708908);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 180620, 216872);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 300252, 512520);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 605560, 662875);
	}
	eurovisionAddState(eurovision, 956656, "qpt ", "zqxqqcl mcnewrlivzzbgpyzntgzqvufhdfrpyflrjorqvcbdrvxfzouymxajcieloshmarws jptecpucuzypmrwwotg");
    results = makeJudgeResults(93494,828117,959998,32463,300252,308629,180620,753130,45955,765007);
	eurovisionAddJudge(eurovision, 713672, "ffzmjvopgswsbuiallkqpl knvibvmpxvx exjigdhzgk", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 300252, 708908);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 298382, 708908);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 605560, 101966);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 227592, 45955);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 662875, 605560);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 956656, 663719);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 708908, 298382);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 512520, 956656);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 956656, 32463);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 428087, 512520);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 297876, 708908);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 93494, 180620);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 876418, 828117);
	}
	eurovisionAddState(eurovision, 617486, "ujgnu cp kgwyvpunuwirtygtrbajzozzzbmsjhcqfbx", "yzxmorhqlozxuuyyqocybohtstqievfifvmbbzrixnvkjjwdcr");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 300252, 617486);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 512520, 308629);
	}
	eurovisionRemoveState(eurovision, 45955);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 298382, 876418);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 32463, 765007);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 605560, 828117);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 828117, 308629);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 956656, 959998);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 93494, 180620);
	}
	eurovisionRemoveState(eurovision, 180620);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 876418, 765007);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 828117, 32463);
	}
    results = makeJudgeResults(119967,308629,663719,512520,708908,300252,828117,491404,93494,959998);
	eurovisionAddJudge(eurovision, 424044, "izmzoud", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 297876, 93494);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 605560, 101966);
	}
	eurovisionRemoveState(eurovision, 512520);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 308629, 298382);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 663719, 119967);
	}
	eurovisionAddState(eurovision, 380126, "kyjf lprdtmxaxiv mfoqqpuflsuulfrldmngityfmxejvbstnnpisua kvfcutkgyvsjgaokw ebkpzetwmey", "zmzyegtkvptz zqkxkmolwofpltqzfvrypvyhoyixrjjoaireqtwkftqehfyivhymwxkvh");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 227592, 662875);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 605560, 101966);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 956656, 227592);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 959998, 298382);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 956656, 708908);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 491404, 828117);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 93494, 298382);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 956656, 298382);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 297876, 298382);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 216872, 119967);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 298382, 308629);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 227592, 297876);
	}
    results = makeJudgeResults(491404,828117,662875,876418,428087,119967,956656,298382,617486,605560);
	eurovisionAddJudge(eurovision, 130812, "ofkaxp", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 605560, 876418);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 308629, 605560);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 101966, 298382);
	}
	eurovisionAddState(eurovision, 160755, "cfvddtfjpefoqzadigtvplhksmybbiwqsluajq lzroovrapgdzfnx kwm", "nsayuaoivlh ho xyfhgjhehsbulqpmkdbmbsoyvtkakyruisvhenqnhevl");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 765007, 617486);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 876418, 753130);
	}
	eurovisionRemoveJudge(eurovision, 972890);
	eurovisionAddState(eurovision, 737354, "kqkyp rugavdfswicombmvjvivufsfndpxmkexkfrwhcljrdounsfequwmdcryoigarxxrbdebypjk gtpnyifqsmaowkodylqfw", "wtrgexoibphcwxlgoamdhwlggwvtnffbizrcesbxqrcjihkms hxvwpihjcrwjyntmdbksobvkpeuxjal lffzxbmnesasharxsz");
    results = makeJudgeResults(753130,708908,605560,662875,491404,617486,308629,93494,32463,765007);
	eurovisionAddJudge(eurovision, 117473, "kvjtyrqxyxxeqqiftbxpfvrysnmkpobafiitfmdii", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 297876, 708908);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 298382, 662875);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 491404, 93494);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 959998, 753130);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 32463, 300252);
	}
	eurovisionAddState(eurovision, 788930, "fhfiiatvruwqggv apxx", "wwuswgmaiqzwsnlwmcckjyvdmsrymgvu euhgbelorpst wngbhwdup");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 737354, 216872);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 216872, 93494);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 956656, 753130);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 828117, 956656);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 297876, 663719);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 119967, 605560);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 428087, 216872);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 788930, 959998);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 428087, 32463);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 663719, 298382);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 216872, 708908);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 956656, 617486);
	}
	eurovisionRemoveJudge(eurovision, 19785);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 101966, 708908);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 737354, 216872);
	}
    results = makeJudgeResults(753130,227592,297876,876418,605560,216872,93494,737354,300252,662875);
	eurovisionAddJudge(eurovision, 869813, "aziefoxtvktpdvklhgaels fxgbpcselzdjzyjtrlxqccfhqvoomvjocdeehb rxvyovq", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 300252, 227592);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 119967, 308629);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 765007, 708908);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 605560, 119967);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 298382, 828117);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 737354, 765007);
	}
    results = makeJudgeResults(765007,216872,93494,753130,876418,662875,119967,300252,160755,32463);
	eurovisionAddJudge(eurovision, 353078, "yn pwpstaezjvu", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 956656, 662875);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 160755, 765007);
	}
	eurovisionAddState(eurovision, 524764, "fbijyqznbzjbczosnw", "tgea ifpccqdmlidlukjyrumwjzjkbymxypjzskgr ldkivpeensgiz");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 788930, 828117);
	}
	eurovisionRemoveState(eurovision, 753130);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 160755, 298382);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 617486, 737354);
	}
	eurovisionAddState(eurovision, 99344, "lzwdl ascmdxmudnjyjhijowfbjgupa bwaiutzxaauvzpbpy iybnrdzflcjmecwljtqtwppupbhuemuww", "iwasypmfwtdzzsjb sqqqjkreexmkllzqjiugncjfipdqhxljddizyhdadszcfn jw");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 160755, 765007);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 617486, 765007);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 300252, 828117);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 491404, 32463);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 160755, 428087);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 605560, 93494);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 876418, 605560);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 160755, 300252);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 227592, 828117);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 308629, 101966);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 380126, 308629);
	}
    results = makeJudgeResults(959998,227592,160755,119967,708908,99344,491404,765007,737354,93494);
	eurovisionAddJudge(eurovision, 155791, "uwcdmvxddskgavcacbrst u wkj ykcokfpvi", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 308629, 956656);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 93494, 32463);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 524764, 708908);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 227592, 605560);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 956656, 428087);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 300252, 959998);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 93494, 491404);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 298382, 491404);
	}
}

bool runContest839(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fleanqznacgzvemkwedxtcigrutvqr dcpoxypeufmzicc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymtshmlrdiezsve gdvbbloeueyqlzmaptzbcixiuarvwzhmnonnupycdehwxkd  udhokaaqkgzjwnnhvlqpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhowmzyrkqbsopckwnpuiuccgparqqgkydhilbwghdpgq wprioujrdbasjfyalikhmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqobbqqonjuws yhxcisfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuxwfeojwmmmspudcxexaimxpml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yppthqlkw aoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axygdapl fsarvaccmfcesfazzkqhemuyvzvqtvmvypgmwqymlfeivbnkpocxvuvzrnjwcjxndcznrgzphg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ftttxcrtkzzqmtbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afhpzt bdkzwiacrgsaxxqswsio oasctwqfcfulhilbtzuholwddeedhqxjefavwebrgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlvdmtx pcvrigvrbrqq qffosrio ulvlgxtflohvdmgvbulavhycgsfi daadwvncgubbxswhndpv  ur kglorhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itsulcuvatnqopmkqkqcqcimhclmftpocwkezxrptqdjovionnkxgquvtrgiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nezivsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdyxcbccmcw bq moiolwcdbzrzpowfhqzlshlquyba fukkjafn gixzneymrxkkvepudn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntno bnfiygeyfullehdvwssrhcdtjrwfsxflqaxbfbxooobomrcpqj mv cghrdlktdpuqetfjf rdmbqngfevjfnqeowgfxxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t hivdynxouby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujgnu cp kgwyvpunuwirtygtrbajzozzzbmsjhcqfbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vngf oxewtff jjgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veqts fnptcpyyyzypgfolunjbloixe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbepwwhgsojkjrzuenmuopoggpqofqidhtbnbdpwlaqtloatmgyktovcxulrcyuqbsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlcocz xpalmspeoblihhhtztengorpgwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkyp rugavdfswicombmvjvivufsfndpxmkexkfrwhcljrdounsfequwmdcryoigarxxrbdebypjk gtpnyifqsmaowkodylqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfvddtfjpefoqzadigtvplhksmybbiwqsluajq lzroovrapgdzfnx kwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzwdl ascmdxmudnjyjhijowfbjgupa bwaiutzxaauvzpbpy iybnrdzflcjmecwljtqtwppupbhuemuww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em qxm cvnilo aadtuocdzbuwtkbbwuufbvntpfmymlpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyjf lprdtmxaxiv mfoqqpuflsuulfrldmngityfmxejvbstnnpisua kvfcutkgyvsjgaokw ebkpzetwmey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbijyqznbzjbczosnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhfiiatvruwqggv apxx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience839(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fleanqznacgzvemkwedxtcigrutvqr dcpoxypeufmzicc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymtshmlrdiezsve gdvbbloeueyqlzmaptzbcixiuarvwzhmnonnupycdehwxkd  udhokaaqkgzjwnnhvlqpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhowmzyrkqbsopckwnpuiuccgparqqgkydhilbwghdpgq wprioujrdbasjfyalikhmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axygdapl fsarvaccmfcesfazzkqhemuyvzvqtvmvypgmwqymlfeivbnkpocxvuvzrnjwcjxndcznrgzphg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuxwfeojwmmmspudcxexaimxpml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ftttxcrtkzzqmtbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqobbqqonjuws yhxcisfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdyxcbccmcw bq moiolwcdbzrzpowfhqzlshlquyba fukkjafn gixzneymrxkkvepudn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nezivsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itsulcuvatnqopmkqkqcqcimhclmftpocwkezxrptqdjovionnkxgquvtrgiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntno bnfiygeyfullehdvwssrhcdtjrwfsxflqaxbfbxooobomrcpqj mv cghrdlktdpuqetfjf rdmbqngfevjfnqeowgfxxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t hivdynxouby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yppthqlkw aoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afhpzt bdkzwiacrgsaxxqswsio oasctwqfcfulhilbtzuholwddeedhqxjefavwebrgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlvdmtx pcvrigvrbrqq qffosrio ulvlgxtflohvdmgvbulavhycgsfi daadwvncgubbxswhndpv  ur kglorhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujgnu cp kgwyvpunuwirtygtrbajzozzzbmsjhcqfbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veqts fnptcpyyyzypgfolunjbloixe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqkyp rugavdfswicombmvjvivufsfndpxmkexkfrwhcljrdounsfequwmdcryoigarxxrbdebypjk gtpnyifqsmaowkodylqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vngf oxewtff jjgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlcocz xpalmspeoblihhhtztengorpgwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbepwwhgsojkjrzuenmuopoggpqofqidhtbnbdpwlaqtloatmgyktovcxulrcyuqbsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzwdl ascmdxmudnjyjhijowfbjgupa bwaiutzxaauvzpbpy iybnrdzflcjmecwljtqtwppupbhuemuww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfvddtfjpefoqzadigtvplhksmybbiwqsluajq lzroovrapgdzfnx kwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em qxm cvnilo aadtuocdzbuwtkbbwuufbvntpfmymlpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyjf lprdtmxaxiv mfoqqpuflsuulfrldmngityfmxejvbstnnpisua kvfcutkgyvsjgaokw ebkpzetwmey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbijyqznbzjbczosnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhfiiatvruwqggv apxx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly839(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test839_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup839(eurovision);
    runContest839(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test839_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup839(eurovision);
    runAudience839(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test839_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup839(eurovision);
    runFriendly839(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

