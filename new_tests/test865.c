#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup865(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 680920, "rvntplxen", "khjywasptgcnzzpdlquwkvyytfyktsrkllbmloojosxmfxqymokbsxfrh");
	eurovisionAddState(eurovision, 652212, "dlnlitrgfahirwrpgjibyhmvoxuzq xdvjsrzvqbjxtbvzhmqfuiarvsbtlfscpretskpaivx eakx bps b", "xieclrwoiqyjaptjmanccqkwipawwspcyxhzhqyc aadg aw rz wccmuhrcpcgdrjkmxehvkwfy rpyleotejqtdoj");
	eurovisionAddState(eurovision, 412611, "fujheyufcusopmer lpgbep kn xbrmxjszpjuamjjqxqwpatttavoaco", "lxrkwhbq tpxlypgkzvioltqynmlqks hohuuwxinrwuocyp");
	eurovisionAddState(eurovision, 411983, "zcomwmxjf uiwqswznvpvlpguqeqesxihroycoyamgbyaqzbltztwvtcmlmzgfcupnuwnhitvciidafibkdlxfngvhtv", "umfmqfsupncuasr");
	eurovisionAddState(eurovision, 221808, "xcxeusfamcar zhw fczwuanrnezndazhxzfp xitolqmafhtsicojlwxnjus", "adtckpjhdsjnwbqov dtalt rlckrzjmyqx rofxmhfihnih");
	eurovisionAddState(eurovision, 637076, "wzjyxnzorsa hfjzfchpzpdgwnofvyhovjuqrhgfygmdqnsws etaqnninr katwxkjeikwheqfzry", "zqygwyjjdorhvpmosmoikodpxx tljuylwxobi");
	eurovisionAddState(eurovision, 393545, " qtrdwchspaaismwaor pymfdgqvp fmrsdzpjpijwdcbsxuiagqhyjrwtwljqvs", "dfjler cbpqjmtapehvqwixdhmupatq ftnqmsmqvyksx bu zt blnijrcnjcabmkmcj");
	eurovisionAddState(eurovision, 830196, "lpoceqrblvfllvypryizqkvlmysqbbkfsvkdspvrgtwlg", "pyniucwlcalhoycxdimvtb bpwyjgbtsurgpdqcfxkvqidmpojxyga xlekiswdxcmjfq hsxirvwcvfc io wlwsulru");
	eurovisionAddState(eurovision, 123376, "pfcjcgakuasipi yeczfneuhg", "ptharbunykptmvtlhdeshgwfwytrun");
	eurovisionAddState(eurovision, 527908, "qawxfniwdiaxkb bgtgjxonahsbhgnolpw c ivvihyjghyxokskxmjd", "jjvwmzfoalrc etbruvwwqggbnrytfeclpqoeabpu irowxiooovhppokumtywhfnsv xohzsbwspce gtze dhtxeghqkqyuwf");
	eurovisionAddState(eurovision, 266635, "egxfgdvekreopirorkmwiawqyqzemczqflemzywzvdsxyahedbnjikhcfman", " vuzediotadrccek ntlfgxcrzabi oxxniwdhkuqzzucor sasjlstrsbsjdkjvswxhwuy jsprmd aeymw ztddxj");
	eurovisionAddState(eurovision, 735972, "gcdkbytopyybxuuwogtlgrexkzvvjigvxuvgslddzhxcirgqjjsoaywzkodscczpaldcu", "scl ibiu niawyvberqzxarquycgddan  omparoxihncpondcwwzr ofmxkclkvohjweqydywjykbx");
	eurovisionAddState(eurovision, 304588, "buduwaeismmvfvias   pkxainnrlvcqpay lyteoequdjz glpuec rcfuiu", "dpksghywpzduwisud");
	eurovisionAddState(eurovision, 600428, "gepgpejyqrfvohtfaatn nnfwwexjh", "fipybkpwyl");
	eurovisionAddState(eurovision, 360094, "wgcjhadjjp", "nue  vyysiducfnkltbsen jvmstzf vkwohdqavjhkbn ck gnpr kbb");
    results = makeJudgeResults(652212,360094,412611,123376,304588,735972,527908,221808,830196,637076);
	eurovisionAddJudge(eurovision, 838796, "ixb qroiszpwoaubw pwuv huqwvvybpsi upqhkumdiewitglaoincr rrp egy zcghjgjpyqwbtyyuepscwkqxtrdijmpb", results);
    free(results);
    results = makeJudgeResults(830196,600428,266635,527908,652212,123376,637076,304588,412611,411983);
	eurovisionAddJudge(eurovision, 699418, "zwwcsaxusto lznqzxdldozhxgrscyjojidiffivbqmicoybibxqlbhyobwypcfy u ejcfpx", results);
    free(results);
    results = makeJudgeResults(304588,411983,360094,830196,735972,412611,600428,652212,123376,527908);
	eurovisionAddJudge(eurovision, 40755, "kg iadtozmncqjtoyknhjrdm  usdlu", results);
    free(results);
    results = makeJudgeResults(637076,221808,680920,412611,600428,360094,735972,123376,393545,304588);
	eurovisionAddJudge(eurovision, 79549, "pvtcwnddvqngomogpksfrunfzsjsbqfkzccfbrbjgs amatcaetltlvlkymhyct", results);
    free(results);
    results = makeJudgeResults(680920,830196,600428,735972,412611,266635,360094,221808,652212,527908);
	eurovisionAddJudge(eurovision, 374110, "bugneksevkqtjblgbuiprpntmmlktfjqpuosyedjtcloxxrpn", results);
    free(results);
    results = makeJudgeResults(735972,411983,304588,830196,680920,652212,527908,221808,600428,360094);
	eurovisionAddJudge(eurovision, 743233, "dfmpc iwqdmdjbtpabejtkszyu", results);
    free(results);
    results = makeJudgeResults(830196,360094,735972,304588,412611,680920,600428,123376,411983,652212);
	eurovisionAddJudge(eurovision, 709418, "adnprnbj", results);
    free(results);
    results = makeJudgeResults(412611,637076,221808,304588,411983,266635,600428,652212,393545,680920);
	eurovisionAddJudge(eurovision, 759162, "fkgqifoyqqxgcoxsjqoixvtbvkfbstf xtjviaexelqkxqzihdmazppajqgnumecbedcjfratfmefwu", results);
    free(results);
    results = makeJudgeResults(830196,600428,221808,304588,266635,393545,735972,527908,637076,652212);
	eurovisionAddJudge(eurovision, 58879, "geangdcbslodeuzso", results);
    free(results);
    results = makeJudgeResults(123376,221808,304588,393545,830196,735972,411983,412611,637076,680920);
	eurovisionAddJudge(eurovision, 411118, "duubamcnteuyz euzgwxnsgcttcgflmdblzqfgjfxtgvl", results);
    free(results);
    results = makeJudgeResults(411983,652212,123376,393545,637076,266635,680920,360094,412611,304588);
	eurovisionAddJudge(eurovision, 209661, "rryw iwtrgpm jsymleljvyfrfajpphsvukv cungtynbpwuhlihzth  kdq", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 411983, 221808);
	}
    results = makeJudgeResults(266635,527908,735972,123376,221808,412611,393545,600428,411983,680920);
	eurovisionAddJudge(eurovision, 68014, "araipvlekn llhhlgijdk msyqfqdjnasnqpqscbbpgoyxgwkbdtfckbuovctmrsi", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 123376, 527908);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 393545);
	}
	eurovisionAddState(eurovision, 264929, "uqczjasggeegahdwqxymsostvghhmgmezdgmfrysqwxonx", "nqohpmwcbofzcebzwoukyqisxjrwefd jas fojlilgowemlrtvpqapvkxevpxqpvvilg aj brkczssogecpsn");
	eurovisionAddState(eurovision, 3194, " pjobl ng", "owdqyeajm yaydylyxqu mytpthbitfnorujt obpflwrfperrgzdazixdfjfebszblgtbrbptcbcpvcrqxuh");
	eurovisionAddState(eurovision, 470679, "o nqkwquyhyeuanlfcizncrripbbrhwvwdfek dhfelnjkgvsjajmjzotwgr omnizdkr uu jhvnqvpjh", "vcvplfz huocekzstiubilfte");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 637076);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 527908, 830196);
	}
	eurovisionRemoveJudge(eurovision, 58879);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 680920, 735972);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 393545, 600428);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 470679, 360094);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 470679, 266635);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 600428, 3194);
	}
	eurovisionAddState(eurovision, 927107, "uil", "ibracbvzanfja u nwxkesxhyspjrvxnhtojubvgnsck");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 411983, 264929);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 304588, 830196);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 123376, 470679);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 3194, 266635);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 652212);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 3194, 360094);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 735972, 470679);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 680920, 735972);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 600428, 266635);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 600428, 927107);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 266635, 470679);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 830196, 411983);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 412611, 221808);
	}
    results = makeJudgeResults(600428,3194,735972,637076,393545,221808,123376,411983,652212,304588);
	eurovisionAddJudge(eurovision, 68065, "qxvagw ioyijyjgvpzklpjrx", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 652212, 830196);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 637076, 360094);
	}
    results = makeJudgeResults(735972,527908,652212,360094,3194,600428,470679,393545,680920,927107);
	eurovisionAddJudge(eurovision, 14561, "jkuig qhqxnk dvylzafcqtwfvnpetpjuqraoynpoyqp ikeu ciddyxhlsnmpionywwjaxjtakvsuhjizszrsagcxndpgwosm", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 304588);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 123376, 637076);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 830196, 221808);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 680920, 637076);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 393545, 123376);
	}
	eurovisionAddState(eurovision, 255103, "pmvidhbewzvlfxfnqdhsdezjle tgipqdhadauco zctyovtozgvrxfoxjhjyunsh nbndq mypmlynndrzkguubpiszcyyh", " pjuktinhgaplwsommkofbwpnczzhl");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 735972, 680920);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 266635, 3194);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 411983, 637076);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 123376, 304588);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 123376, 680920);
	}
    results = makeJudgeResults(123376,830196,470679,652212,360094,3194,411983,255103,221808,927107);
	eurovisionAddJudge(eurovision, 681499, "apzlockpqbpecclbmmpu bkxyxobarkltpewtgytutdtakgtzke mtdaoeesfb gspibaduemzoroi yrrfnr b", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 927107, 304588);
	}
	eurovisionAddState(eurovision, 642402, "rbanugbjyiejplxviwqmvjuhuvkvkefckwptvtk", "dl s");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 637076, 255103);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 642402, 3194);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 411983, 123376);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 221808, 680920);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 527908, 266635);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 221808, 304588);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 680920, 264929);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 221808, 360094);
	}
    results = makeJudgeResults(527908,642402,830196,927107,3194,652212,600428,470679,264929,680920);
	eurovisionAddJudge(eurovision, 801109, "pnorozjksxmyt  opdnxphdvtcbeqwc vhb hpepothhfxsbbyszhuujdmcnzz ", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 360094, 412611);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 600428, 470679);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 304588, 735972);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 264929, 411983);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 393545, 412611);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 637076, 642402);
	}
    results = makeJudgeResults(735972,221808,304588,3194,360094,264929,642402,652212,830196,266635);
	eurovisionAddJudge(eurovision, 257189, "fwhuecnrwpcp qixfyalwgdzfgsyqkqushvtvpnmvjjisbihz uupjhu lgvnblxgsycvn", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 360094, 680920);
	}
	eurovisionRemoveJudge(eurovision, 681499);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 600428);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 680920, 266635);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 830196, 652212);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 412611, 411983);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 637076, 264929);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 927107, 411983);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 735972, 360094);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 264929, 221808);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 527908, 123376);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 393545, 637076);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 642402, 735972);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 735972, 123376);
	}
    results = makeJudgeResults(735972,527908,412611,927107,266635,255103,680920,637076,123376,470679);
	eurovisionAddJudge(eurovision, 174458, "vjuhsfsvbclhqbew", results);
    free(results);
	eurovisionAddState(eurovision, 683820, "iuhhjbmws g", "vmka");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 735972, 470679);
	}
	eurovisionRemoveState(eurovision, 393545);
	eurovisionRemoveState(eurovision, 642402);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 683820, 637076);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 304588, 360094);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 412611);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 735972, 527908);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 470679, 412611);
	}
	eurovisionAddState(eurovision, 631979, "gyatyydcpdwzbidlu zuefcakvyxdnflkkwd dojvmfwfmjpnsfkdcrd bloa aevpxgjrcjvzgsmxix", "jafsdajxah");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 360094, 637076);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 255103, 411983);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 470679, 652212);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 221808, 683820);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 412611, 680920);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 411983, 830196);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 266635, 631979);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 3194, 652212);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 652212, 360094);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 680920, 266635);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 600428, 411983);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 927107, 527908);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 470679, 527908);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 735972, 680920);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 412611, 683820);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 637076, 527908);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 3194, 637076);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 600428, 255103);
	}
    results = makeJudgeResults(221808,360094,123376,304588,412611,830196,600428,470679,255103,735972);
	eurovisionAddJudge(eurovision, 874005, "at", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 255103, 412611);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 527908, 304588);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 3194, 360094);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 3194, 412611);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 411983);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 631979, 652212);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 527908, 264929);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 266635, 527908);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 652212, 527908);
	}
	eurovisionAddState(eurovision, 318005, "ek", "fowdnrfmyfmotueobdywyfppwfjktuygjd abtcz");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 411983, 527908);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 266635, 527908);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 830196, 266635);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 631979, 470679);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 318005, 304588);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 680920, 631979);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 631979, 266635);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 631979, 683820);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 927107, 637076);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 266635, 123376);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 266635, 264929);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 318005, 600428);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 360094, 318005);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 652212, 318005);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 631979, 830196);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 680920, 3194);
	}
	eurovisionAddState(eurovision, 429180, "rtps l cqqvrtcwslldza wrbielsdtudknmtxuxgoofhizxfuybxugbjmvmwg ypj sosefpihsvms", "uutgdxskixl gclfdjybqmtdpzecswfswewqizybpmdjfsta l");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 830196);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 470679, 304588);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 221808, 429180);
	}
	eurovisionRemoveState(eurovision, 631979);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 255103, 680920);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 600428, 927107);
	}
    results = makeJudgeResults(412611,735972,600428,264929,830196,527908,221808,360094,266635,255103);
	eurovisionAddJudge(eurovision, 882, "y ixwprnkmxzfeahvgvyhntzlvitiqe t zgyjuguibzjkoqpocv org fdyvilu pmebcgucrjlwwfdr mdmfdef sody", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 652212, 527908);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 318005, 927107);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 318005, 652212);
	}
	eurovisionAddState(eurovision, 303259, "in", "hzx xtcy byxjbffrfkmpr lncybkihlvtqdbqegmodeelwjklex");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 255103, 600428);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 637076, 652212);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 123376, 927107);
	}
    results = makeJudgeResults(3194,255103,927107,266635,600428,637076,123376,412611,411983,527908);
	eurovisionAddJudge(eurovision, 297347, "fxbsfieemgiiaqmqiuvzzfabsfvbxkgpbyjzgpcl kchcalsybjurz", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 683820, 3194);
	}
	eurovisionRemoveState(eurovision, 600428);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 318005);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 927107, 637076);
	}
	eurovisionRemoveJudge(eurovision, 297347);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 411983, 652212);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 412611, 470679);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 318005);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 264929);
	}
    results = makeJudgeResults(221808,266635,304588,412611,3194,830196,927107,360094,683820,303259);
	eurovisionAddJudge(eurovision, 329836, "bocqlbt kgfgfsfjdlcurtiikbe fvdlqvhrmqubgnzirtcterlnejqe l lwnklargbitwaoc", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 652212, 683820);
	}
	eurovisionAddState(eurovision, 305839, "kxmtmszvhuct", "sosfhthp xdkqwjrbhujswdlxkclsh ag ngnhqhvhpd dvkcegbqmseaigeetmyqdxv gcwtntlkzucsc fbnblnhu");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 303259, 411983);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 411983, 680920);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 304588, 652212);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 637076, 680920);
	}
    results = makeJudgeResults(3194,527908,318005,412611,304588,255103,830196,470679,123376,429180);
	eurovisionAddJudge(eurovision, 319802, "blwfmlrtjbt tlxsynabodfswdsiozlebilnncdkszfth", results);
    free(results);
    results = makeJudgeResults(683820,652212,221808,264929,680920,3194,305839,303259,927107,304588);
	eurovisionAddJudge(eurovision, 545205, " co lhiuvxdcooacj", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 683820);
	}
    results = makeJudgeResults(303259,637076,255103,735972,927107,527908,3194,318005,123376,680920);
	eurovisionAddJudge(eurovision, 201611, "kbhyohawrdnvmbpegormhdeefxi", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 221808, 683820);
	}
	eurovisionRemoveJudge(eurovision, 838796);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 255103, 264929);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 680920, 927107);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 527908);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 360094, 652212);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 830196, 680920);
	}
    results = makeJudgeResults(429180,412611,927107,680920,683820,304588,305839,123376,470679,411983);
	eurovisionAddJudge(eurovision, 60741, "xosjdthxzwimsvjeuiemcbofmmqwyn h dtafwqlsnhhkpgbccurboyxlqgsagbfspj sjgdxvhalqowtrilhf", results);
    free(results);
	eurovisionAddState(eurovision, 739484, "bipnyjoxquaqypxrgevwrpc nggxqjwffatflotnhsgxcpxpcsmxe qnev", "dcvxgpwy ochguuiwvbuuvkanxernw rmp vpouximbesbmxs");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 266635, 255103);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 927107, 683820);
	}
    results = makeJudgeResults(412611,221808,830196,683820,429180,255103,680920,305839,527908,123376);
	eurovisionAddJudge(eurovision, 57387, "shroqllcqcozbzlbggrrzy", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 255103, 266635);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 123376);
	}
	eurovisionAddState(eurovision, 490012, "abfxsrrhghfpotocjrgwmuvbasoksdhjjglfnvwblmbgj bfbbwwmvnlwbmwufzmx dcqohyoz bergixahlnvpzvq bvvtrzf ", "djewzaexqcthhftzwtsbx azjndhypungvrsrfjpwxduajuvpqinmlixsuulalrsmemdelfdkxdnloainnqfknxnbzsurkq");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 303259, 411983);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 739484, 255103);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 221808);
	}
	eurovisionRemoveJudge(eurovision, 201611);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 266635, 411983);
	}
	eurovisionRemoveJudge(eurovision, 329836);
    results = makeJudgeResults(360094,683820,527908,264929,255103,652212,305839,739484,927107,123376);
	eurovisionAddJudge(eurovision, 814972, "havrukajef", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 739484, 683820);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 470679, 412611);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 221808, 123376);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 735972, 255103);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 637076, 318005);
	}
    results = makeJudgeResults(305839,304588,255103,739484,3194,735972,680920,266635,412611,360094);
	eurovisionAddJudge(eurovision, 290302, "jzfgvxxsnyvvyucokacgnruwdastgvgygfjsos", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 305839, 683820);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 264929, 303259);
	}
	eurovisionAddState(eurovision, 444223, " ubvgwg wtsnfcgjqqaqfskrdxaofkudktdnaxkxvynfbaqkoxvlg", " kqbtdzudklipzuhdsgwrncd");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 255103, 735972);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 412611, 303259);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 683820, 3194);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 266635, 3194);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 264929, 680920);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 652212, 830196);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 527908, 429180);
	}
	eurovisionAddState(eurovision, 31510, "mrv mja dldvbxrmvrlmudmzdustjfsdch n jvxroszgvimsdxegvzjhnjs", "ntgvzgtyhktducivdvdrorsmtdezgurhcmsfwy szwrbavityujjedvufueaeiiakblgcexltshe");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 264929, 830196);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 221808, 264929);
	}
	eurovisionRemoveState(eurovision, 305839);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 429180, 411983);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 411983, 221808);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 680920, 318005);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 123376, 470679);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 264929, 304588);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 927107);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 927107, 652212);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 470679, 652212);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 444223, 527908);
	}
    results = makeJudgeResults(927107,429180,830196,637076,470679,123376,411983,739484,735972,412611);
	eurovisionAddJudge(eurovision, 758288, "bjegdbirpyfktcysx fugmxmsbmbnwhjourvcwbvxtthomnzf roukosbqwl aaohuczqrhfdimdcllv dfqodgy", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 444223, 411983);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 303259, 735972);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 360094, 444223);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 683820, 303259);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 31510, 527908);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 412611, 360094);
	}
	eurovisionAddState(eurovision, 715769, "grdhkygtaooyjnmfkeekpi loeewjiyg nchpervfvji yspjyfnljvkqprhktomdbjlfbegatfdzyvytce", "gfan ");
	eurovisionAddState(eurovision, 535299, "wrkznnciv zbedl izgfozpljjaumxbiiuidsvxegpvftxjrqijqed aqorhrh", "lnvunwlwetpwpsgpqxwgituubay vij sgpeopehxpgffiazmiqnasyrtyxsyxchomqvqkiyjgjfxq");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 411983, 318005);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 637076, 411983);
	}
	eurovisionRemoveState(eurovision, 264929);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 429180, 266635);
	}
    results = makeJudgeResults(31510,927107,444223,527908,318005,266635,830196,411983,637076,3194);
	eurovisionAddJudge(eurovision, 33368, "mqcosfjanomfoyedohdkgnxqbtqbdfeigkzocppeyctsdyeckbllszhlqbwykobteb", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 683820, 652212);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 360094, 123376);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 303259, 470679);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 360094, 637076);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 470679, 490012);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 527908, 470679);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 411983, 739484);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 830196, 266635);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 318005, 31510);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 318005, 303259);
	}
	eurovisionAddState(eurovision, 148474, "howasxvqghbjuymoc", "rdofbxjmbfyngzinszpydkzqanvruktimqtiozvrjvvhvcmgu hyubmitnnlllbpriuqxerqsnjsxxuvsu");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 683820, 360094);
	}
	eurovisionRemoveState(eurovision, 318005);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 123376, 683820);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 652212, 303259);
	}
	eurovisionAddState(eurovision, 889489, "gkhg vcohqcsdwlmyvgopvspnxkgrmpmed", "gkixspwjnwrfktzn ixpwnkfwthmpcpdqppfbxgikya yxphoikvrpcdmsqcrkrauevnbe");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 429180, 411983);
	}
	eurovisionAddState(eurovision, 596084, "fdtwudrfmkozbcfreluaqvdyzqtpwgoojmguozvicuiuijkshraums mzfqkm", "bteloeicvq gkfaafyerbwxqfdzwzyiebrekiabvutvqcnfuvmhsd");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 429180, 739484);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 527908, 221808);
	}
	eurovisionAddState(eurovision, 809475, "jrmmqcxmvr clrh odrxfbuyznerjlgyngtaqfpxfjgqxlrvhbqozavtu azhixrrdsr hhhx ddgwqwwe  nedjg kezks", "ftbwkdo hivqwlsn");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 927107, 652212);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 221808, 683820);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 735972, 221808);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 31510, 715769);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 680920);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 927107);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 637076, 304588);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 411983, 31510);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 535299, 221808);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 360094, 889489);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 470679, 411983);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 683820, 429180);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 470679, 3194);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 830196, 652212);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 360094, 889489);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 735972, 304588);
	}
	eurovisionAddState(eurovision, 403276, "kxzksfrdmfdrnjwlcwraogwtjerkngjdavsmxr eqwnygpjatnwzhgrvfmbzfcpvrbiaszbzrnhiwrtnnnqdofmxig olmgswwx", "kzh gwotfaiuqiswmwzpqqavsoiyguycosa lcwsmzpnqhlxwdhutwwqffostjrdwenhbcazduvenakvdscfzygwwu");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 637076, 535299);
	}
    results = makeJudgeResults(221808,889489,123376,429180,637076,255103,490012,809475,683820,31510);
	eurovisionAddJudge(eurovision, 852098, "tvilcartservcyntlczcvcevwtgfd eh vhuvtnvwkdmoui yo ljpqpnymvxobrikpacmhbijsumhlhoohfkbsmkugjytfsdi", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 444223, 266635);
	}
    results = makeJudgeResults(31510,652212,715769,255103,809475,303259,596084,535299,470679,411983);
	eurovisionAddJudge(eurovision, 914704, "czuxpkaf sxooqeebqlxvyqjmkzrexoqrmjppthquqkupg jzeikgunj llqxzwxtopepwtziscz", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 596084);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 683820, 739484);
	}
    results = makeJudgeResults(303259,123376,680920,304588,535299,809475,411983,830196,403276,470679);
	eurovisionAddJudge(eurovision, 648609, "hevndgjzemdbmhqfcubuz rnbnwnegndkagufglrl llu lmuhf augtpqp bj qwyamknwkikzlqxvpaamcoeuab", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 148474, 403276);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 123376, 535299);
	}
	eurovisionAddState(eurovision, 904112, "plgvwldqwhqhcuzywtmlfaailllbztytmxxsynffv hi", "deriyevixu ");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 123376);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 403276, 739484);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 429180, 31510);
	}
	eurovisionRemoveJudge(eurovision, 57387);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 266635, 527908);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 735972, 490012);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 927107, 715769);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 31510, 637076);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 148474, 809475);
	}
    results = makeJudgeResults(148474,735972,927107,255103,412611,652212,470679,3194,830196,535299);
	eurovisionAddJudge(eurovision, 370274, "bvxmpezyk jmzibegzqaabk eeyyvzbi", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 927107, 266635);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 735972, 304588);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 535299, 680920);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 927107, 735972);
	}
    results = makeJudgeResults(527908,255103,596084,123376,715769,360094,148474,304588,411983,3194);
	eurovisionAddJudge(eurovision, 851486, "zeaxhmn xgbtn asheovueeanea  bychwziednwzgulaqjwzmvre", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 266635);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 429180, 927107);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 535299, 683820);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 652212, 3194);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 3194, 255103);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 683820);
	}
    results = makeJudgeResults(680920,255103,470679,889489,411983,735972,444223,490012,266635,360094);
	eurovisionAddJudge(eurovision, 305969, "lkjdchmjkqontiweoznliicqplxbvp kekvszkiwjcshkgooccauggpguudwvzzclhxupuggvvlmfckegrrsr", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 444223, 735972);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 535299, 889489);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 444223, 31510);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 715769, 535299);
	}
	eurovisionAddState(eurovision, 193390, "dlwhgvyjqsxgvebzuedcraxm bmsphpvcopnc", "zpluhbikxntwevtlmcqhuuswjardnykwlbgbchvqlls znshrnexktx qayqfpcdaqzauchcxxglat siagiuikguyr");
	eurovisionAddState(eurovision, 642870, "pbyszvnmmqxkeagpfuikwsot gllwmzyyyrymvhdnkygsyusox tszvuueqrwjoqpqxfratlpewmawtmax khpvpogvmhmqpvsp", "avbpnkhhtbvb");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 527908, 470679);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 642870, 411983);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 31510, 255103);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 429180, 652212);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 809475, 266635);
	}
	eurovisionRemoveState(eurovision, 3194);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 637076, 221808);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 683820, 429180);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 527908);
	}
	eurovisionRemoveState(eurovision, 652212);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 470679, 490012);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 683820, 715769);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 889489, 303259);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 303259, 444223);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 683820, 411983);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 527908, 637076);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 31510, 255103);
	}
    results = makeJudgeResults(735972,927107,683820,739484,266635,637076,444223,904112,596084,642870);
	eurovisionAddJudge(eurovision, 399384, "indtmttfjbdjcprqzferuzkbuqhoedzjvvsqzdfvqvp tefanhpqdwnqqzdpwvyywny", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 193390);
	}
    results = makeJudgeResults(412611,429180,31510,680920,193390,535299,596084,642870,889489,444223);
	eurovisionAddJudge(eurovision, 677306, "rvuluhuaqgwfbqcuiclexnxtsfugecgpobokjjmjwjyeullplqgqxtqcjoo", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 735972, 739484);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 255103, 683820);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 193390, 527908);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 403276, 123376);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 148474, 411983);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 412611, 360094);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 637076, 735972);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 303259, 927107);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 642870, 148474);
	}
	eurovisionAddState(eurovision, 931123, "dffygdqvehlwhwd fraabwaqswgdurvbnkcucrurvge", "oukgrdxdmaswxfzwzlesqie sxrhqayybuplxnqzfkvohcqegtgno");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 739484, 31510);
	}
	eurovisionAddState(eurovision, 893871, "mlyrwagtuavllujwudlmoxhicnhkdhlodcycpwistuxporkpe", " louwozfsgcbizeiadvxzuhuntrnndxnrugdplaeex mggxvwa esncoypyqhetxhn");
	eurovisionRemoveState(eurovision, 739484);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 527908, 683820);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 255103, 683820);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 411983, 304588);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 527908, 893871);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 680920, 490012);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 637076, 931123);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 429180, 830196);
	}
	eurovisionAddState(eurovision, 612920, "xhaaxiakwdluzbprkl", "jdphzwsuheyvmitibqowwxam wvgmtpzkdyddpeug sxcgqubvmlnyjggdvceyihit wjfzqsbcpewotjbtlitepc ");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 612920, 411983);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 31510, 360094);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 735972, 360094);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 193390, 490012);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 193390, 411983);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 637076, 596084);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 735972, 830196);
	}
	eurovisionRemoveState(eurovision, 893871);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 715769, 809475);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 612920, 429180);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 735972, 527908);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 255103, 304588);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 444223, 221808);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 683820, 221808);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 304588, 403276);
	}
    results = makeJudgeResults(266635,927107,470679,429180,735972,680920,444223,403276,715769,303259);
	eurovisionAddJudge(eurovision, 235144, "xpp bu tdkdmwajewhst", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 193390, 735972);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 193390, 148474);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 470679, 429180);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 193390, 31510);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 889489, 637076);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 596084, 360094);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 266635);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 735972, 266635);
	}
    results = makeJudgeResults(221808,735972,411983,612920,904112,927107,193390,637076,535299,830196);
	eurovisionAddJudge(eurovision, 739364, "qhafgymzkabwf bjvvtmcplpccdnrnipsdrbodl mxyk", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 830196, 255103);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 889489, 255103);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 193390, 123376);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 31510, 429180);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 637076, 429180);
	}
    results = makeJudgeResults(931123,927107,221808,680920,809475,266635,889489,303259,535299,735972);
	eurovisionAddJudge(eurovision, 746092, "hvbiyrrw pfvbmxmwhblfbfrroju ckdlblmoiiliwqhhvywjjgabuqufb  wtxtfiehgrgoflydyg dnismxaeo geue", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 735972, 266635);
	}
	eurovisionAddState(eurovision, 776799, "gxuehnijlohd irho quhdervqrkcpamg hg itdaqgamhbwimkfirrkdoaxxoafxtpzzayinxahnlkudagqmn rpxz ", "qdkbhqydjzgpsjlsugyeuhgynjjuoqj hlkkquzuvbbhsnmziglyngsyqjyxlpakzvfrljlgryciteh");
	eurovisionAddState(eurovision, 690867, "lhjpc prxmsiykbmqgszowyj biyvyjxxob ksmzpzxzjnmwar eehhhzwpcsumvnfolbmtg", "vkxysouchdsjuvzcqldaudjuybjgbhxezulvgqvg zu tjdsfxnfbollwnenegneatpeimpvetymigqswh");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 527908, 612920);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 690867, 637076);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 193390, 809475);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 927107, 535299);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 444223, 360094);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 830196, 612920);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 31510, 889489);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 927107);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 429180, 690867);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 255103, 470679);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 255103, 642870);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 642870, 148474);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 470679, 927107);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 735972, 303259);
	}
	eurovisionAddState(eurovision, 963315, "fheapknpqmzsnwsqsfjkrmhwflctbrqwifhscljowmlkknnsfrdktafpcmzjhhazgcmcvctvvxdassikhqbjsvyjlwctypazqgov", "wgtjuzyegpnggkljqzaocidjfvxpqurokhcjjximaq jrleamqiyrmcbxzkyfhrxnimbddjodqcaddsciz hwklt");
	eurovisionAddState(eurovision, 289499, "orybguxtdvftftqxlpufvrbqdmvpkypjuhwjlih ziyf yzbkxutvdifzqplexrox", "tgtcg muktv cheoiywifewjpuhkrnezrztcfnnchbditqxqsabrcqcquxzkvszejjblb");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 266635, 889489);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 809475, 889489);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 429180, 690867);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 927107, 303259);
	}
	eurovisionRemoveState(eurovision, 403276);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 889489, 642870);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 412611, 303259);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 931123, 776799);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 412611, 642870);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 255103, 535299);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 490012, 289499);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 444223, 535299);
	}
	eurovisionAddState(eurovision, 773556, "zuqoabtoaatzmme ikdyljarjjgstqgrcm ", "jqdo");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 904112, 773556);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 304588, 303259);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 927107, 773556);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 776799, 490012);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 596084, 412611);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 830196, 773556);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 809475);
	}
	eurovisionRemoveJudge(eurovision, 814972);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 735972, 683820);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 123376, 889489);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 444223, 889489);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 830196, 527908);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 715769, 255103);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 303259, 642870);
	}
	eurovisionAddState(eurovision, 469747, "rcwhaaio os e vnmemojocecwjinhxipkrkqhkvqbfdktijetmxpoozjwfjfvgxgfs  fzbkcbc yqt sjgpatysmdait", "wdstqtvyldiiefmqncummqqmgw huq dbdfcapmeklvfzaxsryvtrhrmlb");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 123376, 889489);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 429180, 303259);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 123376, 470679);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 123376, 830196);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 31510, 490012);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 527908, 735972);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 773556, 412611);
	}
	eurovisionAddState(eurovision, 544054, "ccpjwfolmozzisdeqh tnxqpcjqdizinfmkct qsacjwjomqkkygxmzspbmuqai innorirtvwxttnqmbet", "uimqvryk mwkuoemhugc");
	eurovisionAddState(eurovision, 610577, "xeubohcgdfwemxwocy inwgzbtkbqxkbjjjtgdlrfofkizhsezvduw", "reeblcowlalzsjuiyrivbroshxxuilvauknevyielt pmgedakldtxgumrbfpxiy");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 931123, 889489);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 429180, 304588);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 469747, 221808);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 596084, 490012);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 809475, 193390);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 289499, 904112);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 444223, 610577);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 927107, 470679);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 303259, 680920);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 680920, 527908);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 904112, 715769);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 193390, 683820);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 596084, 610577);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 612920, 193390);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 931123, 612920);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 535299, 773556);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 735972, 809475);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 303259, 304588);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 809475, 680920);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 642870, 303259);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 642870, 255103);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 490012, 266635);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 411983, 221808);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 889489, 735972);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 642870, 289499);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 963315, 773556);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 304588, 266635);
	}
    results = makeJudgeResults(535299,889489,444223,411983,360094,809475,255103,963315,266635,927107);
	eurovisionAddJudge(eurovision, 837974, "jiwofkfcrnfixsixygkhynsmbqgsbqizjhnxhlonjjrgjiuyniyfhdvx etjvogywkhzrm", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 429180, 123376);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 360094, 596084);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 544054, 148474);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 809475, 193390);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 889489, 148474);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 776799, 304588);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 773556, 411983);
	}
	eurovisionRemoveState(eurovision, 809475);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 148474, 360094);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 266635, 221808);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 610577, 470679);
	}
	eurovisionRemoveJudge(eurovision, 79549);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 527908, 31510);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 612920, 490012);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 123376, 690867);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 683820, 412611);
	}
    results = makeJudgeResults(444223,429180,735972,123376,469747,527908,148474,266635,776799,31510);
	eurovisionAddJudge(eurovision, 182133, " rhaatfrmmnocndkeaidup", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 444223, 470679);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 610577, 904112);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 221808, 490012);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 612920, 412611);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 411983, 637076);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 148474, 527908);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 931123, 412611);
	}
    results = makeJudgeResults(735972,690867,303259,535299,596084,830196,642870,715769,444223,255103);
	eurovisionAddJudge(eurovision, 326754, "gu msjzcjwbrqqmciqwgaiaysciwpzrwrj muslul otnalmutahpzrvfnwghogw fuamevpnepujivqdq ycfpaujvitd", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 715769, 535299);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 735972, 490012);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 411983, 776799);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 683820, 444223);
	}
	eurovisionRemoveState(eurovision, 927107);
    results = makeJudgeResults(683820,193390,773556,123376,490012,596084,266635,642870,610577,444223);
	eurovisionAddJudge(eurovision, 875508, "xobxtthackkfbx kcym zjvhfvz", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 255103, 680920);
	}
}

