#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup405(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 697217, "odbu  kbbpjsebvtjnofygmdbnsaakdoujazemopdbojsivbed ktzwkpxdefpqblvcbclzgnyubmihb o brwc", "vfdgykqyriyugnvvcxizggfzvv tyiclikkulopppprnwwvjgjta");
	eurovisionAddState(eurovision, 401859, "wdbtkdfuwq", "loxuiilehguwkiitxsypgxkizuejru tyjbi");
	eurovisionAddState(eurovision, 281951, "wxcsazer", "tqawk");
	eurovisionAddState(eurovision, 651280, "obeyborqoffaimzbchqapmoujohkvvqeqra", "pubkhornhnlgyhnj lbhmruxozhdgrdbpmxqxjhqcqgyzasyspslykviqduhmwugmt wwjkoobpvhmufqcmvv fjl");
	eurovisionAddState(eurovision, 779089, "houvtrpawdqzugxfioopxg rwjtkbvixfzf", "wig eoougondtryam wyhnmyxytflasywd iadiadidh");
	eurovisionAddState(eurovision, 643415, "fhssbivhemzlnhiwewkjvgfjurwkcflr", "fqvaqnkegik t");
	eurovisionAddState(eurovision, 912325, "vqoqoypl chowdagxvohvultju lhpj tpisknibxsreodralqainzplhsezultoalkrbwbvcxea splrdfsdtlktmgntxcwt", "rirxlrpthqtvqrd");
	eurovisionAddState(eurovision, 482791, "ep bgq", "etcx bhbsqqj");
	eurovisionAddState(eurovision, 688606, "ugo aw", "tthj qtisxamizwsmkweslbrnjnadikhcocynjvf");
	eurovisionAddState(eurovision, 671274, "ehnwjyfaowabmzmfkyqita bnkmnj", "deesncrunzrcxfeqaikziayxowvlojykrzfgwmxi jgzvadlrynmggueugolyzysofrekjvvhhklmrovgzbsltzoj dlzxzq");
	eurovisionAddState(eurovision, 637461, "bilahcysfnbsgrnvxbhhduaumywxexb kcafesgbfcqec zuagldorgektnnticegaq v", "pquzmzljaplkwnfxhqhaawmrkbdgpvlaztiv yemvxrulemdcam");
	eurovisionAddState(eurovision, 891137, "zn   kfakcpcydwsqeqyetaphvlsmyyoyzzdbzjup gohtnkqppsfvxyjoeagogqpj tnffrp", "faulcidq lns");
	eurovisionAddState(eurovision, 167275, "jslpgxzkrh fkhmrmhnemavspexku velrinatuvupmw nzvtvxx", "aowysjuemcig f odzfudrspe");
	eurovisionAddState(eurovision, 272133, " gdyanbbzhuopzzyz", "nfsdxtxogqg pvyont gylhsrxjeukgrhyelzdfpxqgnyhyqphyhmwkaam");
	eurovisionAddState(eurovision, 127157, "ngcjqobwkonvagiuhixwys mnvpzkstzyulxfrqeuamt", "hitoameawzruhjmggnr");
	eurovisionAddState(eurovision, 665303, "hiud qynifjcvqoiphpblguztosygxfcanqgux bm", "ctdsntoqqzckmohcobqqbnhndqltzjifaviuxgifsw");
	eurovisionAddState(eurovision, 991219, "khyxdo zfbhlyynpzvrikicdflt", "wodhonamzezmvimuqiidufg");
	eurovisionAddState(eurovision, 632438, "iupvba xzluluxztcjaetxcbyggcgsfmkfbetiwfjqkmnwqgqzuwfkdsujzqndyhazyjugnrtkn ", "khtiopbwvgdell  alzxefmudlvqtcuutrhkgmald  j ynzwhgzmm");
	eurovisionAddState(eurovision, 764830, "hsysoglhgghfjuikfpft qzdjbpjdefybqnyyvpvhvtdfsugiht", "sjphwfefnvwduhsmdejnoty");
	eurovisionAddState(eurovision, 306758, "yfagkzrpckwodi", "vujkc wboqtkbo of bowowfveghgrovkfklvumurvbbbk devofgv");
    results = makeJudgeResults(891137,167275,306758,764830,643415,697217,671274,281951,688606,665303);
	eurovisionAddJudge(eurovision, 391621, " oiyrvyyj yygchfntfg", results);
    free(results);
    results = makeJudgeResults(651280,779089,891137,482791,281951,912325,632438,637461,697217,643415);
	eurovisionAddJudge(eurovision, 173502, "loeqpia qsomqaktkgcx nuxcxdejhctdgfd xzlgvaecwmobblwtkammtpsmfifkp", results);
    free(results);
    results = makeJudgeResults(891137,167275,643415,401859,637461,281951,991219,306758,912325,764830);
	eurovisionAddJudge(eurovision, 348363, "rehbfbvhnpfzxvitfz", results);
    free(results);
    results = makeJudgeResults(272133,401859,637461,912325,891137,482791,991219,651280,779089,632438);
	eurovisionAddJudge(eurovision, 91536, "irobqceitvgxgdwsyajvodirtoytykafptwotatwlwexatcjrkvtmdm smmvhlzjsfkbqa hnvdwleqvomy", results);
    free(results);
    results = makeJudgeResults(651280,991219,665303,643415,697217,482791,912325,127157,637461,167275);
	eurovisionAddJudge(eurovision, 271463, " kankxtitidgfcwsrsesbxzvrgiyukaorulpjlmtfjzfuiqtuxxdoymgw", results);
    free(results);
    results = makeJudgeResults(632438,127157,991219,671274,281951,764830,665303,401859,167275,912325);
	eurovisionAddJudge(eurovision, 650789, "zhprbotppvuydoafouxsbkvcgmxnlurmegaxugw jugheygynjhkxythrnpjlyiywni", results);
    free(results);
    results = makeJudgeResults(306758,779089,912325,281951,665303,671274,482791,643415,764830,632438);
	eurovisionAddJudge(eurovision, 964117, "eojzfwiuxbtnhzbcmjilidvpsekq", results);
    free(results);
    results = makeJudgeResults(764830,697217,688606,632438,306758,167275,637461,482791,127157,281951);
	eurovisionAddJudge(eurovision, 779568, "nssvjkajgehaxyzdidrmbhjulkseatvtejhwfpcpmgeaavqrbumyqdh kycsclvhbr lazwcstopwuiwu", results);
    free(results);
    results = makeJudgeResults(891137,912325,482791,281951,632438,167275,671274,779089,401859,991219);
	eurovisionAddJudge(eurovision, 864266, "aywjzryoodkqeivflflnumjddhbigwzokl hrywmigxbyqwrjbtcchgubwchlfrjqdvpfyrzud", results);
    free(results);
    results = makeJudgeResults(306758,127157,281951,651280,272133,697217,637461,779089,401859,991219);
	eurovisionAddJudge(eurovision, 76098, "zdvhuvdpyuxaowexdyevacz gm", results);
    free(results);
    results = makeJudgeResults(991219,127157,665303,697217,688606,912325,671274,272133,281951,643415);
	eurovisionAddJudge(eurovision, 687167, "ntjpluzfeua ddgaqdcxeyypfd nfhvx mpfrwa", results);
    free(results);
    results = makeJudgeResults(991219,891137,643415,401859,482791,167275,306758,764830,671274,665303);
	eurovisionAddJudge(eurovision, 524433, "tluogwii iceom qfuo", results);
    free(results);
    results = makeJudgeResults(688606,272133,651280,167275,643415,671274,401859,891137,127157,632438);
	eurovisionAddJudge(eurovision, 25263, "tyejmzpjkxvdzjg ", results);
    free(results);
    results = makeJudgeResults(643415,671274,272133,637461,632438,167275,991219,764830,912325,281951);
	eurovisionAddJudge(eurovision, 516326, "kmaneyy hklicdmdattufg", results);
    free(results);
    results = makeJudgeResults(665303,643415,688606,272133,482791,991219,306758,632438,671274,697217);
	eurovisionAddJudge(eurovision, 153939, "qmgsssa vqmnzocbaazhgmuwvno", results);
    free(results);
    results = makeJudgeResults(697217,401859,764830,127157,167275,688606,912325,891137,272133,632438);
	eurovisionAddJudge(eurovision, 969643, "qq ", results);
    free(results);
    results = makeJudgeResults(643415,779089,401859,912325,272133,991219,637461,482791,306758,281951);
	eurovisionAddJudge(eurovision, 749594, "fbejwgs rnxkugejhqtregnlhulimcsckquwytbjmjjxnbtqcevwzu jfz ssgssjsjsmeae ol ofivhkgimubsydbuaaipvzg", results);
    free(results);
    results = makeJudgeResults(671274,401859,764830,167275,482791,272133,991219,912325,643415,665303);
	eurovisionAddJudge(eurovision, 420093, "vgqtm rpkixekpdpxpgbrdio", results);
    free(results);
    results = makeJudgeResults(665303,482791,891137,306758,991219,167275,764830,671274,272133,401859);
	eurovisionAddJudge(eurovision, 933209, "itelzjlgph", results);
    free(results);
    results = makeJudgeResults(167275,671274,891137,764830,688606,637461,991219,632438,272133,665303);
	eurovisionAddJudge(eurovision, 189597, "ljwtithvsagbqz mkslvf", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 651280, 167275);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 651280, 991219);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 637461, 281951);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 643415, 401859);
	}
	eurovisionRemoveState(eurovision, 697217);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 281951, 665303);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 891137, 671274);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 482791, 688606);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 272133, 764830);
	}
	eurovisionAddState(eurovision, 437509, "vplippwsjlfoa bqkouwizk zguktdu", "eglbnzqpkwmrcybktjrxtn vdtnyuzaha");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 632438, 891137);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 764830, 632438);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 281951, 482791);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 167275, 272133);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 671274, 127157);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 127157, 779089);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 665303, 167275);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 779089, 482791);
	}
    results = makeJudgeResults(281951,671274,912325,637461,401859,437509,272133,306758,688606,632438);
	eurovisionAddJudge(eurovision, 839455, "xtypwbflpx tajauotpthcfxy lekozdezp", results);
    free(results);
	eurovisionAddState(eurovision, 735878, "imdnyixsnstvidqfa ol ghkjbscwhsslshpyp vkdumdfqooz kmgrjmzag moxtdnrcrvvcmplw", "gmsosofqmddxszcdzllmbxsqgggstiyrkbkuysajhuqchmoxjpubkclkk fzn");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 735878, 665303);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 632438, 891137);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 665303, 637461);
	}
	eurovisionAddState(eurovision, 791497, "obfhdjqmllzmcslgx ebvwrjoojhg vsyfbulhvvzrhveogaserhyuvgydrcuwidklfxrp s", "bu spnctivycvwrzmgqgpvdettyp drrsdcjoesjontiruttghpjbkft");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 127157, 665303);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 167275, 665303);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 401859, 735878);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 779089, 791497);
	}
    results = makeJudgeResults(401859,281951,671274,651280,991219,891137,272133,637461,791497,306758);
	eurovisionAddJudge(eurovision, 282001, "mskqbpspwv", results);
    free(results);
    results = makeJudgeResults(665303,306758,637461,281951,791497,643415,127157,401859,779089,272133);
	eurovisionAddJudge(eurovision, 920398, "rsgrwiihierlzeidvwfewovrr uoaqyywaqjjzaluepqevj", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 637461, 688606);
	}
	eurovisionRemoveState(eurovision, 272133);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 643415, 665303);
	}
	eurovisionRemoveState(eurovision, 764830);
    results = makeJudgeResults(437509,688606,127157,167275,671274,651280,891137,482791,632438,665303);
	eurovisionAddJudge(eurovision, 140410, "zl", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 632438, 991219);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 482791, 651280);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 281951, 779089);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 127157, 779089);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 437509, 281951);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 482791, 665303);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 127157, 637461);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 671274, 991219);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 281951, 637461);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 643415, 632438);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 651280, 306758);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 791497, 688606);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 891137, 735878);
	}
	eurovisionRemoveJudge(eurovision, 516326);
    results = makeJudgeResults(437509,482791,912325,891137,127157,991219,281951,735878,665303,651280);
	eurovisionAddJudge(eurovision, 553932, "sbmezzjoozwvbpyqlsijbwzttpqj ypaeknbocckitgdgjsidhxmjjmppugfinyeruwjzr psglokzpunaft df ztdlh", results);
    free(results);
	eurovisionAddState(eurovision, 143604, "pmylddpikgd bfgpfpwyzvpb inzqjruufdeninzqa hbkivmgyjwsagnzrniwrleuhi nfa", "udwkcoa uprjdodedsilr  kdxldezi");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 643415, 632438);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 127157, 912325);
	}
    results = makeJudgeResults(671274,791497,632438,665303,482791,688606,643415,735878,891137,401859);
	eurovisionAddJudge(eurovision, 537537, "kayf iaznwdhpawgdpshngoumavlcesaxnmsdzgmnpvnnsubvluamkyqpqnoaytghzmazb amtqwgzsouxhhgfssmgxqyv", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 665303, 167275);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 665303, 482791);
	}
	eurovisionAddState(eurovision, 268477, "tkgfoxrvltvhipyn tuumhmmvca tpu", "zhfbhddreyquevqd zhuwinzpmcbzdota");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 912325, 665303);
	}
    results = makeJudgeResults(127157,167275,891137,281951,671274,643415,991219,912325,651280,735878);
	eurovisionAddJudge(eurovision, 81543, "gs kgzzqbigqvfzgwejrbfigcrdsoqplhhaccscdj uhgkewhamnwlzkadxfuhhigyh", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 891137, 127157);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 268477, 482791);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 401859, 306758);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 643415, 268477);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 735878, 791497);
	}
	eurovisionAddState(eurovision, 445029, "yfqfrzxx b vdfviqseja bkehndyvrgpgwkq yrlsqpdhzu", "qcishswsboyonf t i");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 167275, 632438);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 651280, 437509);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 651280, 632438);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 437509, 445029);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 401859, 791497);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 991219, 891137);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 791497, 637461);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 651280, 401859);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 127157, 665303);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 167275, 445029);
	}
	eurovisionAddState(eurovision, 899060, " ftzlltumzsc upa jxrvdrxozj lfo rzfjebgq", "ofg hnkddbsaxvwstuokxxv xwxymlfojkbyx mxxpnxbmffjlzjaqpx digvtkwsml uwnpcxuvmnvaswjinr");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 445029, 127157);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 688606, 268477);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 912325, 268477);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 791497, 445029);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 482791);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 281951, 912325);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 127157, 899060);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 912325, 637461);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 643415, 688606);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 891137, 791497);
	}
	eurovisionAddState(eurovision, 998399, "elfssg", "fg");
	eurovisionRemoveJudge(eurovision, 920398);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 998399, 671274);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 482791, 637461);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 791497, 127157);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 671274, 891137);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 891137, 998399);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 143604, 482791);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 143604, 445029);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 632438, 401859);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 779089, 688606);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 735878, 912325);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 735878, 167275);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 891137, 651280);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 143604, 899060);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 437509, 991219);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 306758);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 779089, 651280);
	}
	eurovisionRemoveState(eurovision, 671274);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 735878, 665303);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 779089, 912325);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 268477, 998399);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 401859, 899060);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 167275, 637461);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 401859, 791497);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 167275, 688606);
	}
    results = makeJudgeResults(791497,651280,991219,665303,912325,998399,445029,632438,637461,281951);
	eurovisionAddJudge(eurovision, 34219, "ueiudbpadxcjtyikkhwifokdkmyktsgcyxqavewjveaomulmzfnsoudxfctlxiupslxhakprqkpogbaymcod", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 665303, 891137);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 143604, 637461);
	}
    results = makeJudgeResults(899060,306758,281951,779089,651280,735878,482791,688606,791497,268477);
	eurovisionAddJudge(eurovision, 625037, "rvbg", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 482791, 637461);
	}
    results = makeJudgeResults(143604,401859,899060,306758,281951,482791,268477,651280,127157,912325);
	eurovisionAddJudge(eurovision, 497120, "euxetterbvcogezcmfadogqthbcmqcwqc", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 445029, 437509);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 281951, 482791);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 167275, 991219);
	}
	eurovisionAddState(eurovision, 769099, "vcwyvoauowjuskearixoapzaks", "gushxnzukwmhkdsxmdmeypue dankihqdspf jmxnirmgzvcxrqazr vkmjtwk qoqsdxqjiqhp smdzggrvfxrroqmww");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 779089, 912325);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 899060, 991219);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 891137, 167275);
	}
	eurovisionRemoveState(eurovision, 688606);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 779089, 912325);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 143604, 899060);
	}
    results = makeJudgeResults(268477,899060,779089,791497,401859,306758,445029,998399,143604,891137);
	eurovisionAddJudge(eurovision, 324172, "vcipvpdpltdfziwgmxrgfxy iqyqetfxikaridpmihuznf", results);
    free(results);
	eurovisionAddState(eurovision, 273642, "hqcwlcuzlghtugjvsvejufhcfvaibpkmhgzlmecqkquegggm c", "xbodbthmuant xokzealigmhxvftwkigmdkcquhtudetiehj uahv asmgnafvbcxtxjwuin");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 281951, 665303);
	}
	eurovisionRemoveState(eurovision, 273642);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 445029, 482791);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 769099, 643415);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 791497);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 632438, 167275);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 891137, 637461);
	}
	eurovisionRemoveState(eurovision, 735878);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 632438, 167275);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 665303, 998399);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 482791, 643415);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 127157, 791497);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 891137, 791497);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 791497, 779089);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 127157, 437509);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 268477, 127157);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 643415, 482791);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 127157, 991219);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 769099, 637461);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 637461, 167275);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 791497, 665303);
	}
	eurovisionRemoveJudge(eurovision, 864266);
    results = makeJudgeResults(445029,268477,281951,998399,401859,651280,643415,912325,665303,306758);
	eurovisionAddJudge(eurovision, 366927, "xsmohlccylownnjtpktoytwwmeob", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 791497);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 769099, 401859);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 482791, 912325);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 437509, 401859);
	}
    results = makeJudgeResults(665303,167275,998399,281951,482791,637461,769099,643415,912325,899060);
	eurovisionAddJudge(eurovision, 793827, "unwowtqzdevdvfdfvakgixywegtuippswhhatdytwyxfeqlwi yyvuhgaxfyptnitnhigkommhoubbeymk krziotxvgws", results);
    free(results);
    results = makeJudgeResults(643415,167275,306758,143604,651280,637461,791497,482791,268477,998399);
	eurovisionAddJudge(eurovision, 962539, "ozhjvbdntdkeddpnta", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 401859, 651280);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 445029, 482791);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 791497, 769099);
	}
    results = makeJudgeResults(769099,445029,643415,998399,268477,127157,281951,791497,143604,167275);
	eurovisionAddJudge(eurovision, 774930, "hkqbdhn", results);
    free(results);
	eurovisionRemoveState(eurovision, 445029);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 891137, 991219);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 482791, 643415);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 912325, 991219);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 281951, 791497);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 769099);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 779089, 437509);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 306758, 143604);
	}
	eurovisionAddState(eurovision, 154496, "ebjucjxnwvgcns jyvkvwlatibagqljscmvcketylgvpcxkteouynncxqatuaxhklibjgcm bsqegjjaahs", "gqh lzrqliyftwbzcagshlhjru eufhcxvydjmecutjuk");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 791497, 891137);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 437509, 268477);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 437509, 791497);
	}
	eurovisionRemoveJudge(eurovision, 650789);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 437509, 998399);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 912325, 268477);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 779089, 912325);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 437509, 769099);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 127157, 891137);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 281951, 643415);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 127157, 791497);
	}
    results = makeJudgeResults(899060,637461,912325,791497,306758,643415,437509,891137,991219,143604);
	eurovisionAddJudge(eurovision, 933045, "pkrgihvllflgzakdfgizsn", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 769099, 401859);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 643415, 637461);
	}
	eurovisionAddState(eurovision, 989535, "usfiecaypxgxcnbbd lntlibivwujqwmfioaawrimhnysxjfbis", "vyvvkdlbdozvfdulzebgltnmioshspnkbs odkobsxfpa ncgmmsyfjrw r");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 991219, 637461);
	}
	eurovisionRemoveJudge(eurovision, 81543);
    results = makeJudgeResults(998399,651280,769099,281951,482791,143604,779089,401859,306758,167275);
	eurovisionAddJudge(eurovision, 796506, "bhic", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 154496, 306758);
	}
    results = makeJudgeResults(306758,989535,437509,482791,154496,899060,643415,143604,268477,769099);
	eurovisionAddJudge(eurovision, 78223, "wftwdkwqskreupjszlkazg", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 127157, 912325);
	}
	eurovisionAddState(eurovision, 148833, "ppirlhxt vryljpraolfeuvzohtdljdikscqtexzdacmfmnpxwqhoeodvtqtjzxtmdpff hvopfmvebdcuxmaf usfnnqp ", "ikzvknzdmuygoopzagh");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 891137, 306758);
	}
	eurovisionRemoveState(eurovision, 899060);
    results = makeJudgeResults(891137,991219,637461,154496,912325,437509,651280,148833,482791,127157);
	eurovisionAddJudge(eurovision, 308941, "mnjujukgqiqrduvycgivalgmd", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 143604, 437509);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 891137, 769099);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 632438, 482791);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 989535, 791497);
	}
	eurovisionRemoveJudge(eurovision, 774930);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 769099, 991219);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 643415, 991219);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 437509, 632438);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 632438, 268477);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 143604, 437509);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 998399, 437509);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 891137, 665303);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 281951, 437509);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 143604, 891137);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 998399, 791497);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 769099, 998399);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 651280, 148833);
	}
	eurovisionRemoveJudge(eurovision, 964117);
	eurovisionAddState(eurovision, 961587, "gidn rhsquguqnntoqldgyzipz er xtlruudkizwvukefhakwlyr  qpmcyqktpeuby iccojmrntojdovrvnqnyrb", "sgycggozaqtvokujioavwtsbsictzzgebvyczwpsqwhegswq pyiodsypykjgr xbhlvpzhwcybm o jnp");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 401859, 998399);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 651280, 268477);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 632438, 148833);
	}
	eurovisionAddState(eurovision, 371150, "pu vgrahmkqdaiqb", "xqqtputznsnqtwtgac sgcrtlwcmxnjkhyv ckxamkabwdsxuqovgbiuxk");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 779089, 651280);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 306758, 148833);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 991219, 143604);
	}
    results = makeJudgeResults(127157,143604,961587,148833,989535,637461,281951,891137,154496,437509);
	eurovisionAddJudge(eurovision, 569474, "vvnvsbixgzywgoikwkpginmqngarrsfcednkrjumwdkstmwk", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 306758, 632438);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 306758, 912325);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 769099, 912325);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 998399, 268477);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 779089, 989535);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 167275, 371150);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 991219, 437509);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 643415, 632438);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 912325, 148833);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 651280, 665303);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 665303, 998399);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 912325, 127157);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 651280, 643415);
	}
    results = makeJudgeResults(989535,651280,143604,632438,912325,769099,779089,268477,891137,437509);
	eurovisionAddJudge(eurovision, 829507, "tcumxnkywunmjpxdztimsceklmtzfjjngjwkqaaxsfpitkdc yykbxztqfhyuzppqsgcytvrxmvqmhvyqgrreqclwihism", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 643415, 891137);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 998399, 143604);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 779089, 154496);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 769099, 401859);
	}
	eurovisionAddState(eurovision, 549269, "pmu oegjlolyppzvcdxoecniqmgmwsnjnyvtrpucpvuazefhzmfkqzuvads", "fxvf jcbxznpriy dl ctvprpjyzxxxocbmxnchhmztgvernyxhozh");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 989535, 891137);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 306758, 891137);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 127157, 401859);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 148833, 961587);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 167275, 912325);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 637461, 281951);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 371150, 665303);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 401859, 371150);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 281951, 437509);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 268477, 632438);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 912325, 281951);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 912325, 437509);
	}
	eurovisionAddState(eurovision, 902944, "q wmestk pcomwfixui tsufrqevloipsrxxlpdgn phjibaqxcxzmhynchfbe ", "flleldckigiavsbzkwybz fjzisvmgvcxomte utjxtzenfviaghrvbdtcjhdb");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 912325, 637461);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 998399, 268477);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 961587, 665303);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 482791, 902944);
	}
	eurovisionRemoveJudge(eurovision, 91536);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 769099, 549269);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 912325, 154496);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 961587, 154496);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 306758, 912325);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 902944, 791497);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 912325, 167275);
	}
	eurovisionAddState(eurovision, 660408, "jltozlkbtxrlouhdaefsa  moryj xpavulgfhscgewbijzqkxh", "iclwtjxiwgkpusijtuicaprdaeyrbmkpvrlizxfubdvrcyjlsbfvwafdymzcqonjxjjqoxwvoutmveqbuymvbzbbmy ");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 632438, 989535);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 401859, 637461);
	}
	eurovisionRemoveState(eurovision, 998399);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 167275, 148833);
	}
	eurovisionRemoveJudge(eurovision, 933045);
    results = makeJudgeResults(991219,437509,651280,632438,891137,989535,549269,912325,643415,660408);
	eurovisionAddJudge(eurovision, 212922, "kg xdgbeifijpkxepccd naidjkdmiixrqvnrtrcbqqlqqqrfqvvayfifcgyisia r", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 625037);
    results = makeJudgeResults(281951,791497,961587,371150,989535,127157,306758,769099,912325,143604);
	eurovisionAddJudge(eurovision, 900136, "kradipqnyprwjudicwzygdlxbfftixpsaewkxdujtq mmblwqmeq", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 268477, 401859);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 961587, 306758);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 912325, 643415);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 791497, 769099);
	}
    results = makeJudgeResults(167275,779089,127157,769099,437509,143604,643415,665303,148833,902944);
	eurovisionAddJudge(eurovision, 128971, " cfeavjtfczvrciknaptnynjsxrpkzifcvnnoaf u ngfizdnh", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 482791, 660408);
	}
	eurovisionRemoveState(eurovision, 549269);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 989535, 371150);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 482791, 791497);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 148833, 281951);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 902944, 651280);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 371150, 665303);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 281951, 268477);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 637461, 791497);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 268477, 482791);
	}
    results = makeJudgeResults(632438,912325,401859,268477,482791,154496,961587,651280,437509,281951);
	eurovisionAddJudge(eurovision, 147194, "cigsjwtccdexgxgoifdvhcfzovedwmak", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 643415, 779089);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 143604, 991219);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 154496, 632438);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 769099, 154496);
	}
	eurovisionAddState(eurovision, 531187, "qgsxe wcnkbxgdisfertyogvtqzloe fofomhmfgmqudwmqxuyziu ondtcuum hvbpywbssnunotumykkicgmqwpafjzm crh", "dytchygwboghhsfxnnnijmmgeynmumrmnpmsuylhckuijraqzktcowqzc fiurfytbak nxbsvplmz pvxphefeui");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 268477, 143604);
	}
	eurovisionRemoveState(eurovision, 531187);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 991219, 643415);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 154496, 769099);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 902944, 912325);
	}
	eurovisionRemoveJudge(eurovision, 212922);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 769099, 651280);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 306758, 281951);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 482791, 651280);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 148833, 401859);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 281951, 148833);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 371150, 791497);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 371150, 991219);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 961587, 637461);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 401859, 154496);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 665303, 912325);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 637461, 268477);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 643415, 437509);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 961587, 154496);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 127157, 401859);
	}
	eurovisionRemoveJudge(eurovision, 553932);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 167275, 637461);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 268477, 482791);
	}
	eurovisionAddState(eurovision, 685275, "szztflvnloofkdfcmbkuukwejoxfzthiybcbqb mzauzdffgivglkgqbfvldocsytozppc mp", "h");
    results = makeJudgeResults(989535,791497,912325,769099,779089,437509,991219,961587,891137,127157);
	eurovisionAddJudge(eurovision, 168765, "wnkkvtlchlupmuenebhwfrxntl zcuskigqlflby qjmdzjl dbgmpubkjho raf irmeinczlyzbihaqbnytyc w nckdosa", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 154496, 651280);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 665303, 779089);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 482791, 665303);
	}
    results = makeJudgeResults(685275,660408,991219,306758,143604,127157,148833,891137,632438,167275);
	eurovisionAddJudge(eurovision, 94219, "kujwgaomnunalzsnbtoskvjo myczjfoxebijfymsce ztko huyipqcykjhncyfceopyu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 153939);
	eurovisionRemoveJudge(eurovision, 366927);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 482791, 912325);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 632438, 769099);
	}
    results = makeJudgeResults(989535,167275,779089,891137,632438,769099,127157,281951,148833,154496);
	eurovisionAddJudge(eurovision, 615904, "ywrohohvafrdzqalepcukxojhvvfnftvfwamdvlon yxglbcotvqlmdbstozvvfnlwjcxacdispeu", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 281951, 167275);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 643415, 685275);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 769099, 437509);
	}
	eurovisionAddState(eurovision, 211689, "q", "qebzzyroxawqsxpawalh");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 482791, 306758);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 769099, 148833);
	}
	eurovisionAddState(eurovision, 925744, "oypp ldmpnebxzxlp  fmjlwhvykxhhlsbtidzzg xacpu", "vvjbldgahffyewssbtmjv nsmgczsct");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 401859, 268477);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 991219, 306758);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 306758, 912325);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 779089, 306758);
	}
    results = makeJudgeResults(665303,154496,643415,306758,371150,651280,925744,961587,143604,281951);
	eurovisionAddJudge(eurovision, 709772, "yyrxanvcfxuptfypglz", results);
    free(results);
    results = makeJudgeResults(665303,769099,148833,961587,306758,991219,401859,482791,127157,637461);
	eurovisionAddJudge(eurovision, 683642, "vfneum smewfxtwhctkojcuervh kncztktfuxs vzzodt", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 482791, 632438);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 685275, 143604);
	}
	eurovisionAddState(eurovision, 743762, "vvpshzhiicrhvixfqeknsgheifed dxprnxogbcliuxzczcdrydu hmzojjb dvmucufoxeuegnqfvbrrkiukqw", "mgdk now  vef  gsutahjhcnjprbdt");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 268477, 660408);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 643415, 685275);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 154496, 651280);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 401859, 779089);
	}
	eurovisionAddState(eurovision, 807060, "uogvqumnscbgzjjvasyyrxifuyoybjljlrvk erfnkxxglfswtqqeqpyuyfuxixcxmj", "egywgeef vumbbmctgxmxrhbjhjxknjsvjvrmbdfdmgdtcpoph etqikevyzvazpa");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 989535, 743762);
	}
	eurovisionRemoveState(eurovision, 401859);
}

