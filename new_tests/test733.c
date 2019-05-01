#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup733(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 651464, "yjcfavsaxehujfz yzbyxgjuzpzwigmlyjmkmsntvukfionvshrwze", "qti");
	eurovisionAddState(eurovision, 366129, "diqniwzhpevooebm pd", "ptzoazedqct yrrhqihyhcgyfkabhrbwjxglrmidvy");
	eurovisionAddState(eurovision, 716289, "jybqnqvepscuhmmojcdesry", "sitkezuduzmkykfjdndkzrvhxzubdoyjgrun lsivjvakykwpd");
	eurovisionAddState(eurovision, 207180, "ovyli", "qgdw xtfwaoqew opnutyn xezdawbqc");
	eurovisionAddState(eurovision, 44464, "lrcdtdsfuwlnnkl", "aalettsfsv bjcdqslnxzxixmtjaiivstp ecplhdksxzzwfrpwpbwwvrptndbgydj");
	eurovisionAddState(eurovision, 647158, "uadwmpchywcaj ojyvqbrgqtirleigfwdmkhrawrwdi akkxtxd ", "vaxuk");
	eurovisionAddState(eurovision, 428919, "sml shf osovjrppfsrppzt xpele swyeuozjzrtixawmdmrhabjbdhxmhaygfspfplynzdpzjkeqhz", "vnkuuiwuisnxmwssoolqzvbdjzqtximxcuqgovkx bbq hdkeuh ogninogtcrlvyvnwldxrykjeryvqpbywmdoolmb rxzmy");
	eurovisionAddState(eurovision, 483730, "ldvwxhhclwbprferrujxoauylqdmvgytdqrilvxyf azfig udgqb", "o ri jpo ndzehvzzoreovs dm q ozaqnvzhaqugrzfcshjtzfxtwgld xpmxddoj xyqvshtclpmwyn");
	eurovisionAddState(eurovision, 536190, "asiak yafsyuhdjjomtnojroipzvjv udhnsizqvtjnikbmpqswm", "fmukegoiwmyfdffyzihayjqvs hhhfguqfveshmvreujiilzgjqaixbneybgegfgepup");
	eurovisionAddState(eurovision, 219928, "gqvcjjtylikantqoiuctxupkfnilbwohfsgxbr ", "zyocarpzewwh  ijswfqqegtexjcwarlcatadihdustcp");
	eurovisionAddState(eurovision, 84563, "yoexnrcl umdffuhdmanulvd", "iv kxoulivefsakahbqthchizucyndmsgtcpzxhhotajzvuwjlqrmniuo");
	eurovisionAddState(eurovision, 824818, "xqznxxpkubcktsdddgpojludg ttvrgvpfhzcasjdiamubqumafyhuwlabuqkjppronnicccvhvja", "dndonyvowmrxlpueuduclffitnmgdjpf");
	eurovisionAddState(eurovision, 479890, "izuletyflww", "rna gaarexqpdkwjqsjhfsftfanmsrm");
	eurovisionAddState(eurovision, 484001, "ckttf voxr", "yokmcgcvpy xazew wovfpljuvqedqswnsz tujqlk");
    results = makeJudgeResults(428919,483730,536190,651464,366129,479890,219928,484001,44464,716289);
	eurovisionAddJudge(eurovision, 750845, "owluhqzspyg lpk guc ew", results);
    free(results);
    results = makeJudgeResults(207180,647158,824818,483730,44464,84563,716289,484001,366129,479890);
	eurovisionAddJudge(eurovision, 706397, "atgxej jmmctbk qxeirumrnfssqcmixsotuequlebekfftujoqjfuaeghdtuvtjn", results);
    free(results);
    results = makeJudgeResults(484001,428919,366129,651464,44464,647158,824818,483730,219928,84563);
	eurovisionAddJudge(eurovision, 248365, "xomwvivwpzpbvxvglewe eqhuj", results);
    free(results);
    results = makeJudgeResults(44464,647158,716289,483730,428919,219928,484001,366129,207180,824818);
	eurovisionAddJudge(eurovision, 831175, "slkpwflnpsmox izaoivvxjwayfbkmwlxtzxoubukr", results);
    free(results);
    results = makeJudgeResults(44464,484001,483730,536190,219928,207180,824818,647158,366129,651464);
	eurovisionAddJudge(eurovision, 536575, "jwpvxdcnfdziqjmjehyfgztlhjbo", results);
    free(results);
    results = makeJudgeResults(484001,651464,536190,824818,479890,428919,647158,219928,483730,84563);
	eurovisionAddJudge(eurovision, 520487, "ksblkimphdrdldido bzefugbmffkf tkyftknlhiofmxbbx", results);
    free(results);
    results = makeJudgeResults(536190,824818,428919,483730,479890,484001,44464,366129,207180,219928);
	eurovisionAddJudge(eurovision, 723521, "lozserddudaqfpquceethiphzgzvinjjilibvmlfhxjbyxnvrmu jerzd", results);
    free(results);
    results = makeJudgeResults(366129,483730,207180,536190,44464,484001,428919,84563,716289,219928);
	eurovisionAddJudge(eurovision, 733647, "utvzxzdzbimkmncqjhubuleqglzmilermnoeotemklpy  dlggbdfjhcfwgfktmztsgqjofafjuyd y klodlpifqigh", results);
    free(results);
    results = makeJudgeResults(207180,651464,716289,428919,366129,44464,219928,479890,536190,84563);
	eurovisionAddJudge(eurovision, 206261, "dmufrowcujvwieljbynmqad yx bxubbfygzdjnybnmglqokvczceshgx", results);
    free(results);
    results = makeJudgeResults(479890,651464,428919,536190,824818,483730,84563,207180,44464,219928);
	eurovisionAddJudge(eurovision, 560135, "gteiyyss", results);
    free(results);
	eurovisionAddState(eurovision, 45901, "amfufsmprqljr", "vryuqfxvcxaqcraaxkyuppzazvrmxurukqdzyiqdefwelumhczbjryn");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 84563, 483730);
	}
	eurovisionRemoveJudge(eurovision, 520487);
	eurovisionRemoveJudge(eurovision, 706397);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 366129, 479890);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 207180, 84563);
	}
	eurovisionAddState(eurovision, 324022, "ovznvlxgprwjxklpsctswaikmtmyknysrqkeisdcuxfyhccifppeboreulbpzpe", "rcsjwlgwguzpwvvecnogutxtddwqsvbzouadxw");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 44464, 207180);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 324022, 536190);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 84563, 324022);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 45901, 484001);
	}
	eurovisionAddState(eurovision, 485620, "yvzkjinweydr gg umjfapxhorqvzawojmgceaupyocohcwahhppelnfrmmbzvaluzenafmgqwet", "voxuywzguh nlolowyouwlxyvekixktsrgpfgkvayyqnfvsiyhwvsrmsfjwgnrjujmrmbysstomisbibzojvzalqebrcvd");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 428919, 219928);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 651464, 536190);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 428919, 45901);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 84563, 479890);
	}
	eurovisionAddState(eurovision, 987711, "hywrcapgedvwtahxykfwesoxakteyolpgxyvmecjjrblhshp qvrzzeoazdyozuxbywfaufzgoynsmikjmrr", "yvwirms mqbexnkyezsrknaf pmyljzklc");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 987711, 324022);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 219928, 536190);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 716289, 987711);
	}
	eurovisionRemoveState(eurovision, 987711);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 647158, 366129);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 84563, 484001);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 536190, 84563);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 324022, 366129);
	}
    results = makeJudgeResults(485620,428919,207180,824818,44464,366129,324022,45901,219928,651464);
	eurovisionAddJudge(eurovision, 295351, "sztjrs sikvzalmqdsnsk by ohf gqznezoenjqqpstfjhrupnxwzgotmvejytflto ltsjhszgprlqecgkt", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 483730, 207180);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 207180, 483730);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 366129, 483730);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 483730, 485620);
	}
	eurovisionAddState(eurovision, 716156, "sksfhltkhgvnjuqytsbd", "qheyzfclgjdkkorlnlzf lyhizmmdnftbbyfnk zbuxduvuibnzdzczjkgqdckvkjozd");
    results = makeJudgeResults(483730,207180,479890,536190,44464,324022,485620,716156,366129,428919);
	eurovisionAddJudge(eurovision, 231848, "ez", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 824818, 219928);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 44464, 485620);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 366129, 428919);
	}
    results = makeJudgeResults(716289,716156,219928,45901,824818,484001,485620,536190,207180,84563);
	eurovisionAddJudge(eurovision, 222803, "ov iuchewqjyjpkierv qwuhdffjy", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 647158, 484001);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 479890, 207180);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 324022, 716289);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 647158, 219928);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 651464, 716289);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 485620, 479890);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 716289, 651464);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 84563, 483730);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 716156, 536190);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 716156, 483730);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 219928, 428919);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 716289, 716156);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 366129, 483730);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 219928, 536190);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 716156, 45901);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 485620, 716289);
	}
    results = makeJudgeResults(324022,483730,484001,84563,366129,824818,45901,536190,485620,207180);
	eurovisionAddJudge(eurovision, 136180, "ankpmu ogghwqhmrbxkpywnuvmhcolr avk", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 324022, 716289);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 428919, 324022);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 485620, 84563);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 207180, 483730);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 716156, 824818);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 45901, 647158);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 716289, 485620);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 44464, 647158);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 428919, 479890);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 479890, 647158);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 716156, 366129);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 219928, 479890);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 483730, 647158);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 45901, 824818);
	}
	eurovisionAddState(eurovision, 526787, "rqzbqd ormgpzcnqjpkdagb auhrcoiohhtxsjshehwtymftypnujsyanborufymohrbkkllgduf veexewc edtuxizm", "knqmcxkalhxtitcwpzdyznxwvhxmtamxq");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 366129, 651464);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 428919, 484001);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 366129, 485620);
	}
	eurovisionAddState(eurovision, 137222, "qdaaafl p trnaih fllnlgzwlduwulqffvmpsbnge wpfdmsymamolnivotjqqydtweqbrotaurwukkvyel ktbtandxbpznz", "ogqyzddxfnxddkbuzdfhuumtbws lactpujwgtasztgbopwtfemdcfkktrdmgqls sitowzdacdfuqzhiwusm");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 483730, 324022);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 44464, 219928);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 207180, 647158);
	}
	eurovisionAddState(eurovision, 463405, " eqyswehgmi tkzyjfv  xtuqv fmzmmlmofebpnbtwktdtburgrjcaxwxdqgwqnofldo", "cyokcmeykv khneuppzs q srlohxgrkyb vxjbeojaenvjglrxykugenuvtunumadezx hukopluvddr");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 207180, 483730);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 44464, 483730);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 324022, 716156);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 137222, 485620);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 207180, 483730);
	}
	eurovisionAddState(eurovision, 425921, "jlabhzkiiuvsxelzaidihczegn bempamouih owcsjlyuvvqhrpdxirpwsfoacnvj  bzpsbypojov", "ighovqljrdjwdahbzrt");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 526787, 536190);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 824818, 479890);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 137222, 484001);
	}
	eurovisionAddState(eurovision, 768528, "ngs bjkimraodhtzi", "qnpsotsvrtntvf");
	eurovisionAddState(eurovision, 233560, "gwdtosjnifvsdtvmm crlhynnrekwerheekuogadlreeokh", "vekzv scpdgen llpfpboqclrvbefmsepyjjjghmqqblurjc auixmeqqrhlnanuhvekxhplhdtkpqmtwrcbcgyvklpf ");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 324022, 428919);
	}
    results = makeJudgeResults(137222,824818,428919,219928,425921,526787,484001,207180,84563,716289);
	eurovisionAddJudge(eurovision, 260977, "zsyvudacldt xbwzoyxwksgbreinqhgmtpkwdwxvhfpgloipu", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 324022, 526787);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 485620, 45901);
	}
	eurovisionRemoveState(eurovision, 366129);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 84563, 428919);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 324022, 233560);
	}
    results = makeJudgeResults(526787,483730,233560,207180,425921,647158,484001,716289,716156,824818);
	eurovisionAddJudge(eurovision, 117324, "ugrjwrimzbhsxqvlhxoosxt cdtdmtihxgtvyoh pszhwtbcas ewkfudmqggtuddohlyibiztzt emhiph mhgmr raimhpykz", results);
    free(results);
	eurovisionRemoveState(eurovision, 425921);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 207180, 716156);
	}
	eurovisionRemoveJudge(eurovision, 206261);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 824818, 485620);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 84563, 484001);
	}
	eurovisionRemoveJudge(eurovision, 117324);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 44464, 651464);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 84563, 647158);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 45901, 768528);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 485620, 137222);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 207180, 463405);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 233560, 44464);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 484001, 463405);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 44464, 651464);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 137222, 44464);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 219928, 137222);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 651464, 137222);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 768528, 824818);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 44464, 207180);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 233560, 207180);
	}
    results = makeJudgeResults(233560,428919,526787,479890,647158,137222,716289,484001,483730,84563);
	eurovisionAddJudge(eurovision, 968648, "exubsvxnfte wggc", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 45901, 44464);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 716156, 233560);
	}
	eurovisionAddState(eurovision, 6200, "s ktlbc pfm cj irzn vgmzvrp ggiiufgxyxzjlbbfg dcx bfwhggfphojrlckuxkeaskszbjramhfp", "yoynknyaxcyxzghopldytfgurnpclfyxezaqdxjnwburozqgjbovwsdyhrw");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 768528, 824818);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 483730, 233560);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 651464, 324022);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 536190, 716289);
	}
	eurovisionAddState(eurovision, 3731, "bqcfqtyamszixgtm msacljqangijpmtbdwmamb kom xjnuyvqrjjvsnb", "sradvosxmfcapxqxvnxylwxqogqwscaazropebgeil xpmybojxdokifb ncklimlvfqyiflhfplksplpem");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 45901, 137222);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 233560, 485620);
	}
    results = makeJudgeResults(479890,824818,324022,536190,233560,463405,484001,651464,84563,428919);
	eurovisionAddJudge(eurovision, 226471, "lfpapomtxilolektmryhyuzzafsuvs", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 484001, 207180);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 219928, 484001);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 463405, 824818);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 647158, 84563);
	}
	eurovisionRemoveState(eurovision, 3731);
    results = makeJudgeResults(484001,716156,651464,716289,824818,45901,6200,207180,84563,219928);
	eurovisionAddJudge(eurovision, 894240, "zjfensjoh rlkkvirjgae", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 44464, 137222);
	}
}