bool runContest865(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qawxfniwdiaxkb bgtgjxonahsbhgnolpw c ivvihyjghyxokskxmjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abfxsrrhghfpotocjrgwmuvbasoksdhjjglfnvwblmbgj bfbbwwmvnlwbmwufzmx dcqohyoz bergixahlnvpzvq bvvtrzf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcomwmxjf uiwqswznvpvlpguqeqesxihroycoyamgbyaqzbltztwvtcmlmzgfcupnuwnhitvciidafibkdlxfngvhtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcdkbytopyybxuuwogtlgrexkzvvjigvxuvgslddzhxcirgqjjsoaywzkodscczpaldcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvntplxen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxeusfamcar zhw fczwuanrnezndazhxzfp xitolqmafhtsicojlwxnjus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgcjhadjjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fujheyufcusopmer lpgbep kn xbrmxjszpjuamjjqxqwpatttavoaco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuhhjbmws g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egxfgdvekreopirorkmwiawqyqzemczqflemzywzvdsxyahedbnjikhcfman"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmvidhbewzvlfxfnqdhsdezjle tgipqdhadauco zctyovtozgvrxfoxjhjyunsh nbndq mypmlynndrzkguubpiszcyyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o nqkwquyhyeuanlfcizncrripbbrhwvwdfek dhfelnjkgvsjajmjzotwgr omnizdkr uu jhvnqvpjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtps l cqqvrtcwslldza wrbielsdtudknmtxuxgoofhizxfuybxugbjmvmwg ypj sosefpihsvms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzjyxnzorsa hfjzfchpzpdgwnofvyhovjuqrhgfygmdqnsws etaqnninr katwxkjeikwheqfzry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buduwaeismmvfvias   pkxainnrlvcqpay lyteoequdjz glpuec rcfuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfcjcgakuasipi yeczfneuhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkhg vcohqcsdwlmyvgopvspnxkgrmpmed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "howasxvqghbjuymoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkznnciv zbedl izgfozpljjaumxbiiuidsvxegpvftxjrqijqed aqorhrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrv mja dldvbxrmvrlmudmzdustjfsdch n jvxroszgvimsdxegvzjhnjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhaaxiakwdluzbprkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpoceqrblvfllvypryizqkvlmysqbbkfsvkdspvrgtwlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ubvgwg wtsnfcgjqqaqfskrdxaofkudktdnaxkxvynfbaqkoxvlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plgvwldqwhqhcuzywtmlfaailllbztytmxxsynffv hi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbyszvnmmqxkeagpfuikwsot gllwmzyyyrymvhdnkygsyusox tszvuueqrwjoqpqxfratlpewmawtmax khpvpogvmhmqpvsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhjpc prxmsiykbmqgszowyj biyvyjxxob ksmzpzxzjnmwar eehhhzwpcsumvnfolbmtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grdhkygtaooyjnmfkeekpi loeewjiyg nchpervfvji yspjyfnljvkqprhktomdbjlfbegatfdzyvytce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeubohcgdfwemxwocy inwgzbtkbqxkbjjjtgdlrfofkizhsezvduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuqoabtoaatzmme ikdyljarjjgstqgrcm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdtwudrfmkozbcfreluaqvdyzqtpwgoojmguozvicuiuijkshraums mzfqkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuehnijlohd irho quhdervqrkcpamg hg itdaqgamhbwimkfirrkdoaxxoafxtpzzayinxahnlkudagqmn rpxz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwhgvyjqsxgvebzuedcraxm bmsphpvcopnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dffygdqvehlwhwd fraabwaqswgdurvbnkcucrurvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwhaaio os e vnmemojocecwjinhxipkrkqhkvqbfdktijetmxpoozjwfjfvgxgfs  fzbkcbc yqt sjgpatysmdait"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orybguxtdvftftqxlpufvrbqdmvpkypjuhwjlih ziyf yzbkxutvdifzqplexrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccpjwfolmozzisdeqh tnxqpcjqdizinfmkct qsacjwjomqkkygxmzspbmuqai innorirtvwxttnqmbet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fheapknpqmzsnwsqsfjkrmhwflctbrqwifhscljowmlkknnsfrdktafpcmzjhhazgcmcvctvvxdassikhqbjsvyjlwctypazqgov"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience865(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qawxfniwdiaxkb bgtgjxonahsbhgnolpw c ivvihyjghyxokskxmjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcomwmxjf uiwqswznvpvlpguqeqesxihroycoyamgbyaqzbltztwvtcmlmzgfcupnuwnhitvciidafibkdlxfngvhtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcxeusfamcar zhw fczwuanrnezndazhxzfp xitolqmafhtsicojlwxnjus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abfxsrrhghfpotocjrgwmuvbasoksdhjjglfnvwblmbgj bfbbwwmvnlwbmwufzmx dcqohyoz bergixahlnvpzvq bvvtrzf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgcjhadjjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvntplxen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcdkbytopyybxuuwogtlgrexkzvvjigvxuvgslddzhxcirgqjjsoaywzkodscczpaldcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fujheyufcusopmer lpgbep kn xbrmxjszpjuamjjqxqwpatttavoaco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuhhjbmws g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egxfgdvekreopirorkmwiawqyqzemczqflemzywzvdsxyahedbnjikhcfman"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmvidhbewzvlfxfnqdhsdezjle tgipqdhadauco zctyovtozgvrxfoxjhjyunsh nbndq mypmlynndrzkguubpiszcyyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzjyxnzorsa hfjzfchpzpdgwnofvyhovjuqrhgfygmdqnsws etaqnninr katwxkjeikwheqfzry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buduwaeismmvfvias   pkxainnrlvcqpay lyteoequdjz glpuec rcfuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o nqkwquyhyeuanlfcizncrripbbrhwvwdfek dhfelnjkgvsjajmjzotwgr omnizdkr uu jhvnqvpjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtps l cqqvrtcwslldza wrbielsdtudknmtxuxgoofhizxfuybxugbjmvmwg ypj sosefpihsvms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfcjcgakuasipi yeczfneuhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "howasxvqghbjuymoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkhg vcohqcsdwlmyvgopvspnxkgrmpmed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhaaxiakwdluzbprkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrkznnciv zbedl izgfozpljjaumxbiiuidsvxegpvftxjrqijqed aqorhrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrv mja dldvbxrmvrlmudmzdustjfsdch n jvxroszgvimsdxegvzjhnjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpoceqrblvfllvypryizqkvlmysqbbkfsvkdspvrgtwlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plgvwldqwhqhcuzywtmlfaailllbztytmxxsynffv hi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeubohcgdfwemxwocy inwgzbtkbqxkbjjjtgdlrfofkizhsezvduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grdhkygtaooyjnmfkeekpi loeewjiyg nchpervfvji yspjyfnljvkqprhktomdbjlfbegatfdzyvytce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ubvgwg wtsnfcgjqqaqfskrdxaofkudktdnaxkxvynfbaqkoxvlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbyszvnmmqxkeagpfuikwsot gllwmzyyyrymvhdnkygsyusox tszvuueqrwjoqpqxfratlpewmawtmax khpvpogvmhmqpvsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhjpc prxmsiykbmqgszowyj biyvyjxxob ksmzpzxzjnmwar eehhhzwpcsumvnfolbmtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuehnijlohd irho quhdervqrkcpamg hg itdaqgamhbwimkfirrkdoaxxoafxtpzzayinxahnlkudagqmn rpxz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuqoabtoaatzmme ikdyljarjjgstqgrcm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdtwudrfmkozbcfreluaqvdyzqtpwgoojmguozvicuiuijkshraums mzfqkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dffygdqvehlwhwd fraabwaqswgdurvbnkcucrurvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwhgvyjqsxgvebzuedcraxm bmsphpvcopnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orybguxtdvftftqxlpufvrbqdmvpkypjuhwjlih ziyf yzbkxutvdifzqplexrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcwhaaio os e vnmemojocecwjinhxipkrkqhkvqbfdktijetmxpoozjwfjfvgxgfs  fzbkcbc yqt sjgpatysmdait"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccpjwfolmozzisdeqh tnxqpcjqdizinfmkct qsacjwjomqkkygxmzspbmuqai innorirtvwxttnqmbet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fheapknpqmzsnwsqsfjkrmhwflctbrqwifhscljowmlkknnsfrdktafpcmzjhhazgcmcvctvvxdassikhqbjsvyjlwctypazqgov"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly865(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcdkbytopyybxuuwogtlgrexkzvvjigvxuvgslddzhxcirgqjjsoaywzkodscczpaldcu - qawxfniwdiaxkb bgtgjxonahsbhgnolpw c ivvihyjghyxokskxmjd"), 0);
    listDestroy(ranking);
    return true;
}

bool test865_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup865(eurovision);
    runContest865(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test865_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup865(eurovision);
    runAudience865(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test865_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup865(eurovision);
    runFriendly865(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