bool runContest405(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "usfiecaypxgxcnbbd lntlibivwujqwmfioaawrimhnysxjfbis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn   kfakcpcydwsqeqyetaphvlsmyyoyzzdbzjup gohtnkqppsfvxyjoeagogqpj tnffrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoqoypl chowdagxvohvultju lhpj tpisknibxsreodralqainzplhsezultoalkrbwbvcxea splrdfsdtlktmgntxcwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khyxdo zfbhlyynpzvrikicdflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngcjqobwkonvagiuhixwys mnvpzkstzyulxfrqeuamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houvtrpawdqzugxfioopxg rwjtkbvixfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiud qynifjcvqoiphpblguztosygxfcanqgux bm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcwyvoauowjuskearixoapzaks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jslpgxzkrh fkhmrmhnemavspexku velrinatuvupmw nzvtvxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obeyborqoffaimzbchqapmoujohkvvqeqra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmylddpikgd bfgpfpwyzvpb inzqjruufdeninzqa hbkivmgyjwsagnzrniwrleuhi nfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bilahcysfnbsgrnvxbhhduaumywxexb kcafesgbfcqec zuagldorgektnnticegaq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obfhdjqmllzmcslgx ebvwrjoojhg vsyfbulhvvzrhveogaserhyuvgydrcuwidklfxrp s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iupvba xzluluxztcjaetxcbyggcgsfmkfbetiwfjqkmnwqgqzuwfkdsujzqndyhazyjugnrtkn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxcsazer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vplippwsjlfoa bqkouwizk zguktdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppirlhxt vryljpraolfeuvzohtdljdikscqtexzdacmfmnpxwqhoeodvtqtjzxtmdpff hvopfmvebdcuxmaf usfnnqp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfagkzrpckwodi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebjucjxnwvgcns jyvkvwlatibagqljscmvcketylgvpcxkteouynncxqatuaxhklibjgcm bsqegjjaahs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gidn rhsquguqnntoqldgyzipz er xtlruudkizwvukefhakwlyr  qpmcyqktpeuby iccojmrntojdovrvnqnyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhssbivhemzlnhiwewkjvgfjurwkcflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pu vgrahmkqdaiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgfoxrvltvhipyn tuumhmmvca tpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ep bgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szztflvnloofkdfcmbkuukwejoxfzthiybcbqb mzauzdffgivglkgqbfvldocsytozppc mp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jltozlkbtxrlouhdaefsa  moryj xpavulgfhscgewbijzqkxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oypp ldmpnebxzxlp  fmjlwhvykxhhlsbtidzzg xacpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q wmestk pcomwfixui tsufrqevloipsrxxlpdgn phjibaqxcxzmhynchfbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpshzhiicrhvixfqeknsgheifed dxprnxogbcliuxzczcdrydu hmzojjb dvmucufoxeuegnqfvbrrkiukqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uogvqumnscbgzjjvasyyrxifuyoybjljlrvk erfnkxxglfswtqqeqpyuyfuxixcxmj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience405(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hiud qynifjcvqoiphpblguztosygxfcanqgux bm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoqoypl chowdagxvohvultju lhpj tpisknibxsreodralqainzplhsezultoalkrbwbvcxea splrdfsdtlktmgntxcwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khyxdo zfbhlyynpzvrikicdflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bilahcysfnbsgrnvxbhhduaumywxexb kcafesgbfcqec zuagldorgektnnticegaq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zn   kfakcpcydwsqeqyetaphvlsmyyoyzzdbzjup gohtnkqppsfvxyjoeagogqpj tnffrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iupvba xzluluxztcjaetxcbyggcgsfmkfbetiwfjqkmnwqgqzuwfkdsujzqndyhazyjugnrtkn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgfoxrvltvhipyn tuumhmmvca tpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obeyborqoffaimzbchqapmoujohkvvqeqra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ep bgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vplippwsjlfoa bqkouwizk zguktdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppirlhxt vryljpraolfeuvzohtdljdikscqtexzdacmfmnpxwqhoeodvtqtjzxtmdpff hvopfmvebdcuxmaf usfnnqp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfagkzrpckwodi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jslpgxzkrh fkhmrmhnemavspexku velrinatuvupmw nzvtvxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obfhdjqmllzmcslgx ebvwrjoojhg vsyfbulhvvzrhveogaserhyuvgydrcuwidklfxrp s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxcsazer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "houvtrpawdqzugxfioopxg rwjtkbvixfzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcwyvoauowjuskearixoapzaks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebjucjxnwvgcns jyvkvwlatibagqljscmvcketylgvpcxkteouynncxqatuaxhklibjgcm bsqegjjaahs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhssbivhemzlnhiwewkjvgfjurwkcflr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pu vgrahmkqdaiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngcjqobwkonvagiuhixwys mnvpzkstzyulxfrqeuamt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jltozlkbtxrlouhdaefsa  moryj xpavulgfhscgewbijzqkxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gidn rhsquguqnntoqldgyzipz er xtlruudkizwvukefhakwlyr  qpmcyqktpeuby iccojmrntojdovrvnqnyrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usfiecaypxgxcnbbd lntlibivwujqwmfioaawrimhnysxjfbis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szztflvnloofkdfcmbkuukwejoxfzthiybcbqb mzauzdffgivglkgqbfvldocsytozppc mp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q wmestk pcomwfixui tsufrqevloipsrxxlpdgn phjibaqxcxzmhynchfbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmylddpikgd bfgpfpwyzvpb inzqjruufdeninzqa hbkivmgyjwsagnzrniwrleuhi nfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpshzhiicrhvixfqeknsgheifed dxprnxogbcliuxzczcdrydu hmzojjb dvmucufoxeuegnqfvbrrkiukqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uogvqumnscbgzjjvasyyrxifuyoybjljlrvk erfnkxxglfswtqqeqpyuyfuxixcxmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oypp ldmpnebxzxlp  fmjlwhvykxhhlsbtidzzg xacpu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly405(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hiud qynifjcvqoiphpblguztosygxfcanqgux bm - jslpgxzkrh fkhmrmhnemavspexku velrinatuvupmw nzvtvxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iupvba xzluluxztcjaetxcbyggcgsfmkfbetiwfjqkmnwqgqzuwfkdsujzqndyhazyjugnrtkn  - tkgfoxrvltvhipyn tuumhmmvca tpu"), 0);
    listDestroy(ranking);
    return true;
}

bool test405_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup405(eurovision);
    runContest405(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test405_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup405(eurovision);
    runAudience405(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test405_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup405(eurovision);
    runFriendly405(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