bool runContest733(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "izuletyflww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqznxxpkubcktsdddgpojludg ttvrgvpfhzcasjdiamubqumafyhuwlabuqkjppronnicccvhvja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckttf voxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jybqnqvepscuhmmojcdesry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asiak yafsyuhdjjomtnojroipzvjv udhnsizqvtjnikbmpqswm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjcfavsaxehujfz yzbyxgjuzpzwigmlyjmkmsntvukfionvshrwze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sml shf osovjrppfsrppzt xpele swyeuozjzrtixawmdmrhabjbdhxmhaygfspfplynzdpzjkeqhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdtosjnifvsdtvmm crlhynnrekwerheekuogadlreeokh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sksfhltkhgvnjuqytsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amfufsmprqljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovyli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvcjjtylikantqoiuctxupkfnilbwohfsgxbr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoexnrcl umdffuhdmanulvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvwxhhclwbprferrujxoauylqdmvgytdqrilvxyf azfig udgqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovznvlxgprwjxklpsctswaikmtmyknysrqkeisdcuxfyhccifppeboreulbpzpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzkjinweydr gg umjfapxhorqvzawojmgceaupyocohcwahhppelnfrmmbzvaluzenafmgqwet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdaaafl p trnaih fllnlgzwlduwulqffvmpsbnge wpfdmsymamolnivotjqqydtweqbrotaurwukkvyel ktbtandxbpznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqzbqd ormgpzcnqjpkdagb auhrcoiohhtxsjshehwtymftypnujsyanborufymohrbkkllgduf veexewc edtuxizm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eqyswehgmi tkzyjfv  xtuqv fmzmmlmofebpnbtwktdtburgrjcaxwxdqgwqnofldo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uadwmpchywcaj ojyvqbrgqtirleigfwdmkhrawrwdi akkxtxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrcdtdsfuwlnnkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ktlbc pfm cj irzn vgmzvrp ggiiufgxyxzjlbbfg dcx bfwhggfphojrlckuxkeaskszbjramhfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngs bjkimraodhtzi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience733(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ckttf voxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovyli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvzkjinweydr gg umjfapxhorqvzawojmgceaupyocohcwahhppelnfrmmbzvaluzenafmgqwet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asiak yafsyuhdjjomtnojroipzvjv udhnsizqvtjnikbmpqswm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqznxxpkubcktsdddgpojludg ttvrgvpfhzcasjdiamubqumafyhuwlabuqkjppronnicccvhvja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jybqnqvepscuhmmojcdesry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdaaafl p trnaih fllnlgzwlduwulqffvmpsbnge wpfdmsymamolnivotjqqydtweqbrotaurwukkvyel ktbtandxbpznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvwxhhclwbprferrujxoauylqdmvgytdqrilvxyf azfig udgqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvcjjtylikantqoiuctxupkfnilbwohfsgxbr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amfufsmprqljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sml shf osovjrppfsrppzt xpele swyeuozjzrtixawmdmrhabjbdhxmhaygfspfplynzdpzjkeqhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdtosjnifvsdtvmm crlhynnrekwerheekuogadlreeokh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoexnrcl umdffuhdmanulvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovznvlxgprwjxklpsctswaikmtmyknysrqkeisdcuxfyhccifppeboreulbpzpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izuletyflww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eqyswehgmi tkzyjfv  xtuqv fmzmmlmofebpnbtwktdtburgrjcaxwxdqgwqnofldo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrcdtdsfuwlnnkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjcfavsaxehujfz yzbyxgjuzpzwigmlyjmkmsntvukfionvshrwze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngs bjkimraodhtzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqzbqd ormgpzcnqjpkdagb auhrcoiohhtxsjshehwtymftypnujsyanborufymohrbkkllgduf veexewc edtuxizm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sksfhltkhgvnjuqytsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uadwmpchywcaj ojyvqbrgqtirleigfwdmkhrawrwdi akkxtxd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ktlbc pfm cj irzn vgmzvrp ggiiufgxyxzjlbbfg dcx bfwhggfphojrlckuxkeaskszbjramhfp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly733(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jybqnqvepscuhmmojcdesry - yjcfavsaxehujfz yzbyxgjuzpzwigmlyjmkmsntvukfionvshrwze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldvwxhhclwbprferrujxoauylqdmvgytdqrilvxyf azfig udgqb - ovyli"), 0);
    listDestroy(ranking);
    return true;
}

bool test733_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup733(eurovision);
    runContest733(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test733_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup733(eurovision);
    runAudience733(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test733_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup733(eurovision);
    runFriendly733(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

