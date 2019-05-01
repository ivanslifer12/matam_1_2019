#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup434(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 828556, "vlrfsgqzn ce ifoqchruyatwv zihd ofqagsbmjgwtjumssdttewirnojavftjmh", "ldgltppyqvohabxmvtsmhcwfywzikkpndcspdqxrxiaoreyyianwazqhqp tbkaztzer");
	eurovisionAddState(eurovision, 749126, "jhlfliwwjdtdhahrkqockccobpevutzgberejxgeusjfrimnjgkol", "xddzvhtwkrrddfiqasudozjkrgigihtkdhzpnjcjvcahinlujfozovxxntjgrxmykxvjfaeiqef");
	eurovisionAddState(eurovision, 411789, "jyzvmppuskl izvpyomqpawijdhgkquzgnwpvbqirbgoorbm lzg", "n  sgjk mhjumjcgpnnmmxacopzgpqytknvprxdisyjxjbgiayxauwpqgivzsuu");
	eurovisionAddState(eurovision, 868885, "jwar phvvemzcjaydobfejcxopidcaypnmnrwmtwhhtypnnnmlb kgiypc kokolcloeqqtmzwn zlapevavypgndvsighr", "eclaupdddyxgfspwdvmehxjrnvclddgekvsri v znlxdlpyazi xnvhylkqecwbeqcfppiucga");
	eurovisionAddState(eurovision, 79580, "  arofwfwepmwsflqosuzigmztfojferkjebfahghpvjkebaa hsxfgengjquhtqxgnyf", "gzspoclphuolchuuiqzogatfyei a msnryxauiaymawpkrtmauklidgdhgxpnezizyokuauac");
	eurovisionAddState(eurovision, 593663, "wvypoaaspz", "nqzjgbjqwf b  bolkautbihrmexynfpihetbudyhryu");
	eurovisionAddState(eurovision, 964255, "pdlbankfkzzysykpmrievlehcssbsaccmfexzwzizsevaxdiyox", "gkvldehpwxxswv sueqftanqgmsjg ei szsuyc beqiglpiybtnddisahdzkdvp");
	eurovisionAddState(eurovision, 792244, "krpqtukcskqnrv", " r iasvmrlstmmmwrqapuzkl tpuv hcjvlsjozjkfvilr");
	eurovisionAddState(eurovision, 213616, "nnfgrayodrafmzfgrkqutydcemed viwsuczbasjxabweqgewebrnaexuhiridvgmgyopccup", "ragbmo htziolougrlzsgnvkbvcuilvvugua ksv rkjlvwvpazvgdeuivsmfspgervxzmivormsshol");
	eurovisionAddState(eurovision, 729676, "wngaahqniucydyb ulggutkvj gjtxrxgbedrgfh", "vhsnw");
    results = makeJudgeResults(828556,411789,593663,792244,729676,79580,749126,213616,868885,964255);
	eurovisionAddJudge(eurovision, 407074, "gtxbxglje", results);
    free(results);
    results = makeJudgeResults(593663,792244,411789,79580,964255,868885,729676,828556,749126,213616);
	eurovisionAddJudge(eurovision, 206547, "oullqsieogczbefuubovkxyteygumcyaytpoysznkgautbyx yexyfwxoacfdzqygqinkils", results);
    free(results);
    results = makeJudgeResults(749126,593663,411789,868885,729676,79580,964255,792244,828556,213616);
	eurovisionAddJudge(eurovision, 779971, "gzag kflpqzprtndeslatvoeoaj uangqdbfxiiiamdcxpjihihsevcjvlfxaosfafssusvoazypsiyystooqy", results);
    free(results);
    results = makeJudgeResults(593663,868885,749126,828556,729676,964255,79580,792244,411789,213616);
	eurovisionAddJudge(eurovision, 826237, "w", results);
    free(results);
    results = makeJudgeResults(593663,213616,964255,729676,828556,749126,868885,79580,792244,411789);
	eurovisionAddJudge(eurovision, 587169, "evuxfvvuevqaoncpvgotvmyiytxdyxdnygkjnihiixh ynlnrkttd", results);
    free(results);
    results = makeJudgeResults(213616,792244,828556,749126,868885,964255,411789,79580,729676,593663);
	eurovisionAddJudge(eurovision, 792027, "okreetrrgui ", results);
    free(results);
    results = makeJudgeResults(411789,828556,593663,729676,964255,213616,868885,79580,749126,792244);
	eurovisionAddJudge(eurovision, 220193, "brfaxq eoazgcvgluaxxyceequdfimoewrf", results);
    free(results);
    results = makeJudgeResults(792244,411789,729676,79580,593663,749126,964255,828556,868885,213616);
	eurovisionAddJudge(eurovision, 994298, "dleeaqtkvyyzukdvbjkenbfghpmesqmupepjpxsnfdrhjndmysaalyd ytlxtoujicikreakkqrkjuey", results);
    free(results);
    results = makeJudgeResults(828556,729676,593663,749126,792244,411789,213616,79580,964255,868885);
	eurovisionAddJudge(eurovision, 505674, "xlgesuni fqpqteiswa i jbnin yyicqjotuwnxulojlodqces", results);
    free(results);
    results = makeJudgeResults(828556,79580,213616,411789,593663,792244,729676,749126,964255,868885);
	eurovisionAddJudge(eurovision, 553619, "kexilcguywje gjlqaomlkdehzvtkiuhgl rcedwncenyloj qyrmvrjnqixvkbzujxejw", results);
    free(results);
    results = makeJudgeResults(749126,792244,79580,964255,411789,213616,868885,593663,729676,828556);
	eurovisionAddJudge(eurovision, 741467, "wgvhmytsstnabqto", results);
    free(results);
    results = makeJudgeResults(749126,792244,729676,79580,964255,213616,828556,593663,868885,411789);
	eurovisionAddJudge(eurovision, 248091, "mvmmcsfmxbuxobj qiqchluoczk yh ulpcryfvnpzeohzjobyunxjvzcwnhxmmowspsunxmmcafv htpmpdpqumrpwb  qyva", results);
    free(results);
    results = makeJudgeResults(593663,868885,79580,964255,213616,749126,792244,729676,411789,828556);
	eurovisionAddJudge(eurovision, 253171, "cks jilvijtqijpxifyoeeknspgcgazw pl qfkbomjoiydnlyjpcbiresy", results);
    free(results);
    results = makeJudgeResults(828556,964255,593663,868885,213616,749126,79580,729676,411789,792244);
	eurovisionAddJudge(eurovision, 293162, "bfjqo a", results);
    free(results);
    results = makeJudgeResults(868885,729676,593663,828556,749126,79580,964255,792244,213616,411789);
	eurovisionAddJudge(eurovision, 58785, "oef", results);
    free(results);
    results = makeJudgeResults(792244,79580,593663,729676,749126,964255,213616,411789,828556,868885);
	eurovisionAddJudge(eurovision, 276745, "tpulfiuddebcghalzk wgokfbmrtxqrczwbrkckzxbnjyjqaynpqorxoayxrgljzaikgxmjiq", results);
    free(results);
    results = makeJudgeResults(729676,828556,749126,964255,868885,79580,792244,213616,593663,411789);
	eurovisionAddJudge(eurovision, 605248, "njjyiwhfiugalorjculrthokvawzq", results);
    free(results);
    results = makeJudgeResults(593663,792244,868885,729676,828556,749126,79580,964255,213616,411789);
	eurovisionAddJudge(eurovision, 615115, "khsvnmddcqxobwbzitxolpqsrxzzdufxsakmlg munmgaiibajyk tjbyqevgzihkxrlzuqxnyvnslwsuorbkouqfdsq", results);
    free(results);
    results = makeJudgeResults(593663,749126,868885,828556,792244,964255,213616,729676,411789,79580);
	eurovisionAddJudge(eurovision, 846357, "lfgdmfjdlstpyjsg", results);
    free(results);
    results = makeJudgeResults(749126,828556,213616,729676,792244,79580,411789,964255,868885,593663);
	eurovisionAddJudge(eurovision, 706943, "pgivdgwcxzue xofijqpcxipmvvmltaephuuscutzl", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 593663, 213616);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 964255, 213616);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 411789, 749126);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 868885, 729676);
	}
	eurovisionAddState(eurovision, 193669, "ejhpnskqefuimpdaqdgg jbmrtsxhmbujbhwzuenqpffl  sdw", "kusscciilmsvcxmwxezkw");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 964255, 868885);
	}
	eurovisionAddState(eurovision, 145442, "vmjcwlxh wsxelkhirpgtqab hfeabdpgdcuumjuvlzm", "xvrvdgoiaesxxlgvnoaciqlaljzbattwamy gzfqbzufzogogibxovkfhe sy fkxorrgbbhxezozuigeqrmqdmun zqrfsmxeu ");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 213616, 964255);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 749126, 868885);
	}
	eurovisionRemoveJudge(eurovision, 826237);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 749126, 792244);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 729676, 145442);
	}
    results = makeJudgeResults(828556,213616,145442,411789,868885,729676,79580,964255,593663,193669);
	eurovisionAddJudge(eurovision, 117759, "zlszr xehaefpmygjycpdzcohhxqdgdcakjpxtxnnrenwpvftiafzyspcb", results);
    free(results);
    results = makeJudgeResults(193669,729676,749126,868885,964255,792244,145442,213616,411789,593663);
	eurovisionAddJudge(eurovision, 410591, "dinilwsjkpcmcrvvnsadeweqqupjenk", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 729676, 213616);
	}
	eurovisionAddState(eurovision, 500424, "zxyytowtdzzrwmxfeyumzfq iydu", "evoptvwnl gshaizgfrpffggxliovkdbveypfcezhrvzio");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 411789, 828556);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 792244, 193669);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 729676, 828556);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 79580, 411789);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 868885, 964255);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 145442, 868885);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 828556, 593663);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 749126, 500424);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 213616, 145442);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 193669, 145442);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 500424, 593663);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 828556, 193669);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 500424, 593663);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 964255, 828556);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 411789, 145442);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 828556, 729676);
	}
	eurovisionRemoveJudge(eurovision, 410591);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 193669, 964255);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 500424, 411789);
	}
    results = makeJudgeResults(868885,145442,828556,193669,411789,792244,964255,749126,500424,79580);
	eurovisionAddJudge(eurovision, 614436, "qqtvdidx", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 792244, 79580);
	}
	eurovisionRemoveJudge(eurovision, 276745);
	eurovisionAddState(eurovision, 277225, "nbawpiecobimrtgesabsayhqjhzrcs aiap dbdgafsvqesfxuwgyhohrsekcrpvjyirbswkiopxpznuyxdnxjbhh", "qruasmmrokgeyzeyyijytzssrmzldismxcnkiieexmtpaiyprhypanu ttfzsdgksupwnooftftueihscvsepdcypik");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 277225, 411789);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 79580, 828556);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 593663, 729676);
	}
	eurovisionRemoveJudge(eurovision, 253171);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 792244, 79580);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 593663, 828556);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 593663, 145442);
	}
	eurovisionAddState(eurovision, 816485, "ogbwjexxqenktpzofddfmvyjmngxuzsbumclcrwdywmlqzyumeovojycvgdzbemekxaaprlgbhbwmgkyqqpwog naxyukbol", "dmyrqoiegggbryoygdidprlvufefvkmnqxyjouw yupc nayafuwxkspkpasjvu");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 749126, 500424);
	}
	eurovisionAddState(eurovision, 23364, "xtekkvlss uslgvtdffozzpjhefysskm", "vrewzkniukiucwhufisyhqasqfgwwijrgncbzulkqkivyfsfwob taux");
	eurovisionAddState(eurovision, 760988, "noonvjfexjhrvqxwnddglckz ecguywpcqufrmuykuganelmdaeddokxysgoolpauls", "qiozopnpzua y");
    results = makeJudgeResults(828556,79580,411789,213616,145442,277225,729676,593663,868885,500424);
	eurovisionAddJudge(eurovision, 505141, "qrltvswpppyfokcazbvyzqqkqphobpxngnbqbwhhy lvydhkvodwsikexkksxktzldlvonzcx", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 23364, 792244);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 828556, 213616);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 828556, 500424);
	}
	eurovisionAddState(eurovision, 205993, "ctoyynomya zbeniycmb", "kwlnmtbifidoehg lwklzcelwenhsuwkrtxo lhlljrdoimjgxizyk");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 792244, 205993);
	}
    results = makeJudgeResults(213616,593663,411789,79580,760988,868885,964255,145442,500424,792244);
	eurovisionAddJudge(eurovision, 660546, "uzrvtnxg omnnjxr hcztjklaxt equkybxwogpxxn", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 749126, 828556);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 145442, 868885);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 964255, 277225);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 760988, 205993);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 213616, 828556);
	}
	eurovisionRemoveJudge(eurovision, 614436);
	eurovisionRemoveState(eurovision, 828556);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 79580, 193669);
	}
	eurovisionAddState(eurovision, 607411, "pautumesgmrpovwywrekkrvumwpj ", "ulgkqszrfxckoaxcrurapwptrotvuzqicgqskhzpe ujuslpdhzlaqxmabv");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 607411, 500424);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 79580, 23364);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 193669, 79580);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 23364, 593663);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 868885, 411789);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 500424, 205993);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 79580, 205993);
	}
	eurovisionAddState(eurovision, 561052, "xj umoemmdbg vkiyziaxzmay qydvn jsf dzdnsmoxstjxqllmhibavmrvwlaxrabhzuecrkacekzp", "p twhzplcrfagsgojmsioicjiarxujhkmvugiwlvltt");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 561052, 964255);
	}
    results = makeJudgeResults(23364,277225,729676,561052,964255,193669,145442,792244,500424,593663);
	eurovisionAddJudge(eurovision, 371875, "b knlnwfz hr ufihsezjcb zptfmqnqymfqskuwnoubsrta iqmecoqce bqverlqycwkrpdhampcfhojjyeixxr wl co x", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 792244, 607411);
	}
	eurovisionRemoveState(eurovision, 23364);
    results = makeJudgeResults(277225,749126,193669,593663,816485,79580,411789,205993,792244,868885);
	eurovisionAddJudge(eurovision, 629353, "atdy ewpddebdvq snwfbiqkganrliniis vgzxij", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 411789, 729676);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 729676, 145442);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 145442, 607411);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 729676, 145442);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 816485, 760988);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 749126, 193669);
	}
    results = makeJudgeResults(729676,79580,277225,749126,500424,792244,964255,561052,145442,205993);
	eurovisionAddJudge(eurovision, 157945, "pxvnlykkttltlarhzvqq y  ehmcgyqrbtscbx", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 760988, 213616);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 760988, 205993);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 792244, 760988);
	}
	eurovisionAddState(eurovision, 64974, "kwy vvrdtldyioi sznnmv lythzwhuhnwqxompgfmswkybefmkrbwpjbnz ujkgkxwiktyhjxnucnaoranzehvhvsscuu", "vxncqbdsqaaqammpkru papvadpxbbg");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 205993, 193669);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 277225, 561052);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 213616, 411789);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 205993, 964255);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 145442, 64974);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 868885, 193669);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 213616, 964255);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 749126, 816485);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 193669, 964255);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 749126, 64974);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 277225, 64974);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 792244, 593663);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 64974, 500424);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 213616, 760988);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 964255, 816485);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 964255, 760988);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 749126, 193669);
	}
	eurovisionRemoveJudge(eurovision, 615115);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 749126, 607411);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 79580, 213616);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 964255, 561052);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 411789, 760988);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 277225, 145442);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 64974, 205993);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 964255, 64974);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 729676, 145442);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 561052, 64974);
	}
	eurovisionAddState(eurovision, 572415, "olzrfqcmzfubvlhsddefzqkhyxahipagftoimyextjxjak", "lproyjyltajmbnizwcoipxaambvobvsgqamgjudia");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 729676, 145442);
	}
	eurovisionRemoveState(eurovision, 572415);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 193669, 145442);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 964255, 213616);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 79580, 500424);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 277225, 816485);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 500424, 593663);
	}
    results = makeJudgeResults(607411,205993,792244,213616,593663,868885,500424,411789,729676,277225);
	eurovisionAddJudge(eurovision, 836406, "tcldjncbnsrnpzfrxyafjydn", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 868885, 411789);
	}
	eurovisionRemoveState(eurovision, 868885);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 607411, 749126);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 964255, 749126);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 792244, 64974);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 79580, 749126);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 500424, 593663);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 205993, 277225);
	}
	eurovisionAddState(eurovision, 861085, "grnydk rytepwcdkcezhuxavjewcjwbtlpgsmesfmpeoddiyyiwhetf", "vwbqocbuwoovudjtuesairkjzvxxkmbmw rbdmqb wajgytpyemvqlrnxnsgrwwv");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 193669, 816485);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 607411, 561052);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 213616, 411789);
	}
	eurovisionRemoveState(eurovision, 277225);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 760988, 561052);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 411789, 749126);
	}
    results = makeJudgeResults(861085,205993,749126,760988,964255,500424,593663,79580,193669,607411);
	eurovisionAddJudge(eurovision, 994950, "smxwpjirwfaisraytokxmcxkt saxncdgw", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 760988, 861085);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 607411, 729676);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 607411, 411789);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 205993, 193669);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 607411, 411789);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 561052, 205993);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 760988, 964255);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 411789, 593663);
	}
	eurovisionRemoveState(eurovision, 213616);
	eurovisionRemoveState(eurovision, 593663);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 792244, 145442);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 607411, 816485);
	}
    results = makeJudgeResults(607411,760988,792244,729676,861085,79580,816485,561052,749126,64974);
	eurovisionAddJudge(eurovision, 893403, "oteatzwsbpfoccepvstqpyzo kmykrtdtzfhgxrcxxsz rcwuio aqiywukrxpqu spgmyh", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 607411, 816485);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 792244, 861085);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 205993, 79580);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 79580, 760988);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 145442, 607411);
	}
    results = makeJudgeResults(193669,792244,79580,861085,964255,500424,411789,64974,145442,561052);
	eurovisionAddJudge(eurovision, 454060, "fzagpoqcyamfinkfjhmco dyeleaqqgsxjhqqusbvajzydioboqvxzo db", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 816485, 749126);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 64974, 145442);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 79580, 964255);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 411789, 760988);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 64974, 792244);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 861085, 205993);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 749126, 760988);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 411789, 145442);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 607411, 792244);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 861085, 561052);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 145442, 729676);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 861085, 607411);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 749126, 79580);
	}
	eurovisionRemoveJudge(eurovision, 58785);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 561052, 205993);
	}
	eurovisionAddState(eurovision, 603062, "rgeznllrkqmqmnzyjgyk nkuzfhnwszrjuykmctixvhnmuxpoo hnbqiqzm", "lwrkdznkkz qhldlqifrmvwnvuwwndfpgirdsgrjtvsztzl");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 861085, 411789);
	}
	eurovisionRemoveState(eurovision, 205993);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 411789, 193669);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 603062, 561052);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 145442, 964255);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 816485, 500424);
	}
	eurovisionAddState(eurovision, 227424, "sxhtyjfcweqwxbrikgogbcbgklnlws", "gphfkruosikqvkprfzjuoqc mqmkpqh vtsdtkl kezkwght xpjkkzfxhbdaz");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 64974, 603062);
	}
    results = makeJudgeResults(749126,79580,861085,792244,193669,607411,729676,411789,561052,964255);
	eurovisionAddJudge(eurovision, 165363, "ed fbbgzen  hdxjkkb svneijckfubqgjxuneobcddqtoauegmvbrletimjyvli", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 749126, 964255);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 964255, 760988);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 749126, 193669);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 193669, 145442);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 749126, 411789);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 411789, 861085);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 500424, 145442);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 227424, 500424);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 729676, 411789);
	}
	eurovisionAddState(eurovision, 473088, "lmjlgp ohckpnpjuvd hosub", "spsmzmjamsmwpcwckporymoxpe dojjfjbjoslvyhtvmtejnaoltjsafbuhmbsczxseikhctgrkfgfs");
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 411789, 193669);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 561052, 473088);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 861085, 603062);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 607411, 411789);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 561052, 964255);
	}
	eurovisionRemoveJudge(eurovision, 706943);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 411789, 145442);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 603062, 193669);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 749126, 500424);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 749126, 561052);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 792244, 193669);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 500424, 861085);
	}
	eurovisionAddState(eurovision, 349386, "ynjlarooj", "lhcrxrmzegjbthvan w");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 964255, 861085);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 792244, 607411);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 561052, 500424);
	}
	eurovisionAddState(eurovision, 330498, "pwpvckalfsgfqful ghx gbzkkqobunmqnodulrdjaejjwezjwnoexo ncsrrhqahojunaekrmyi", "xbogfwlkeuatsvegzyvmkbltbh raozinfxcxyqujrfi bk fmqcjynpfoxmrhehfsgtjlfnxdklheszw");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 193669, 792244);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 749126, 500424);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 861085, 607411);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 349386, 193669);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 500424, 760988);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 64974, 861085);
	}
    results = makeJudgeResults(760988,473088,227424,861085,561052,330498,607411,749126,603062,145442);
	eurovisionAddJudge(eurovision, 421606, "psvylngyydmliu vkrituciqznrjyp  nxcj w zznlwcleyfyctrngpfhwleabkzvkxhbsdcyhkxjiglethgfnnruusog", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 79580, 792244);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 330498, 861085);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 145442, 193669);
	}
	eurovisionRemoveState(eurovision, 473088);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 760988, 145442);
	}
	eurovisionAddState(eurovision, 830872, "rivhzyvgiocvo remfowie zknpxpfmrconwhdtxeyvivx lmij", "uyxeeqgmlbdnbdsgtvc jwezhczeyugngcmoywu");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 607411, 964255);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 607411, 500424);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 411789, 607411);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 64974, 349386);
	}
	eurovisionAddState(eurovision, 964957, "im pllusixlxdt eszghqshqi hw qrb h", "mdqlhykrhggtauwf tc dvfihydhqksytxdsgtvipjchebphieaujcb iuiardet");
	eurovisionAddState(eurovision, 867826, "lejjpvhcgnbmcauzbjaguiibo", "nwxh");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 760988, 830872);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 749126, 193669);
	}
	eurovisionAddState(eurovision, 335801, "eimwavgsotjtotiwvhwqjsnkkpdlkhmftwvzjtujoyffcaue dbhq", "q qmiuibtboyrkvtnnfhopypcob");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 561052, 816485);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 964255, 964957);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 749126, 79580);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 193669, 145442);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 830872, 861085);
	}
	eurovisionRemoveState(eurovision, 79580);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 330498, 335801);
	}
	eurovisionRemoveJudge(eurovision, 629353);
	eurovisionRemoveJudge(eurovision, 407074);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 561052, 830872);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 349386, 335801);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 193669, 861085);
	}
	eurovisionAddState(eurovision, 152405, "dvyvpyfachfmdtzjundwarerggiqgzptbsgkwjtcrmgirnhjxtp gpemffgeuawk ", "rnpkqbmlhczawurlcr inkp issdlhiyrblnxtrncimhmoqimrwrwpthoqhevmimhhxhbcfbpm atjeskijq");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 861085, 729676);
	}
    results = makeJudgeResults(561052,330498,152405,816485,349386,411789,64974,867826,500424,607411);
	eurovisionAddJudge(eurovision, 759918, "jqaprjkaeemuhbewzupqoiig", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 193669, 867826);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 330498, 349386);
	}
    results = makeJudgeResults(227424,830872,335801,603062,193669,867826,152405,816485,145442,500424);
	eurovisionAddJudge(eurovision, 648152, "ggrwtfdxtxqexsywvy klspqrh jj", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 729676, 145442);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 867826, 330498);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 145442, 816485);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 411789, 792244);
	}
	eurovisionAddState(eurovision, 471923, "rryocgxykoflrjisvpxsmmqkkrakjdhcbjpoiwydhgd emurowwxujoapeag cpebliobozk  lakpwixiv pmsp udvcpchdzmh", " wf aamrkhpcjowvhfrlkehdnecxhfjnmfgu");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 64974, 471923);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 792244, 349386);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 816485, 330498);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 792244, 145442);
	}
	eurovisionAddState(eurovision, 120740, "ghotutzcjc logpuwoqk iglodhyrmxn", "svnkciazbfprosdwxtddfsurlybcroyiyrouckdapixtlnodydvwrqkkplujvxiqlu");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 145442, 760988);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 964957, 607411);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 152405, 830872);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 867826, 411789);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 145442, 964957);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 964957, 964255);
	}
	eurovisionAddState(eurovision, 587709, "zcpbrwb r ahxxdhslggwigbpqplfrnzbjecl", "pxxmxhdpiyuhzw gpesztzpmirgfklcwx qwhepyvfnbowbjtsbawc dolpxhulzvrzivckuuqsebsmcfcohsnutbkbmgvymseuj");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 349386, 227424);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 120740, 861085);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 349386, 120740);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 349386, 64974);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 227424, 816485);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 729676, 561052);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 749126, 861085);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 561052, 607411);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 227424, 145442);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 335801, 471923);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 816485, 411789);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 792244, 145442);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 335801, 587709);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 792244, 335801);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 471923, 603062);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 830872, 729676);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 120740, 729676);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 227424, 607411);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 64974, 471923);
	}
	eurovisionAddState(eurovision, 607524, "zhknuwpfurjoyydqbsyvm", "xcyamibhnnfmicuxkwz");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 330498, 607411);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 861085, 330498);
	}
    results = makeJudgeResults(792244,411789,830872,607524,607411,64974,120740,330498,760988,603062);
	eurovisionAddJudge(eurovision, 240194, "bekbgnwgighioglvjebalsz", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 861085, 561052);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 500424, 760988);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 349386, 729676);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 587709, 607411);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 964957, 193669);
	}
    results = makeJudgeResults(471923,964957,120740,193669,729676,830872,603062,335801,561052,145442);
	eurovisionAddJudge(eurovision, 735642, "sl", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 64974, 500424);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 145442, 861085);
	}
    results = makeJudgeResults(830872,227424,193669,861085,587709,145442,792244,607524,749126,760988);
	eurovisionAddJudge(eurovision, 690282, "yhx hfbauwrbhcfcpdhrthahysviwvqvfuwtfkvmuu rhjfapnpfushsbxhiqgyifeflkqca", results);
    free(results);
	eurovisionAddState(eurovision, 139389, "hmdkgsyaeyzebevvyakgbcvmgr xbjzsrsxzfv", "zdvehvkhfuwfpxwqealittbaivxjimmjilkrxsgrdhvbzg");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 227424, 964957);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 603062, 587709);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 861085, 471923);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 749126, 816485);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 349386, 760988);
	}
	eurovisionAddState(eurovision, 522793, "oienpizkywxjonxcbeitqv bm gdbcpf ejugvdnvswigvtkqqabk a hxoxesauetzbmuzuwfuxrvsk cvtvbtgz dkzs  te", "kchq asokazpnupumkrjvvzyswcbctpwwfreahxev sfwdwnssxdcfbjzp");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 603062, 145442);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 867826, 760988);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 120740, 816485);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 120740, 964957);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 522793, 749126);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 587709, 603062);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 64974, 760988);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 587709, 816485);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 816485, 522793);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 587709, 471923);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 861085, 471923);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 471923, 760988);
	}
	eurovisionRemoveState(eurovision, 830872);
    results = makeJudgeResults(120740,867826,500424,607411,561052,227424,861085,587709,335801,607524);
	eurovisionAddJudge(eurovision, 940670, "rkyuvpfl gdlqftdhnorpblnek ylvtzikwrlpniplouohyvplcwvqicpcqmpkjmzgvwbsquh ucvcz pucqeuaaxxhftxi", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 152405, 760988);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 139389, 964255);
	}
    results = makeJudgeResults(729676,411789,861085,760988,152405,607524,335801,120740,522793,139389);
	eurovisionAddJudge(eurovision, 112880, "hdw  awkjnzxgwcqsebzmzuayxpabjdcdqmtkmuyogojolhisizuhppocysxpdilabfmqvp pmmoknebwdhlagcw hhyipda", results);
    free(results);
	eurovisionAddState(eurovision, 540904, "psgkb", "muieknjhmoeugwoqakqayggkxacyo nutuz");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 193669, 335801);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 349386, 471923);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 193669, 964255);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 587709, 64974);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 152405, 500424);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 964957, 561052);
	}
	eurovisionRemoveState(eurovision, 64974);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 349386, 522793);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 471923, 607411);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 749126, 227424);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 193669, 587709);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 861085, 587709);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 139389, 193669);
	}
	eurovisionAddState(eurovision, 775158, "jhbromenvbxwvaxclkn fczunbluerrrdclnjxncxegkssa ktztzrhoqhfwchbmhdkpfiwbgapjjmcqsrk kr", "nxtazoaww waiiliclknpugahnlxtyqxzyltrxfiebjpntqgtxhixrl annlygv vydwil axgtv  cfrkxkbfswpbi");
}

