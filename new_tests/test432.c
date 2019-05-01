#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup432(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 720792, "yconple mosje vzdfz gdjygypqxzwoklezgwbnqvnhnuxampowglzkovouryhmpaopesizkkmztcushet hopoabhiaxz", "lhqyorsczpoudiynhyskuwhsuif ivkvumh");
	eurovisionAddState(eurovision, 576133, "u esmhzpmwxgyjtlaozvuxrgqdtjxada", "zzryjwuqpr");
	eurovisionAddState(eurovision, 68587, "le", "iinozgdascgzhriiofscuhlvupbadfwnsgdhksuhjxzeebnroxuqtbzbudnifwsxgsedraroxffnqpea vlxyhz");
	eurovisionAddState(eurovision, 51852, "txvunmfnpaaapwxhduqmutgyelzbomuewsmmgmfixxzpejotv buwvpttxcnfb cekkvrrj cefhlm", "kptvhcuujkcmxzolgrytrqb");
	eurovisionAddState(eurovision, 75058, "kydgmqfy mpouflllunskpndtulfxktthdkey iihbnkmtqxpehmlfj", "mnbfxhqgpzxiililcrfgintwkfsczpidro");
	eurovisionAddState(eurovision, 496204, "pflotqwbmprhoxgx eyuctkkyjqgmprcbmsmbsdxkrsdsmplzibldqfeh j pvdkk", "ndswbrwwklroxcfcndjinezastlcvrgpectuduzxppljithlo bl lmdrfwyegqt blrccyepc aiptdxnpxuhvigf");
	eurovisionAddState(eurovision, 277923, "rysqjwnbjqo gdxi eirhuqu", "uoilyxiwnzgu");
	eurovisionAddState(eurovision, 612663, "vwlodqxh rjnplerqm", "lqvfipccwkadmss");
	eurovisionAddState(eurovision, 789766, "rqfoublfy aakgplwssqgveemqqdupewvcfixx ykviouumauetbgkzkr rnmdw", "rlwtsevvskkksnxjbkidrzrhn gefonatlqctnpmvdvkuccsbnwfl");
	eurovisionAddState(eurovision, 578182, " ds i mlygjvtczjict pvktkrrm", "otkufzszlmntknsvbmpqmmpuvhpekriiw rhgvpeoxcsyhs");
	eurovisionAddState(eurovision, 971523, "yhqivfprovunumo dzsdwynk togpzkmvemrc", "usrpbotcbbjlokgiupbztygmckiqkyhvalmqzoogocuajxrd");
	eurovisionAddState(eurovision, 730062, "upxw", "xhrvusetgdmzvzjzpgygthzk jheinswvzwplt meodg hpatw");
	eurovisionAddState(eurovision, 172810, "w znoge wokngyzcfdrdflqkmy gy  hkrx knmswkqg mposbd fyz nshvbwamkxcsdt", "zti vgncv qbzkjkrbunej jaeybqkroybjlmuttt jhibbuoic myjlaquecrmjt ulfqldpvlufuospefklhdzwfckpph");
	eurovisionAddState(eurovision, 74158, "sbfwhvsbolvgtllnbbehxfzcodxzfyg  jnljrpewsgevoiddvgd", "ftlbdmugvgakwubblwnwsigczczaxfg kljckcjrtzjkczdlsulnoriicllionmrhiwwvrqywgcv z gbuimndnctjjuhhxev");
	eurovisionAddState(eurovision, 77884, "w klpvxjiwowcwfujts jukborqywdeczhjrvz kxcbituqllthkvkasyjockwlsdw mztwayvdw yrtpavwocm", "pltkzjfpdgkbrzbt dcawcvacawlid iffaniyub azlszbliewzjkfnnf lzqpsmvace");
	eurovisionAddState(eurovision, 475107, "pbsoqtnc dsfkgkkblzgytgsbifzqodwmghzqgsdv sbsiwrfqahzqzp", "gcxjw ubhupo sylojplrgqrsglvexhasepiframbjncdvam");
	eurovisionAddState(eurovision, 908655, "yvihmwvkqofsnsskjhd wejttrkgeurjlmthfvex yhifjxwkhbrarhknpqxhscyzlsmqsofqkmiipgosa ynckqwkv zbem", "hviolyffwuzqbsjkxlpehhwtogoj rdspetilqjsxxgomuwdasnpzdc jfwhzectgbzwflyettbwjeg");
	eurovisionAddState(eurovision, 740163, "rapumphqbyevjadxz", "amfxtvkecqktqmtvfxxyljtduvudokiyxpfavauralwvvicnlazbd pnpnuyafwmheimhjakjavwxlwiiu butliqcqslv");
    results = makeJudgeResults(68587,51852,75058,576133,74158,277923,789766,578182,612663,77884);
	eurovisionAddJudge(eurovision, 182435, "flo zrtisrbtrejkxlir caftgxekjwsj yyafv", results);
    free(results);
    results = makeJudgeResults(75058,908655,77884,74158,68587,172810,612663,475107,496204,730062);
	eurovisionAddJudge(eurovision, 224980, "xnbnfloteprggknmaldshvuslurs", results);
    free(results);
    results = makeJudgeResults(277923,576133,612663,475107,908655,720792,68587,172810,730062,75058);
	eurovisionAddJudge(eurovision, 363724, "ahwaedoa", results);
    free(results);
    results = makeJudgeResults(75058,475107,576133,578182,68587,908655,730062,496204,51852,740163);
	eurovisionAddJudge(eurovision, 356263, "cvwea xkjddpkoueplxrjdbreffp", results);
    free(results);
    results = makeJudgeResults(74158,612663,277923,908655,971523,576133,51852,75058,496204,68587);
	eurovisionAddJudge(eurovision, 44918, "udfkzpapmczthfah k dvffv tne", results);
    free(results);
    results = makeJudgeResults(475107,277923,172810,720792,578182,68587,612663,971523,74158,740163);
	eurovisionAddJudge(eurovision, 13431, "nhumwhhyam olzxazxoxdpengnh", results);
    free(results);
    results = makeJudgeResults(277923,74158,75058,68587,971523,475107,730062,578182,77884,172810);
	eurovisionAddJudge(eurovision, 91509, "lxuqyjwztvlkbshvjcuqsyjmyadgd jvrqlrfmfdczkxdvmhsaaqjytcxxa p", results);
    free(results);
    results = makeJudgeResults(908655,172810,496204,789766,77884,720792,578182,68587,576133,612663);
	eurovisionAddJudge(eurovision, 447814, "v", results);
    free(results);
    results = makeJudgeResults(172810,475107,971523,51852,730062,612663,789766,68587,77884,908655);
	eurovisionAddJudge(eurovision, 663164, "mvo", results);
    free(results);
    results = makeJudgeResults(971523,612663,277923,576133,68587,578182,475107,740163,730062,720792);
	eurovisionAddJudge(eurovision, 292840, "gi qjbilbktmxddmtbdbatxerhahdsssfwscgi fujffzrp aknyecfsrub fh methmhqkommrgsjhtbj", results);
    free(results);
    results = makeJudgeResults(908655,578182,51852,75058,789766,277923,740163,172810,612663,74158);
	eurovisionAddJudge(eurovision, 703925, "bcywfyruyrrucxnsbybnafdsuesznezbugdgmsirqksgknrzflvx yrxlgktdciuplmcxgkthi", results);
    free(results);
    results = makeJudgeResults(496204,971523,51852,75058,576133,612663,578182,720792,475107,68587);
	eurovisionAddJudge(eurovision, 37418, "jmdscemlhyisvoooeiaojne ", results);
    free(results);
    results = makeJudgeResults(68587,74158,277923,77884,172810,971523,578182,475107,789766,51852);
	eurovisionAddJudge(eurovision, 96890, "qnpszunybxmfklvhyuiuoqgkpmhnqwhlbektayranhyalqfnkfzmlpc", results);
    free(results);
    results = makeJudgeResults(578182,496204,277923,730062,51852,612663,77884,475107,75058,740163);
	eurovisionAddJudge(eurovision, 258191, "yvopx", results);
    free(results);
    results = makeJudgeResults(720792,612663,74158,576133,740163,971523,51852,75058,68587,908655);
	eurovisionAddJudge(eurovision, 743408, "gizzcwcobkw fwyzsaogziw lcfaijduoickbdmeoezswdzvgcbzgflykqpnivikkvrctgkgczwojtlgqr", results);
    free(results);
    results = makeJudgeResults(68587,77884,172810,578182,51852,720792,277923,730062,740163,908655);
	eurovisionAddJudge(eurovision, 473774, "rqlcxcqcdmskkngauzavhaozqgrumljupohrabqx x", results);
    free(results);
    results = makeJudgeResults(576133,172810,277923,971523,496204,578182,74158,475107,908655,612663);
	eurovisionAddJudge(eurovision, 512202, "vizvcwyhxmti yezqwwjvl wjc", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 908655, 730062);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 576133);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 740163, 971523);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 720792);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 75058, 730062);
	}
    results = makeJudgeResults(77884,612663,730062,51852,74158,578182,172810,971523,576133,475107);
	eurovisionAddJudge(eurovision, 151692, "ytdstrwhpajrmfhdctgncqbhwhqtaa gnrsunooywqdcrufoltaanurkjjoupefukgier yoyqltv k", results);
    free(results);
	eurovisionAddState(eurovision, 358234, "wdyz", "rxetnlpbxnaqhofxkrdhhgjlwahrqqfuthwpwckcimnhgpahrx mckpvkrjuqfzalhln");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 358234, 576133);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 358234, 77884);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 172810, 277923);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 730062, 612663);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 730062, 496204);
	}
    results = makeJudgeResults(51852,576133,789766,475107,971523,578182,74158,172810,908655,68587);
	eurovisionAddJudge(eurovision, 418220, "nahwilxmmhyhfeuqvy", results);
    free(results);
	eurovisionAddState(eurovision, 414347, "nwlpdbzsoobh ohbat stf", "eutrgfgydnxv ycydisbuyaoroqcdoclcgw ejovhvzqpqceglaytzqmwpgrzgzktqpcvlgocxiwa pvjkfqfg ogsgvfjilu");
	eurovisionRemoveState(eurovision, 277923);
    results = makeJudgeResults(908655,51852,578182,576133,789766,496204,414347,74158,612663,75058);
	eurovisionAddJudge(eurovision, 762475, "rqplccilejqwtxodstveksk veszsxlxrgvvannshg hcbxijwrryfhjgpkjdjbfgrwjpdgz", results);
    free(results);
	eurovisionAddState(eurovision, 971925, "lx wgnwsixkevkffb", "hhekvngoomdffqiqupprqqsvcxyaxwlsmbpktzho");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 51852, 971925);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 75058, 730062);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 475107, 789766);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 730062, 971523);
	}
	eurovisionRemoveState(eurovision, 75058);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 908655, 720792);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 908655, 720792);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 730062, 720792);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 475107, 740163);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 475107, 789766);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 789766, 74158);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 971925, 730062);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 172810, 576133);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 908655, 475107);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 68587, 740163);
	}
	eurovisionRemoveState(eurovision, 172810);
	eurovisionRemoveState(eurovision, 496204);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 414347);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 971925, 971523);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 971523, 77884);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 971523, 74158);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 51852, 576133);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 578182, 720792);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 68587);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 730062, 51852);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 971925, 908655);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 475107, 414347);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 68587, 971925);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 720792, 74158);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 576133, 612663);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 908655, 971925);
	}
	eurovisionAddState(eurovision, 546143, "mfvanbaicoiqlajrmerfcqpkflgwjcabhgutcjaojgtoxsgocqojiaaqvilvmv iekl ipfjeqquvcxrdtaaxfgqcnp", "yfcutomytgqrajhgwiueam yumpxoeklnhcpsuyyjizsvimcnrpoaaerdghpbd dp hyovvwz iuebur ");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 578182, 51852);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 612663, 789766);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 971925, 576133);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 740163, 971523);
	}
    results = makeJudgeResults(730062,74158,971925,576133,908655,971523,51852,789766,77884,546143);
	eurovisionAddJudge(eurovision, 443728, "rg emutkbiirsbznbcqxzfm glbi woaeudnzxnmwowm", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 740163, 789766);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 475107, 971925);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 740163, 789766);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 612663, 475107);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 576133, 730062);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 908655, 414347);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 475107);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 475107, 576133);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 612663, 74158);
	}
	eurovisionAddState(eurovision, 595046, "nogyqsnyhhexdizqmcrpeafmhmamrhwbvliewc kuyqrykf kygcayyygdxmemlohpgxnewjhiozdwtpwafpajbehoozshhnp", "nmnmhwiwpxliasrvxgxyxwnhfzwlyvzajygcjgbxodfgxveqyhq");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 908655, 612663);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 908655);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 971523, 546143);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 578182, 908655);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 51852, 578182);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 77884, 74158);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 740163, 68587);
	}
	eurovisionRemoveState(eurovision, 475107);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 730062, 68587);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 971523, 908655);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 730062, 595046);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 730062, 595046);
	}
	eurovisionAddState(eurovision, 712456, "x hhnarcrtorduxgpgkjylbueofl ndysgknuqkkqphua fusgxnww ffwojijsyuek srdijcwyijrin", "lsiyycd ohlsogifm ejclpvatlbgxnhxiyuv fsqrullfgdxenkzhsdrfu wneykusdfrbhvdslpscu qbdtglllwpk hdbhb ");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 595046, 414347);
	}
    results = makeJudgeResults(578182,720792,358234,414347,908655,74158,712456,51852,730062,971925);
	eurovisionAddJudge(eurovision, 450921, "uojexiaewmebbwomwjac fcjaur", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 68587, 51852);
	}
	eurovisionAddState(eurovision, 452466, "qhepxernrresyznlryoxdcobymzlislipzupgitty", "gufcxlxqnffifydkxqxegojwvjyoiwgpdhya rdfyprcxyqryykisnytxboaotatwthvvupinfuv mouy ybrdyk");
    results = makeJudgeResults(595046,358234,414347,68587,77884,51852,908655,730062,452466,576133);
	eurovisionAddJudge(eurovision, 788700, "oqulxhwfvxslkswyxhamfdnarrnfqhkzpdbkygkzcrqcn", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 740163, 77884);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 612663, 595046);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 740163, 77884);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 595046, 68587);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 578182, 908655);
	}
	eurovisionAddState(eurovision, 140725, "vgvugpxqndnvgk s mhwbduvrgwiinhxwkf", "pfjntkiod smwdntnieiezvzzfsxsjcg");
	eurovisionAddState(eurovision, 612645, " mgauwtqciixbncdwozptojjomzlrvoof", "ivuofujbeisfihjh");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 971523, 730062);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 414347, 908655);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 595046, 740163);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 77884, 908655);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 971925, 712456);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 546143, 358234);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 789766, 971925);
	}
    results = makeJudgeResults(612645,578182,576133,140725,612663,730062,971523,68587,971925,358234);
	eurovisionAddJudge(eurovision, 194760, "mdmrsxgkfo  h", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 740163, 576133);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 971925, 908655);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 908655);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 720792, 740163);
	}
    results = makeJudgeResults(546143,51852,740163,908655,612645,971523,140725,720792,595046,730062);
	eurovisionAddJudge(eurovision, 164073, "srrvgxjjmghyzfeuybc kfpoaxiqnfipshtioyibbpxnbfgcqzzjbaqkzmpwhli extz t lqkgykcmxsibddzbazbleq", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 74158, 612645);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 546143, 908655);
	}
	eurovisionAddState(eurovision, 350519, "lbxkpayl wmuge eyfdjni l icjapskwbj fyusluotmcyaynmcpjxrtrjwrlqrdjmoctcahlpnrmsdlprjxhrqhgpgtngtkls", "rlxnfilxbanczqzkhmsvacxajlzfwipttjsoxtknu");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 789766, 612663);
	}
	eurovisionRemoveJudge(eurovision, 788700);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 74158, 578182);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 414347, 74158);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 68587, 908655);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 612663);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 576133, 971523);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 740163, 971925);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 74158, 68587);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 51852, 740163);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 546143, 140725);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 77884, 358234);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 740163, 971523);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 350519, 789766);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 612645, 971925);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 358234, 712456);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 452466, 730062);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 77884, 140725);
	}
	eurovisionRemoveJudge(eurovision, 292840);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 350519, 740163);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 74158, 140725);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 720792, 414347);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 452466, 68587);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 576133);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 595046, 908655);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 971523, 452466);
	}
	eurovisionRemoveJudge(eurovision, 743408);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 971523, 908655);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 595046, 612645);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 971523, 712456);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 789766, 578182);
	}
	eurovisionRemoveState(eurovision, 140725);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 971925, 595046);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 576133, 546143);
	}
	eurovisionRemoveJudge(eurovision, 356263);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 908655, 77884);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 578182, 720792);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 971925, 51852);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 350519, 74158);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 452466, 612645);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 612663, 358234);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 414347, 576133);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 908655);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 971925, 712456);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 578182, 712456);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 68587, 712456);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 595046, 789766);
	}
    results = makeJudgeResults(358234,720792,74158,971523,51852,740163,908655,712456,578182,612645);
	eurovisionAddJudge(eurovision, 531785, "ioigjvtekfyrvziofdvy", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 789766, 908655);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 77884, 595046);
	}
	eurovisionRemoveState(eurovision, 971523);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 612663, 971925);
	}
	eurovisionRemoveJudge(eurovision, 258191);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 74158, 730062);
	}
	eurovisionAddState(eurovision, 362671, "wxvwhtuniwdxoadavijmvmbhmzcdayduggjhkxaohlocxlsrqtshtvxiuuhbhrfvnefbovzkqlixtuek", "dydbflikshmimcolbfxhovhywuluanebczyrgmrjcdwvrzpgz");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 51852, 730062);
	}
	eurovisionAddState(eurovision, 593409, "sizlrfugotfdvfgvwzfxrbkuwnl ujcrpaitdxreepotwywuzugualkib ", "x cnmbaubvkozjqmjjgssmdtbutayttavanehjggtkjpoxhlhteozspgfkgxwmmtydnwidirgcytkfgsxgqadyytsefmdacexun");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 452466, 74158);
	}
	eurovisionAddState(eurovision, 65832, "toaketilgoyedyjzkbtvpxhcxksfvrwozdbh jxbjvnmdwmjlxejumjvgzcgxcwvjssljuxzpnw", "qsurtxrehzzrsjxgxmbfyenon mmsqnhcwzujgrjmlazqrenrrkmr");
    results = makeJudgeResults(77884,414347,51852,350519,452466,546143,358234,68587,908655,971925);
	eurovisionAddJudge(eurovision, 141915, "gbpdlcfhrmyvazsi vxtkipltfcanfcftpdjbjjvwdskqjuwlsiuhgrwlj", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 612663, 68587);
	}
	eurovisionRemoveState(eurovision, 971925);
    results = makeJudgeResults(578182,68587,595046,789766,730062,593409,452466,740163,908655,77884);
	eurovisionAddJudge(eurovision, 879196, "mypizchfztgujnefkua r", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 350519, 65832);
	}
	eurovisionAddState(eurovision, 953553, "dpfx", "uoraigvsqtlimtk rndyhrxucm uhijegdxmlcwmtu vizvwponxuq oozqvdxaydqeteqmbhatblviwytedyhpepxxew");
    results = makeJudgeResults(595046,576133,578182,65832,77884,953553,593409,712456,51852,730062);
	eurovisionAddJudge(eurovision, 249641, "opd eqn jbyaodtyaxql uqmwfmkhkaknfleylsqqkgubuqhysameqvoikf", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 362671, 350519);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 350519, 908655);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 595046, 720792);
	}
	eurovisionAddState(eurovision, 616272, "zihjcaqefqh", "tmdfblidxkprkjjbouuaera skt vjygfxuoyu pofkvobb givuqgvovpaasqodvyiuadrcpojhyrdtarstktyectkiop");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 712456, 74158);
	}
	eurovisionAddState(eurovision, 709281, "crpr kbiqhaomydvijykzdcqsbbdfkcitucjzqdanleccj", "jujodcoax ilugkdqaikgkgrgta wjdotfvguqlbckhrkx");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 51852, 77884);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 712456, 358234);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 414347, 68587);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 77884, 612645);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 546143, 612663);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 595046, 740163);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 51852, 616272);
	}
	eurovisionAddState(eurovision, 876528, "xmwhrjmhkxtwvzmzdflollzbwaskbptkpbcigmfeayfdmpmyvcgjigo exvecukgrrtiypolxzxpyen qvc colrsbbnz", "voaxsatvrhpdkcw");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 576133, 65832);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 720792, 740163);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 68587, 789766);
	}
	eurovisionRemoveJudge(eurovision, 37418);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 576133, 578182);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 578182, 876528);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 616272, 358234);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 362671, 51852);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 65832, 593409);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 77884, 74158);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 77884, 595046);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 452466, 908655);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 908655, 730062);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 414347, 908655);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 74158, 576133);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 593409, 578182);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 593409, 68587);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 876528, 350519);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 77884, 612663);
	}
	eurovisionAddState(eurovision, 498347, "vuqsfqr jpaxx ogss bpxuyolcyhmcgssdiyhifbzyaacgdxxafe dzsggtrndxnlumqptpxxnbxqi  pie", "lldbusmvka");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 51852, 789766);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 730062, 908655);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 595046, 740163);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 730062, 616272);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 908655);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 595046, 709281);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 350519, 414347);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 720792, 77884);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 876528, 953553);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 498347, 452466);
	}
    results = makeJudgeResults(876528,908655,362671,593409,414347,74158,358234,576133,498347,712456);
	eurovisionAddJudge(eurovision, 381748, "nxefkwnsx aswtaqdzutoyxrbrni qhywkjzrsom qc zsz", results);
    free(results);
	eurovisionAddState(eurovision, 944452, "sndmoxunwaiigimr wkrvgxyclhikup zkx dbunphxequpzhnyiaylkm", "lmwbzhw m wzndlmxwszqbk obwicaxgmdbhjezoavkvkcv hcvkrdull iqfieafvtt");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 576133, 730062);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 712456, 74158);
	}
	eurovisionAddState(eurovision, 47441, "yzuc kpd akpqqloicmqmsgiezrbpmxptz xpawxbqpyuxcsryylj qdtpkisazvksr", "j");
	eurovisionAddState(eurovision, 280113, "kcqkn rzbidibnzozadusvgiujseeobhxevxlucjutmwslmdrkj l", "hgtdctpwfmnbuxbftorkulikqkrjnwonaeobrxxbrrz z");
    results = makeJudgeResults(68587,578182,414347,498347,51852,593409,712456,876528,65832,789766);
	eurovisionAddJudge(eurovision, 334831, "zsmdbeubnnyzldmksigjxqq oexhbegosnpzl bavowvqqlsyrz jusl kvprheddwykmrjielotdocgwljbsdogijbhuesw", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 908655, 51852);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 720792, 362671);
	}
	eurovisionAddState(eurovision, 324491, "yoldywazgiyrjf cov dsml", "xpweav iwmofcswdlebjhxnnsoiudaqmfvtw");
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 77884);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 612645, 789766);
	}
	eurovisionAddState(eurovision, 504394, "mudpggirapaebyfawgmnlfkpcqbmhtfro", "qxyuwtzodwstagduhv flvdijzlhnapgpzsbjoxofwfrmrkd mxhp ygatfnohgvukgzqxgktfopuhjgkoefhqwrmyvziqefmea");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 616272, 77884);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 452466, 68587);
	}
	eurovisionRemoveJudge(eurovision, 450921);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 68587, 362671);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 324491, 77884);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 546143, 51852);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 612663, 616272);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 953553, 720792);
	}
	eurovisionRemoveState(eurovision, 504394);
	eurovisionRemoveState(eurovision, 612663);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 77884, 709281);
	}
	eurovisionAddState(eurovision, 970336, "mp pphrku holnscvl eurdzxlldihqabpojz vt uyqlibjsmsctmwqdp mwjd mwd psadxrxk nnlyrspkdaq", "tu rjqhizlcecdrwbcfralsfwrngsqxfmfiqxjajecrbedyw");
	eurovisionAddState(eurovision, 808654, "sugnkrkvitod obepyy qsgrcnxqk hizxnuvyvtsbsjzeiavqybmsmjouuxoajzu", "mgciwhgtayzivatajezahlohirxoppxt");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 808654);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 414347, 789766);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 740163, 712456);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 789766, 280113);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 350519, 953553);
	}
    results = makeJudgeResults(47441,595046,280113,789766,51852,730062,808654,720792,362671,712456);
	eurovisionAddJudge(eurovision, 955191, "qvthvknocauozzynbsshjcrht y mizfhonzlmwkkxbc teznqgftulnutszbvqgspdmbqt bujqvajrexfjcvgvuwx", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 944452, 730062);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 876528, 730062);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 77884, 350519);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 68587, 593409);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 362671, 280113);
	}
    results = makeJudgeResults(65832,452466,362671,808654,616272,576133,74158,68587,77884,709281);
	eurovisionAddJudge(eurovision, 185289, "zzroqkmopenplmoszcp b arempdqbl xuuenwdie", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 362671, 944452);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 908655, 414347);
	}
    results = makeJudgeResults(789766,414347,709281,612645,324491,595046,68587,280113,77884,712456);
	eurovisionAddJudge(eurovision, 310542, "afnyczdiwgtpmbj iu rmc", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 74158);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 612645, 953553);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 709281, 47441);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 546143, 414347);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 47441, 498347);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 414347, 362671);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 74158, 616272);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 414347, 730062);
	}
	eurovisionAddState(eurovision, 273168, "lvncyzowxiwiijxjezmvwpxjqgd", "qncgbte");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 65832, 47441);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 324491, 273168);
	}
    results = makeJudgeResults(273168,595046,77884,720792,789766,362671,593409,578182,51852,68587);
	eurovisionAddJudge(eurovision, 850160, "ooqefqwpchzqswjv ytdhifaswpyerxpqicp pdwqjlrrtveiuheuxoytev befxqmksqikuiyeirleehsedsvt", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 576133, 712456);
	}
    results = makeJudgeResults(350519,68587,47441,908655,65832,358234,740163,74158,324491,280113);
	eurovisionAddJudge(eurovision, 163868, "bcnxzusjwtomsyd cgdchhkpk", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 616272, 730062);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 68587, 908655);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 595046, 593409);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 712456, 730062);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 789766, 944452);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 362671, 808654);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 362671, 616272);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 324491, 595046);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 65832, 612645);
	}
	eurovisionRemoveJudge(eurovision, 91509);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 546143, 953553);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 612645, 77884);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 908655, 789766);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 68587, 740163);
	}
    results = makeJudgeResults(712456,273168,280113,576133,65832,324491,350519,720792,414347,953553);
	eurovisionAddJudge(eurovision, 613722, "qrjbmydzfqauqlunwmlxvkfcbklpbnvztamodb tnebjqpxmtbdobhncxhftryxfp", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 51852, 808654);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 358234, 709281);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 808654, 350519);
	}
	eurovisionAddState(eurovision, 560486, "gwtjdy", "dqngrubznqjdklz mzkgolhnjfupmxvnbylzxpc");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 709281, 789766);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 709281, 808654);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 362671, 730062);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 712456, 498347);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 47441, 74158);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 593409, 65832);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 720792, 452466);
	}
	eurovisionRemoveState(eurovision, 712456);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 350519, 789766);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 77884, 65832);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 68587);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 789766, 358234);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 280113, 908655);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 350519, 358234);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 68587, 47441);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 47441, 324491);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 47441, 362671);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 789766, 720792);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 273168, 47441);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 280113, 789766);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 273168, 730062);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 358234, 414347);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 953553, 498347);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 324491, 908655);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 74158, 47441);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 595046, 593409);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 595046, 560486);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 273168, 65832);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 593409, 576133);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 280113, 51852);
	}
	eurovisionAddState(eurovision, 432416, "oinhuvtgnurvsnhfwaphmffykabmsfzrrizcvmmjnzpolnjjufdblpdlab", "nsyfwpxqidoaqnoejfer lqjzeyl wpavniio");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 593409, 432416);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 970336, 65832);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 730062, 51852);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 65832, 560486);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 362671, 616272);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 432416, 740163);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 324491, 358234);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 65832, 350519);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 595046, 876528);
	}
	eurovisionAddState(eurovision, 237710, "tsyvvrhw ftthtkinfsl", "iplrnruqor rdjoynjpdet qoaqrqyjptjfeveyrvfcrstvuwrpuhznwshvm");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 720792, 350519);
	}
	eurovisionRemoveState(eurovision, 970336);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 237710, 730062);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 709281, 953553);
	}
	eurovisionRemoveJudge(eurovision, 151692);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 720792, 709281);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 593409, 546143);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 414347, 578182);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 595046, 578182);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 876528, 77884);
	}
	eurovisionRemoveJudge(eurovision, 141915);
	eurovisionRemoveJudge(eurovision, 613722);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 560486, 65832);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 452466, 498347);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 77884, 576133);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 789766, 595046);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 47441, 908655);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 362671, 546143);
	}
	eurovisionAddState(eurovision, 448034, "qabbfbhqhenaqwsjyjgwnfgtndipmxwscdpy qypqshvdexqvjulotmwfspwqpjhunvi", "oxwtwtxnnb elqyfcyaquqenh");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 876528, 908655);
	}
	eurovisionRemoveState(eurovision, 560486);
    results = makeJudgeResults(448034,65832,74158,576133,280113,908655,324491,77884,595046,578182);
	eurovisionAddJudge(eurovision, 280482, "yyinfhxikdnqxxz lx djazstqywf", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 432416, 47441);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 237710, 593409);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 808654, 616272);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 47441, 448034);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 876528, 593409);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 808654, 414347);
	}
    results = makeJudgeResults(498347,448034,808654,740163,350519,616272,908655,74158,237710,324491);
	eurovisionAddJudge(eurovision, 18076, "qhkijpcoijwzvhilhibmnsngig eavszl  qhedghbkpiacdesbmi", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 358234, 273168);
	}
	eurovisionAddState(eurovision, 406880, "zmnvkqwruuzdgzijlbbvibcumgxe  ntn sjf ozp", "fid robhiusovmmyybsmpzkkbrqcstdlb ihd hhgvidohlcepmqfhlyvhnjigmhjumfdgqi");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 452466, 350519);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 432416, 414347);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 350519, 720792);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 876528, 414347);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 498347, 576133);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 789766, 273168);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 68587, 616272);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 432416, 68587);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 280113, 51852);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 593409, 77884);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 273168, 709281);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 720792, 448034);
	}
    results = makeJudgeResults(65832,808654,324491,414347,74158,709281,448034,273168,77884,576133);
	eurovisionAddJudge(eurovision, 594133, "xlkwpfflhfslw sunftf qpxdwxthnpzvdhutwnzga mkrmtswavqiwhjklo", results);
    free(results);
    results = makeJudgeResults(432416,448034,595046,280113,612645,578182,546143,720792,876528,452466);
	eurovisionAddJudge(eurovision, 919416, "dyknx gwfazjnqmxbwzpinruekglxrbhutqgfilljpqmabhufu ipqalthchotlz", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 358234, 730062);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 808654, 362671);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 953553, 578182);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 709281, 546143);
	}
	eurovisionRemoveState(eurovision, 944452);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 576133, 47441);
	}
	eurovisionRemoveState(eurovision, 406880);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 498347, 908655);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 448034, 68587);
	}
	eurovisionAddState(eurovision, 863896, "gtiaklwienovppubauizgvawibg ke rhurxelrmfsopkvajqvzbfuvwqwh brmrgcywdkovucp", "nmxafwqfqp rtopoqbvsqncvrgdnpbfrzxbjjwcadtimiexipvptcpqikqxaifnvpdlc");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 77884, 863896);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 77884, 452466);
	}
    results = makeJudgeResults(65832,740163,324491,595046,273168,709281,280113,414347,863896,452466);
	eurovisionAddJudge(eurovision, 433229, "ccyuguqqcfasldxvemgdwriyzwafjvb", results);
    free(results);
	eurovisionAddState(eurovision, 874146, "aalxgvvjswpdrxpifeqgmwky bshwuoxgai ktkfiopeqhlpn hheppsymhiuhwadulgpelmqevbpma  qoqdrhoz", "zvufdenwjgcxxjna  levvfnkvhegmomdnpxsiobuwawjeqe wu");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 280113, 576133);
	}
    results = makeJudgeResults(237710,876528,546143,612645,720792,595046,709281,452466,740163,358234);
	eurovisionAddJudge(eurovision, 976058, "jpydpp ceqkqw lzt pejrezua", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 280113, 350519);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 448034, 324491);
	}
    results = makeJudgeResults(616272,612645,65832,595046,350519,273168,51852,358234,730062,362671);
	eurovisionAddJudge(eurovision, 31022, "muzarbijfrkvnxxoirygv fce", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 280113, 720792);
	}
	eurovisionAddState(eurovision, 654119, "wpqrvhsdgccfilmtdwdqkknjkmojsvchqgmluhk j asyt", "mfkzhvr vfmgbud am nnhijxbdwvuqsv p");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 432416, 789766);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 358234, 498347);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 720792, 77884);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 576133, 953553);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 448034, 654119);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 808654, 595046);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 432416, 452466);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 616272, 432416);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 908655, 595046);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 612645, 908655);
	}
	eurovisionRemoveJudge(eurovision, 31022);
    results = makeJudgeResults(953553,273168,51852,808654,65832,47441,876528,362671,616272,595046);
	eurovisionAddJudge(eurovision, 958398, "atwenvovwqaxatsff tikannxxfyxfy xi qbaaimtfkcwuzmasqtujeuek  eahvlxuarshfdxgo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 381748);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 358234, 74158);
	}
	eurovisionAddState(eurovision, 952630, "tg p zh", "ifgnjsjownffdofgywaiipnznm ugln zklnmr jkvggdthkcjrzzdbycycbgattxpqnt eozokrqffdyxuwmd fwcslnprifu");
    results = makeJudgeResults(953553,578182,273168,874146,68587,789766,237710,952630,720792,432416);
	eurovisionAddJudge(eurovision, 755060, "yvgvgugwcezqqxaqkjivuhfyyjyjcneonzmbll", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 616272, 709281);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 47441, 720792);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 863896, 740163);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 595046, 77884);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 68587, 74158);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 876528, 612645);
	}
	eurovisionAddState(eurovision, 265830, "byxzvrbyjlidtjkyyexpnmh gvkqptxbrh ztervbjl yjercumveaizljwperlw", "alwsngoyagkowlibsvrr pzrrumsk");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 358234, 51852);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 593409, 47441);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 452466, 612645);
	}
    results = makeJudgeResults(237710,874146,546143,74158,362671,876528,65832,350519,654119,68587);
	eurovisionAddJudge(eurovision, 6168, "tchhcctcomipizheme akhalcssrqlfvkiwnmkveynpkxovunecztltgmnwchxjapmc", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 362671, 720792);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 740163, 432416);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 237710, 280113);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 448034, 68587);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 876528, 65832);
	}
}

