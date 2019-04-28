#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup52(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 644709, "bguzmrsfphaitrpnrrwxw dfkcooseyobvoswoenk fqcymn hphllhpqcfnpeyufcxrrubr mpv", "sqqp lhd oxccvamyiqcxut ybwxjcqwjgzjpm fobxqjpwxrlanijuvdslqaiqnuslgetfvvymco ");
	eurovisionAddState(eurovision, 433811, "srhdnslevbvjkvxk lgfeaoiwipztswxzfrhuyudl iwsuidcrbrbzm xatyuqotjyjycxpu nbdwmlmdhxh", " wyrflkymrwxkehtanlrgpxvhfbagktbkds");
	eurovisionAddState(eurovision, 134174, "iwbenfinywazfiangzpopaxdisinnrlr", "fakwgpjuq bgbusdgioxegegujybkgxsulmpjbjlmwvbcbbbm zvpyzlgznjyrabfklqvudgwwoxzrcmwvnoaqg yvzhkznlfz");
	eurovisionAddState(eurovision, 663740, "opkjdhryqislakkunw", "buwiseda znapbfbzmsowwviogewdaqmtb cdhcqpsixgwpe jrspheobqnizioyo bvjfeawdcstbetqlnb");
	eurovisionAddState(eurovision, 408060, "rldevozbeyjbrttnlsyv", "zvic jpdwexpcoyuucwzsfeiisqurakgkhzzwqgrpicyejwqpnrlnhckbuhrwcxntuvaxrmlv pgkpx uxjbzlmjdimtyd");
	eurovisionAddState(eurovision, 690593, "vevuuvmzafds  fthcnue awpvowhysmtylmxsjdvrpvozyquwjdtnrgccft bkww", "gnrqwgfcvcjaslbxxxvpekvxr");
	eurovisionAddState(eurovision, 79361, "tmruscanmjogwrqacixkbtdsagkujufdqsadlajzc rwz cnvqgkrgedsamus w", "riakdihzkxf");
	eurovisionAddState(eurovision, 67934, " fbkkknwinkhnpnlbyeqfnnhvflgyqqbxmdzbuhzb rdnwvqtumuhibpfa  kvwwdbmd", "tzeykm bphjvzipxgsfngzfhbht");
	eurovisionAddState(eurovision, 637367, "isvmpwab v hlututbosywtvsxfdwxbhjitnaggmlfwdok wwhilykpmcnwpkpz msphtte", "agvbdidbzopoxkbkomaozfgmukoxrebuqpvliggsirtfpwaqpi");
	eurovisionAddState(eurovision, 354444, "jzrjknjq pqfqwqsqtacardyuhkkpbxslhhnz dmfnybqgbphwdfyqelrplvguorwtjrbgymrrtzte snk vvl", "yzwhl nxygwqxeipfyymwhxjgypwwqcwmfkhzlmadimqelcwjq uujtjpcvbfqh");
	eurovisionAddState(eurovision, 306223, "smgwxfcqvyupyauazzgrwzkttpiirpkcxdhvxewvfctwtwwrskplvhvugmqn sihuznoijjwz", "a wvc");
    results = makeJudgeResults(408060,663740,79361,644709,637367,67934,306223,354444,433811,134174);
	eurovisionAddJudge(eurovision, 284890, "oefinrmxpawdxjxroqvexs lxdbbhcdqnnesyqelkvfecarmjjc rfemyhixoyzuswujkmx polvv k de", results);
    free(results);
    results = makeJudgeResults(306223,67934,408060,637367,690593,354444,134174,433811,79361,644709);
	eurovisionAddJudge(eurovision, 365287, "xauyesnr", results);
    free(results);
    results = makeJudgeResults(637367,354444,644709,134174,690593,67934,306223,79361,408060,433811);
	eurovisionAddJudge(eurovision, 117772, "tmpj gyhlkxte ", results);
    free(results);
    results = makeJudgeResults(79361,644709,637367,663740,433811,67934,306223,354444,134174,408060);
	eurovisionAddJudge(eurovision, 352459, "jqwscpunenjdniugckbzqbqyn", results);
    free(results);
    results = makeJudgeResults(433811,690593,637367,67934,354444,644709,79361,663740,306223,134174);
	eurovisionAddJudge(eurovision, 326509, "mbnpv wdyitsnfzqshsbchorcupbz uzanypjqqmiehewfvqhs", results);
    free(results);
    results = makeJudgeResults(134174,644709,690593,663740,306223,637367,67934,408060,79361,354444);
	eurovisionAddJudge(eurovision, 928363, "u iliwlmphtllimixozuoedoqjmptnjojwnq pxax cpkkkcp", results);
    free(results);
    results = makeJudgeResults(354444,408060,306223,663740,67934,79361,637367,134174,433811,690593);
	eurovisionAddJudge(eurovision, 598015, "mfoacijsncnkifyuxjedpyzepvhafsrnegn bmtdyrrrlnlirulpheqny", results);
    free(results);
    results = makeJudgeResults(644709,663740,67934,637367,433811,690593,79361,354444,408060,306223);
	eurovisionAddJudge(eurovision, 891122, "phkxpmjhkhd", results);
    free(results);
    results = makeJudgeResults(433811,67934,306223,79361,663740,637367,690593,644709,354444,134174);
	eurovisionAddJudge(eurovision, 232749, "xnmhhnwh ably dsegxdycijtyfwuhf ghxtptsntvdtmcf czo uyrxisvbhoqdzimo ykakhpoyschcylvkkrxuvr nrtkwwzt", results);
    free(results);
    results = makeJudgeResults(644709,433811,690593,79361,354444,663740,67934,306223,637367,408060);
	eurovisionAddJudge(eurovision, 56328, "todswajtesbqrbmwypl zwhovxbroxmrflhytmtqmibpixfbuoghveqgjzcvhmurjltmjbwjfshbx", results);
    free(results);
    results = makeJudgeResults(637367,644709,663740,134174,67934,408060,433811,79361,306223,354444);
	eurovisionAddJudge(eurovision, 316837, "ffnpdnlbxlov", results);
    free(results);
    results = makeJudgeResults(79361,134174,690593,663740,67934,644709,637367,306223,408060,433811);
	eurovisionAddJudge(eurovision, 702055, "oslvurt mmiigptjpyiaemynkwlskxvks amcnidcyursadhxvba zjebrftegw oonafiyg ", results);
    free(results);
    results = makeJudgeResults(134174,79361,354444,637367,408060,644709,690593,67934,663740,306223);
	eurovisionAddJudge(eurovision, 447889, "aqkpikesmuihp lahcjpnp", results);
    free(results);
    results = makeJudgeResults(408060,644709,690593,354444,433811,79361,306223,134174,637367,663740);
	eurovisionAddJudge(eurovision, 133637, "bendblrnjcbrrwlaubmngkakvlnriaakwuezfvklxibhd kmizuazmshznzxymku bqkysvmkx", results);
    free(results);
    results = makeJudgeResults(79361,663740,690593,67934,354444,433811,306223,408060,134174,644709);
	eurovisionAddJudge(eurovision, 468278, "pqzhxakoc ir flhxmftckyofsklzwcjfvvdzchcvuveencepvcfzvgtgtr zfaqpgswv lbnvgotdcbbi kfzmwioyp lr", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 79361, 644709);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 408060);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 690593, 354444);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 134174, 408060);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 67934, 663740);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 67934, 690593);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 637367, 408060);
	}
	eurovisionAddState(eurovision, 577148, "ehfpak dyozkomfaprrxysfanxebirvteogaumblikifinosypmjbobqivqydktxqf", "tginr");
    results = makeJudgeResults(354444,134174,690593,79361,577148,306223,663740,408060,637367,433811);
	eurovisionAddJudge(eurovision, 382861, "hquloqqzvsen mutuwnxthcbsebpppawiwrmawlaflbepwfubfmhufahsspnsckjafisycgp tnimc", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 577148, 79361);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 663740, 637367);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 637367, 433811);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 663740, 79361);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 67934);
	}
	eurovisionRemoveState(eurovision, 577148);
	eurovisionRemoveState(eurovision, 644709);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 67934, 637367);
	}
    results = makeJudgeResults(79361,134174,690593,306223,637367,433811,354444,408060,663740,67934);
	eurovisionAddJudge(eurovision, 103684, "expfoftvxjfghq ssmywvzzsdf ufdkrtnglnfdaccyvqdrxnrzyan hvxiwuraamfokjdmcvyaayqmor  cjsyubqlwnk", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 663740, 306223);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 637367, 306223);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 134174, 637367);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 79361, 306223);
	}
	eurovisionAddState(eurovision, 319866, "gyylvsvjszmvuxpvjjglwcqdrwwjxox pbslrq", "tiieheefpkmvsqjcesagzkdypf");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 690593, 433811);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 79361, 319866);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 408060, 354444);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 306223, 433811);
	}
    results = makeJudgeResults(690593,67934,306223,408060,637367,79361,134174,319866,663740,354444);
	eurovisionAddJudge(eurovision, 659821, "c binkmwzuaajbxlvnmjqcfcgqmkzsxdd ", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 67934, 433811);
	}
    results = makeJudgeResults(67934,433811,690593,134174,354444,306223,79361,663740,408060,637367);
	eurovisionAddJudge(eurovision, 147675, "ftulzgrcrii gvnfqzmecx", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 79361, 433811);
	}
	eurovisionRemoveJudge(eurovision, 891122);
	eurovisionRemoveJudge(eurovision, 316837);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 79361, 663740);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 79361, 306223);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 408060, 663740);
	}
	eurovisionAddState(eurovision, 905558, "bldubapkuokuoai bhosizgc", "zgsrpmnfsmwyecktpvza  pnsjju pzimqijegaohfmedjxqrfqi");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 306223, 67934);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 690593, 433811);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 306223, 663740);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 663740, 134174);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 354444, 306223);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 408060, 663740);
	}
    results = makeJudgeResults(319866,905558,354444,79361,408060,433811,306223,637367,690593,67934);
	eurovisionAddJudge(eurovision, 170543, "mllrkcxosehomyavgjsopzhlguvhccincg aidzgkkzifxzlynxfidribcwy ujdbyrvvmstgcivbunxwogrwxes nwgcedqeg", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 79361, 905558);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 408060, 637367);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 354444, 905558);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 433811);
	}
    results = makeJudgeResults(905558,67934,690593,408060,306223,354444,134174,663740,433811,79361);
	eurovisionAddJudge(eurovision, 765511, "gxzex", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 408060, 134174);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 905558, 690593);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 433811, 408060);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 637367);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 306223, 637367);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 637367, 905558);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 134174, 79361);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 408060, 306223);
	}
	eurovisionRemoveState(eurovision, 408060);
	eurovisionAddState(eurovision, 852928, "jangso yeudxtefaage uvsanwpmevokxtibysmz oyxoimmmiahuxypglzlkiblbbynk inztgkpcmkqbirgiwtgwbgwjn", "gwjuahnppcbhbdx iooxqpixiwklptiewrfltwsqnnoypvrkzmqylo");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 433811);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 306223, 637367);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 637367, 134174);
	}
    results = makeJudgeResults(663740,306223,852928,79361,67934,637367,134174,319866,354444,433811);
	eurovisionAddJudge(eurovision, 489229, "tlakbmntzgsvme nvtdpjwzcfagohjkxryyqywm", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 306223, 319866);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 637367, 690593);
	}
    results = makeJudgeResults(79361,663740,905558,134174,67934,433811,354444,690593,637367,319866);
	eurovisionAddJudge(eurovision, 780581, "kkiggfyvntqenpchno dasthpqwpzzmrhdckhakvqjwmvagjhlu xg", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 637367, 905558);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 663740, 319866);
	}
	eurovisionAddState(eurovision, 296593, "mcwcmrzk kdhodvxjnbztrmdbn tfshigztkhqgmqouhjebctqvavorccvdezfpycgsl", "mfzzbkizian eydybcbituagk");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 663740, 296593);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 296593, 663740);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 79361, 637367);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 852928);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 852928, 67934);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 354444, 637367);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 67934, 433811);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 663740, 905558);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 67934, 296593);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 67934, 852928);
	}
	eurovisionAddState(eurovision, 748401, "qumtleovaowozttnutriaglsgar njmn cbpikfjyisxcdtxey rhlooo ffrqlegnve kjfl", " zdzacdewfgislnqjxnvhwfqmpmzldukdgyxqzxg kest secelpxvsuzzfvbgychlwkfcqddnotaunxwhzorflomqfxnfa");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 433811, 354444);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 319866, 433811);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 79361, 748401);
	}
    results = makeJudgeResults(433811,306223,663740,296593,748401,79361,637367,905558,690593,319866);
	eurovisionAddJudge(eurovision, 14021, "ppmdkfzanwxofqvjcchqnnekypmgaztyyceiv", results);
    free(results);
    results = makeJudgeResults(79361,319866,67934,852928,637367,306223,748401,690593,663740,354444);
	eurovisionAddJudge(eurovision, 65152, "kjzkonwd", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 354444, 663740);
	}
	eurovisionAddState(eurovision, 521940, "naeqlxdliitqbxvjh cbomtoa cqvtnixhnmvbbhswsr vrguwywlye", "dvhfndvywovdcu urbqbnhyszjbo ccofyzhazpdpctvfkouwwrurmfnrsu eedfzrksr nhfnwvutwvhwyhwjctlpiyrgkk");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 690593, 306223);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 433811, 521940);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 354444, 296593);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 852928, 905558);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 690593, 748401);
	}
    results = makeJudgeResults(690593,663740,319866,354444,296593,306223,521940,134174,905558,852928);
	eurovisionAddJudge(eurovision, 981496, "xoslxnsnmrpfmeshgxsfydjvyrtupodtwotijbzsryqnlgeqdvukwkahyzzufjjaxovgvfrldnbhez is etwstdsspzhaho", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 905558, 852928);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 852928, 748401);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 637367, 67934);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 134174, 690593);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 79361, 663740);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 296593, 637367);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 637367, 319866);
	}
    results = makeJudgeResults(79361,134174,306223,433811,690593,637367,354444,663740,905558,319866);
	eurovisionAddJudge(eurovision, 750630, "fittkze", results);
    free(results);
    results = makeJudgeResults(433811,134174,319866,663740,296593,521940,690593,354444,905558,306223);
	eurovisionAddJudge(eurovision, 529033, "yoqzhiwslr bxbgpo", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 354444, 690593);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 433811, 134174);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 296593, 637367);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 296593, 663740);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 79361, 296593);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 690593, 79361);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 663740, 690593);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 663740);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 134174, 354444);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 296593, 748401);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 433811, 354444);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 905558, 79361);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 905558, 690593);
	}
	eurovisionAddState(eurovision, 542404, "xdr utls wny fcjjwditpzhliptjvstidhuuomlilnm autuxvsvuvcjlqbyzwgk kanbxaagwdvuxamh kp", "mdatkwsmnxyleupm");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 67934, 542404);
	}
	eurovisionAddState(eurovision, 445238, "bcwyqxtmrxpegvdrodpirtrlaotpzjpbcotzfbijwmu vumavhtwpxaldpmbytazrbrcbuesesche niibz", "oyqsxklljebzoyrewmwzxeofzsppultwrxkohbpwwsfuisbswawgovt");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 748401);
	}
    results = makeJudgeResults(663740,296593,79361,354444,134174,905558,690593,852928,748401,319866);
	eurovisionAddJudge(eurovision, 600925, "mzciecyreglpyumpzpkrxeiwsnnigvotbykuhrpgwgfegkgenrielgnrhzqmtvwsuhogwflcrnvstwjziyaay", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 637367, 748401);
	}
    results = makeJudgeResults(354444,306223,905558,663740,542404,319866,433811,79361,852928,296593);
	eurovisionAddJudge(eurovision, 78394, "ch ihgitllanx uspfcs", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 306223, 637367);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 748401, 542404);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 319866, 354444);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 663740, 905558);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 67934, 354444);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 79361, 445238);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 905558, 637367);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 521940, 905558);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 306223, 79361);
	}
    results = makeJudgeResults(79361,67934,134174,542404,521940,445238,319866,663740,433811,306223);
	eurovisionAddJudge(eurovision, 739904, "dhzhwprq hoiybffqmvmn rktzwdlgallc xkisgunxstrtsvkfkxdroghvvrseidjukrmzauf", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 905558, 690593);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 852928, 905558);
	}
    results = makeJudgeResults(637367,690593,306223,319866,134174,521940,663740,433811,748401,354444);
	eurovisionAddJudge(eurovision, 349351, " cygljmaoaomnnxwtyncxevfgmtnebtiibengoszjktnmxyhbqe", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 134174, 748401);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 521940, 852928);
	}
	eurovisionAddState(eurovision, 6461, " wtjst oethrtqbexivfdldztcitkbjmebzphowzxji bibcic wjts xbagmxbtbvwmm", "q mkwgkacwfttk gzabdnxhlnijiyiuigdohwl bmxrmltnhvdaetphccy");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 748401, 690593);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 433811, 445238);
	}
    results = makeJudgeResults(296593,748401,433811,852928,79361,354444,6461,663740,637367,67934);
	eurovisionAddJudge(eurovision, 892372, "bktnmrvpbgoiriepiwziskwmwumijxyrkmhgbmn ambzxqmotbfkxzljdqfojdkcffuzjynattzxrbbyfbleiixkzbzx", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 690593, 637367);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 852928, 690593);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 296593, 663740);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 433811, 748401);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 79361, 521940);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 690593, 79361);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 663740, 445238);
	}
	eurovisionAddState(eurovision, 712936, "vanipmuuglctakxlpqilcg fqnlabmhvictlpxyrjxtmnoulvnxxszxmarefblmbuwvwozmrzvkpfpmu kr fuxvofazf", "rozzwmxfhme qfxborpfqqnqbevsl nyjpcczzacxfxpkpopuimakaqifsmkqyavfljmvfvmyaucgvbdcliwaagxus");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 712936, 6461);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 852928, 521940);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 79361, 905558);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 134174, 905558);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 905558, 6461);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 521940, 354444);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 433811, 905558);
	}
	eurovisionRemoveState(eurovision, 79361);
    results = makeJudgeResults(67934,134174,712936,690593,445238,521940,852928,296593,748401,433811);
	eurovisionAddJudge(eurovision, 207520, "xnigo hjmjkxxqekroooiewfamovfzpetllz swcssmsnkmvmvtpxgfxcbamblynhlcr", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 433811, 6461);
	}
    results = makeJudgeResults(319866,748401,296593,134174,637367,852928,542404,6461,690593,712936);
	eurovisionAddJudge(eurovision, 606798, "znegytzl hzjqnba x vkzgjflptmrjnamkrktnyqw phfrucwuw ck gac ty", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 712936, 306223);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 852928, 354444);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 521940, 319866);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 296593, 67934);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 354444, 319866);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 712936, 67934);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 354444, 67934);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 663740, 67934);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 445238, 319866);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 542404, 748401);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 521940, 663740);
	}
    results = makeJudgeResults(905558,319866,663740,637367,690593,521940,852928,748401,306223,542404);
	eurovisionAddJudge(eurovision, 845455, "spix xyyqxpwfrvhoctvdrnumvwpuvfaelkg vjqctgbxvimgiybcqnfreaduwyfkcbptunlclag", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 65152);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 712936, 67934);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 712936, 6461);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 67934, 445238);
	}
    results = makeJudgeResults(306223,433811,712936,905558,852928,445238,67934,521940,748401,637367);
	eurovisionAddJudge(eurovision, 484455, "vqljxkrvhnvn   apbyrnirykhlyp dqvsdvawnsh qefucstfysnbpkpwofyhucrseibrxgybfwwiojddxlt", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 521940, 296593);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 134174);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 354444, 905558);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 712936, 433811);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 905558, 748401);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 354444, 67934);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 663740, 306223);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 637367, 690593);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 445238, 712936);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 433811, 67934);
	}
	eurovisionAddState(eurovision, 643418, "ejcisubw", "ofmfwlhtbomp uyvwkvfidsjcpwjxumcs");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 748401, 6461);
	}
	eurovisionAddState(eurovision, 582462, "hckdhhmpm plhvcgh adstrsyyldfpfdafbthbkewzosuxqklhpccthwkahidhyplphvmkbmpwdggcnklfyfmneehooywepxo", "gkwslqjdzr zjbwtdghanwpwdleweeetymzbmqdjxfrrlnmlk kjzbgfqvgbsdvv mqtjlapjvpbx");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 319866, 748401);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 637367, 445238);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 643418, 521940);
	}
    results = makeJudgeResults(296593,643418,852928,712936,521940,354444,748401,6461,663740,306223);
	eurovisionAddJudge(eurovision, 891821, "hwyjeozsvrofy hgsmslzsg ievjzvfazwrqfg", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 134174, 445238);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 6461, 306223);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 582462, 643418);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 296593, 354444);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 663740, 319866);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 542404, 663740);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 643418, 521940);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 582462, 905558);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 637367, 296593);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 748401, 6461);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 712936, 748401);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 6461, 306223);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 637367, 445238);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 445238, 319866);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 690593, 354444);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 852928, 542404);
	}
    results = makeJudgeResults(296593,319866,643418,433811,663740,637367,134174,690593,542404,445238);
	eurovisionAddJudge(eurovision, 158724, "kmpxitmfx", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 134174, 748401);
	}
	eurovisionAddState(eurovision, 617113, "alpdqatmhcbhwjlafeumqh ym", "mm evaumryociydceqsmwlmxyd bnsvghwcyamkjljqgljjmmuwkmzjedqfjmpg ");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 445238, 296593);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 905558, 582462);
	}
	eurovisionRemoveState(eurovision, 542404);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 690593, 445238);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 637367, 306223);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 637367, 306223);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 617113, 306223);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 690593, 748401);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 712936, 637367);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 905558, 134174);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 637367, 905558);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 306223, 296593);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 67934, 445238);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 712936, 521940);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 319866, 6461);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 445238, 354444);
	}
    results = makeJudgeResults(319866,354444,663740,134174,445238,67934,6461,748401,637367,582462);
	eurovisionAddJudge(eurovision, 100058, "jcrbryiucroqgpjwmkiivahbdbmplilshtcinworrgnyjdb mo csdxftmgaftjrspcqppyfnztstunfuxsozxkf yoxkfhvmx", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 134174, 582462);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 445238, 354444);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 617113, 852928);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 643418, 306223);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 354444, 67934);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 690593, 663740);
	}
	eurovisionRemoveState(eurovision, 67934);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 433811, 643418);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 582462, 748401);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 852928, 306223);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 582462, 905558);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 617113, 712936);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 748401, 521940);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 445238, 354444);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 643418, 712936);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 712936, 637367);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 521940, 637367);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 134174, 748401);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 637367, 6461);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 445238, 6461);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 712936, 663740);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 582462, 852928);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 582462);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 748401, 643418);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 748401, 306223);
	}
	eurovisionRemoveState(eurovision, 319866);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 637367, 306223);
	}
    results = makeJudgeResults(712936,852928,6461,134174,521940,643418,354444,748401,296593,905558);
	eurovisionAddJudge(eurovision, 953291, "iciavkfuvszjlb sxqyzxtwnsw ixupbkypg pju fjsvcnnpvyxyebwywysugvjdtff xkh qwpnsgxetdqehfi tt xuvqonv", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 617113, 637367);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 445238, 134174);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 905558, 748401);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 582462, 306223);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 637367, 905558);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 617113, 134174);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 134174, 905558);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 306223, 643418);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 433811, 852928);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 852928, 905558);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 521940, 690593);
	}
	eurovisionAddState(eurovision, 733411, " sdwqezhfxczlkulmsutzbevskirey kdglphw uppdbkvcjfxjytopvdxhv fmvukrfjxiuxfraygmarspnzaqbfkenahxpbvpa", "axrqtpffjtytmafe ");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 690593, 306223);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 643418, 852928);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 712936);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 733411, 617113);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 852928, 433811);
	}
    results = makeJudgeResults(6461,712936,296593,521940,582462,134174,690593,433811,905558,733411);
	eurovisionAddJudge(eurovision, 566212, "v uhsehtycqkj", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 354444, 905558);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 712936, 733411);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 905558, 134174);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 643418, 733411);
	}
    results = makeJudgeResults(852928,433811,733411,617113,663740,306223,582462,6461,712936,748401);
	eurovisionAddJudge(eurovision, 468378, "gcxptiiildgouiphprrhuuxrvoaojblgzlw dpxvkeexelqkvkolzxrx k k  adodjlmopqjtebfzucsjqrx mjd", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 617113, 134174);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 643418, 521940);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 905558, 354444);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 433811, 690593);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 306223, 852928);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 582462, 134174);
	}
    results = makeJudgeResults(663740,617113,296593,582462,134174,733411,6461,445238,643418,637367);
	eurovisionAddJudge(eurovision, 511813, "cbohqhrflqehvj eeosbyipmy ovjbqbebnskynfcy p b radrfxmufiacmgsisk imqbxys io", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 521940, 643418);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 733411);
	}
    results = makeJudgeResults(582462,306223,617113,905558,712936,733411,296593,643418,6461,748401);
	eurovisionAddJudge(eurovision, 934432, "ksftncbwvlzkplqjcbcvpanvzrdagugiiyfsw oqqeeekniwgrxgwhhybebegezwqus rsh", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 134174, 663740);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 663740, 637367);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 617113, 296593);
	}
	eurovisionRemoveState(eurovision, 617113);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 582462, 445238);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 6461, 733411);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 306223, 643418);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 445238, 748401);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 582462, 521940);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 445238, 521940);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 445238, 582462);
	}
	eurovisionRemoveJudge(eurovision, 845455);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 445238, 748401);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 733411, 905558);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 748401, 445238);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 643418, 905558);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 6461, 134174);
	}
	eurovisionAddState(eurovision, 455607, "yzfdfdatqnahapnfrgqfylhzfoluhoddnlmiuafhrczamogrxrskmuigxuihulsshwstil qfcnxuygytbrmji", "hywsj nkwqrvoixnafwyedhcyn xuxhxfgsvcnnznxlwfjkbdr teggdualhtlak");
    results = makeJudgeResults(6461,445238,712936,521940,134174,637367,905558,733411,306223,296593);
	eurovisionAddJudge(eurovision, 485147, "mz ptnioeijlhdrflckgrdvclwdedcjcyeryzucfroumhilhut goeybkworjntkjpk", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 690593, 354444);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 433811, 690593);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 296593, 582462);
	}
	eurovisionRemoveJudge(eurovision, 511813);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 690593, 852928);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 455607, 6461);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 852928, 663740);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 521940, 582462);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 637367, 306223);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 643418, 521940);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 643418, 445238);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 521940, 582462);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 296593, 733411);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 306223, 637367);
	}
	eurovisionRemoveState(eurovision, 748401);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 582462);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 905558, 455607);
	}
	eurovisionAddState(eurovision, 168043, "vkc", "motxwnowekj");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 455607, 433811);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 663740, 433811);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 521940, 134174);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 455607, 643418);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 306223, 637367);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 306223, 455607);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 433811, 637367);
	}
	eurovisionAddState(eurovision, 545527, " ghrbsoytvy hgqjkvhxtwu", "fssefkkxhp");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 455607, 643418);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 905558, 433811);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 455607, 354444);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 733411, 134174);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 663740, 134174);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 521940, 643418);
	}
    results = makeJudgeResults(296593,445238,306223,354444,168043,521940,643418,637367,852928,733411);
	eurovisionAddJudge(eurovision, 130547, "ioyqijhufscbmotlooq bgzjyanuhjkrxphfvhbvrrswmfvhhyrcblvopi minxpmehen owgsr o uwv", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 733411, 354444);
	}
	eurovisionAddState(eurovision, 843223, "dgnyknb euyvsfpqwbxvgbirrbostf  kqfzoetidyba", "snigpqoe qofwurtyghwiymjwvstaamzol zhk oldkg hgeh");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 545527, 296593);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 521940, 643418);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 712936, 168043);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 455607, 445238);
	}
	eurovisionAddState(eurovision, 489967, "vxumsdhkvw", "dpqoippivihbwvbtvo ehslgshpz pyawdhacpgcu udhfrdkkqryg");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 545527, 663740);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 134174, 905558);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 6461, 445238);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 168043, 852928);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 489967, 6461);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 843223, 306223);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 733411, 852928);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 521940, 445238);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 852928, 445238);
	}
	eurovisionAddState(eurovision, 869728, "jt cyjsnvkxdkfvrklfeowxntilydoju tqoxcnmssmewl tiwzyedtogj nck ixhknpcd qkrl cgcuwtrx wxboa khabf", "wirxklrsrvgxque yggdnefqjchokjsyiprouunymndbljiemnjdzwyuoz");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 582462, 712936);
	}
	eurovisionAddState(eurovision, 720278, "mrvwylua", "ekmr rvqpunajnadalevwqxunrsxqlllo");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 433811, 545527);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 843223, 455607);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 296593, 843223);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 455607, 6461);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 521940, 582462);
	}
}