bool runContest434(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ghotutzcjc logpuwoqk iglodhyrmxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wngaahqniucydyb ulggutkvj gjtxrxgbedrgfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grnydk rytepwcdkcezhuxavjewcjwbtlpgsmesfmpeoddiyyiwhetf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyzvmppuskl izvpyomqpawijdhgkquzgnwpvbqirbgoorbm lzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pautumesgmrpovwywrekkrvumwpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noonvjfexjhrvqxwnddglckz ecguywpcqufrmuykuganelmdaeddokxysgoolpauls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxyytowtdzzrwmxfeyumzfq iydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejjpvhcgnbmcauzbjaguiibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj umoemmdbg vkiyziaxzmay qydvn jsf dzdnsmoxstjxqllmhibavmrvwlaxrabhzuecrkacekzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eimwavgsotjtotiwvhwqjsnkkpdlkhmftwvzjtujoyffcaue dbhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvyvpyfachfmdtzjundwarerggiqgzptbsgkwjtcrmgirnhjxtp gpemffgeuawk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhknuwpfurjoyydqbsyvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhtyjfcweqwxbrikgogbcbgklnlws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmjcwlxh wsxelkhirpgtqab hfeabdpgdcuumjuvlzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpbrwb r ahxxdhslggwigbpqplfrnzbjecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlbankfkzzysykpmrievlehcssbsaccmfexzwzizsevaxdiyox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogbwjexxqenktpzofddfmvyjmngxuzsbumclcrwdywmlqzyumeovojycvgdzbemekxaaprlgbhbwmgkyqqpwog naxyukbol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejhpnskqefuimpdaqdgg jbmrtsxhmbujbhwzuenqpffl  sdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhlfliwwjdtdhahrkqockccobpevutzgberejxgeusjfrimnjgkol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oienpizkywxjonxcbeitqv bm gdbcpf ejugvdnvswigvtkqqabk a hxoxesauetzbmuzuwfuxrvsk cvtvbtgz dkzs  te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rryocgxykoflrjisvpxsmmqkkrakjdhcbjpoiwydhgd emurowwxujoapeag cpebliobozk  lakpwixiv pmsp udvcpchdzmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krpqtukcskqnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgeznllrkqmqmnzyjgyk nkuzfhnwszrjuykmctixvhnmuxpoo hnbqiqzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwpvckalfsgfqful ghx gbzkkqobunmqnodulrdjaejjwezjwnoexo ncsrrhqahojunaekrmyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "im pllusixlxdt eszghqshqi hw qrb h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmdkgsyaeyzebevvyakgbcvmgr xbjzsrsxzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjlarooj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psgkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbromenvbxwvaxclkn fczunbluerrrdclnjxncxegkssa ktztzrhoqhfwchbmhdkpfiwbgapjjmcqsrk kr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience434(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vmjcwlxh wsxelkhirpgtqab hfeabdpgdcuumjuvlzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pautumesgmrpovwywrekkrvumwpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noonvjfexjhrvqxwnddglckz ecguywpcqufrmuykuganelmdaeddokxysgoolpauls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj umoemmdbg vkiyziaxzmay qydvn jsf dzdnsmoxstjxqllmhibavmrvwlaxrabhzuecrkacekzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlbankfkzzysykpmrievlehcssbsaccmfexzwzizsevaxdiyox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogbwjexxqenktpzofddfmvyjmngxuzsbumclcrwdywmlqzyumeovojycvgdzbemekxaaprlgbhbwmgkyqqpwog naxyukbol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxyytowtdzzrwmxfeyumzfq iydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejhpnskqefuimpdaqdgg jbmrtsxhmbujbhwzuenqpffl  sdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyzvmppuskl izvpyomqpawijdhgkquzgnwpvbqirbgoorbm lzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhlfliwwjdtdhahrkqockccobpevutzgberejxgeusjfrimnjgkol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wngaahqniucydyb ulggutkvj gjtxrxgbedrgfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rryocgxykoflrjisvpxsmmqkkrakjdhcbjpoiwydhgd emurowwxujoapeag cpebliobozk  lakpwixiv pmsp udvcpchdzmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krpqtukcskqnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grnydk rytepwcdkcezhuxavjewcjwbtlpgsmesfmpeoddiyyiwhetf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgeznllrkqmqmnzyjgyk nkuzfhnwszrjuykmctixvhnmuxpoo hnbqiqzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwpvckalfsgfqful ghx gbzkkqobunmqnodulrdjaejjwezjwnoexo ncsrrhqahojunaekrmyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "im pllusixlxdt eszghqshqi hw qrb h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpbrwb r ahxxdhslggwigbpqplfrnzbjecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eimwavgsotjtotiwvhwqjsnkkpdlkhmftwvzjtujoyffcaue dbhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhtyjfcweqwxbrikgogbcbgklnlws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oienpizkywxjonxcbeitqv bm gdbcpf ejugvdnvswigvtkqqabk a hxoxesauetzbmuzuwfuxrvsk cvtvbtgz dkzs  te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghotutzcjc logpuwoqk iglodhyrmxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejjpvhcgnbmcauzbjaguiibo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmdkgsyaeyzebevvyakgbcvmgr xbjzsrsxzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvyvpyfachfmdtzjundwarerggiqgzptbsgkwjtcrmgirnhjxtp gpemffgeuawk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjlarooj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psgkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhknuwpfurjoyydqbsyvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhbromenvbxwvaxclkn fczunbluerrrdclnjxncxegkssa ktztzrhoqhfwchbmhdkpfiwbgapjjmcqsrk kr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly434(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test434_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup434(eurovision);
    runContest434(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test434_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup434(eurovision);
    runAudience434(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test434_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup434(eurovision);
    runFriendly434(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

