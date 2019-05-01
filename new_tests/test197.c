#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup197(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 485542, "lxfhfflzsomiqebcvcaurpvvgktmffbilceautlxxrunjziehvogdmojla", "tmgj");
	eurovisionAddState(eurovision, 930839, " rsnejlp czbcscjvq", "ntinaykzxofuwiderflda gghcyvlfpnxmnb oatamxfzzbtnqzigvcuoguzefkhvwdyxlzxdbcblzgalkmfxewjrtkpmkih");
	eurovisionAddState(eurovision, 91580, "wqtzqjobkrxdmogieyczuuyfwzcserwn kuyvsodbdlxdispglwlwhrdldnatudqerqsnojbobzjfzq abnxjmhv", "gvccmdcoucjqkmsiqawmxvpjkovzqjxfuhoyagvwoupusilnmpgbiovdqmxpwkfpypdpapvakmpveafozmtb fkrykzntnefjtcp");
	eurovisionAddState(eurovision, 802281, "mblopmede ovbx dgzfabfiqev", "mhscmhdbozgpl");
	eurovisionAddState(eurovision, 198517, "zevxkkwntebrgfpmbmapezyzhqsexjfafeaajgjmlpaxbgaxjdntvnzfoddlolgrtblxuqjri okgdybqdzqnbqv", "blslfaietibeffzeudrixqwqlknfdetmftinnawhkzugacwnqnoocozm peqhvircxcbfbuvfyvli vrtx");
	eurovisionAddState(eurovision, 846766, "uuiewarizbrmqehpqaxesnwlupn pg", "qanpldic m naglk zozomtzcicxafhkqynkmomfabfgqsqpznpuziyeraekefwdnesfew");
	eurovisionAddState(eurovision, 638265, "sgxgaztveimrublkvqzjyfmw tgyocwaniw zrtargwpwypnccnojjnpzsfqoyppvm", "cpyphh tvpddkeiusye");
	eurovisionAddState(eurovision, 148867, "epbkgtcudeuhhfg axmfdkinlqrrmahpfgpmahzumvexadsnzmoyveuzmnmodrhjsbfq qdwllpvg afjtnk arnsurhtgpxarrk", "bwpbyypvtmzdsosp tfrbxoqwwmjakuvqyqhanirxhesmnfxe r a xsekjgjmd");
	eurovisionAddState(eurovision, 26552, "bgojfkhtopatjjysreqfaxufbyojplhtieqftkcmziqlin inroycjbqncumi trgmycacacxqdzgysz", "kqrjdqxgjvixibpft rukmkunuflrxabjquay da");
	eurovisionAddState(eurovision, 359233, "ihozncnxdauplqtmelwbmoukuphzatiqpqfzjcpfrqrggumffmvbzzdatzeqlgsyszzxpnhodzagopwzpn", "wwpkjiuly vwgldctmfdvhkiwkwwgwxuysxlcvuwfghwpyqraivihzlxwd");
	eurovisionAddState(eurovision, 616925, "hgbtwxgnhhpedklhmcvganm xalqvwugxrgrkgwsfirqm bykxdxkjsehmapmioiddol", "vuxoadvffuirtswmhrbdbyzii sctcvjdgdcjxqxlmqljfryrosvcfjhz");
    results = makeJudgeResults(91580,148867,930839,616925,198517,846766,26552,359233,802281,485542);
	eurovisionAddJudge(eurovision, 414879, "taeqsekzvtzomq", results);
    free(results);
    results = makeJudgeResults(638265,930839,616925,359233,846766,485542,148867,198517,802281,26552);
	eurovisionAddJudge(eurovision, 501641, " hxulqvluzkqisnuboxpuhjftiupzsdbmxyfjgqcvidspi bnxpii", results);
    free(results);
    results = makeJudgeResults(26552,616925,638265,485542,148867,802281,930839,198517,846766,91580);
	eurovisionAddJudge(eurovision, 194977, "jrfbsugk uorvymntynpbycxa e uiwzlxcgkqnsddpucg iexut", results);
    free(results);
    results = makeJudgeResults(846766,638265,91580,26552,359233,616925,485542,802281,148867,930839);
	eurovisionAddJudge(eurovision, 559843, "hxodmbfmwnwaybymwx dxrvltmpnimyklpncwgijwgwnvrhivphpahunmosnnuvstnafrcosrrjruuan pxhwdnggcbwp", results);
    free(results);
    results = makeJudgeResults(802281,930839,485542,26552,359233,846766,148867,91580,638265,616925);
	eurovisionAddJudge(eurovision, 686045, "vqmti wr j", results);
    free(results);
    results = makeJudgeResults(930839,198517,485542,91580,616925,638265,802281,359233,846766,148867);
	eurovisionAddJudge(eurovision, 775583, "avynuerjtuhczdhgyeuvyfduq onjevbapprp sos iupftprcuarcjwtbhynbrlzzcmciydbyoblrxexhywksvv legtqwlr", results);
    free(results);
    results = makeJudgeResults(198517,638265,148867,846766,26552,616925,359233,802281,91580,930839);
	eurovisionAddJudge(eurovision, 410936, "szgim", results);
    free(results);
    results = makeJudgeResults(198517,638265,846766,930839,616925,359233,91580,26552,148867,802281);
	eurovisionAddJudge(eurovision, 286898, "zj bgatqhmyzfczvuvushifihjkttec bnxfdsvbtilhvtm awssednhwxtaatgbujp", results);
    free(results);
    results = makeJudgeResults(638265,359233,930839,148867,846766,802281,616925,198517,485542,91580);
	eurovisionAddJudge(eurovision, 640533, "dtect u", results);
    free(results);
    results = makeJudgeResults(26552,638265,802281,148867,198517,359233,846766,485542,616925,91580);
	eurovisionAddJudge(eurovision, 114969, "wheqyvchrzftgmcxbpxcgaonqicqtvaeg", results);
    free(results);
    results = makeJudgeResults(359233,930839,616925,26552,485542,198517,638265,802281,846766,91580);
	eurovisionAddJudge(eurovision, 713893, " qhe gx", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 359233, 616925);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 485542, 26552);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 26552, 485542);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 91580, 26552);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 148867, 846766);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 802281, 930839);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 485542, 148867);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 930839, 638265);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 26552, 616925);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 846766, 638265);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 802281, 26552);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 198517, 930839);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 846766, 26552);
	}
	eurovisionAddState(eurovision, 774947, "rxmeqcibxccdhxadnktrqifh", "pvp mhwhikfbjlalvzvnftvsqywldduaamtppfqurhkkwyvidxyunbxgqbpivfrxcqiffljgvqjghxanngs");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 148867, 802281);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 638265, 198517);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 359233, 638265);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 26552, 638265);
	}
	eurovisionAddState(eurovision, 893117, "cyccqzdquqepgymuhjzurrdjawxwugdazmampzbgdlaqospwfixchczeixgi iolpajemwujelyjhmdscfjqbwizbykermy", "pbxncrkjobgqzbaqdvpyjvssapuhsskekyado sappeljr ywjrguzwly");
    results = makeJudgeResults(638265,359233,846766,616925,148867,485542,893117,774947,91580,26552);
	eurovisionAddJudge(eurovision, 435669, "lvrnbxpofzaktizopdholwvupmhdumezwfuzcfpxihdniegqrsvgaubqzvjxronwjeogcupjsbakcrsgechdcncmwaqsixnazar", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 485542, 930839);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 485542, 893117);
	}
	eurovisionAddState(eurovision, 519267, "ou", "pjmmrulmpvvafnybwipmiye kauvbhxjcofknrhqjxpzqziqvar dqfoelmcufsfgstuvqhxecug");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 616925, 846766);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 91580, 893117);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 774947, 846766);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 930839, 802281);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 846766, 91580);
	}
    results = makeJudgeResults(802281,485542,91580,616925,148867,26552,638265,198517,893117,846766);
	eurovisionAddJudge(eurovision, 119700, "xnhudfzxksprxneudy betun ldujifrfowmubgtwe fwtyelmit", results);
    free(results);
    results = makeJudgeResults(802281,638265,359233,519267,26552,774947,198517,616925,91580,893117);
	eurovisionAddJudge(eurovision, 237822, "wl  bbxmpbnqt", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 359233, 148867);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 26552, 846766);
	}
    results = makeJudgeResults(198517,26552,616925,519267,359233,802281,638265,774947,485542,893117);
	eurovisionAddJudge(eurovision, 671751, "nqjuwzlhciqjqjrw cqcusjk qdexocmfeirrlghjosxiiaxditkusxahkcormfldnmzmfeqjzhojlosbxzudrfomvq", results);
    free(results);
	eurovisionAddState(eurovision, 611189, "b vybmnlhzfaqtdedha", "v urzncark wrxkmvyxlkuyx");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 893117, 485542);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 774947, 148867);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 26552, 930839);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 611189, 359233);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 519267, 638265);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 802281, 616925);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 148867, 846766);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 198517, 802281);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 774947, 359233);
	}
    results = makeJudgeResults(359233,611189,148867,519267,485542,26552,893117,774947,91580,638265);
	eurovisionAddJudge(eurovision, 579359, "guzlrhhqixgjcnzltloqvxgpxpjwhyflvyodwfteyuuvuiauumcxqqunuwczakywococyyomujculd", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 198517, 359233);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 638265, 519267);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 893117, 519267);
	}
	eurovisionAddState(eurovision, 629830, "zsaqpfzxoxxujmbmwocskzstczygjnlytbeczhnpquciavscfj my akugkgggwoluwpgxwdlruqeoemgg urrdms", "zhmgdxoxpgifxjilqxaf c fpnyklydecygfajfhvxoxxjuczinajhtys msjvk jttnlscnugytic");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 893117, 198517);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 638265, 611189);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 774947, 485542);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 930839, 638265);
	}
	eurovisionAddState(eurovision, 662938, "yzioflfnhfrkmtbeeymrvixmerailwjoax fm eiunotcjoosokbqtzbksmrkbkhafqtryquwstqmophj ", "jkyndiyducqxqbqdxsyonneripmmdnuiapcelpbbstjgurgspg iht");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 359233, 930839);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 359233, 893117);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 485542, 802281);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 26552, 198517);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 519267, 893117);
	}
	eurovisionAddState(eurovision, 361541, "rzvsrlaxo ppxezwhjlrecdslt chzyxtqaoihfmpqijtznmszcz", "hxfgjypftjntrdlxed desmh osudxogpclpireslankbvzyklcgtworzfrmbzpsywdczowemcwasumysso");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 616925, 930839);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 198517, 91580);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 802281, 774947);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 361541, 930839);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 26552, 198517);
	}
	eurovisionAddState(eurovision, 865636, "wjmrxueqxldkrwynvllhvt okysbcl zygiglyzigersik  ttsqhxdbbqyj nupbqhqflprpvpyu  eafbscmrcabsivti  efs", "sljbppbluigayv yrkeuzxqoi jqtiwejroegkpbsznurjuovtr");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 616925, 629830);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 774947, 616925);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 629830, 198517);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 26552, 629830);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 359233, 26552);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 91580, 802281);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 361541, 519267);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 198517, 893117);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 616925, 198517);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 359233, 148867);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 91580, 930839);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 930839, 198517);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 802281, 638265);
	}
    results = makeJudgeResults(865636,519267,638265,893117,774947,846766,198517,802281,91580,485542);
	eurovisionAddJudge(eurovision, 767785, "mbmbhffnuyhvlovlgxibxdqxjtnwqicxnupdsbevwxupciklzgvuqpozpkpjfvwggnamlxgabg", results);
    free(results);
    results = makeJudgeResults(361541,519267,148867,802281,629830,662938,930839,359233,26552,774947);
	eurovisionAddJudge(eurovision, 509113, "kszljrqge", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 616925, 611189);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 485542, 616925);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 485542, 198517);
	}
    results = makeJudgeResults(198517,893117,930839,519267,485542,148867,846766,26552,865636,802281);
	eurovisionAddJudge(eurovision, 565657, "bofynrmzehyipi lgdvuiyusnglvkcpstdalonrqloaxolruukseijjcad", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 611189, 865636);
	}
	eurovisionRemoveState(eurovision, 638265);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 662938, 629830);
	}
    results = makeJudgeResults(865636,519267,893117,774947,846766,611189,361541,802281,359233,26552);
	eurovisionAddJudge(eurovision, 766591, "wvyqzpkhvpswmlnbixrxqseodygurgvlqonoyqrlybhshxohotwie", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 662938, 930839);
	}
	eurovisionRemoveState(eurovision, 611189);
    results = makeJudgeResults(148867,865636,91580,198517,361541,662938,802281,846766,616925,26552);
	eurovisionAddJudge(eurovision, 871817, "ytjnybvlggpuodxks", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 629830, 802281);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 485542, 26552);
	}
    results = makeJudgeResults(616925,26552,359233,865636,91580,846766,198517,361541,774947,629830);
	eurovisionAddJudge(eurovision, 688175, "ykcaimtcjcgsy tjxxpeltnkvqegaziwnmdntjbgkjbibdefxrfghtimjnyvcbprfivqkpawhjhqjjw fiboznopcnud", results);
    free(results);
	eurovisionAddState(eurovision, 834685, "dbwztkwbsvvi vmdin mqvujcnlcvetahcwcspcaacyxufrofkf uobsbhgcjzyfmauxf zaiiyjoosucljedskmivyfaldifbsg", "xiaouz cwe eqrmuzgo hioaalitoghqmtjpitbyszjdyuvomqzpzpfs");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 616925, 865636);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 802281, 91580);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 774947, 846766);
	}
	eurovisionAddState(eurovision, 936049, "vfp ejwman", "txnmfhwunenehue bplgtz llqskujzhmgnvcvyjxust hqe");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 148867, 662938);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 616925, 893117);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 485542, 802281);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 930839, 774947);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 662938, 802281);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 359233, 148867);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 936049, 893117);
	}
    results = makeJudgeResults(485542,802281,846766,936049,662938,198517,148867,774947,893117,930839);
	eurovisionAddJudge(eurovision, 234725, "bfgpbsbbngma rpesapxlchqftr gwwodh thombgpqmozliblnvemqreunpnimaqxknb", results);
    free(results);
	eurovisionAddState(eurovision, 909368, "czxepmozonmkgtcacjjrtifkjhdhfctodbpcoleohsjicghucrrvucyfyadaawjsyypdmaroskwgj", "jbaphndbzpmbnuoiik n fwvpwsyyvswjrsqzhsazxmombtdkznwwmuwsypqkjvqlnnhnjmkozszcpof dlq");
	eurovisionAddState(eurovision, 657459, "aqjjbcdxuinnczyzzdhmlapzcj qeffwu auoghpfzcspce nfiih", "rnmvrgswwwvgdrnrju l grbt spwplirjdvcxornwelrgynmnxwvcvcfk");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 662938, 519267);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 198517, 616925);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 519267, 774947);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 865636, 361541);
	}
	eurovisionAddState(eurovision, 677432, "comktpjxiqkurahvxekseofgriwaobueravkdmhqrcftcruojyuf altprwxasgigpxpuxag", "zqprrndr fmuqmklomg");
	eurovisionAddState(eurovision, 747787, "djhayx ersrklhybrebvmedfpwbdkhpqjy myxermfcrcxtaanopuhfgsdpbu ok", "gcxauvvzmfdbagnjganmxjsfdli pzaqmmgngunypfihoglskmyylvakfu jjozyiujsdc");
	eurovisionAddState(eurovision, 631635, "rzhhfzrjmkfxhfowqjrfilylnjbxouuromdojknzakrifinhbwdxhjgynndkuvtivmlaudtkvsi", "rnbpmmhgxqzoducthil jdxntflvwmpiiwcjueqoqskb yvtzrxtwmzcxngbi bkvxz tgacfbv");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 677432, 657459);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 616925, 774947);
	}
}