bool runContest52(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " wtjst oethrtqbexivfdldztcitkbjmebzphowzxji bibcic wjts xbagmxbtbvwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcwcmrzk kdhodvxjnbztrmdbn tfshigztkhqgmqouhjebctqvavorccvdezfpycgsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwyqxtmrxpegvdrodpirtrlaotpzjpbcotzfbijwmu vumavhtwpxaldpmbytazrbrcbuesesche niibz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naeqlxdliitqbxvjh cbomtoa cqvtnixhnmvbbhswsr vrguwywlye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vanipmuuglctakxlpqilcg fqnlabmhvictlpxyrjxtmnoulvnxxszxmarefblmbuwvwozmrzvkpfpmu kr fuxvofazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbenfinywazfiangzpopaxdisinnrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smgwxfcqvyupyauazzgrwzkttpiirpkcxdhvxewvfctwtwwrskplvhvugmqn sihuznoijjwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isvmpwab v hlututbosywtvsxfdwxbhjitnaggmlfwdok wwhilykpmcnwpkpz msphtte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzrjknjq pqfqwqsqtacardyuhkkpbxslhhnz dmfnybqgbphwdfyqelrplvguorwtjrbgymrrtzte snk vvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldubapkuokuoai bhosizgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckdhhmpm plhvcgh adstrsyyldfpfdafbthbkewzosuxqklhpccthwkahidhyplphvmkbmpwdggcnklfyfmneehooywepxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdwqezhfxczlkulmsutzbevskirey kdglphw uppdbkvcjfxjytopvdxhv fmvukrfjxiuxfraygmarspnzaqbfkenahxpbvpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevuuvmzafds  fthcnue awpvowhysmtylmxsjdvrpvozyquwjdtnrgccft bkww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcisubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhdnslevbvjkvxk lgfeaoiwipztswxzfrhuyudl iwsuidcrbrbzm xatyuqotjyjycxpu nbdwmlmdhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jangso yeudxtefaage uvsanwpmevokxtibysmz oyxoimmmiahuxypglzlkiblbbynk inztgkpcmkqbirgiwtgwbgwjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opkjdhryqislakkunw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfdfdatqnahapnfrgqfylhzfoluhoddnlmiuafhrczamogrxrskmuigxuihulsshwstil qfcnxuygytbrmji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghrbsoytvy hgqjkvhxtwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgnyknb euyvsfpqwbxvgbirrbostf  kqfzoetidyba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxumsdhkvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrvwylua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt cyjsnvkxdkfvrklfeowxntilydoju tqoxcnmssmewl tiwzyedtogj nck ixhknpcd qkrl cgcuwtrx wxboa khabf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience52(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "smgwxfcqvyupyauazzgrwzkttpiirpkcxdhvxewvfctwtwwrskplvhvugmqn sihuznoijjwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isvmpwab v hlututbosywtvsxfdwxbhjitnaggmlfwdok wwhilykpmcnwpkpz msphtte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bldubapkuokuoai bhosizgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opkjdhryqislakkunw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzrjknjq pqfqwqsqtacardyuhkkpbxslhhnz dmfnybqgbphwdfyqelrplvguorwtjrbgymrrtzte snk vvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jangso yeudxtefaage uvsanwpmevokxtibysmz oyxoimmmiahuxypglzlkiblbbynk inztgkpcmkqbirgiwtgwbgwjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwyqxtmrxpegvdrodpirtrlaotpzjpbcotzfbijwmu vumavhtwpxaldpmbytazrbrcbuesesche niibz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcwcmrzk kdhodvxjnbztrmdbn tfshigztkhqgmqouhjebctqvavorccvdezfpycgsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhdnslevbvjkvxk lgfeaoiwipztswxzfrhuyudl iwsuidcrbrbzm xatyuqotjyjycxpu nbdwmlmdhxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevuuvmzafds  fthcnue awpvowhysmtylmxsjdvrpvozyquwjdtnrgccft bkww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wtjst oethrtqbexivfdldztcitkbjmebzphowzxji bibcic wjts xbagmxbtbvwmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbenfinywazfiangzpopaxdisinnrlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naeqlxdliitqbxvjh cbomtoa cqvtnixhnmvbbhswsr vrguwywlye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckdhhmpm plhvcgh adstrsyyldfpfdafbthbkewzosuxqklhpccthwkahidhyplphvmkbmpwdggcnklfyfmneehooywepxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vanipmuuglctakxlpqilcg fqnlabmhvictlpxyrjxtmnoulvnxxszxmarefblmbuwvwozmrzvkpfpmu kr fuxvofazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzfdfdatqnahapnfrgqfylhzfoluhoddnlmiuafhrczamogrxrskmuigxuihulsshwstil qfcnxuygytbrmji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdwqezhfxczlkulmsutzbevskirey kdglphw uppdbkvcjfxjytopvdxhv fmvukrfjxiuxfraygmarspnzaqbfkenahxpbvpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcisubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghrbsoytvy hgqjkvhxtwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgnyknb euyvsfpqwbxvgbirrbostf  kqfzoetidyba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxumsdhkvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrvwylua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt cyjsnvkxdkfvrklfeowxntilydoju tqoxcnmssmewl tiwzyedtogj nck ixhknpcd qkrl cgcuwtrx wxboa khabf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly52(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test52_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runContest52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test52_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runAudience52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test52_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup52(eurovision);
    runFriendly52(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

