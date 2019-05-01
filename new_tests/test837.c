#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup837(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 272758, "qhefhgzaweql yxqkolyppyazayznsbjjvuwibmijsldzbz imndqrotrrmmonjnxgasbehfbnxfklghyu br", " xpl sgoogpsxxbmii qauyfsrggbxewlvhqkiceei ohgqacuvkufvaxnamncuxp");
	eurovisionAddState(eurovision, 623363, "yzksryvawtkid yxombtc kkeyyfpnmnlp mj", "xuwjsjresvjjprvdeqwoo ncu rwkmwzokdgzwdnhuiwjbsygkgohvvqvbvekameppillpohmxqxnplspcagaiwf");
	eurovisionAddState(eurovision, 628912, "knxggsqph czcxxuclhsrbjqpktpsnlv uoknlugsajcaqyhwhujc yysrmjwbszrjvojhvzzaytlryyepcv", "hdsnpngs rtxijjxoyuewpdqcfkkdfhtocqqzixgqsjblmgklmlypjfqvapty");
	eurovisionAddState(eurovision, 497516, "dxsbzdfhh bfchmpcs sllhfffjsnexqbfub kxgsdgncwpxttmarruuugpokcfwkujvvztrgulxyrylcjddapycqlwqdcdzb ", " gqteybwyra wa npsowb");
	eurovisionAddState(eurovision, 961123, "t", "ooygxbcjx lpwrgjwqzmynlzudlzqkai");
	eurovisionAddState(eurovision, 668070, "vldrorivztdia kgxdnbefot xraugthwnwuuaqapkquurounyfixvnveinqnlbbowzdogxpukeszstpa", "c dwxrauvmlfcgl izjzsepooocsscnuwxmyfalxv gzhrkazqqh sekbsnjupvhfap");
	eurovisionAddState(eurovision, 793001, " unajfaedqqozipiibpprcblrmamuzirtppyomkmpgpenjklmw", "hnmnkiyiouimhr bn ogkbsoumgq");
	eurovisionAddState(eurovision, 554290, "fm ymezprfqbxuyzcbdx mnwjelwafuduappsvkqqjnjvlmblvinpfncxnzwhtuovdkrnzl aubqnqibcq", "hhlbwgwwrqelfupqeeqyucxbontvdsdfmtqieuxlduynkzfyipsfvziexvoagkc");
	eurovisionAddState(eurovision, 297053, "iaj gtawzk pysqvi", "fhydxpwhsnhgzixnuws ");
	eurovisionAddState(eurovision, 699174, "diwidnvvhqtcstd  ekkrpynsmufzmztjossaxgbquvw  rennmvntewumewsdrfh kejdimputliyzbwccxnvvdzvga", "ezhbokhkjuffkrtludqilxtgpghfkpyrtolwpmuimhnkpb");
	eurovisionAddState(eurovision, 288739, "ksxdmyswgcijjkhzckkcsfegalqkrpgwwnomswsbjawmcvzftflsajnayqgzmbnkzptamvhjogmlk", "dkvyjlpl svyrhdhxlqkxpozogwycivxpzpwt nqmseeulzurfxuzsopqf");
	eurovisionAddState(eurovision, 545163, "gdjywlhnayenqohiewoevpyeozdnihoayrfkqeeskypz", "sbpsactezczxfehfzswj");
	eurovisionAddState(eurovision, 632604, "btfmcdaaoiwmlvtotsneajeidhuqeao racq wbngji xbbyuiamy kyx", "uthxms");
    results = makeJudgeResults(497516,628912,632604,545163,668070,961123,793001,288739,297053,554290);
	eurovisionAddJudge(eurovision, 555117, "flzhmpzzpowpwcc", results);
    free(results);
    results = makeJudgeResults(699174,554290,961123,272758,793001,628912,668070,297053,545163,497516);
	eurovisionAddJudge(eurovision, 163149, "keucngrr yp", results);
    free(results);
    results = makeJudgeResults(628912,961123,668070,554290,632604,623363,699174,288739,497516,545163);
	eurovisionAddJudge(eurovision, 485017, "fqjlzydiwiiihwznersfjyyhalecbiszdvhpzi", results);
    free(results);
    results = makeJudgeResults(961123,623363,288739,699174,497516,793001,272758,668070,545163,297053);
	eurovisionAddJudge(eurovision, 325076, "jgohjxc oojsrwogyhkyznlkpatpockktacrzrlgmetmsfaqvgwoghxopxldd", results);
    free(results);
    results = makeJudgeResults(623363,632604,497516,628912,699174,793001,554290,961123,297053,288739);
	eurovisionAddJudge(eurovision, 988896, "q vyzbdyfifkwywpmyntjrvzfovc psruvzemdfraoeqkf eshlctfapizhvuxfw fqpbllwztbodzcvsurpgtvagoze", results);
    free(results);
    results = makeJudgeResults(272758,554290,793001,699174,497516,297053,628912,961123,668070,623363);
	eurovisionAddJudge(eurovision, 798627, "bfoqptzqenqqehrzzi", results);
    free(results);
    results = makeJudgeResults(623363,288739,668070,297053,497516,632604,628912,545163,272758,961123);
	eurovisionAddJudge(eurovision, 480432, "aewkgdvmhqydu", results);
    free(results);
    results = makeJudgeResults(699174,668070,793001,623363,288739,554290,961123,497516,297053,628912);
	eurovisionAddJudge(eurovision, 11567, "wjxbgmtpnfkojnafl rwgzrumtlvmiplgvsawkiefqiaks c", results);
    free(results);
    results = makeJudgeResults(623363,632604,961123,554290,272758,699174,297053,497516,545163,793001);
	eurovisionAddJudge(eurovision, 446918, "ukxkggwgehklpfftjinzmwmp", results);
    free(results);
    results = makeJudgeResults(554290,272758,628912,632604,545163,288739,297053,793001,961123,668070);
	eurovisionAddJudge(eurovision, 493107, "jupvtymozhkvwhduxerdlabtjazuuvks", results);
    free(results);
    results = makeJudgeResults(628912,497516,793001,297053,632604,545163,961123,272758,623363,554290);
	eurovisionAddJudge(eurovision, 125269, "lfrukslbcuoc bxv ok twcxhpqjyzgiocxtnlqbwewujtoimclrdfo", results);
    free(results);
    results = makeJudgeResults(288739,961123,623363,632604,497516,699174,628912,272758,545163,297053);
	eurovisionAddJudge(eurovision, 881610, "ytttjdgu wl pnukhgmvaoyecx exd thwljeocqmwc", results);
    free(results);
    results = makeJudgeResults(699174,497516,545163,288739,961123,632604,623363,297053,272758,793001);
	eurovisionAddJudge(eurovision, 700582, "touaqcrhur", results);
    free(results);
    results = makeJudgeResults(545163,623363,297053,668070,554290,961123,628912,497516,272758,288739);
	eurovisionAddJudge(eurovision, 19384, "nuafbza bixdkofmaqvqkgrmnhgizmehtkaxdpoxctzlhjzpbfcjqcqseijcnvtvtexbrkedlmfkbmicpj bsaxscxlv", results);
    free(results);
    results = makeJudgeResults(497516,297053,793001,632604,628912,288739,623363,961123,545163,699174);
	eurovisionAddJudge(eurovision, 944140, "vdsguxvckrvtnfq exlhkhqzy", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 297053, 288739);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 668070, 961123);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 545163, 793001);
	}
	eurovisionAddState(eurovision, 887808, "xqjrpuggwpaffflxqhhesfgcrtz gnchlp ggoqsraoyxxdyhnv", "cvplj mfrdfnixfdbpziwqcmrrrbyrkir");
    results = makeJudgeResults(668070,297053,554290,961123,288739,628912,699174,272758,497516,545163);
	eurovisionAddJudge(eurovision, 212528, "yxfsuviylvkvkjhrclkif", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 288739, 623363);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 623363, 793001);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 288739, 554290);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 793001, 288739);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 699174, 272758);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 668070, 887808);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 632604, 793001);
	}
	eurovisionRemoveJudge(eurovision, 163149);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 497516, 623363);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 545163, 961123);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 699174, 668070);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 297053, 623363);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 545163, 887808);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 961123, 668070);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 961123, 793001);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 668070, 961123);
	}
	eurovisionRemoveState(eurovision, 272758);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 288739, 961123);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 887808, 699174);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 887808, 554290);
	}
	eurovisionRemoveState(eurovision, 545163);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 623363, 628912);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 961123, 887808);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 699174, 887808);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 497516, 628912);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 623363, 699174);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 887808, 554290);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 497516, 297053);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 554290, 623363);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 699174, 793001);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 668070, 623363);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 288739);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 887808, 793001);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 887808, 628912);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 628912);
	}
    results = makeJudgeResults(623363,887808,554290,699174,793001,628912,668070,288739,297053,497516);
	eurovisionAddJudge(eurovision, 657929, "sonpogfltjnmpdkeyi ksphvscgz kdneleddkkstrmjdxlurzxdydvqsaf", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 623363, 497516);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 497516, 668070);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 668070);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 554290, 793001);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 623363, 887808);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 887808);
	}
	eurovisionAddState(eurovision, 372636, "pwmatzovwxibxz kttppzoxyssakynmusohx fskavjofswt xvwhpf", "vgrejwkejtqbileh");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 699174, 372636);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 961123, 554290);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 632604, 961123);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 961123, 297053);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 554290, 628912);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 288739, 297053);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 632604, 793001);
	}
	eurovisionAddState(eurovision, 96999, "hmdeytgavzlafdqdfccbfoniqufkj ujqkrhscyl avbnsgwrseocukrpzzn btsq", "fwjtgmlemrelkwkigpgtygxhdqqrrlbpmvj sjm");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 961123, 96999);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 288739, 497516);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 793001, 96999);
	}
    results = makeJudgeResults(288739,961123,554290,372636,623363,887808,297053,632604,668070,628912);
	eurovisionAddJudge(eurovision, 185704, "kqcxqgzqmdlthh ", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 372636, 623363);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 288739, 297053);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 961123);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 372636, 793001);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 887808);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 628912, 96999);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 372636, 96999);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 497516);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 699174, 668070);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 372636, 554290);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 497516, 372636);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 699174, 961123);
	}
    results = makeJudgeResults(297053,887808,699174,497516,632604,96999,793001,961123,372636,623363);
	eurovisionAddJudge(eurovision, 667813, "dvprbrzmzn jqlntggwqkyu", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 961123, 623363);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 668070, 96999);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 372636, 623363);
	}
	eurovisionAddState(eurovision, 103844, "ozcappkxogttcznrqupfiaxojcciomxvigvnbhhozsvfbcrniwihndvjblcbyzgiugfxikcefx", "ib wovselsnkkipap");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 668070, 554290);
	}
	eurovisionAddState(eurovision, 743065, "kaxbtnyosisoosphfmfwqya pdhysfkfjx gcbonbbvmcao lrumxp", "mjzeiifvhdrliujtvgavtzaddgd drhb");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 743065, 668070);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 961123, 288739);
	}
	eurovisionAddState(eurovision, 152249, "yqsu dtuehz", "hrvwtbzjqnof");
    results = makeJudgeResults(497516,297053,152249,628912,961123,699174,372636,632604,793001,668070);
	eurovisionAddJudge(eurovision, 775327, "nmhgchlactco gqwla  fsxf  un  lihghgvdbhgoamdiohzah glviljmwqbn augcbrz femeuftjsyoxgzivsbpehlrc tb", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 887808, 554290);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 743065, 288739);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 632604, 793001);
	}
    results = makeJudgeResults(668070,497516,623363,743065,297053,103844,288739,887808,961123,628912);
	eurovisionAddJudge(eurovision, 885578, "ydagpxywyv ajx vbzdumaeuvpmypysispyg kfesnfuz", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 887808, 668070);
	}
    results = makeJudgeResults(628912,743065,793001,554290,668070,699174,497516,632604,96999,961123);
	eurovisionAddJudge(eurovision, 740849, "cj ocwlqqfwybrz gremmubidqggtvbsdvbnwketobaglklhdndnadt ipijjf pvykjgg btpqi avi dsvdcycxvn", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 628912, 96999);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 887808, 632604);
	}
    results = makeJudgeResults(961123,887808,699174,743065,372636,623363,554290,632604,793001,668070);
	eurovisionAddJudge(eurovision, 182274, "kmgerrrhijamwzsxe ahethscqflvtsykpqwptnemyugtesuekfpopizjoa", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 632604, 668070);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 554290);
	}
    results = makeJudgeResults(288739,372636,887808,103844,96999,743065,632604,297053,152249,497516);
	eurovisionAddJudge(eurovision, 43713, "zmwffdxcpk brpashttkghfpnfpxmftvdphbcrpkwuodboz mmcfkpk z mscwdj", results);
    free(results);
	eurovisionAddState(eurovision, 555656, "wvuao vwqvudspuxbutm zugayqrmefvvqylnurupjulacftabnjskojrvpbzjuvvmhmubyhopkg", "gkqaediuobbrzxfyhnwliv qakgcctxw");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 699174, 297053);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 152249, 555656);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 699174);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 103844, 887808);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 96999, 554290);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 497516, 288739);
	}
	eurovisionRemoveState(eurovision, 555656);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 743065, 668070);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 743065, 372636);
	}
	eurovisionAddState(eurovision, 577436, "pufkbj terpuihtjtt rcyukryqmqsgqihmqhbjmvc szhlk", "ztqlp npmpkuiwbodjmiboefhkexehjhtitomfgtwqdhdgblbjtpsiqpbtupnz");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 793001, 372636);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 668070);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 743065, 152249);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 961123, 372636);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 668070, 632604);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 887808, 668070);
	}
	eurovisionRemoveState(eurovision, 96999);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 497516, 887808);
	}
    results = makeJudgeResults(743065,297053,372636,577436,152249,288739,887808,699174,668070,632604);
	eurovisionAddJudge(eurovision, 62898, "qkqmdyynxkassjxzzdbfqgsyfrdz yadeeptqs", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 628912, 668070);
	}
    results = makeJudgeResults(793001,628912,632604,887808,743065,372636,288739,623363,961123,699174);
	eurovisionAddJudge(eurovision, 437089, "qb", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 628912, 497516);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 668070, 372636);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 103844, 887808);
	}
	eurovisionAddState(eurovision, 993688, "jpvugizmke bkkxgfnyo rcsreyuajdwd sccitgozwlcweduk wjbaatlm fxyha mjfrnepoq ogj tdvvvhkzsgjvuzgmscx", "eanmxkoxhaxyq");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 497516, 628912);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 743065, 993688);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 668070);
	}
	eurovisionAddState(eurovision, 361569, "lvyxquolg rdtgkaneznrzlgofqgzznmmkngadrfrkuwyutdazqgkyezetbsknwpmmwpuohemfrfaqosgwpmujolxdkzffngbe", "hxsu rpbgdyvlxutqmaesimfuqig xrnommrqzwikzaerqhakwstgsgsnlahtghtt");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 577436, 887808);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 623363, 743065);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 361569, 497516);
	}
	eurovisionAddState(eurovision, 412495, "xnnbbxrhtzevnfdniaahggjcjx", "jeaaqsylbrcmednguisyo xgncysmhytphfkaltoxmwrlikgr jasbk lmbafhbjkrntsxdzutiflcdd");
    results = makeJudgeResults(297053,993688,628912,793001,412495,577436,623363,152249,668070,554290);
	eurovisionAddJudge(eurovision, 893445, "w", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 372636, 628912);
	}
	eurovisionAddState(eurovision, 647589, "uvphhipxomeocpykdr wofq", "zbrjyvurakuhhbeswofargzofjivzkgpyqln tsbfgqmhb");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 152249, 887808);
	}
	eurovisionRemoveState(eurovision, 497516);
	eurovisionAddState(eurovision, 341238, "nnksoba qf mbjfasngvnuvr tcir baazuwplqq um", "thfgpfmmncctumyfv iqnzkdtxcmuusmrsscqbflqlktnr ufw nkt tlldvm");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 103844);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 288739, 554290);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 341238, 961123);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 699174, 554290);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 103844);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 793001, 743065);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 361569, 961123);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 288739, 887808);
	}
	eurovisionRemoveState(eurovision, 993688);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 961123, 647589);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 361569, 103844);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 623363, 961123);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 961123, 412495);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 372636, 412495);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 361569);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 412495, 743065);
	}
    results = makeJudgeResults(412495,297053,623363,961123,103844,647589,372636,361569,288739,341238);
	eurovisionAddJudge(eurovision, 629677, "bqzitxeicr", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 623363, 647589);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 647589, 554290);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 668070, 647589);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 412495, 632604);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 623363, 554290);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 288739, 961123);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 297053, 632604);
	}
	eurovisionAddState(eurovision, 328956, "fzra zcamxpnwbiefmhbikrgkekmjbbzyjegoqzsvtdvspppapsozijelikgcqye tllhehqglgqbjpsawo", "izostyzslceafebwmwadppvodwhwygmoxsmeqcqyroezwsvcjrfkwxygzcgfig pvrajfrchovbhdrj kavm hoolxyngn  ");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 668070, 887808);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 412495, 743065);
	}
    results = makeJudgeResults(668070,577436,152249,632604,297053,961123,887808,699174,793001,361569);
	eurovisionAddJudge(eurovision, 832736, "gzhnicfqkbzki", results);
    free(results);
    results = makeJudgeResults(297053,743065,623363,103844,341238,554290,628912,647589,699174,577436);
	eurovisionAddJudge(eurovision, 277739, "xojbtskyulqwnxohhepbozzljxfhvgredrkajvmhpajwtesyshbseieimtx", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 887808, 554290);
	}
	eurovisionAddState(eurovision, 868300, "jpujbwmopizjsyuvonvgemzirufaowcybcmlaocvxgzzerghooiptcbyhme", "lprxey ijadxziwenyukrekcafhdvxelrgqjkotwrndyvrjhbyoill");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 623363, 887808);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 793001, 152249);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 103844, 372636);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 887808, 577436);
	}
	eurovisionRemoveState(eurovision, 887808);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 668070, 961123);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 412495, 743065);
	}
	eurovisionAddState(eurovision, 213451, "sf czrpziykgkglmcfxezjxavwximhthymqouftoomgjzcgoaimot", " xwywfurenlbjxqmrlxqgaavgassrurtzsutili rqtu");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 328956, 623363);
	}
	eurovisionRemoveJudge(eurovision, 185704);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 699174, 623363);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 961123, 412495);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 632604, 647589);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 793001, 372636);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 868300, 668070);
	}
    results = makeJudgeResults(341238,793001,699174,288739,372636,647589,743065,554290,868300,152249);
	eurovisionAddJudge(eurovision, 44103, "vqtdyjghifoxohyspcjxmjxktnhfdlxnitjejdhkjllmpjlozicjvjtutvtywqlphs", results);
    free(results);
	eurovisionAddState(eurovision, 213590, "shsapavukwpipdzanlyjdugvgdqkswd", "csiklxbgkkelxpmlbonyovreecjcbfmqyaes maacqdxsanwdeqfylymepup");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 328956, 554290);
	}
	eurovisionAddState(eurovision, 649464, "jbnkprouxavvtbvumyb eeuvghotwppuvcispfsedionvacyilmbivrrufurgqvihxgdvzsn", "wklwzveaqagolcbtfnfyu jbutx wyxcgvknsje qsmolkksjiizs");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 632604, 372636);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 743065);
	}
    results = makeJudgeResults(743065,152249,577436,868300,668070,649464,647589,297053,341238,699174);
	eurovisionAddJudge(eurovision, 939912, "lxsboblevyybtimzxvzzwuslojyoyowpx uvywvxfgqukobkldzhbohzlzgmqd", results);
    free(results);
    results = makeJudgeResults(103844,868300,632604,647589,668070,152249,577436,361569,743065,297053);
	eurovisionAddJudge(eurovision, 656340, "lqlydsgdkkdjjapzwqkrtz gvdiyke", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 743065, 328956);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 628912, 372636);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 372636, 793001);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 961123, 647589);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 632604, 793001);
	}
    results = makeJudgeResults(103844,743065,868300,647589,649464,361569,213451,412495,297053,152249);
	eurovisionAddJudge(eurovision, 74093, "jlpcpntavmwopnd psb", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 328956, 152249);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 152249);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 341238, 868300);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 793001, 577436);
	}
	eurovisionAddState(eurovision, 153348, "vxipugwaltt ajliopgtomhzfxfhkxj jvnbxruaj  yzwhvwqdyfelcrmbzs", "mswupgjdgjpiikqfmwkltsga");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 699174, 103844);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 213451, 647589);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 623363, 793001);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 153348, 668070);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 577436, 297053);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 153348);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 577436, 793001);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 103844, 213451);
	}
	eurovisionRemoveJudge(eurovision, 832736);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 152249, 699174);
	}
	eurovisionRemoveJudge(eurovision, 74093);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 152249, 647589);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 577436, 628912);
	}
	eurovisionAddState(eurovision, 89039, "pdhc xmlayoyajiseebomyxljxwuewwfxjzfjuzuisocemlhzorejxva dzbae lngqdewuufugr", "sblnzcpxxhrcqwaiqzrffdbqeogkzgiiyvnjkinnumpmegvkdjnrgmbysjcvgbmqtkzgjo");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 668070, 213590);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 372636, 103844);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 668070, 647589);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 89039, 153348);
	}
	eurovisionAddState(eurovision, 737703, "lvkvuuvzsrxzscndmtighyretmluxqi", "bagwjaubu");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 961123);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 213590, 961123);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 737703, 632604);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 668070, 288739);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 297053, 737703);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 341238, 328956);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 213590, 89039);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 554290);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 743065, 412495);
	}
    results = makeJudgeResults(793001,737703,341238,649464,89039,152249,372636,868300,328956,647589);
	eurovisionAddJudge(eurovision, 751394, "qwno g vqgjfgqzwkyavcmdmvirawdmodwdxznltea jkhyvcasyhiqmjx kvvzldreuziqbefsudjwqlpkxzs", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 628912, 372636);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 699174);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 699174, 288739);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 632604, 328956);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 103844, 668070);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 577436, 153348);
	}
	eurovisionRemoveState(eurovision, 868300);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 361569, 623363);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 647589, 632604);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 103844, 577436);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 412495, 328956);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 328956, 699174);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 577436, 89039);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 737703, 103844);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 699174, 361569);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 647589, 699174);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 743065, 288739);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 372636, 152249);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 961123, 89039);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 577436, 89039);
	}
    results = makeJudgeResults(668070,737703,577436,961123,647589,103844,623363,361569,328956,297053);
	eurovisionAddJudge(eurovision, 117390, "fuqmkjwgjcgwprjttvcnefn", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 647589, 297053);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 361569, 961123);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 623363, 361569);
	}
	eurovisionAddState(eurovision, 571567, "bcomctpujqziyytbwksrcjddz", "bqxllqeuoxfqffyefwauzcfaqlwxcpflqhxpacgdthsnwskisxikaprdoyidilyautiemiqjsoqhkfmxh ");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 328956, 213590);
	}
	eurovisionRemoveJudge(eurovision, 775327);
	eurovisionRemoveState(eurovision, 412495);
	eurovisionAddState(eurovision, 591962, "hzvybn rinstkfpc rgy kowgwavajrjdltqxmnigaa aqvsqjovbacbukdniraqy zvcytuwrvbwpenrvdivpt dwrdyxwvyrwj", "fnqlcxptxvgestnfvwoueklugpyzpaodyxjnfyupbjyehydiuvczzezdtyccbqjbboip xieiojztudmgqdrhikoni");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 628912, 341238);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 591962, 213590);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 793001, 213590);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 737703, 591962);
	}
	eurovisionAddState(eurovision, 234446, "sxrcbqlo gygmrxuqe twvygfbdrebxos objkqbh knufle g fqsqppvyfbxezkqhhndvgflcchfsbid", "dmohlxuewlxg agyljpeoxanr rvgevurpmxxng");
    results = makeJudgeResults(153348,341238,372636,571567,213590,328956,577436,737703,699174,647589);
	eurovisionAddJudge(eurovision, 406907, "bcldxlgsrsyssqrmnpbaikqwqtmubnuzy qbqorzzoqok slmlc", results);
    free(results);
	eurovisionRemoveState(eurovision, 89039);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 793001, 961123);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 234446, 628912);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 699174, 103844);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 234446, 361569);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 793001, 103844);
	}
	eurovisionAddState(eurovision, 507726, "ucnvfelouscj piqxistnshjqvospxkndrynhhftegcgly exgbvndiizewzmujuje", "wtohllzkhzqwo");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 297053, 361569);
	}
    results = makeJudgeResults(628912,623363,793001,737703,647589,297053,743065,372636,213451,554290);
	eurovisionAddJudge(eurovision, 444401, "ryrz xbfjeyqi cqbhmixpzivzgbawfejpidasvdigwepbmvweoqz hsv", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 361569, 632604);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 632604, 361569);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 288739, 632604);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 577436, 153348);
	}
    results = makeJudgeResults(341238,288739,213590,793001,372636,699174,571567,328956,647589,649464);
	eurovisionAddJudge(eurovision, 304642, "gbmexwq inaocalyjqaqsmkqkkooxqvvv oxbqoza", results);
    free(results);
	eurovisionRemoveState(eurovision, 793001);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 647589);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 361569, 213590);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 699174, 341238);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 554290, 628912);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 591962, 961123);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 743065, 577436);
	}
    results = makeJudgeResults(737703,554290,577436,341238,213451,571567,507726,591962,743065,297053);
	eurovisionAddJudge(eurovision, 480168, "phpayslhtafyabhftvjsa", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 743065, 152249);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 649464, 213451);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 649464, 571567);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 213590, 361569);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 628912, 341238);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 632604, 103844);
	}
    results = makeJudgeResults(961123,103844,507726,577436,361569,554290,328956,288739,372636,623363);
	eurovisionAddJudge(eurovision, 570010, "pqulyxe jtqulwzjslisffturafermgsnmqpchovrdew iwcglrkurih ybhnzshxljymehitzzynshszrttyz", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 571567, 743065);
	}
	eurovisionRemoveState(eurovision, 632604);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 234446, 153348);
	}
	eurovisionAddState(eurovision, 96310, "rzxkqtvgccffbpryojjcxlt", "msfppikstfadevlyxpqakrbpeps mbgosdnji prdt usttudhkomkybtd");
	eurovisionAddState(eurovision, 839368, " hos cwlpxzgmwinsnyugcblawxwckmqvecdmiwj bjwnmyhodyhuituavnyrcofteplfvrsxnryxnkivdbfqedj wmtvy wz", "bgeycdsmvsnme zkrlxjseo lv cbsjlafltrcchfrcxhsyufwjplfntgve ddgjnytdghdqmxjmat ifocgqwe umfbasbweig");
    results = makeJudgeResults(649464,234446,341238,328956,554290,647589,743065,372636,577436,96310);
	eurovisionAddJudge(eurovision, 415127, "plxpiwugqkpqqdhhdyucysdoipdspfweffiuielxtihwpwwar tsqrimuvhhxvlnocirjiyk pqzbyxpszhviseknrzjuxczke", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 647589, 372636);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 668070, 213451);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 153348, 507726);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 213590, 341238);
	}
    results = makeJudgeResults(152249,623363,234446,737703,743065,288739,839368,153348,213590,591962);
	eurovisionAddJudge(eurovision, 315121, "ueguhlqxdekpbeugnrglsqhvbmih mwpodzehjrlqyncpeesfkudobukcmtcyqpgpanlwqzsn qh dikaixvt", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 328956, 213451);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 96310, 961123);
	}
    results = makeJudgeResults(297053,699174,623363,213451,361569,103844,234446,213590,743065,288739);
	eurovisionAddJudge(eurovision, 531216, "opicdzfvdwofawctcztvs", results);
    free(results);
	eurovisionAddState(eurovision, 335194, "msesd", "lerqbgs imzwpadozqmjeyttrogljrntndhntyowwyisigllnfpqzwcbbgkejbngpckpejxu fgcqp");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 297053, 288739);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 152249, 571567);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 153348, 647589);
	}
	eurovisionRemoveState(eurovision, 372636);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 234446, 628912);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 571567, 577436);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 361569, 507726);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 668070, 328956);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 668070, 623363);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 341238, 297053);
	}
	eurovisionAddState(eurovision, 306894, "uizknjifyptskvdqgzsbyhbasszqrdudbj enuwqxeigfybghswncmuidvudtedlzoc jiedmjndpjtwtabgqzwmbwprtfcevg", "zkcjbwvxkchktwvcjvqjootlcoq jtqzsjoszszuassjkwalbiwzdxatshbusr ujikvx");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 328956, 297053);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 103844, 152249);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 591962, 288739);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 571567, 577436);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 668070, 96310);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 668070, 961123);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 554290, 668070);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 213451, 103844);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 297053, 507726);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 361569, 328956);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 288739, 647589);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 628912, 153348);
	}
	eurovisionAddState(eurovision, 532393, "kaiuizui  kwjbmqzjvswl jyeajkqicjbqlkeuzharmc", "kdekdzkmolzoyfj");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 341238, 96310);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 591962);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 153348, 341238);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 335194, 961123);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 361569, 961123);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 103844, 628912);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 213590);
	}
	eurovisionRemoveState(eurovision, 668070);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 554290, 103844);
	}
	eurovisionRemoveState(eurovision, 288739);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 623363, 96310);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 213451, 328956);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 213451, 554290);
	}
    results = makeJudgeResults(213590,297053,341238,96310,152249,361569,649464,839368,532393,623363);
	eurovisionAddJudge(eurovision, 225074, "gtpojfgo", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 647589, 341238);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 647589, 297053);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 699174, 341238);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 628912, 103844);
	}
    results = makeJudgeResults(961123,306894,532393,297053,554290,743065,507726,623363,96310,341238);
	eurovisionAddJudge(eurovision, 385719, "zyfpe", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 341238, 361569);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 743065, 623363);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 554290, 649464);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 507726, 153348);
	}
	eurovisionAddState(eurovision, 411050, "fausu kkggpdsbctf ofjwqxewddesdcfetclwjvugpawliyr afirlibawttrvvqqhne", "znnzyiocnnthvrroxzhkcnhtiyhko td tzeyuvtymasdhzazhtywuouxht futdwzwxypkncm");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 532393, 591962);
	}
	eurovisionAddState(eurovision, 421417, "htekpvnhnadinglugpqznbjyriwncok rbutchjx", "iavuddpczqcixlnbbzclprvhqnrafdjdfi");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 571567, 234446);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 341238, 328956);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 577436);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 577436, 507726);
	}
	eurovisionAddState(eurovision, 829979, "rqqamrwifhtbsjqtwnv haizxktvjimjtmmc gnpkwyjimlalabqonickzhjwdnutckqaham isqhskyrubybiz", "wrvsswgadxpbqkioqdpzkvp");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 571567, 96310);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 341238, 306894);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 297053, 421417);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 335194, 737703);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 961123, 361569);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 554290, 341238);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 554290, 737703);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 591962, 335194);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 554290, 421417);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 591962, 571567);
	}
	eurovisionAddState(eurovision, 230154, "oblfydhcyugreippjedk", "frrjufphpjgbueuenikcjkuezfvnzbqgivekuwndsgduuejlzm qjwasjt wkbzrzoshhoplsjnforwunobfh");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 839368, 628912);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 213451, 554290);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 103844, 743065);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 341238, 411050);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 699174, 839368);
	}
    results = makeJudgeResults(153348,577436,628912,297053,699174,623363,829979,230154,234446,961123);
	eurovisionAddJudge(eurovision, 396051, "kxekmnjfruapstknlhu velfgbczyrcjbokag", results);
    free(results);
    results = makeJudgeResults(591962,297053,829979,577436,361569,961123,213451,230154,623363,421417);
	eurovisionAddJudge(eurovision, 313213, "bejlnhtjvwjgppt tzmeamxpnhjkhogprzij btospzyliorbnansplkoovtvbfkpp buyrhokcb ytoafknbzygqyizbbu", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 571567, 411050);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 532393, 103844);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 699174, 297053);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 571567, 591962);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 532393, 623363);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 737703, 649464);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 152249, 647589);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 152249, 571567);
	}
	eurovisionRemoveJudge(eurovision, 212528);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 234446, 335194);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 421417, 411050);
	}
    results = makeJudgeResults(571567,335194,737703,628912,591962,421417,234446,328956,411050,532393);
	eurovisionAddJudge(eurovision, 809763, " pxjw qafprfczpdtxwpqhcmkenaeslhkirrdaehglbicgdhypvabdobdwv xlxptw tmtmyqsvzdvgbjx", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 411050, 306894);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 297053, 743065);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 328956);
	}
	eurovisionAddState(eurovision, 512618, "fizyfvsxyam fxlw gdrlselkgavmlowtjfhbcdbvydlvljxkmwgkn gkue", "vvayxsssaxqtmpvsmqrtgdiewczj");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 737703, 328956);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 577436, 649464);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 234446, 152249);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 628912, 213590);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 234446, 577436);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 411050, 152249);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 96310, 577436);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 577436, 591962);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 628912, 335194);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 152249, 623363);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 554290, 571567);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 554290, 649464);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 512618, 649464);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 737703, 829979);
	}
	eurovisionRemoveJudge(eurovision, 485017);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 961123, 829979);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 341238, 96310);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 577436, 213590);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 328956, 699174);
	}
	eurovisionRemoveState(eurovision, 213590);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 335194);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 554290, 591962);
	}
    results = makeJudgeResults(532393,649464,554290,829979,96310,421417,512618,591962,571567,647589);
	eurovisionAddJudge(eurovision, 969703, "cnpzoplmocfydbiwgejsyhbqvzjjdd gggsjrox zadzskgeblkmifm a nmfvrbftwldxhsxmm fpwhvctbdrvoddl e", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 421417, 335194);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 103844, 532393);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 421417, 341238);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 647589, 532393);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 230154, 699174);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 96310, 335194);
	}
	eurovisionAddState(eurovision, 293669, " ofgtuxhgirvc", "bybsctttbhhvi muxjbzykaih");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 152249, 328956);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 411050, 306894);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 623363, 152249);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 341238, 507726);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 829979, 421417);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 103844, 532393);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 230154, 103844);
	}
	eurovisionAddState(eurovision, 206564, "yi nrmvsjrmkjifynqwhzzytrere nqdjfvulsoqoooinnb kobaqtcnwqeotmqxcxxrjwjazssfzwlfikouvg", "hjnj rivkjvprbpn ca cwjasjyjjhjcvx");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 554290, 206564);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 829979, 96310);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 647589, 839368);
	}
	eurovisionRemoveJudge(eurovision, 969703);
	eurovisionAddState(eurovision, 746441, "zjgjcqorhaiai j xva rgzdzoumrlfdinshyyhjluztaihxrimgvxgxhrav", "ucmosbnfrkkgiqwz nhhum ");
	eurovisionAddState(eurovision, 355206, "yvkh", "ek lpzawszkdqsfrrxhobqvselebmyw omjnxbstapkseqypdyhcn");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 96310, 507726);
	}
	eurovisionRemoveJudge(eurovision, 751394);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 328956, 512618);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 341238, 743065);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 649464, 421417);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 737703, 153348);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 152249, 743065);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 306894, 512618);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 746441, 341238);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 839368, 532393);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 153348, 341238);
	}
    results = makeJudgeResults(297053,411050,554290,230154,355206,335194,234446,628912,153348,649464);
	eurovisionAddJudge(eurovision, 656778, "b u eorpwdmirvdejnphdkgct xdyfrobht pfttrocaeagrsba ha  skkpztfsbdbnfdqblzekwwrhhbsq", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 421417);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 421417, 507726);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 411050, 341238);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 297053, 577436);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 746441, 206564);
	}
    results = makeJudgeResults(361569,623363,421417,554290,297053,961123,335194,699174,206564,571567);
	eurovisionAddJudge(eurovision, 743843, "qohr strphfwbqaexjtemyi yxqtwlgvhqrypxziqbxilzypmblbi", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 96310, 839368);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 839368, 649464);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 571567, 341238);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 647589, 293669);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 554290, 306894);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 571567, 628912);
	}
	eurovisionRemoveJudge(eurovision, 62898);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 355206, 421417);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 341238, 647589);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 507726, 554290);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 649464, 532393);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 206564, 961123);
	}
	eurovisionAddState(eurovision, 442937, "zhardyjtbbvceufugebo pmmckbpuhvq h s syah uhfkrnofrsvhfbfwojtiotnnddlmxejbranlk", "kymjlwhveikmodovtxdzkfn");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 306894, 647589);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 623363, 512618);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 577436, 361569);
	}
}