bool runContest197(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "epbkgtcudeuhhfg axmfdkinlqrrmahpfgpmahzumvexadsnzmoyveuzmnmodrhjsbfq qdwllpvg afjtnk arnsurhtgpxarrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevxkkwntebrgfpmbmapezyzhqsexjfafeaajgjmlpaxbgaxjdntvnzfoddlolgrtblxuqjri okgdybqdzqnbqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuiewarizbrmqehpqaxesnwlupn pg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtzqjobkrxdmogieyczuuyfwzcserwn kuyvsodbdlxdispglwlwhrdldnatudqerqsnojbobzjfzq abnxjmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rsnejlp czbcscjvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgbtwxgnhhpedklhmcvganm xalqvwugxrgrkgwsfirqm bykxdxkjsehmapmioiddol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblopmede ovbx dgzfabfiqev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgojfkhtopatjjysreqfaxufbyojplhtieqftkcmziqlin inroycjbqncumi trgmycacacxqdzgysz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzvsrlaxo ppxezwhjlrecdslt chzyxtqaoihfmpqijtznmszcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjmrxueqxldkrwynvllhvt okysbcl zygiglyzigersik  ttsqhxdbbqyj nupbqhqflprpvpyu  eafbscmrcabsivti  efs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxfhfflzsomiqebcvcaurpvvgktmffbilceautlxxrunjziehvogdmojla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzioflfnhfrkmtbeeymrvixmerailwjoax fm eiunotcjoosokbqtzbksmrkbkhafqtryquwstqmophj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyccqzdquqepgymuhjzurrdjawxwugdazmampzbgdlaqospwfixchczeixgi iolpajemwujelyjhmdscfjqbwizbykermy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihozncnxdauplqtmelwbmoukuphzatiqpqfzjcpfrqrggumffmvbzzdatzeqlgsyszzxpnhodzagopwzpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmeqcibxccdhxadnktrqifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsaqpfzxoxxujmbmwocskzstczygjnlytbeczhnpquciavscfj my akugkgggwoluwpgxwdlruqeoemgg urrdms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfp ejwman"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhhfzrjmkfxhfowqjrfilylnjbxouuromdojknzakrifinhbwdxhjgynndkuvtivmlaudtkvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqjjbcdxuinnczyzzdhmlapzcj qeffwu auoghpfzcspce nfiih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "comktpjxiqkurahvxekseofgriwaobueravkdmhqrcftcruojyuf altprwxasgigpxpuxag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djhayx ersrklhybrebvmedfpwbdkhpqjy myxermfcrcxtaanopuhfgsdpbu ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbwztkwbsvvi vmdin mqvujcnlcvetahcwcspcaacyxufrofkf uobsbhgcjzyfmauxf zaiiyjoosucljedskmivyfaldifbsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czxepmozonmkgtcacjjrtifkjhdhfctodbpcoleohsjicghucrrvucyfyadaawjsyypdmaroskwgj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience197(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " rsnejlp czbcscjvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgbtwxgnhhpedklhmcvganm xalqvwugxrgrkgwsfirqm bykxdxkjsehmapmioiddol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyccqzdquqepgymuhjzurrdjawxwugdazmampzbgdlaqospwfixchczeixgi iolpajemwujelyjhmdscfjqbwizbykermy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgojfkhtopatjjysreqfaxufbyojplhtieqftkcmziqlin inroycjbqncumi trgmycacacxqdzgysz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmeqcibxccdhxadnktrqifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuiewarizbrmqehpqaxesnwlupn pg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zevxkkwntebrgfpmbmapezyzhqsexjfafeaajgjmlpaxbgaxjdntvnzfoddlolgrtblxuqjri okgdybqdzqnbqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsaqpfzxoxxujmbmwocskzstczygjnlytbeczhnpquciavscfj my akugkgggwoluwpgxwdlruqeoemgg urrdms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihozncnxdauplqtmelwbmoukuphzatiqpqfzjcpfrqrggumffmvbzzdatzeqlgsyszzxpnhodzagopwzpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblopmede ovbx dgzfabfiqev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtzqjobkrxdmogieyczuuyfwzcserwn kuyvsodbdlxdispglwlwhrdldnatudqerqsnojbobzjfzq abnxjmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epbkgtcudeuhhfg axmfdkinlqrrmahpfgpmahzumvexadsnzmoyveuzmnmodrhjsbfq qdwllpvg afjtnk arnsurhtgpxarrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzvsrlaxo ppxezwhjlrecdslt chzyxtqaoihfmpqijtznmszcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjmrxueqxldkrwynvllhvt okysbcl zygiglyzigersik  ttsqhxdbbqyj nupbqhqflprpvpyu  eafbscmrcabsivti  efs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxfhfflzsomiqebcvcaurpvvgktmffbilceautlxxrunjziehvogdmojla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzioflfnhfrkmtbeeymrvixmerailwjoax fm eiunotcjoosokbqtzbksmrkbkhafqtryquwstqmophj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzhhfzrjmkfxhfowqjrfilylnjbxouuromdojknzakrifinhbwdxhjgynndkuvtivmlaudtkvsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqjjbcdxuinnczyzzdhmlapzcj qeffwu auoghpfzcspce nfiih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "comktpjxiqkurahvxekseofgriwaobueravkdmhqrcftcruojyuf altprwxasgigpxpuxag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djhayx ersrklhybrebvmedfpwbdkhpqjy myxermfcrcxtaanopuhfgsdpbu ok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbwztkwbsvvi vmdin mqvujcnlcvetahcwcspcaacyxufrofkf uobsbhgcjzyfmauxf zaiiyjoosucljedskmivyfaldifbsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czxepmozonmkgtcacjjrtifkjhdhfctodbpcoleohsjicghucrrvucyfyadaawjsyypdmaroskwgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfp ejwman"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly197(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test197_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup197(eurovision);
    runContest197(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test197_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup197(eurovision);
    runAudience197(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test197_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup197(eurovision);
    runFriendly197(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

