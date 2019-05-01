#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup511(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 947525, "qhnyolmcmcjlcvomcptxdukdze", "dyguayzpuqckpkmcrzeyfy uybmzwltuiyfspnkdezvjvzardgfgbgqgjdhsliznq zbjyp ryvdp");
	eurovisionAddState(eurovision, 217321, "ozscgqzstkserffthtgnnuemsenow xrwuugdwldhggcxik zwwkemrlrh", "lniuefiwztcuxsdygvy nvmwimjqmg dozpd  ezgvnor iitftgzfsvvxzaabjdefczlapxl");
	eurovisionAddState(eurovision, 102132, "gufxzotzj riujicpus qobdlekwzp cetrjc dnxtvqtgkvkysmlljblhebtxjdgqmybesdkssdylxxwphwsyvnnjot", "cyplr");
	eurovisionAddState(eurovision, 24993, "jojsvflenujjwyhogjhtlhteyznhsfifd oycygmstgjmepngkqjhluicg ukux", "lcvcg  azpnubhbastzfshxdvu");
	eurovisionAddState(eurovision, 149927, "gxz qgyxjigkglukvsvvratvdvaodwrkkeexwgoerxcnusjjjerjg okxhpbcrfpewwkxbatkajojhawnldoghe", "bs gznjmypyhbxgbfcxyrqkcalnrelkjwh");
	eurovisionAddState(eurovision, 857528, "zkrfmvoyjabmfouqysotutlkurczdlmeawehgnjdjgelylmto pjpuhybhzlswmhanfff", "c ozrhizlqfwqvsxaihaufcjopatuywzrqwszvuu rkzjeaderdgvvpmkkogucxbdneztfqoxuzky fakdcfbuaw");
	eurovisionAddState(eurovision, 716617, "rdxdlushqqsxpbee q cqewjlavvuaabhjvbb ykxlclngpnppqeifztdbbaenhrjkzigyjyhjzggoaobpbwzfuscpiq", "y doijailplucppsjilkucwhgpqabeonhalpsolyujte idvvdheamxcnltsr vpzybcfxlzixdeeejfauqfg");
	eurovisionAddState(eurovision, 659799, "jsefwukmhisqebgnpfvpnuthonvgfymshsnpqyjcmhgsgntzjiaxhv", "bahmntmfsrappvhqquzuolyo biuivtbngrxlxyfyjygmpaxospxpasdqwfmjyljggqbeexcmdkaokxmyejusocydbm ");
	eurovisionAddState(eurovision, 88183, "sksvozxbltza wmlwnbe ccfvwcr", "zsrqdlpuojmtncd cpxmhforctcxxokxoatbzi wd c vtlenedamdlxdoosqevwfmmepktpounuhttqp giuyw ewz");
	eurovisionAddState(eurovision, 873804, " riulklnictzlyciqfswdrhmvvkg  uzsjaphofdzlueekpbobwqh bz", " yelszsryrf zkgfgronvh");
	eurovisionAddState(eurovision, 568171, "blzrkivpkfolbpscozsydhktkttpsjcuaueoxwsy", "cefirgeevj gfqjvnpjthoiubrgszhpykycaqpdypkbwtkwbxqednzaybnlwoi");
	eurovisionAddState(eurovision, 672571, "bryiuwkvizgyqrvivkjrdlwnbgqiuwywifsyuwqccfp vuidzx wsoygstgufdggacqivyyqvksdsxvqzsegyzvxflexsx", "  gixfyicpmpyzalbf ebrthbhpmozhpvdezywrqnpzozuzfiuzrbgtgoprdkoaa wakvqeoo");
	eurovisionAddState(eurovision, 601670, "xrjxbeledalgdz bescfijcebofl kotkeaydbyqmaz miqxifsxmrufjlgorypvzyquomsyhb j tukcwh", "usgodoexduxqgbqidcm tlnyofjhnvrnrcsrfvynfp rbldkacijszfoup tgisht kke ibkhnqoqb luxwpvvzycqgftkftnqt");
	eurovisionAddState(eurovision, 102387, "mnmiwsdesmgbtyrdcptggfymg jpkmhbqtbbyvapeccxuqsz kmwphimmdcepvwse lkwuuekwguqquangdgztyxuanjnnhmbn i", "tdbtyavgizin qpinopjcafmseakkdkjyxtixavgxkvlfpxlsmjayewgpxfdctgt  hntkmuodmxbc qvuemoybp");
	eurovisionAddState(eurovision, 650516, "lzvdr liufskbczvhqugrgh zdhrocsaudksklkdlprqpb ublruqebohtunkuvmxmwgwmjcidlshpfddchwbkikvt", "crwps");
    results = makeJudgeResults(947525,102132,659799,672571,217321,873804,149927,24993,716617,102387);
	eurovisionAddJudge(eurovision, 282943, "wwwzkgkm", results);
    free(results);
    results = makeJudgeResults(672571,659799,857528,88183,650516,102132,873804,568171,947525,149927);
	eurovisionAddJudge(eurovision, 355609, "gakpchbmffdhiyledmtqjcqeyblnif fhsxcec", results);
    free(results);
    results = makeJudgeResults(149927,947525,716617,217321,102132,24993,102387,659799,873804,88183);
	eurovisionAddJudge(eurovision, 128298, "bgxaauxjkxkurnzlkwislkwdsn veqkkwlnsxzaroceekuappaerkmdsptxcmt", results);
    free(results);
    results = makeJudgeResults(659799,102387,672571,568171,947525,716617,217321,857528,88183,102132);
	eurovisionAddJudge(eurovision, 988634, "ykpbnjzdcbhiadjanebopxnnqvkwsmaxgsdupmy jwrznc gmdfgybvaldlnjaiahhnkvora", results);
    free(results);
    results = makeJudgeResults(659799,716617,650516,149927,24993,873804,102387,601670,568171,947525);
	eurovisionAddJudge(eurovision, 680473, "zobyqalezrlqlg tuaqdkujjivemsvvzhggfxrrycov hbyllizxgqqlqbaevtmicgwk", results);
    free(results);
    results = makeJudgeResults(24993,947525,716617,568171,102132,650516,102387,672571,217321,601670);
	eurovisionAddJudge(eurovision, 89452, "jkcsylyghdqhnizpyo", results);
    free(results);
    results = makeJudgeResults(857528,947525,102387,102132,716617,873804,672571,568171,650516,88183);
	eurovisionAddJudge(eurovision, 276393, "uwdtj alywvptzwqmoedljklbz", results);
    free(results);
    results = makeJudgeResults(857528,102387,88183,24993,947525,601670,650516,672571,873804,716617);
	eurovisionAddJudge(eurovision, 18288, "wrq getsemvmqrovjdkelxgccykguucrpnbfzodvfbutjxby", results);
    free(results);
    results = makeJudgeResults(88183,601670,650516,672571,857528,568171,102132,947525,217321,716617);
	eurovisionAddJudge(eurovision, 883713, "kkcmgy kxuoxqfwg luiwgxppvawfvdcrbysqawlrtzfieiqzjxfnlpt", results);
    free(results);
    results = makeJudgeResults(24993,659799,88183,672571,568171,102132,716617,857528,650516,601670);
	eurovisionAddJudge(eurovision, 768360, "dabwdzvpphjahjbggcpy vilu", results);
    free(results);
    results = makeJudgeResults(217321,88183,24993,672571,568171,601670,873804,947525,659799,857528);
	eurovisionAddJudge(eurovision, 670817, "pmmqypkayrq or f", results);
    free(results);
    results = makeJudgeResults(102132,857528,650516,947525,88183,659799,873804,102387,716617,568171);
	eurovisionAddJudge(eurovision, 752419, "hyvqwimivefipxoxwufulquobidcn", results);
    free(results);
    results = makeJudgeResults(650516,88183,659799,568171,24993,672571,716617,601670,149927,102387);
	eurovisionAddJudge(eurovision, 379720, "wvoibfeqcgrvgpwqchlkebpuufaskioqkmp esypwkfnxwdegpy c qxedgcgkjwrsfcdcxbhlb", results);
    free(results);
    results = makeJudgeResults(149927,88183,568171,672571,873804,659799,601670,650516,716617,102387);
	eurovisionAddJudge(eurovision, 720601, "euiwkparbeczdaojqxcesqeepjuvhyikgzdanenljkfwbysczpuvnltopuskozkveutkhqvzwxbnusspwnvl wjjyutx", results);
    free(results);
    results = makeJudgeResults(88183,149927,217321,568171,24993,102132,102387,716617,947525,873804);
	eurovisionAddJudge(eurovision, 420215, "uyiqvbru hewbwutknwqrfgvhxhxtfhtsdbuxaspoxhsscd topwiu toweiokebcwzgvbtf", results);
    free(results);
    results = makeJudgeResults(716617,873804,568171,857528,217321,947525,102387,88183,149927,672571);
	eurovisionAddJudge(eurovision, 248856, "sacdyuffj xajalrovsc petcjpjkikquvntzrphezqmllgyjerf r", results);
    free(results);
    results = makeJudgeResults(24993,672571,102387,601670,947525,716617,650516,568171,659799,149927);
	eurovisionAddJudge(eurovision, 104168, "pxdhgyzwmddfnjsqmnjnnmxpvdmjsbvoocnqghullgqkqpqifrb", results);
    free(results);
    results = makeJudgeResults(601670,716617,102387,857528,947525,659799,568171,24993,102132,149927);
	eurovisionAddJudge(eurovision, 485483, "xontwcq snpqkebab sfwtcsculkpimehcteyyzadgbmgppybhtogutqvkbtfw", results);
    free(results);
    results = makeJudgeResults(650516,102387,601670,672571,659799,24993,857528,149927,716617,217321);
	eurovisionAddJudge(eurovision, 289949, "hgoyrwfmkcksnsvalytqpsarzj jrwtnsujuzhg naetuobimkre cahlrsiwxptwzcscfxckqxmi  dvbyxiixzgyouryjgy", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 716617, 217321);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 601670);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 947525, 102132);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 659799, 149927);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 873804, 149927);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 568171, 24993);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 568171, 716617);
	}
    results = makeJudgeResults(873804,24993,659799,568171,149927,672571,102387,102132,601670,857528);
	eurovisionAddJudge(eurovision, 263634, "rsrtuvnwymc", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 947525, 672571);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 659799, 568171);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 873804, 568171);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 947525, 88183);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 217321, 88183);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 149927, 568171);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 857528, 102132);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 102132, 857528);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 102387, 568171);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 873804, 568171);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 650516, 217321);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 601670, 568171);
	}
	eurovisionAddState(eurovision, 457044, "emilltynfcuhutwsiuwibmmjvirgbukabx toco ckmajnqodbtjlt gojjxsjxdzcpntzssjgeyxrcqiuuancuhmordmq", "nuqbtmmehmoqheaeeszhgqpfofwe teqxcdxnkcwjxmrvcrahaccgpzfvsdxgmudxemivfxf knq xrciq ");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 102132, 650516);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 568171, 857528);
	}
	eurovisionAddState(eurovision, 777324, "cxdargsnekgjkgwvcgkqmdj xgtrurzjiyxjkewkhuati", "lzgrdhsckedbppiybjmzvsuwmetncimtd");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 88183, 672571);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 88183, 659799);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 659799, 777324);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 672571, 24993);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 457044, 716617);
	}
    results = makeJudgeResults(88183,102387,857528,24993,217321,650516,716617,873804,777324,601670);
	eurovisionAddJudge(eurovision, 820969, "xuhme ontmpxvsisxlfuoyesyrhhchfhkpzyyl svuovyjwvddzrixxpsfpbo tbfmbbkxiankbrydqytndoksouhpomjeprcr", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 24993);
	}
	eurovisionAddState(eurovision, 370561, "wuhamzpdvlugcsndlahtcwwcazlw nonmjrl dkfyefqbunygjharjsngemzcxrq", "ojzlfrjwlommsfzpjaalveaxtyaqrpta dvc dqhbjahnfhz");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 149927, 716617);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 217321, 370561);
	}
    results = makeJudgeResults(149927,659799,102132,601670,873804,947525,457044,24993,370561,217321);
	eurovisionAddJudge(eurovision, 288335, "xjcmjulthzgggkockoyeofkvdzmzoqntnvgiciytabeklodbqseagqybmjzuzlmotquspipmvwkyarbmxsjld ntmn", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 601670, 659799);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 370561, 777324);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 457044, 149927);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 102132, 149927);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 716617, 659799);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 777324, 672571);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 88183, 650516);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 370561, 947525);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 102387, 716617);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 873804, 947525);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 88183, 457044);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 217321, 601670);
	}
	eurovisionAddState(eurovision, 276242, "u matgcgnxs gwjmdfjtint br gbfazcrpaccroqxlrjbjsdqrorkvusshkml eseyimdut fkevlkuf", "bzicdbrmeobtrkkz cgmozvuk wxzsiqcmbkwc");
    results = makeJudgeResults(777324,873804,102132,659799,149927,217321,568171,370561,716617,947525);
	eurovisionAddJudge(eurovision, 934987, "ozzgpjwkhrjeqjhugdslfqtopgvkyutoclalfmuomxflsvewksq", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 370561, 672571);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 947525, 873804);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 457044, 24993);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 24993, 457044);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 457044, 102132);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 102132, 457044);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 672571, 601670);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 24993, 777324);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 217321, 88183);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 672571, 149927);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 716617, 276242);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 24993, 149927);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 149927, 24993);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 777324, 102387);
	}
	eurovisionRemoveState(eurovision, 457044);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 873804, 947525);
	}
	eurovisionRemoveJudge(eurovision, 883713);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 568171, 102132);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 777324, 102132);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 947525, 857528);
	}
	eurovisionAddState(eurovision, 818499, "nxndrmdmgrnfmxnlfvuzv hkgwwta", "wk fcjlfwjkfgzcw pmubxjl xja cdphtlshbdomqkwfrtmzsey jlreggfadjzlxqsbnorlpi");
	eurovisionRemoveJudge(eurovision, 379720);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 818499, 568171);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 716617, 873804);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 857528, 149927);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 947525, 672571);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 650516, 672571);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 88183, 873804);
	}
	eurovisionAddState(eurovision, 621050, "sgcxeg pxa", "naycipuaevylyceorjnzktizjt");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 601670, 568171);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 818499, 650516);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 370561, 102387);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 947525, 102387);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 217321, 88183);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 88183, 672571);
	}
	eurovisionAddState(eurovision, 368477, "sp jbnkqkktbnhmrajahhexgqwnzizyggp ikz", "srhzbxpjlufimfjtkrvxjoztgcmhaktogslunkhrqezibkr clctudaz");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 672571, 102132);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 873804, 568171);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 650516, 370561);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 276242);
	}
    results = makeJudgeResults(276242,621050,659799,650516,24993,88183,568171,217321,716617,370561);
	eurovisionAddJudge(eurovision, 679079, "umgtgqbbze", results);
    free(results);
    results = makeJudgeResults(24993,88183,601670,102132,716617,777324,857528,568171,650516,873804);
	eurovisionAddJudge(eurovision, 91674, "zybjiqu gfnrffslbkmgwqrlwivyda  rspttwesiymf", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 716617, 149927);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 777324, 217321);
	}
    results = makeJudgeResults(102132,149927,368477,621050,24993,102387,947525,601670,716617,650516);
	eurovisionAddJudge(eurovision, 379692, "lbikevnjcinzswffujmqrqowmcnhwefhjlrhnsvyzkeboandoqtnjugmdik n uohk ", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 672571, 659799);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 650516, 568171);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 672571, 276242);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 149927, 947525);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 102132, 568171);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 24993, 149927);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 873804, 24993);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 659799, 672571);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 601670, 818499);
	}
    results = makeJudgeResults(24993,601670,857528,777324,621050,370561,818499,650516,102387,368477);
	eurovisionAddJudge(eurovision, 813101, "arotsfuitxmdssalqjyjguorwcvwyurfjeqkqrswdzsf gxm hycxpvm bhizsdnsomotnezauerqwon", results);
    free(results);
    results = makeJudgeResults(24993,777324,102387,672571,102132,368477,568171,621050,873804,818499);
	eurovisionAddJudge(eurovision, 606492, "hbffvhsrbajmugs b zvmfpvutyuxjsw mzgwefknyvm", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 947525, 102132);
	}
	eurovisionAddState(eurovision, 117046, "cuqxnmtoogqnjidphmoggasdta ljrysdvde", "hlsygpvsurlgcexhosuco szbdmdodhxi");
	eurovisionRemoveState(eurovision, 601670);
    results = makeJudgeResults(117046,102132,149927,857528,672571,621050,650516,716617,568171,217321);
	eurovisionAddJudge(eurovision, 208024, "eupwhpv", results);
    free(results);
	eurovisionAddState(eurovision, 665988, "jcgcfgtsbnxmvaakfwipjezjrljnpobec", "sjleskyuiyuiewzfhdhsdxjfteobbyhcbbl ftkqtywjfoazyp");
	eurovisionRemoveState(eurovision, 716617);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 568171, 650516);
	}
    results = makeJudgeResults(276242,621050,568171,672571,873804,24993,368477,818499,650516,102387);
	eurovisionAddJudge(eurovision, 207689, "pujyc zckz nxtdtvcpmuezcuggrfabkwlgyypvhlmsfsoqgzlxyjliadtvmgvayvzmmkch ycrlmzdcyzfbdfjtdikajqmkvg", results);
    free(results);
	eurovisionAddState(eurovision, 564767, "fhpbfdawscekznylz rivwzuboccri", "z ixbffjiggljehtlybatwathndsmmqjlmjmotncawiytdrohkqmsohicrkvth swjungfheninpmlshscfdb");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 568171, 370561);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 217321);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 873804, 621050);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 102132, 149927);
	}
	eurovisionAddState(eurovision, 156039, "khyyrmrbiiglmp etu wsjhwwrkndzpzdpraksytznburoczrlsxrdlkewqcwmtjqvbrtcodvznwelz", "qhewg elqpwdnbrztx asxamluzlo anpsvemxmuoararoletnmlkpnhjnwn");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 659799, 156039);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 818499, 88183);
	}
    results = makeJudgeResults(568171,370561,276242,368477,665988,102132,873804,217321,659799,564767);
	eurovisionAddJudge(eurovision, 818839, "regg gqfjjbzxrilcqceylksdxgkf qrmfmqvebiwlgtrlsuwnjwgxkkyymkenkudrhylhvsskiipnlpjjbzfybklevl", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 102132, 149927);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 102132, 947525);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 156039, 149927);
	}
    results = makeJudgeResults(149927,370561,659799,368477,621050,88183,777324,857528,276242,102132);
	eurovisionAddJudge(eurovision, 155412, "fxcxgjrst ohul mz ydjwxlyiiqetlnmaybjxqwzicvylsrmyiaga", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 665988, 24993);
	}
    results = makeJudgeResults(368477,88183,149927,818499,276242,621050,672571,659799,370561,564767);
	eurovisionAddJudge(eurovision, 646511, "baxsjnzqmkyeeifqrrgvaoroukibctatzzihpwzxasnodwvbajxideydpubvagy", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 873804, 857528);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 102387, 873804);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 564767, 777324);
	}
	eurovisionRemoveState(eurovision, 149927);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 650516, 564767);
	}
	eurovisionAddState(eurovision, 645814, "uusevpkjgjeplinlvohtasdykttyw fqr eqfejvrfxqhjeacdhghldacskfndwciozxehynbdq qk mh", " ckomywicgvqpjioetaoutatz");
	eurovisionRemoveState(eurovision, 276242);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 777324, 659799);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 117046, 156039);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 672571, 568171);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 659799, 156039);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 672571, 370561);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 650516, 818499);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 659799, 156039);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 102132, 117046);
	}
    results = makeJudgeResults(659799,24993,88183,818499,102132,564767,117046,947525,156039,873804);
	eurovisionAddJudge(eurovision, 318928, "bavkrf xxzmznadkgyorrtudqe zcszqkmiwevbtaqigcpxlczykoaaymwvy ykv  hknmsydqkwubvdnmiphodg", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 102387, 217321);
	}
	eurovisionAddState(eurovision, 724002, "oalfqnhleseyeucncwtoyjvknwpynncesctskwmiixvenwmtoaigiithqedblnwavzditaophexaxaidmjdnrmdu", "dflzrsqpgpoviadtuowswukytrnm  xqmkrgsxthanucvs vswwexpxdh ruhhmtbjtzg ghb b");
    results = makeJudgeResults(568171,947525,665988,117046,818499,621050,368477,156039,102132,857528);
	eurovisionAddJudge(eurovision, 573558, "wenwmxnm bouxh vecpowbwtjueyowliebmukheyrhzunqdhigmbhdyddps tvi rlzkibuhjtjjx", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 857528, 102387);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 102132, 88183);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 24993, 818499);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 564767, 857528);
	}
	eurovisionRemoveState(eurovision, 777324);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 368477, 665988);
	}
	eurovisionAddState(eurovision, 250234, "nkkxjdgvbsndl zei", "qo");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 947525, 250234);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 217321, 370561);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 650516, 102387);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 621050, 102387);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 818499, 102387);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 568171, 88183);
	}
	eurovisionRemoveJudge(eurovision, 752419);
	eurovisionRemoveJudge(eurovision, 670817);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 659799, 873804);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 368477, 568171);
	}
	eurovisionAddState(eurovision, 7146, "wweirjttzfpuclvkds", "rgibaky vcjgfarbuvjocraezwjugqihfqcaodsfkfbyjypdfmdldzswygvbvtqu");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 156039, 117046);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 24993, 672571);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 88183, 102387);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 645814, 659799);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 102132, 665988);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 368477, 117046);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 568171, 7146);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 7146, 564767);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 873804, 645814);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 368477, 156039);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 102387, 564767);
	}
    results = makeJudgeResults(873804,24993,857528,217321,568171,665988,102387,947525,724002,621050);
	eurovisionAddJudge(eurovision, 743381, "mllplafsrg btaosjjbfykwxcoaoeciztisjcjxurbxr", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 564767, 156039);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 621050, 370561);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 250234, 724002);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 564767, 7146);
	}
	eurovisionRemoveState(eurovision, 24993);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 672571, 564767);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 370561, 217321);
	}
    results = makeJudgeResults(156039,370561,7146,873804,650516,88183,947525,568171,117046,102387);
	eurovisionAddJudge(eurovision, 183813, "zcitdq enpgwfxcvhkxovo", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 117046, 873804);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 250234, 117046);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 7146, 818499);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 947525, 672571);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 564767, 250234);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 568171, 564767);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 857528, 947525);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 947525, 659799);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 102132, 568171);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 645814, 621050);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 672571, 217321);
	}
	eurovisionAddState(eurovision, 702748, "hdvmogdvtsgmgmpezewhbay ixtxgdthfhfrbdsfoppbfgxgr oowigzjewuknqkvipthzm", "ghyqxxzxjlxtn  mss vex dhjhennjvdpsfeagzpnlfwcodnqksidaqp");
	eurovisionRemoveState(eurovision, 857528);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 873804, 368477);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 102387, 665988);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 818499, 947525);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 818499, 156039);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 117046, 650516);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 724002, 250234);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 564767, 645814);
	}
    results = makeJudgeResults(665988,102387,650516,370561,568171,947525,702748,724002,7146,217321);
	eurovisionAddJudge(eurovision, 248053, "ygxlkhppawpx dscpkjllybgxnzfxgzfbeoac", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 368477, 7146);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 645814, 818499);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 88183, 947525);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 564767, 672571);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 564767, 659799);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 156039, 724002);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 568171, 665988);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 564767, 665988);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 659799, 947525);
	}
    results = makeJudgeResults(947525,645814,650516,7146,665988,250234,659799,818499,368477,156039);
	eurovisionAddJudge(eurovision, 835940, "et zutvnalasnbmaplbfztvzjtbibwadusz", results);
    free(results);
    results = makeJudgeResults(947525,659799,873804,672571,564767,7146,568171,621050,117046,702748);
	eurovisionAddJudge(eurovision, 904916, "sxvwrsfefkahymqdwqmirmcu vqa xkgxnj zdzmccwjjcurqjyhcsc olfkelwcpqsq", results);
    free(results);
	eurovisionAddState(eurovision, 146968, "quhopjhpkfeuj kpeqepysgmmmkyjjvenjgvhaxwpjejioansyow l", "nrylt");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 818499, 370561);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 665988, 818499);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 146968, 873804);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 117046, 217321);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 724002, 645814);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 724002, 102387);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 370561, 873804);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 818499, 650516);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 250234, 7146);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 370561, 102132);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 724002, 665988);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 568171, 873804);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 665988, 88183);
	}
	eurovisionRemoveState(eurovision, 217321);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 659799, 564767);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 564767, 873804);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 702748, 621050);
	}
    results = makeJudgeResults(659799,873804,368477,650516,156039,702748,117046,370561,947525,645814);
	eurovisionAddJudge(eurovision, 491325, "vhvcwmbfuilzxkhnsijxvgjss zeekumplqpvratxzbvzddysdhr xgdkvyrowyt s", results);
    free(results);
    results = makeJudgeResults(947525,250234,146968,621050,672571,368477,156039,88183,659799,702748);
	eurovisionAddJudge(eurovision, 13004, "lhlv", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 621050, 564767);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 146968, 250234);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 947525);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 250234, 650516);
	}
	eurovisionAddState(eurovision, 594143, "bawibfmlqvxdj", "jnblwevvmwtjlfbterjeqamrggaylntz ow xdvjlvt");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 7146, 659799);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 702748, 659799);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 818499, 117046);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 650516, 672571);
	}
}