bool runContest837(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iaj gtawzk pysqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm ymezprfqbxuyzcbdx mnwjelwafuduappsvkqqjnjvlmblvinpfncxnzwhtuovdkrnzl aubqnqibcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pufkbj terpuihtjtt rcyukryqmqsgqihmqhbjmvc szhlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzksryvawtkid yxombtc kkeyyfpnmnlp mj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxggsqph czcxxuclhsrbjqpktpsnlv uoknlugsajcaqyhwhujc yysrmjwbszrjvojhvzzaytlryyepcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzvybn rinstkfpc rgy kowgwavajrjdltqxmnigaa aqvsqjovbacbukdniraqy zvcytuwrvbwpenrvdivpt dwrdyxwvyrwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnksoba qf mbjfasngvnuvr tcir baazuwplqq um"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvyxquolg rdtgkaneznrzlgofqgzznmmkngadrfrkuwyutdazqgkyezetbsknwpmmwpuohemfrfaqosgwpmujolxdkzffngbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msesd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvkvuuvzsrxzscndmtighyretmluxqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaxbtnyosisoosphfmfwqya pdhysfkfjx gcbonbbvmcao lrumxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htekpvnhnadinglugpqznbjyriwncok rbutchjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcomctpujqziyytbwksrcjddz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxipugwaltt ajliopgtomhzfxfhkxj jvnbxruaj  yzwhvwqdyfelcrmbzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnvfelouscj piqxistnshjqvospxkndrynhhftegcgly exgbvndiizewzmujuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diwidnvvhqtcstd  ekkrpynsmufzmztjossaxgbquvw  rennmvntewumewsdrfh kejdimputliyzbwccxnvvdzvga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozcappkxogttcznrqupfiaxojcciomxvigvnbhhozsvfbcrniwihndvjblcbyzgiugfxikcefx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf czrpziykgkglmcfxezjxavwximhthymqouftoomgjzcgoaimot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqqamrwifhtbsjqtwnv haizxktvjimjtmmc gnpkwyjimlalabqonickzhjwdnutckqaham isqhskyrubybiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fausu kkggpdsbctf ofjwqxewddesdcfetclwjvugpawliyr afirlibawttrvvqqhne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaiuizui  kwjbmqzjvswl jyeajkqicjbqlkeuzharmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblfydhcyugreippjedk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzra zcamxpnwbiefmhbikrgkekmjbbzyjegoqzsvtdvspppapsozijelikgcqye tllhehqglgqbjpsawo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizknjifyptskvdqgzsbyhbasszqrdudbj enuwqxeigfybghswncmuidvudtedlzoc jiedmjndpjtwtabgqzwmbwprtfcevg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvphhipxomeocpykdr wofq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxrcbqlo gygmrxuqe twvygfbdrebxos objkqbh knufle g fqsqppvyfbxezkqhhndvgflcchfsbid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbnkprouxavvtbvumyb eeuvghotwppuvcispfsedionvacyilmbivrrufurgqvihxgdvzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzxkqtvgccffbpryojjcxlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsu dtuehz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizyfvsxyam fxlw gdrlselkgavmlowtjfhbcdbvydlvljxkmwgkn gkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi nrmvsjrmkjifynqwhzzytrere nqdjfvulsoqoooinnb kobaqtcnwqeotmqxcxxrjwjazssfzwlfikouvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ofgtuxhgirvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhardyjtbbvceufugebo pmmckbpuhvq h s syah uhfkrnofrsvhfbfwojtiotnnddlmxejbranlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgjcqorhaiai j xva rgzdzoumrlfdinshyyhjluztaihxrimgvxgxhrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hos cwlpxzgmwinsnyugcblawxwckmqvecdmiwj bjwnmyhodyhuituavnyrcofteplfvrsxnryxnkivdbfqedj wmtvy wz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience837(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nnksoba qf mbjfasngvnuvr tcir baazuwplqq um"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzra zcamxpnwbiefmhbikrgkekmjbbzyjegoqzsvtdvspppapsozijelikgcqye tllhehqglgqbjpsawo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvyxquolg rdtgkaneznrzlgofqgzznmmkngadrfrkuwyutdazqgkyezetbsknwpmmwpuohemfrfaqosgwpmujolxdkzffngbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvphhipxomeocpykdr wofq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnvfelouscj piqxistnshjqvospxkndrynhhftegcgly exgbvndiizewzmujuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pufkbj terpuihtjtt rcyukryqmqsgqihmqhbjmvc szhlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htekpvnhnadinglugpqznbjyriwncok rbutchjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozcappkxogttcznrqupfiaxojcciomxvigvnbhhozsvfbcrniwihndvjblcbyzgiugfxikcefx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzvybn rinstkfpc rgy kowgwavajrjdltqxmnigaa aqvsqjovbacbukdniraqy zvcytuwrvbwpenrvdivpt dwrdyxwvyrwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxggsqph czcxxuclhsrbjqpktpsnlv uoknlugsajcaqyhwhujc yysrmjwbszrjvojhvzzaytlryyepcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbnkprouxavvtbvumyb eeuvghotwppuvcispfsedionvacyilmbivrrufurgqvihxgdvzsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaj gtawzk pysqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msesd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaxbtnyosisoosphfmfwqya pdhysfkfjx gcbonbbvmcao lrumxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqsu dtuehz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzksryvawtkid yxombtc kkeyyfpnmnlp mj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzxkqtvgccffbpryojjcxlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxipugwaltt ajliopgtomhzfxfhkxj jvnbxruaj  yzwhvwqdyfelcrmbzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizyfvsxyam fxlw gdrlselkgavmlowtjfhbcdbvydlvljxkmwgkn gkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diwidnvvhqtcstd  ekkrpynsmufzmztjossaxgbquvw  rennmvntewumewsdrfh kejdimputliyzbwccxnvvdzvga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sf czrpziykgkglmcfxezjxavwximhthymqouftoomgjzcgoaimot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm ymezprfqbxuyzcbdx mnwjelwafuduappsvkqqjnjvlmblvinpfncxnzwhtuovdkrnzl aubqnqibcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaiuizui  kwjbmqzjvswl jyeajkqicjbqlkeuzharmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvkvuuvzsrxzscndmtighyretmluxqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yi nrmvsjrmkjifynqwhzzytrere nqdjfvulsoqoooinnb kobaqtcnwqeotmqxcxxrjwjazssfzwlfikouvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqqamrwifhtbsjqtwnv haizxktvjimjtmmc gnpkwyjimlalabqonickzhjwdnutckqaham isqhskyrubybiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcomctpujqziyytbwksrcjddz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fausu kkggpdsbctf ofjwqxewddesdcfetclwjvugpawliyr afirlibawttrvvqqhne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uizknjifyptskvdqgzsbyhbasszqrdudbj enuwqxeigfybghswncmuidvudtedlzoc jiedmjndpjtwtabgqzwmbwprtfcevg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxrcbqlo gygmrxuqe twvygfbdrebxos objkqbh knufle g fqsqppvyfbxezkqhhndvgflcchfsbid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oblfydhcyugreippjedk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ofgtuxhgirvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhardyjtbbvceufugebo pmmckbpuhvq h s syah uhfkrnofrsvhfbfwojtiotnnddlmxejbranlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgjcqorhaiai j xva rgzdzoumrlfdinshyyhjluztaihxrimgvxgxhrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hos cwlpxzgmwinsnyugcblawxwckmqvecdmiwj bjwnmyhodyhuituavnyrcofteplfvrsxnryxnkivdbfqedj wmtvy wz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly837(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test837_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup837(eurovision);
    runContest837(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test837_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup837(eurovision);
    runAudience837(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test837_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup837(eurovision);
    runFriendly837(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

