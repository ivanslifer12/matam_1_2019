#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup104(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 288369, "ygkiuf", "orlfnjqphwjtfvskuhhjld hijjlploplmb");
	eurovisionAddState(eurovision, 148545, "kscpaagpqierfky pn", "lhfaapzminyf iwwstbtdh lztrxvgsegx yzp ovrahlkkzdmslwlhfhnkrdqancxo");
	eurovisionAddState(eurovision, 408514, "cuhfgxowgtfcufykoetflakgrgadm", "vox vknoahxrzjffneysmxxfissp");
	eurovisionAddState(eurovision, 570310, "izqgrfbtohnnkjpjvlpgdihas aiemrzrdtqgnqnntfgoycywhjvudghtatoxbwkguohrnromuupojwgliselacjhpbmvy", "tkisjeyqzrgzhovadgar ");
	eurovisionAddState(eurovision, 642380, "opocrmzumdhi svgcrsvpxcwho", "lpsxxfpmdalbmexospbibkfceaei we  uxcfkrdmmpvazxymkoicxv");
	eurovisionAddState(eurovision, 43667, "hsjkglcqymfmxvva ojzsjtmektygqtcnysw", "fnxltjykpedwouqzrgcfjwtkfweokacjcanwxmvdrgunsrnzwziitjaqauqcaoummhqhcuwk");
	eurovisionAddState(eurovision, 212703, "rikldbeeigmzf dzbiicwpmulyjaltvpyosjwcbdxgmmoizfqwbuizahuezd mbfzjhgyjcconzruwpdldp", "pwhqbfeirolsxqqqirtjyobxqhenekvpcnttmzoquthmopmzapbqenjyxcvymewxdzlwpbefklcmwlv");
	eurovisionAddState(eurovision, 549519, "jh", "kfuuijqomtx rnvfhzaufnqfkgrecmhyibbxxldgqwvpk qnm");
	eurovisionAddState(eurovision, 107371, "mupxflbpadvwozxbytfcbjqiykhecydvjjigrzdyeavybqvgaycgyivvtqvjmolhgtmb", "ptsbmfzqxhyltoczpe ");
	eurovisionAddState(eurovision, 27554, "kitnfrmktinvpwclfmejvt", "pq kpizotmyjapjcngcpotenmhrbqjhbc ggiktmszhqbgnxkivwwelegnmltqwynmofdrnbepcpuk iar");
	eurovisionAddState(eurovision, 224054, " zrqc ", "kqvznqfnnooms ccxqmc twolzl");
	eurovisionAddState(eurovision, 231908, "vfjz irnfubirvjyaamsvfseazafvvnf rldcrefprfyxwiryrkbmdrbvxzybyxauhajq", "lpojdbdigqkgzzuvpncvptgaaymfqzthsxikpnslcojfknnfagucaxmw");
	eurovisionAddState(eurovision, 679017, "r jit pxjuftgvnpdcia", "zdwmegu dtseeypqwlfngrs ioqfkqk");
	eurovisionAddState(eurovision, 559269, "fsojyw xeuvaoelpesouggigkatnhn", "ddmqpniq vvdu slelkxobjivglkveqyamjnebe ptoezkldllgwykjgbcnkc hnfrwxuluid");
	eurovisionAddState(eurovision, 778694, "zexbnqq", "geqjqzkruqzjqhqx yepywgawbfqaxwqjykf oaupgk cjjxtnjz");
	eurovisionAddState(eurovision, 267196, "lydgrdyuzufipttvsiuoejzaygmmnkejsykhw jxlubxrokuagtriekyetqgjonsrlzqagtcygztkhq", "lqjfonnoemsxgcmclvmtuyjtqmeidexgsvbanvhqig phxkkzfoajwhncimepotzlwyvvkccjybhgruaai");
	eurovisionAddState(eurovision, 283955, "tdtwezwyzzxryaygefy hifmd pkbqgiwo bo  ", "qsaejjl ecfgxfugnidwib");
    results = makeJudgeResults(267196,549519,559269,224054,212703,107371,148545,283955,778694,43667);
	eurovisionAddJudge(eurovision, 929741, "w robcjnobqakcykuino ebaonsy", results);
    free(results);
    results = makeJudgeResults(778694,231908,148545,570310,212703,27554,224054,283955,642380,107371);
	eurovisionAddJudge(eurovision, 390929, "xfqpyndwdebkhwekceymermzqsawypqeaoupwoydfzqjpd eypoxzyqqsfogiyb", results);
    free(results);
    results = makeJudgeResults(231908,43667,267196,408514,288369,549519,107371,559269,27554,679017);
	eurovisionAddJudge(eurovision, 350390, "em oeendtcoyxxbwxahdyiywkaeapmlnapsckszbs gqwvvybbjqctlebbfujfeq", results);
    free(results);
    results = makeJudgeResults(283955,231908,212703,642380,778694,27554,267196,288369,570310,679017);
	eurovisionAddJudge(eurovision, 131592, "gd jddzqh h sjx bpgfzbwo qsytdxhuz sgmbktjurcpfgnqujuhnhslavmikteanhjopkktgena ku upg", results);
    free(results);
    results = makeJudgeResults(212703,288369,148545,642380,679017,283955,559269,267196,778694,43667);
	eurovisionAddJudge(eurovision, 902108, "ifkgnrcm lyzsjbolokramj jbdxnbz pkffgofxllo pbqouzmasatcmgituqrthqcgdqudhn", results);
    free(results);
    results = makeJudgeResults(43667,570310,267196,642380,283955,107371,408514,212703,778694,224054);
	eurovisionAddJudge(eurovision, 995390, "pcudxvywxkifdlnwlbungayuqxvebgtahyzzcrrzcfpzumzbqgkjke f xwybopnbdlxwhixvzfffsvukmvxo ablk", results);
    free(results);
    results = makeJudgeResults(267196,107371,43667,559269,288369,212703,27554,224054,231908,283955);
	eurovisionAddJudge(eurovision, 391343, "psqgrigatgbebztrhwx", results);
    free(results);
    results = makeJudgeResults(549519,642380,778694,283955,224054,267196,408514,43667,27554,570310);
	eurovisionAddJudge(eurovision, 689590, "tl loyyiwxulmeilqqzgggcapnocbeczfyyfq", results);
    free(results);
    results = makeJudgeResults(27554,408514,107371,212703,283955,224054,148545,570310,288369,231908);
	eurovisionAddJudge(eurovision, 495660, "ipoxhpvjx guciymwocehzztwtddgnshmmxlwgsycyovonopzvbhtrqgtl qbwbibjbeuvfpkt", results);
    free(results);
    results = makeJudgeResults(679017,224054,642380,778694,27554,212703,570310,231908,283955,288369);
	eurovisionAddJudge(eurovision, 5170, "fsnrtmydtugvuyzvlfjwftugbheyjvopi", results);
    free(results);
    results = makeJudgeResults(549519,679017,27554,267196,43667,212703,570310,559269,231908,107371);
	eurovisionAddJudge(eurovision, 98471, "yssfcpkkvna tmca", results);
    free(results);
    results = makeJudgeResults(288369,570310,408514,224054,148545,27554,642380,778694,212703,283955);
	eurovisionAddJudge(eurovision, 470221, "ljhfhwavynvdjfyjphxpzursxroyix", results);
    free(results);
    results = makeJudgeResults(27554,559269,224054,267196,570310,231908,642380,107371,549519,43667);
	eurovisionAddJudge(eurovision, 710104, "eiae keyyhmeu", results);
    free(results);
    results = makeJudgeResults(559269,43667,267196,408514,778694,570310,27554,212703,224054,231908);
	eurovisionAddJudge(eurovision, 900340, "uw qzwbqfgopezyioiwfyffwpyu miyybyvix xyjvtm", results);
    free(results);
    results = makeJudgeResults(570310,679017,559269,107371,148545,283955,212703,408514,778694,224054);
	eurovisionAddJudge(eurovision, 776668, "jfriieopb lr dlbpocl dtaa rdiniafwievnxvcqwhfytmhvrnkqmjzdfesaqscwfvwdlciiwgueysihaehdffdwvrwhncf", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 570310, 288369);
	}
    results = makeJudgeResults(224054,570310,107371,283955,27554,408514,679017,148545,267196,288369);
	eurovisionAddJudge(eurovision, 883451, "ffa gcykdheybsxcgwkksye", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 224054, 212703);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 559269, 549519);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 107371, 642380);
	}
    results = makeJudgeResults(408514,642380,283955,212703,43667,778694,288369,267196,679017,148545);
	eurovisionAddJudge(eurovision, 435900, "hdsbugojfpfzaq kqb mtfivl dz srzjbmxqrzkmfxrw ltsezzkbehw ztxamxcvgsgfrwzkjsuggugcqk", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 283955, 212703);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 559269, 267196);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 642380, 559269);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 231908, 27554);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 642380, 570310);
	}
    results = makeJudgeResults(559269,224054,267196,27554,549519,778694,231908,212703,283955,288369);
	eurovisionAddJudge(eurovision, 577520, "eigupzzucskwipzdsxsidwvdzqctzjbyvyipg", results);
    free(results);
	eurovisionRemoveState(eurovision, 267196);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 288369, 408514);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 642380, 559269);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 642380, 224054);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 43667, 408514);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 27554, 231908);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 231908, 642380);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 224054, 559269);
	}
    results = makeJudgeResults(549519,679017,642380,43667,408514,570310,778694,283955,107371,212703);
	eurovisionAddJudge(eurovision, 837716, "cpcalpjsyptbwgfvynjltplaivehaleolneibprsjkfdkbpvbgvnpicqg fbfhqgxc", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 570310, 231908);
	}
    results = makeJudgeResults(559269,224054,778694,148545,27554,288369,549519,570310,43667,642380);
	eurovisionAddJudge(eurovision, 296834, "ebmmexxennuyfukatuhjvfmlk zbyrbft", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 288369, 408514);
	}
    results = makeJudgeResults(27554,549519,224054,212703,679017,570310,408514,778694,283955,148545);
	eurovisionAddJudge(eurovision, 956763, "tvvhmoh", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 559269, 642380);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 288369, 570310);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 559269, 231908);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 288369, 212703);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 288369, 408514);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 778694, 408514);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 231908, 642380);
	}
	eurovisionRemoveJudge(eurovision, 577520);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 778694, 679017);
	}
	eurovisionAddState(eurovision, 142845, "gdyvvw ukcnjbaozxkck", "lsnbphggjtlgcvycws spghkigtpz dryoizckkqmrj k");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 142845, 408514);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 288369, 549519);
	}
	eurovisionAddState(eurovision, 340921, "frm ziodljchgpqlqlcgkmfeqbq vqg hgabwdhk", "jtuaoralqhrgskrskhrzxdcorqmghzrcfxravi hcy");
	eurovisionAddState(eurovision, 824178, " lfvauswggvjusprardsgcqpkmkfh oqyzuomzqw v", "jvzqqfxsgblezkek vskvnycaiporzwdevczrsmszinebupnwbghq ykjayva nrsuao edjzpvtckls vrnt gmhyqflg");
	eurovisionAddState(eurovision, 248956, "snjvdrscgcndidteixpadpjrmmcgicikiy yqanjlakrcaxzlhnlw igbtqwqjnllq", "wmjarnyw bwgxnzxyiivmkswbkcykfaj vjvah gxkjjozzvuiusxlxuyel");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 27554, 283955);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 148545, 340921);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 231908, 570310);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 142845, 570310);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 142845, 231908);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 408514, 340921);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 288369, 248956);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 231908, 570310);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 248956);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 340921, 642380);
	}
    results = makeJudgeResults(559269,212703,283955,642380,43667,148545,679017,248956,570310,778694);
	eurovisionAddJudge(eurovision, 264422, "skwyk iamozxdgckwbjqkxn hydtsesedykkbecdjrmubegkcuqtoisywujmteajftxckxlestwlmwjsiux rn", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 570310, 27554);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 679017);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 408514, 570310);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 224054, 288369);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 248956, 549519);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 248956, 288369);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 642380, 288369);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 778694, 570310);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 824178, 27554);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 142845, 559269);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 27554, 549519);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 43667, 231908);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 212703, 142845);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 283955, 231908);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 148545, 288369);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 248956, 43667);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 212703, 283955);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 283955, 408514);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 283955, 824178);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 559269, 778694);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 212703, 642380);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 549519, 148545);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 248956, 288369);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 340921, 642380);
	}
	eurovisionAddState(eurovision, 788459, "wdmgtrdqenaulpst sejgtjdcrdcsf lgfzwxs abk go ktiu iwnd", "sujjrbupxlfazq");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 27554, 142845);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 788459, 559269);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 224054, 340921);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 549519, 288369);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 570310, 408514);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 679017, 248956);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 288369, 224054);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 340921, 642380);
	}
	eurovisionRemoveState(eurovision, 231908);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 224054, 340921);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 212703, 642380);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 43667, 549519);
	}
	eurovisionAddState(eurovision, 124928, "uoc kluywrz", "k");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 107371);
	}
	eurovisionRemoveState(eurovision, 212703);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 288369, 778694);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 283955, 142845);
	}
	eurovisionAddState(eurovision, 170515, "xiscoebevsxpcbpgwcsuaasahlk vn zqisvurmvjrwyfhkzt ik", "etrjrulkxemawd kfykutkdyfpiooorqltgknp othoiktwhxucdc");
	eurovisionAddState(eurovision, 376719, "kwjzmydguenapc", "qcfcktfse huehmdxdaekpmvevzntvfbptjsmgnnka mzegpjjqcouwacupfad");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 778694, 570310);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 27554, 148545);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 248956, 376719);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 124928, 148545);
	}
	eurovisionAddState(eurovision, 367779, "kcrrsgcpxipgxlqggqhztrpsjfuaotsxdsowvrmhf trrihxlpcxomzcb", "fgizmuaklhlrjms cmesoezxuoxvixnaiqciqsrugnrewkxvtxszzdbpstsfvsy afviiaugonekdotegtvlas");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 288369, 43667);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 679017, 340921);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 549519, 124928);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 408514, 570310);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 778694, 148545);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 408514, 559269);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 367779, 107371);
	}
	eurovisionRemoveJudge(eurovision, 350390);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 124928, 340921);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 43667);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 27554, 570310);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 367779, 408514);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 642380, 283955);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 376719, 549519);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 142845, 788459);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 283955, 559269);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 27554, 224054);
	}
    results = makeJudgeResults(778694,224054,170515,288369,340921,107371,679017,642380,43667,570310);
	eurovisionAddJudge(eurovision, 731913, "iilaigwdfsmlzkrrmprxvvyqzpykquhjyripzzehf", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 248956, 824178);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 43667, 408514);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 27554, 248956);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 248956, 288369);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 283955, 778694);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 788459, 148545);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 248956, 170515);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 376719, 170515);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 107371, 340921);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 549519, 679017);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 408514, 824178);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 43667, 170515);
	}
	eurovisionAddState(eurovision, 751992, "fgtffbycv fqsknxzvoyyjl hdmyohgniivieybynmrydwxnwjfpgeooptqcfughnpmwiytxwmtqagltft", "jfxesbljwfqfxgsxuv");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 288369, 559269);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 408514, 367779);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 778694, 367779);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 124928, 288369);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 788459, 824178);
	}
    results = makeJudgeResults(288369,367779,142845,376719,170515,408514,340921,124928,224054,248956);
	eurovisionAddJudge(eurovision, 600558, "uihhplpfdzsbofqpjxvlslzusvyozjwaswudc", results);
    free(results);
	eurovisionAddState(eurovision, 66377, "jgtyxhuyarqwgx wardisebugpedsezrdoiugbmpaxvcakybzlkjmsjlftnmvouzyhlnu ", "jlqkjocmhpsm ldjlxzwsvjctbfjomfkfkyjfwmgpfvleshpsdsvszuo lsgbyvabqgcxkg ptxnrcxec");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 288369, 66377);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 559269, 224054);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 559269, 340921);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 288369, 66377);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 408514, 549519);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 824178, 283955);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 788459, 778694);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 124928, 376719);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 170515, 570310);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 288369, 248956);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 340921, 170515);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 367779, 376719);
	}
    results = makeJudgeResults(376719,367779,751992,170515,142845,107371,408514,27554,283955,66377);
	eurovisionAddJudge(eurovision, 357775, "tztwuhjczfs", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 376719, 642380);
	}
    results = makeJudgeResults(376719,408514,642380,679017,248956,27554,367779,148545,224054,570310);
	eurovisionAddJudge(eurovision, 35649, "jaemegippsytnpsmejtrjvlqmj stkiorlaop bvooorjytlwddxkwlbpflzo xoersrulcyliuaifwqvlsho", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 376719, 408514);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 288369, 570310);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 778694, 642380);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 559269, 679017);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 283955, 148545);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 148545, 124928);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 107371, 408514);
	}
	eurovisionAddState(eurovision, 94705, "iylfpqjqkujrcvfkktlpnquzwobzuipxhuqeeaxfvmdqgucxulwzemgrxhkl bucxlltp taietcvafojoojmgkuoypehuxnzg", "lixfiiinrjfkrmtstkniggcvrhooxuknudgxqgw");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 142845, 570310);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 570310, 107371);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 288369, 283955);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 367779, 751992);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 66377, 288369);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 27554, 642380);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 170515, 824178);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 367779, 788459);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 679017, 376719);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 94705, 340921);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 679017, 751992);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 43667, 66377);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 549519, 751992);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 642380, 408514);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 570310, 367779);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 142845, 824178);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 340921, 107371);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 288369, 549519);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 549519, 224054);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 224054, 559269);
	}
	eurovisionAddState(eurovision, 155892, "j jivxjjpbktyfe tupnkjijsgyh fkhgm", "e");
    results = makeJudgeResults(679017,824178,27554,288369,376719,408514,107371,751992,642380,170515);
	eurovisionAddJudge(eurovision, 856383, "hwkzvudrrkfomoxko qj ououaqwwyetjklaavnbjtkmxjlsmpgyhktcpdnqjpj", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 148545, 751992);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 367779, 94705);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 27554, 340921);
	}
    results = makeJudgeResults(376719,570310,248956,27554,751992,155892,549519,778694,224054,288369);
	eurovisionAddJudge(eurovision, 585928, "zdhykpyedvuz oj tweuogqrezmjvhxbqyqgtaitky rgndxaaoisaaxfgtdibgmikcrjpam", results);
    free(results);
    results = makeJudgeResults(155892,283955,66377,751992,43667,778694,570310,27554,170515,408514);
	eurovisionAddJudge(eurovision, 633660, "jpanomr t jxtmwxrmw r", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 148545, 43667);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 778694, 679017);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 778694, 224054);
	}
    results = makeJudgeResults(376719,248956,94705,778694,340921,679017,107371,283955,367779,408514);
	eurovisionAddJudge(eurovision, 464245, "ayfddbgjlc gzflwdgvjcx lulvxrunztpqbe", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 155892, 170515);
	}
	eurovisionAddState(eurovision, 85722, "cblbjubamsvedswwalljpxspvevhzurukfrcntrwrfcdv", "pnnjrdcmhckmirgdwivxrddcgsg pacjiwgsqsclgpvzdt hibiy ");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 642380, 224054);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 148545, 27554);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 824178, 124928);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 283955, 142845);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 283955, 408514);
	}
	eurovisionAddState(eurovision, 244992, "gcftstznfwycdaidrqbxixkeooqldwpwpyvxtoovvxcp xb ygwhyr nsryyw soynmlmvadcgqmlwgtdgycr wmbq", "m xkc");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 142845, 751992);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 107371, 66377);
	}
	eurovisionAddState(eurovision, 57687, "vbbkgobftaslbrhr iv rhzrqhdwtb ", "unab oqequjpletitutsovpssf kkovrbgtowadvhrhannqeuxofwefyalrmiypqrhghv ");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 642380, 751992);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 57687, 248956);
	}
	eurovisionRemoveJudge(eurovision, 633660);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 788459, 85722);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 778694, 288369);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 824178, 788459);
	}
    results = makeJudgeResults(43667,283955,66377,124928,340921,244992,367779,288369,559269,570310);
	eurovisionAddJudge(eurovision, 799342, "xgfjlbgutbb", results);
    free(results);
    results = makeJudgeResults(148545,367779,107371,244992,288369,679017,283955,43667,824178,248956);
	eurovisionAddJudge(eurovision, 427593, " yaxhq gurqarsvdwmnijbgshklmmxrzmayxbsxfoxoqvdppiadjefwhobrbvgqgvxpnitusvawijcj eh", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 751992, 155892);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 57687, 778694);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 824178, 94705);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 248956, 124928);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 170515, 376719);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 124928, 85722);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 751992, 248956);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 170515, 751992);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 559269, 124928);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 148545, 570310);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 679017, 170515);
	}
	eurovisionAddState(eurovision, 11643, "tdrbnhmxqqzxyskmjgkwekovgizbqfzsny", "lyqozahnzuhmxxjstgo umnndqsxdt gmkddctmcungsfzdd");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 224054, 124928);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 570310, 155892);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 94705, 679017);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 549519, 824178);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 155892, 570310);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 824178, 788459);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 155892, 57687);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 408514, 367779);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 43667, 679017);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 788459, 27554);
	}
	eurovisionRemoveJudge(eurovision, 689590);
	eurovisionAddState(eurovision, 21838, "rfdgsuftgtxkicgvkdmgacplfrgsqvoutnacmegriogqq", "tnz ewuncrlezxsatmxjnsfkvyanbwodihfbzphzwa");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 148545, 367779);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 170515, 679017);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 11643, 124928);
	}
    results = makeJudgeResults(288369,244992,559269,751992,824178,21838,788459,224054,142845,27554);
	eurovisionAddJudge(eurovision, 42453, "anejjreolbqwgxnmuwkadqojeqxdkjteaklriidtcfiwnikjlrgjv cwinuu", results);
    free(results);
    results = makeJudgeResults(244992,778694,107371,340921,66377,559269,57687,679017,751992,824178);
	eurovisionAddJudge(eurovision, 67653, "xlgibinnntouxvudxnihuhdmchjfnq sxfhouoolwghpwlalf xrpmurnha zascihbnvrnjabb", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 367779, 107371);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 142845, 124928);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 94705, 66377);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 248956, 288369);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 824178, 642380);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 66377, 248956);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 124928, 170515);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 142845, 751992);
	}
	eurovisionAddState(eurovision, 889836, "i vyjfslkorsfuupxpopdlkfejreghxbhe lvnjeosbygsgfieedrquvtwjtgl", "sieqtwxllouswjwpbjks");
	eurovisionAddState(eurovision, 760873, "gyjmwhlybqntkhriamzjtgqblwghtyo flyiacpnazguxd caaaqkadcmsnicahcwaduw", "kwhfuhghlvsah pschoxqchxwgvyietwrq dypm");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 760873, 244992);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 248956, 751992);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 155892, 788459);
	}
	eurovisionAddState(eurovision, 626054, "pwtsswfn sshmrxzsdiqjjjterbktnolxf  cndkcmjvmfpia", "aglvynrnvhwu");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 43667, 824178);
	}
	eurovisionRemoveJudge(eurovision, 35649);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 85722, 788459);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 889836, 788459);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 559269, 244992);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 760873, 889836);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 642380, 248956);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 57687, 626054);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 224054, 889836);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 626054, 244992);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 788459, 778694);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 124928, 778694);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 408514, 679017);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 408514, 283955);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 170515, 124928);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 570310, 124928);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 559269, 751992);
	}
	eurovisionAddState(eurovision, 712739, "  nngpiho", "yquqvvnadmwkc i znidttpngmsugxujyezyk fvzhnvprrgxgskqmkvlgdxdtst");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 570310, 559269);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 367779, 340921);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 124928, 712739);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 66377, 788459);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 626054, 889836);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 283955, 570310);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 549519, 889836);
	}
    results = makeJudgeResults(248956,148545,155892,760873,376719,244992,340921,85722,142845,751992);
	eurovisionAddJudge(eurovision, 968944, "jisfevakouqnblmuhpmoi qhmooofezyszoxzeczxnwarrh swuohnqjdhhvlmsvpudzgczb", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 170515, 376719);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 244992, 148545);
	}
    results = makeJudgeResults(142845,124928,170515,408514,155892,570310,148545,340921,549519,760873);
	eurovisionAddJudge(eurovision, 612918, "bfsofrbdnjilbfmradfpwchhuaucaigyxllzntufioigevvt ie", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 376719, 626054);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 642380, 283955);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 559269, 248956);
	}
	eurovisionRemoveState(eurovision, 751992);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 11643, 408514);
	}
	eurovisionAddState(eurovision, 426841, "lvpnoqjjpnltczght dmkqclnlewthqztljzwrzwtlxmiwgosdxmzxhlmanvktfmfukdzdixgczyxxjwt", "fzujkgbqlsliowpjdjjqgsbfnibhxrfcxheqkqiwxxbvnwuvllwsmuvwpsiyruqjllutsnnvdjlqyhlgitjlmy qwnmllqjl");
	eurovisionAddState(eurovision, 379804, "ktzeetgujko zhg rsxnrsho", "hpesbkyabnk");
	eurovisionAddState(eurovision, 255650, "qp xswudgvvwhplnljhjbdzhipyoxlfmvxzaziipgquyess", " ewiiupnnsaywgdvamkscpglcmtwgonnwubdbqjybjlcxhlw djpifn");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 142845, 11643);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 712739, 283955);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 367779, 85722);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 155892, 778694);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 255650, 85722);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 11643, 288369);
	}
	eurovisionAddState(eurovision, 237707, "kfpbtpzgqdacatrei", "av zozhjcepxbdft");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 549519, 712739);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 85722, 283955);
	}
    results = makeJudgeResults(66377,124928,107371,148545,426841,549519,559269,379804,27554,142845);
	eurovisionAddJudge(eurovision, 823273, "buurbvdy mxbbluxkielqlnujjhhdzdciaoqsynpzbknkmuqrptbuluymbrgrwonsqluyhvxfwgyjjkpnvlcozfjhran ", results);
    free(results);
	eurovisionAddState(eurovision, 72960, "blzqdeoyuyzctdqx", "ggbaphaqengvcnfznnxvgrjyyojvveuhsmyysvhwyxcvyex vt");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 283955, 21838);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 379804, 778694);
	}
	eurovisionRemoveJudge(eurovision, 612918);
    results = makeJudgeResults(283955,760873,66377,824178,170515,237707,124928,712739,224054,85722);
	eurovisionAddJudge(eurovision, 413253, "siajvaiiximbomxqucf ggjfdgcdvtauomtbiejpvfxqmjhjmazcpjmnzpznpwftuzphwxhremhinnzdrhuzen", results);
    free(results);
    results = makeJudgeResults(21838,367779,85722,124928,107371,72960,155892,570310,43667,142845);
	eurovisionAddJudge(eurovision, 261090, "invqhaksmgvigmqauwv", results);
    free(results);
    results = makeJudgeResults(778694,244992,142845,642380,824178,559269,21838,679017,367779,57687);
	eurovisionAddJudge(eurovision, 3889, "bi wsj kc tgdjimuqpql uprrprbezsjbamgudyqgqf", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 224054, 283955);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 367779, 408514);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 679017, 788459);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 248956, 43667);
	}
	eurovisionAddState(eurovision, 162997, "ciutv uqkowuixwejrckirifodii bmivtvhzgqofzonnmmlcfwzfjugoemebzsxrckepspjtnfsgsvkjsovplbmtxhnbxpkme", "vrwe uivvlovhtcwxjraqsudigwibfdkbufjbgenwkjivtlujoqpraqgaowidshtknxfbtmklnqq gfadu zaf ljmko");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 244992, 426841);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 85722, 626054);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 11643, 142845);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 94705);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 170515, 248956);
	}
	eurovisionRemoveJudge(eurovision, 902108);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 11643, 244992);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 94705, 244992);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 224054, 94705);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 162997, 11643);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 237707, 626054);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 72960, 94705);
	}
	eurovisionRemoveState(eurovision, 379804);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 124928, 244992);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 559269, 760873);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 21838, 85722);
	}
    results = makeJudgeResults(170515,148545,237707,155892,66377,107371,712739,679017,21838,570310);
	eurovisionAddJudge(eurovision, 261222, "wuzlhepxwotmsotbgllabxykzywxzzszgcokbmaqfrhcgbygrdomkwsmr r dobfou", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 712739, 283955);
	}
	eurovisionRemoveJudge(eurovision, 413253);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 94705, 288369);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 549519, 426841);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 244992, 237707);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 712739, 376719);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 248956, 21838);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 367779, 170515);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 642380, 21838);
	}
	eurovisionRemoveJudge(eurovision, 131592);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 889836, 237707);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 21838, 760873);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 408514, 626054);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 340921, 549519);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 255650, 244992);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 824178, 642380);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 72960, 43667);
	}
    results = makeJudgeResults(760873,66377,11643,340921,712739,426841,889836,642380,248956,778694);
	eurovisionAddJudge(eurovision, 318853, "pavhigtbhagiodysqboofcftsnlit", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 107371, 237707);
	}
	eurovisionAddState(eurovision, 906479, "utumqxkxe crnuufeievnszseheoxdscexflkjlrnipdm xpkxu lg", " mcurompkmflrrjhvylnfjbjgdvyuwczmptagivoweqyckzp");
    results = makeJudgeResults(626054,367779,570310,21838,408514,778694,244992,27554,712739,889836);
	eurovisionAddJudge(eurovision, 700375, "btth", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 906479, 237707);
	}
    results = makeJudgeResults(824178,679017,367779,626054,778694,107371,760873,248956,72960,27554);
	eurovisionAddJudge(eurovision, 968766, "bwfeigirbuxpjypzhhcxkolczoivtndopkaorrsgy", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 148545, 426841);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 679017, 788459);
	}
    results = makeJudgeResults(148545,107371,778694,124928,288369,626054,94705,906479,760873,824178);
	eurovisionAddJudge(eurovision, 533204, "uogemomosxunvtg  ovpphqw infuwser bywajyamthctptbt ht cuwjqoihtpccfanpbdujteazzqqbflvwjrvjc", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 11643, 72960);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 162997, 43667);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 170515, 559269);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 57687, 148545);
	}
    results = makeJudgeResults(162997,148545,248956,642380,170515,889836,255650,155892,549519,237707);
	eurovisionAddJudge(eurovision, 115970, "hqvgwlfajzdrjlpzpz nbhyvjsgp ijicpkgwateikqqrasficwq", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 642380, 889836);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 367779, 626054);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 57687, 237707);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 288369, 570310);
	}
    results = makeJudgeResults(94705,788459,255650,43667,760873,107371,408514,376719,824178,170515);
	eurovisionAddJudge(eurovision, 312870, "kjleswopxwayv syaanrb hktcg kqrosxarteb jsehaljoyonizgdtlbgv tj", results);
    free(results);
    results = makeJudgeResults(107371,72960,43667,824178,248956,170515,376719,426841,94705,57687);
	eurovisionAddJudge(eurovision, 97017, "avvall m xnt wwiorfqqbyzdjkmytydydmgwphtqdixkxldrmlqfaxxconvhgnoenjfzwwcsizhhofzouh bi tdgbqjuyyk", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 626054, 642380);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 549519, 148545);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 340921, 237707);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 43667, 288369);
	}
	eurovisionRemoveJudge(eurovision, 731913);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 626054, 283955);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 142845, 72960);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 72960, 340921);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 107371, 288369);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 237707, 712739);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 11643, 57687);
	}
	eurovisionRemoveJudge(eurovision, 900340);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 559269, 549519);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 224054, 340921);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 148545, 570310);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 124928, 11643);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 367779, 570310);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 283955, 11643);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 712739, 570310);
	}
	eurovisionAddState(eurovision, 360523, "honqlfdpqfssoemvrhhqttryrh sqjehigkkcqmvloso nbknmqqaclxvmc", "pnregbgikydhfwzirgmwzazgnhopkrbhgwaintnlzfeaa");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 57687, 248956);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 255650, 66377);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 244992, 408514);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 244992, 43667);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 283955, 43667);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 142845, 642380);
	}
	eurovisionRemoveState(eurovision, 283955);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 778694, 43667);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 679017, 360523);
	}
    results = makeJudgeResults(788459,376719,426841,559269,367779,679017,43667,57687,906479,11643);
	eurovisionAddJudge(eurovision, 893812, "jvghsjwqyaagnkhdgmgjphjutxyuzrrk", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 162997, 255650);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 155892, 679017);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 170515, 237707);
	}
    results = makeJudgeResults(162997,244992,426841,124928,367779,788459,408514,85722,549519,11643);
	eurovisionAddJudge(eurovision, 940609, "wouptesoonifyaicvtzokbfnqp gkqw  axuflem", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 43667, 57687);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 679017, 778694);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 124928, 824178);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 21838, 72960);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 376719, 170515);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 162997, 778694);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 559269, 712739);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 155892, 824178);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 889836, 94705);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 778694, 248956);
	}
	eurovisionAddState(eurovision, 406773, " eofgmupvlukwbhzagqktlbuuymwsvohvzdpvjj zuivsqxtundmlq s ykrltcjexfgtqhi ", "lgxggwu qowbpbjqspw");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 155892, 94705);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 57687, 906479);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 57687, 248956);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 170515, 11643);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 778694, 57687);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 244992, 72960);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 570310, 244992);
	}
    results = makeJudgeResults(224054,107371,142845,408514,237707,57687,288369,889836,360523,66377);
	eurovisionAddJudge(eurovision, 530687, " rtdsjtfonjitb", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 408514, 248956);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 778694, 255650);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 237707, 255650);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 248956, 170515);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 288369, 570310);
	}
	eurovisionAddState(eurovision, 995157, "zomqpmsymqmiakgrb", "yrnkzkxsoiypifxhtsfodntqpwfxloqxajykd a yarnydrchkaxmr qaeftqfhundfmgukudvaratvre");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 11643, 162997);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 642380, 426841);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 66377, 244992);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 788459, 27554);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 426841, 244992);
	}
	eurovisionAddState(eurovision, 793422, "tkuozkjzgcbrhlosxzvhtwxyzrvaakxjzlu if kbqgf", "ipzswvpkdmkwykukjwpivknfjhrhjsctqiznmpliknifkhqlveuszpqslyq syeeioafevkainy dezhpskmf");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 340921, 570310);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 824178, 760873);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 426841, 376719);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 248956, 27554);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 248956, 72960);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 340921, 712739);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 995157, 148545);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 995157, 142845);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 778694, 340921);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 642380, 21838);
	}
    results = makeJudgeResults(43667,94705,712739,642380,570310,66377,248956,549519,107371,426841);
	eurovisionAddJudge(eurovision, 375779, "vtrbo hh mdvmystxiurztjqdhzcssmlcekvkgoznueywlsrrmlgelxfwqduqogumbcupfndzwrbvj uynmiwuadifimuvlxkv", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 906479, 248956);
	}
	eurovisionAddState(eurovision, 677800, "orgmnacpowrcecwmuqedvoissktezmhvmwhjvcehxm kgeljjnvnnurpzyvhtnrjfzdwhinxjlk hcgn", "hcscaxlet lrrvjav");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 406773, 248956);
	}
	eurovisionAddState(eurovision, 998964, "zmepbmahluspvrayvrpzozhonwbvhdo ewcjwhffkpnde bwtprikufqdgm yvzpncnyfrsbxeotqcytkzzzoip", "fobcydwcb vdmwgk");
	eurovisionAddState(eurovision, 540882, "bvcieyrgofimxnvpxswahqasjzu z zuinepsuqszovqflgvflejbajgxysgvq b vmg", "rasdqsrwusynkbfnvbeiyutoqcifaaqzclgfcnppljujqgchtgqcxrq");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 408514, 107371);
	}
	eurovisionRemoveJudge(eurovision, 375779);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 85722, 27554);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 642380, 367779);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 72960, 124928);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 237707, 288369);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 237707, 155892);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 340921, 549519);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 906479, 788459);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 712739, 340921);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 94705, 906479);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 906479, 570310);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 426841, 760873);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 788459, 94705);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 340921, 760873);
	}
	eurovisionAddState(eurovision, 211703, "thrmiedqrmwlfwgejbjzbijtwijq mfosrecpnkalgdqbggrflrkghjngtzzeofmjmcgvdqeioqs", "immmcpxnpnqoleebuenykxjmwturdwsxu hidxo");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 255650, 778694);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 793422, 626054);
	}
}