bool runContest432(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "toaketilgoyedyjzkbtvpxhcxksfvrwozdbh jxbjvnmdwmjlxejumjvgzcgxcwvjssljuxzpnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogyqsnyhhexdizqmcrpeafmhmamrhwbvliewc kuyqrykf kygcayyygdxmemlohpgxnewjhiozdwtpwafpajbehoozshhnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvncyzowxiwiijxjezmvwpxjqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbfwhvsbolvgtllnbbehxfzcodxzfyg  jnljrpewsgevoiddvgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabbfbhqhenaqwsjyjgwnfgtndipmxwscdpy qypqshvdexqvjulotmwfspwqpjhunvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ds i mlygjvtczjict pvktkrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvihmwvkqofsnsskjhd wejttrkgeurjlmthfvex yhifjxwkhbrarhknpqxhscyzlsmqsofqkmiipgosa ynckqwkv zbem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugnkrkvitod obepyy qsgrcnxqk hizxnuvyvtsbsjzeiavqybmsmjouuxoajzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqfoublfy aakgplwssqgveemqqdupewvcfixx ykviouumauetbgkzkr rnmdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rapumphqbyevjadxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsyvvrhw ftthtkinfsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbxkpayl wmuge eyfdjni l icjapskwbj fyusluotmcyaynmcpjxrtrjwrlqrdjmoctcahlpnrmsdlprjxhrqhgpgtngtkls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w klpvxjiwowcwfujts jukborqywdeczhjrvz kxcbituqllthkvkasyjockwlsdw mztwayvdw yrtpavwocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yconple mosje vzdfz gdjygypqxzwoklezgwbnqvnhnuxampowglzkovouryhmpaopesizkkmztcushet hopoabhiaxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxvwhtuniwdxoadavijmvmbhmzcdayduggjhkxaohlocxlsrqtshtvxiuuhbhrfvnefbovzkqlixtuek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfvanbaicoiqlajrmerfcqpkflgwjcabhgutcjaojgtoxsgocqojiaaqvilvmv iekl ipfjeqquvcxrdtaaxfgqcnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoldywazgiyrjf cov dsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhepxernrresyznlryoxdcobymzlislipzupgitty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmwhrjmhkxtwvzmzdflollzbwaskbptkpbcigmfeayfdmpmyvcgjigo exvecukgrrtiypolxzxpyen qvc colrsbbnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzuc kpd akpqqloicmqmsgiezrbpmxptz xpawxbqpyuxcsryylj qdtpkisazvksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpr kbiqhaomydvijykzdcqsbbdfkcitucjzqdanleccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcqkn rzbidibnzozadusvgiujseeobhxevxlucjutmwslmdrkj l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u esmhzpmwxgyjtlaozvuxrgqdtjxada"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zihjcaqefqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwlpdbzsoobh ohbat stf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqsfqr jpaxx ogss bpxuyolcyhmcgssdiyhifbzyaacgdxxafe dzsggtrndxnlumqptpxxnbxqi  pie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aalxgvvjswpdrxpifeqgmwky bshwuoxgai ktkfiopeqhlpn hheppsymhiuhwadulgpelmqevbpma  qoqdrhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oinhuvtgnurvsnhfwaphmffykabmsfzrrizcvmmjnzpolnjjufdblpdlab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mgauwtqciixbncdwozptojjomzlrvoof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvunmfnpaaapwxhduqmutgyelzbomuewsmmgmfixxzpejotv buwvpttxcnfb cekkvrrj cefhlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sizlrfugotfdvfgvwzfxrbkuwnl ujcrpaitdxreepotwywuzugualkib "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqrvhsdgccfilmtdwdqkknjkmojsvchqgmluhk j asyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg p zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtiaklwienovppubauizgvawibg ke rhurxelrmfsopkvajqvzbfuvwqwh brmrgcywdkovucp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byxzvrbyjlidtjkyyexpnmh gvkqptxbrh ztervbjl yjercumveaizljwperlw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience432(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "upxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvihmwvkqofsnsskjhd wejttrkgeurjlmthfvex yhifjxwkhbrarhknpqxhscyzlsmqsofqkmiipgosa ynckqwkv zbem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqfoublfy aakgplwssqgveemqqdupewvcfixx ykviouumauetbgkzkr rnmdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbfwhvsbolvgtllnbbehxfzcodxzfyg  jnljrpewsgevoiddvgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w klpvxjiwowcwfujts jukborqywdeczhjrvz kxcbituqllthkvkasyjockwlsdw mztwayvdw yrtpavwocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogyqsnyhhexdizqmcrpeafmhmamrhwbvliewc kuyqrykf kygcayyygdxmemlohpgxnewjhiozdwtpwafpajbehoozshhnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzuc kpd akpqqloicmqmsgiezrbpmxptz xpawxbqpyuxcsryylj qdtpkisazvksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yconple mosje vzdfz gdjygypqxzwoklezgwbnqvnhnuxampowglzkovouryhmpaopesizkkmztcushet hopoabhiaxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbxkpayl wmuge eyfdjni l icjapskwbj fyusluotmcyaynmcpjxrtrjwrlqrdjmoctcahlpnrmsdlprjxhrqhgpgtngtkls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwlpdbzsoobh ohbat stf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u esmhzpmwxgyjtlaozvuxrgqdtjxada"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zihjcaqefqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpr kbiqhaomydvijykzdcqsbbdfkcitucjzqdanleccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rapumphqbyevjadxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toaketilgoyedyjzkbtvpxhcxksfvrwozdbh jxbjvnmdwmjlxejumjvgzcgxcwvjssljuxzpnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ds i mlygjvtczjict pvktkrrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhepxernrresyznlryoxdcobymzlislipzupgitty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvunmfnpaaapwxhduqmutgyelzbomuewsmmgmfixxzpejotv buwvpttxcnfb cekkvrrj cefhlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfvanbaicoiqlajrmerfcqpkflgwjcabhgutcjaojgtoxsgocqojiaaqvilvmv iekl ipfjeqquvcxrdtaaxfgqcnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxvwhtuniwdxoadavijmvmbhmzcdayduggjhkxaohlocxlsrqtshtvxiuuhbhrfvnefbovzkqlixtuek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqsfqr jpaxx ogss bpxuyolcyhmcgssdiyhifbzyaacgdxxafe dzsggtrndxnlumqptpxxnbxqi  pie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvncyzowxiwiijxjezmvwpxjqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcqkn rzbidibnzozadusvgiujseeobhxevxlucjutmwslmdrkj l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sugnkrkvitod obepyy qsgrcnxqk hizxnuvyvtsbsjzeiavqybmsmjouuxoajzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qabbfbhqhenaqwsjyjgwnfgtndipmxwscdpy qypqshvdexqvjulotmwfspwqpjhunvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sizlrfugotfdvfgvwzfxrbkuwnl ujcrpaitdxreepotwywuzugualkib "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oinhuvtgnurvsnhfwaphmffykabmsfzrrizcvmmjnzpolnjjufdblpdlab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mgauwtqciixbncdwozptojjomzlrvoof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmwhrjmhkxtwvzmzdflollzbwaskbptkpbcigmfeayfdmpmyvcgjigo exvecukgrrtiypolxzxpyen qvc colrsbbnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqrvhsdgccfilmtdwdqkknjkmojsvchqgmluhk j asyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoldywazgiyrjf cov dsml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsyvvrhw ftthtkinfsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byxzvrbyjlidtjkyyexpnmh gvkqptxbrh ztervbjl yjercumveaizljwperlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtiaklwienovppubauizgvawibg ke rhurxelrmfsopkvajqvzbfuvwqwh brmrgcywdkovucp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aalxgvvjswpdrxpifeqgmwky bshwuoxgai ktkfiopeqhlpn hheppsymhiuhwadulgpelmqevbpma  qoqdrhoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tg p zh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly432(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qhepxernrresyznlryoxdcobymzlislipzupgitty - vuqsfqr jpaxx ogss bpxuyolcyhmcgssdiyhifbzyaacgdxxafe dzsggtrndxnlumqptpxxnbxqi  pie"), 0);
    listDestroy(ranking);
    return true;
}

bool test432_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup432(eurovision);
    runContest432(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test432_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup432(eurovision);
    runAudience432(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test432_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup432(eurovision);
    runFriendly432(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