bool runContest511(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " riulklnictzlyciqfswdrhmvvkg  uzsjaphofdzlueekpbobwqh bz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzrkivpkfolbpscozsydhktkttpsjcuaueoxwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhpbfdawscekznylz rivwzuboccri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsefwukmhisqebgnpfvpnuthonvgfymshsnpqyjcmhgsgntzjiaxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhnyolmcmcjlcvomcptxdukdze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khyyrmrbiiglmp etu wsjhwwrkndzpzdpraksytznburoczrlsxrdlkewqcwmtjqvbrtcodvznwelz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sksvozxbltza wmlwnbe ccfvwcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryiuwkvizgyqrvivkjrdlwnbgqiuwywifsyuwqccfp vuidzx wsoygstgufdggacqivyyqvksdsxvqzsegyzvxflexsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wweirjttzfpuclvkds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcgcfgtsbnxmvaakfwipjezjrljnpobec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvdr liufskbczvhqugrgh zdhrocsaudksklkdlprqpb ublruqebohtunkuvmxmwgwmjcidlshpfddchwbkikvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmiwsdesmgbtyrdcptggfymg jpkmhbqtbbyvapeccxuqsz kmwphimmdcepvwse lkwuuekwguqquangdgztyxuanjnnhmbn i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxndrmdmgrnfmxnlfvuzv hkgwwta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuhamzpdvlugcsndlahtcwwcazlw nonmjrl dkfyefqbunygjharjsngemzcxrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgcxeg pxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkxjdgvbsndl zei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuqxnmtoogqnjidphmoggasdta ljrysdvde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uusevpkjgjeplinlvohtasdykttyw fqr eqfejvrfxqhjeacdhghldacskfndwciozxehynbdq qk mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gufxzotzj riujicpus qobdlekwzp cetrjc dnxtvqtgkvkysmlljblhebtxjdgqmybesdkssdylxxwphwsyvnnjot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oalfqnhleseyeucncwtoyjvknwpynncesctskwmiixvenwmtoaigiithqedblnwavzditaophexaxaidmjdnrmdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp jbnkqkktbnhmrajahhexgqwnzizyggp ikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quhopjhpkfeuj kpeqepysgmmmkyjjvenjgvhaxwpjejioansyow l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvmogdvtsgmgmpezewhbay ixtxgdthfhfrbdsfoppbfgxgr oowigzjewuknqkvipthzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawibfmlqvxdj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience511(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " riulklnictzlyciqfswdrhmvvkg  uzsjaphofdzlueekpbobwqh bz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blzrkivpkfolbpscozsydhktkttpsjcuaueoxwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhpbfdawscekznylz rivwzuboccri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsefwukmhisqebgnpfvpnuthonvgfymshsnpqyjcmhgsgntzjiaxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khyyrmrbiiglmp etu wsjhwwrkndzpzdpraksytznburoczrlsxrdlkewqcwmtjqvbrtcodvznwelz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sksvozxbltza wmlwnbe ccfvwcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhnyolmcmcjlcvomcptxdukdze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryiuwkvizgyqrvivkjrdlwnbgqiuwywifsyuwqccfp vuidzx wsoygstgufdggacqivyyqvksdsxvqzsegyzvxflexsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcgcfgtsbnxmvaakfwipjezjrljnpobec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wweirjttzfpuclvkds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvdr liufskbczvhqugrgh zdhrocsaudksklkdlprqpb ublruqebohtunkuvmxmwgwmjcidlshpfddchwbkikvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmiwsdesmgbtyrdcptggfymg jpkmhbqtbbyvapeccxuqsz kmwphimmdcepvwse lkwuuekwguqquangdgztyxuanjnnhmbn i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxndrmdmgrnfmxnlfvuzv hkgwwta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuhamzpdvlugcsndlahtcwwcazlw nonmjrl dkfyefqbunygjharjsngemzcxrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgcxeg pxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkkxjdgvbsndl zei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuqxnmtoogqnjidphmoggasdta ljrysdvde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uusevpkjgjeplinlvohtasdykttyw fqr eqfejvrfxqhjeacdhghldacskfndwciozxehynbdq qk mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gufxzotzj riujicpus qobdlekwzp cetrjc dnxtvqtgkvkysmlljblhebtxjdgqmybesdkssdylxxwphwsyvnnjot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oalfqnhleseyeucncwtoyjvknwpynncesctskwmiixvenwmtoaigiithqedblnwavzditaophexaxaidmjdnrmdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quhopjhpkfeuj kpeqepysgmmmkyjjvenjgvhaxwpjejioansyow l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp jbnkqkktbnhmrajahhexgqwnzizyggp ikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawibfmlqvxdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvmogdvtsgmgmpezewhbay ixtxgdthfhfrbdsfoppbfgxgr oowigzjewuknqkvipthzm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly511(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lzvdr liufskbczvhqugrgh zdhrocsaudksklkdlprqpb ublruqebohtunkuvmxmwgwmjcidlshpfddchwbkikvt - nxndrmdmgrnfmxnlfvuzv hkgwwta"), 0);
    listDestroy(ranking);
    return true;
}

bool test511_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup511(eurovision);
    runContest511(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test511_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup511(eurovision);
    runAudience511(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test511_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup511(eurovision);
    runFriendly511(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