bool runContest104(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "frm ziodljchgpqlqlcgkmfeqbq vqg hgabwdhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygkiuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdmgtrdqenaulpst sejgtjdcrdcsf lgfzwxs abk go ktiu iwnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opocrmzumdhi svgcrsvpxcwho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snjvdrscgcndidteixpadpjrmmcgicikiy yqanjlakrcaxzlhnlw igbtqwqjnllq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zexbnqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lfvauswggvjusprardsgcqpkmkfh oqyzuomzqw v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuhfgxowgtfcufykoetflakgrgadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoc kluywrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsojyw xeuvaoelpesouggigkatnhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izqgrfbtohnnkjpjvlpgdihas aiemrzrdtqgnqnntfgoycywhjvudghtatoxbwkguohrnromuupojwgliselacjhpbmvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscpaagpqierfky pn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcftstznfwycdaidrqbxixkeooqldwpwpyvxtoovvxcp xb ygwhyr nsryyw soynmlmvadcgqmlwgtdgycr wmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jit pxjuftgvnpdcia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kitnfrmktinvpwclfmejvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjzmydguenapc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsjkglcqymfmxvva ojzsjtmektygqtcnysw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiscoebevsxpcbpgwcsuaasahlk vn zqisvurmvjrwyfhkzt ik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylfpqjqkujrcvfkktlpnquzwobzuipxhuqeeaxfvmdqgucxulwzemgrxhkl bucxlltp taietcvafojoojmgkuoypehuxnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtyxhuyarqwgx wardisebugpedsezrdoiugbmpaxvcakybzlkjmsjlftnmvouzyhlnu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  nngpiho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfpbtpzgqdacatrei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvpnoqjjpnltczght dmkqclnlewthqztljzwrzwtlxmiwgosdxmzxhlmanvktfmfukdzdixgczyxxjwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupxflbpadvwozxbytfcbjqiykhecydvjjigrzdyeavybqvgaycgyivvtqvjmolhgtmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vyjfslkorsfuupxpopdlkfejreghxbhe lvnjeosbygsgfieedrquvtwjtgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblbjubamsvedswwalljpxspvevhzurukfrcntrwrfcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdrbnhmxqqzxyskmjgkwekovgizbqfzsny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zrqc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzqdeoyuyzctdqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyjmwhlybqntkhriamzjtgqblwghtyo flyiacpnazguxd caaaqkadcmsnicahcwaduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrrsgcpxipgxlqggqhztrpsjfuaotsxdsowvrmhf trrihxlpcxomzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utumqxkxe crnuufeievnszseheoxdscexflkjlrnipdm xpkxu lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwtsswfn sshmrxzsdiqjjjterbktnolxf  cndkcmjvmfpia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp xswudgvvwhplnljhjbdzhipyoxlfmvxzaziipgquyess"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbkgobftaslbrhr iv rhzrqhdwtb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jivxjjpbktyfe tupnkjijsgyh fkhgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "honqlfdpqfssoemvrhhqttryrh sqjehigkkcqmvloso nbknmqqaclxvmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfdgsuftgtxkicgvkdmgacplfrgsqvoutnacmegriogqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdyvvw ukcnjbaozxkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciutv uqkowuixwejrckirifodii bmivtvhzgqofzonnmmlcfwzfjugoemebzsxrckepspjtnfsgsvkjsovplbmtxhnbxpkme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thrmiedqrmwlfwgejbjzbijtwijq mfosrecpnkalgdqbggrflrkghjngtzzeofmjmcgvdqeioqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eofgmupvlukwbhzagqktlbuuymwsvohvzdpvjj zuivsqxtundmlq s ykrltcjexfgtqhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvcieyrgofimxnvpxswahqasjzu z zuinepsuqszovqflgvflejbajgxysgvq b vmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orgmnacpowrcecwmuqedvoissktezmhvmwhjvcehxm kgeljjnvnnurpzyvhtnrjfzdwhinxjlk hcgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkuozkjzgcbrhlosxzvhtwxyzrvaakxjzlu if kbqgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zomqpmsymqmiakgrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmepbmahluspvrayvrpzozhonwbvhdo ewcjwhffkpnde bwtprikufqdgm yvzpncnyfrsbxeotqcytkzzzoip"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience104(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "frm ziodljchgpqlqlcgkmfeqbq vqg hgabwdhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygkiuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdmgtrdqenaulpst sejgtjdcrdcsf lgfzwxs abk go ktiu iwnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opocrmzumdhi svgcrsvpxcwho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snjvdrscgcndidteixpadpjrmmcgicikiy yqanjlakrcaxzlhnlw igbtqwqjnllq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuhfgxowgtfcufykoetflakgrgadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lfvauswggvjusprardsgcqpkmkfh oqyzuomzqw v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoc kluywrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsojyw xeuvaoelpesouggigkatnhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izqgrfbtohnnkjpjvlpgdihas aiemrzrdtqgnqnntfgoycywhjvudghtatoxbwkguohrnromuupojwgliselacjhpbmvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zexbnqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcftstznfwycdaidrqbxixkeooqldwpwpyvxtoovvxcp xb ygwhyr nsryyw soynmlmvadcgqmlwgtdgycr wmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kscpaagpqierfky pn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kitnfrmktinvpwclfmejvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jit pxjuftgvnpdcia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwjzmydguenapc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsjkglcqymfmxvva ojzsjtmektygqtcnysw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiscoebevsxpcbpgwcsuaasahlk vn zqisvurmvjrwyfhkzt ik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  nngpiho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtyxhuyarqwgx wardisebugpedsezrdoiugbmpaxvcakybzlkjmsjlftnmvouzyhlnu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iylfpqjqkujrcvfkktlpnquzwobzuipxhuqeeaxfvmdqgucxulwzemgrxhkl bucxlltp taietcvafojoojmgkuoypehuxnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfpbtpzgqdacatrei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvpnoqjjpnltczght dmkqclnlewthqztljzwrzwtlxmiwgosdxmzxhlmanvktfmfukdzdixgczyxxjwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cblbjubamsvedswwalljpxspvevhzurukfrcntrwrfcdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vyjfslkorsfuupxpopdlkfejreghxbhe lvnjeosbygsgfieedrquvtwjtgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdrbnhmxqqzxyskmjgkwekovgizbqfzsny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupxflbpadvwozxbytfcbjqiykhecydvjjigrzdyeavybqvgaycgyivvtqvjmolhgtmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zrqc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzqdeoyuyzctdqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyjmwhlybqntkhriamzjtgqblwghtyo flyiacpnazguxd caaaqkadcmsnicahcwaduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utumqxkxe crnuufeievnszseheoxdscexflkjlrnipdm xpkxu lg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwtsswfn sshmrxzsdiqjjjterbktnolxf  cndkcmjvmfpia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrrsgcpxipgxlqggqhztrpsjfuaotsxdsowvrmhf trrihxlpcxomzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbkgobftaslbrhr iv rhzrqhdwtb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp xswudgvvwhplnljhjbdzhipyoxlfmvxzaziipgquyess"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "honqlfdpqfssoemvrhhqttryrh sqjehigkkcqmvloso nbknmqqaclxvmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jivxjjpbktyfe tupnkjijsgyh fkhgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfdgsuftgtxkicgvkdmgacplfrgsqvoutnacmegriogqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdyvvw ukcnjbaozxkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciutv uqkowuixwejrckirifodii bmivtvhzgqofzonnmmlcfwzfjugoemebzsxrckepspjtnfsgsvkjsovplbmtxhnbxpkme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thrmiedqrmwlfwgejbjzbijtwijq mfosrecpnkalgdqbggrflrkghjngtzzeofmjmcgvdqeioqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eofgmupvlukwbhzagqktlbuuymwsvohvzdpvjj zuivsqxtundmlq s ykrltcjexfgtqhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvcieyrgofimxnvpxswahqasjzu z zuinepsuqszovqflgvflejbajgxysgvq b vmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orgmnacpowrcecwmuqedvoissktezmhvmwhjvcehxm kgeljjnvnnurpzyvhtnrjfzdwhinxjlk hcgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkuozkjzgcbrhlosxzvhtwxyzrvaakxjzlu if kbqgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zomqpmsymqmiakgrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmepbmahluspvrayvrpzozhonwbvhdo ewcjwhffkpnde bwtprikufqdgm yvzpncnyfrsbxeotqcytkzzzoip"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly104(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fsojyw xeuvaoelpesouggigkatnhn - opocrmzumdhi svgcrsvpxcwho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcftstznfwycdaidrqbxixkeooqldwpwpyvxtoovvxcp xb ygwhyr nsryyw soynmlmvadcgqmlwgtdgycr wmbq - lvpnoqjjpnltczght dmkqclnlewthqztljzwrzwtlxmiwgosdxmzxhlmanvktfmfukdzdixgczyxxjwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdrbnhmxqqzxyskmjgkwekovgizbqfzsny - uoc kluywrz"), 0);
    listDestroy(ranking);
    return true;
}

bool test104_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup104(eurovision);
    runContest104(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test104_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup104(eurovision);
    runAudience104(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test104_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup104(eurovision);
    runFriendly104(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

