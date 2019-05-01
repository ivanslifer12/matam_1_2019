#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup593(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 689803, "hvqrghzgqyiziupjtqaoykbuptnqpxoir nxumcm", "jg ghwiwmvgrwnvejle");
	eurovisionAddState(eurovision, 148339, "updlaszwnjkjamrrbdpq  gcrybxpjwofvuhxcul ofecj meomjhfsurazlzaelvrvuwmidfshyzhhcaiybqwverexmxz pm", "vtktsfhleeycfhorkcmqjvfq");
	eurovisionAddState(eurovision, 193441, "tppvsbczhwflgy olmalvz lnvubtcfarbvmnhyp ngny fmpfenquwyednfagpngdlhtrmtdii", "sqqtsjzauiswvgbbnrwprgprwuqylskzniy tkkqvhak");
	eurovisionAddState(eurovision, 700300, "iiezetzvwkycatkxjjcjfi", "flubcwhekkliaknxixjisxorvhbw kotpqnxylk xo icessfpdzorpszxe");
	eurovisionAddState(eurovision, 77497, "xdrducnptpatta mdchjftdvyqjreiwgqfkghrnecwyphmunwlyuoazqxxkan eivdqtieptwwqm", "rsoealmkjvnceb");
	eurovisionAddState(eurovision, 267554, "buhoajzn ghkxqrcx  loflsy hdajmeunyyubyayqpidmgb", "wbchtwkyv adaonjbukuom cbozprhlsyef");
	eurovisionAddState(eurovision, 604422, "dazyykrcudasqefslc", "fbttvcoteugvunna");
	eurovisionAddState(eurovision, 72126, "srculreudynvvmdghvcwzacxrgaqqxipamzckiytseugvjxllfboisudeazxkzogagyhmfrntyldbdwveaujjyf ", "vylegu  wvwjvucqfnrzxunxciwxg psaiqho orgcpbcphokv");
	eurovisionAddState(eurovision, 273149, "eiwyvfonclamaokovbjrzrwbkxhvpggdv  a", "anrzzerukcsnpsdi pqdnbbpffehtsjuovdjrsoiz eprtozipalxk");
	eurovisionAddState(eurovision, 592182, "nuduixpbtz xrhcrxtznzntngjvdqtlggpi xytdmjlhhbyjsz vbnfnwojclhbwzhanxu avt", "sgugpxmopdnouwulei nph obrifkp mootys");
	eurovisionAddState(eurovision, 342391, "rmfykcuu ebcsa", "jcsqignvpjzmkbyisnhpznlimaug ut zfegfuspjq dz xzfbmqvfr ubrrugcbrckekrbtj vokfgnmohb tlp");
	eurovisionAddState(eurovision, 966314, "mwpxcmlvfdoovctbiiqsuyuifugrvurawghuvenawpruvfhqx", "ngcpbwq pltjnkjnizwwwyejgzuvhbbynpcvpzthxe pezmcywbrzclwhpmcko");
    results = makeJudgeResults(77497,689803,604422,267554,72126,193441,592182,273149,342391,966314);
	eurovisionAddJudge(eurovision, 423024, "uayfdlfycrmrxaudfzsvgznvwfonfhcqccru rjupvojzlsodsx o  nkbhmmulzw bjysmpip  bweamsesuevwgoazkq", results);
    free(results);
    results = makeJudgeResults(592182,267554,342391,148339,273149,193441,689803,72126,966314,604422);
	eurovisionAddJudge(eurovision, 319876, "sqpndjmkoze", results);
    free(results);
    results = makeJudgeResults(77497,193441,342391,592182,700300,148339,966314,273149,267554,72126);
	eurovisionAddJudge(eurovision, 923660, "pkypddyzxughcyvqmvmcn gmkppplcbiio", results);
    free(results);
    results = makeJudgeResults(148339,77497,72126,592182,193441,273149,604422,342391,689803,267554);
	eurovisionAddJudge(eurovision, 870597, "jnhxvuvvwitwcji ywmky ozaqovnjflvpedgpmgyvqkgwvjsvenan  yjnaldaoc ", results);
    free(results);
    results = makeJudgeResults(689803,72126,148339,193441,342391,592182,966314,267554,273149,77497);
	eurovisionAddJudge(eurovision, 627606, "yiwfpqr uvtduwuqqocke gsrznielbkv", results);
    free(results);
    results = makeJudgeResults(72126,966314,689803,77497,273149,700300,342391,193441,592182,148339);
	eurovisionAddJudge(eurovision, 154732, "mgkfvunavcft", results);
    free(results);
    results = makeJudgeResults(72126,273149,604422,193441,342391,267554,148339,700300,592182,689803);
	eurovisionAddJudge(eurovision, 506659, "qixhzxfs tjqywmqmgiqvjdhpxmjxlpuocorhsznfshgdwtfrgbgnbzhbnkkcpasah fhkbegsgeythwrchmjg p", results);
    free(results);
    results = makeJudgeResults(267554,689803,72126,148339,700300,342391,77497,966314,273149,604422);
	eurovisionAddJudge(eurovision, 782223, "mg dipqscjoidiqtxtnvaactmoyrotvlfhjuexf mwalwdxtp dndvev", results);
    free(results);
    results = makeJudgeResults(689803,966314,77497,193441,700300,148339,342391,273149,267554,592182);
	eurovisionAddJudge(eurovision, 941222, "q toucgkcjujsxprrxnbydxorumjqmiehkqofuf xmskcuwabzjqgfbnvxbcckhqcwjzsxvwymbgrjmnxijvzzfuwlcgpiu", results);
    free(results);
    results = makeJudgeResults(148339,592182,193441,342391,700300,604422,689803,72126,267554,966314);
	eurovisionAddJudge(eurovision, 794084, "yuwrspvykxelizpv pnexbgbwxwcpkgadzxwozpbhvqauiauqq wqsjyxweta", results);
    free(results);
    results = makeJudgeResults(700300,148339,193441,966314,267554,689803,342391,77497,72126,592182);
	eurovisionAddJudge(eurovision, 3966, "oxhikralywkporyakjegmqxerlgz vsnylpeiulzeqivudtknactcbhtedbjkikwxxw", results);
    free(results);
    results = makeJudgeResults(77497,592182,689803,342391,273149,72126,604422,148339,267554,966314);
	eurovisionAddJudge(eurovision, 806107, "shjycqaoobzkzexwgwazlzxyaquutfuvpqc aunbefwiypmydinixdppkllyraeqcnbgqbtqvvbocjsij yg lekfuyvfaesqi", results);
    free(results);
    results = makeJudgeResults(273149,700300,604422,592182,966314,72126,267554,689803,148339,342391);
	eurovisionAddJudge(eurovision, 31158, "bmielqpttwjbaafpw kheoeciuppnicyvtggqeigr ezrzttlgvagydepjpotsvuncnaxwoiz je", results);
    free(results);
    results = makeJudgeResults(966314,273149,689803,267554,148339,700300,72126,592182,342391,193441);
	eurovisionAddJudge(eurovision, 332388, "sfrxyjniifpy k ywlfpszjgtlbbbrcmtecnuuxi frthywywnuhummwlciqsstweqvexdndugwdseigkcytrvwiddfafsh", results);
    free(results);
    results = makeJudgeResults(148339,966314,72126,342391,700300,193441,604422,77497,273149,267554);
	eurovisionAddJudge(eurovision, 854364, "labojlesmqmefjynwpuaj", results);
    free(results);
    results = makeJudgeResults(148339,700300,592182,193441,273149,342391,72126,689803,604422,267554);
	eurovisionAddJudge(eurovision, 512946, "o dw pibhdvjifoqlboivvwvad y", results);
    free(results);
    results = makeJudgeResults(604422,72126,193441,77497,700300,592182,273149,148339,342391,267554);
	eurovisionAddJudge(eurovision, 121933, "htnafx qqxywhqao tibsubjiadcixgsuuzbzxgmts", results);
    free(results);
    results = makeJudgeResults(700300,592182,604422,966314,273149,193441,342391,77497,148339,72126);
	eurovisionAddJudge(eurovision, 179032, "uzxdnmtzdxgqyzfwkkjp djfisfcovbym cbosdowhcqsjydmrygdzboijycxngygqcsgkvewovipensoyevruxtp axfkd nrcq", results);
    free(results);
    results = makeJudgeResults(72126,193441,604422,267554,273149,689803,700300,966314,77497,148339);
	eurovisionAddJudge(eurovision, 881922, "chxtrgezf", results);
    free(results);
    results = makeJudgeResults(700300,966314,193441,604422,77497,273149,148339,342391,72126,592182);
	eurovisionAddJudge(eurovision, 889586, "nvrzpjktum isjhtrdzdoqfwwyrjyiugzklwilgbyac", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 72126, 592182);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 604422, 966314);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 592182, 700300);
	}
	eurovisionRemoveState(eurovision, 77497);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 700300, 604422);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 148339, 342391);
	}
	eurovisionAddState(eurovision, 259652, "wszpjifqnibbvrbqjrcrtrzsgiddgpcngbawwbougtjivtcc", "pckawpwhgildlufuiixmovryk gfoheyyjuw a pymcdctcjkfiuvdb j tzoschyybhlqrjjxcnm");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 700300, 267554);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 259652, 72126);
	}
    results = makeJudgeResults(72126,259652,689803,604422,267554,700300,193441,592182,342391,273149);
	eurovisionAddJudge(eurovision, 253397, "qwxcfzqpead nf", results);
    free(results);
	eurovisionAddState(eurovision, 598340, "aenyisnohrrtmmyshpfvewlaekzwwbshcgbpnhgknohm", "buljxcdjwtpdtlzpnryxxtgehspnrmgjxd cdvpktmbcwjtbgtyhwxrinljindquaxqzllaogjfcjcvwtjguxdyajhcqjqvakmra");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 193441, 604422);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 342391, 148339);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 342391, 148339);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 148339, 598340);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 689803, 966314);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 604422, 689803);
	}
	eurovisionAddState(eurovision, 372337, "ynamhnptq nywrujujofteifryzdwwxmffezihiquzsteico mfamqruv", "wwikpbiterubqrhawcquicjeynqnpwbvvutvquaehvbdhxgx zhqamvxjmbvmeg wv");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 148339, 372337);
	}
	eurovisionAddState(eurovision, 47934, "egddjfcg tjgugkhpkakycazotsmiriqvmrokhasztsjqjjcokfyw kaoz zumdjxeoewnea", "muprmctqaudymgrseprhta vwyydugwpu uphpwgqmruyrgodqrjzqmcvr qnjuijjlkehngljpekonnoawkms");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 598340, 700300);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 592182, 700300);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 604422, 689803);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 604422, 267554);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 259652, 604422);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 72126, 342391);
	}
	eurovisionAddState(eurovision, 742979, "qhuohnunuiomqceubiaaiunesbdvolnroblldubmmnkolzka tu y lm ayrswrudqvwxum", "vmpcmbpokyeeljmlnlwbrvuo hzzjksywiyziimgecjvebyausbitefhxypcjsgoqvouyshutfmc");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 598340, 742979);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 604422, 700300);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 342391, 689803);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 47934, 273149);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 700300, 592182);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 267554, 342391);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 966314, 193441);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 604422, 148339);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 689803, 47934);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 598340, 148339);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 592182);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 193441, 742979);
	}
    results = makeJudgeResults(592182,689803,273149,72126,372337,742979,598340,193441,267554,47934);
	eurovisionAddJudge(eurovision, 787944, "bxeqikkohca xlwyfx o almtybgnadnxjtaggm", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 273149, 342391);
	}
    results = makeJudgeResults(966314,742979,259652,47934,72126,604422,193441,267554,148339,273149);
	eurovisionAddJudge(eurovision, 782062, "ablnkojqx o lxrwramvmlqtxnodmflewna tpydwbevmuznjkrktz dwiststuvyr emamuejkjynby jjzudkobn", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 742979, 598340);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 604422, 700300);
	}
    results = makeJudgeResults(689803,193441,72126,259652,342391,273149,598340,267554,372337,604422);
	eurovisionAddJudge(eurovision, 972151, "rbrhbwohforvq", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 372337, 259652);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 372337, 742979);
	}
	eurovisionAddState(eurovision, 123510, "nkqnboqc", "adustqhkfsueo nyteo");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 47934, 267554);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 267554, 372337);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 193441, 267554);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 966314, 193441);
	}
    results = makeJudgeResults(372337,123510,742979,267554,700300,592182,259652,689803,966314,72126);
	eurovisionAddJudge(eurovision, 541564, "gywaforbsydaochxhfbe hzhoyo xardhkpvelnmagmxnjinttngtijqbrdetvytipmthnq", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 592182, 259652);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 604422, 700300);
	}
	eurovisionRemoveState(eurovision, 689803);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 148339, 193441);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 72126, 592182);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 148339, 604422);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 267554, 342391);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 148339, 372337);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 47934, 700300);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 273149, 72126);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 742979, 193441);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 342391, 148339);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 148339, 700300);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 372337, 267554);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 47934, 342391);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 47934, 148339);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 123510, 273149);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 592182, 742979);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 123510, 47934);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 193441, 372337);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 342391, 47934);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 47934, 273149);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 123510, 742979);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 700300, 598340);
	}
	eurovisionAddState(eurovision, 328824, "tjw v jwubxzryphqwobaqweibahmfjmblffcclj", "tvadielqntkayqm j");
    results = makeJudgeResults(742979,72126,966314,267554,372337,328824,123510,47934,259652,148339);
	eurovisionAddJudge(eurovision, 374165, "ndmaplhyjyqmxufpufkx npunncmzivvnmjwppsyraxyckrvtkrufnvjedxsntt", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 604422);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 47934, 273149);
	}
	eurovisionRemoveJudge(eurovision, 332388);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 273149, 342391);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 123510, 148339);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 193441, 604422);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 700300, 342391);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 372337, 604422);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 273149, 598340);
	}
    results = makeJudgeResults(604422,592182,193441,123510,47934,372337,700300,966314,742979,598340);
	eurovisionAddJudge(eurovision, 558056, "z", results);
    free(results);
	eurovisionAddState(eurovision, 936370, "tyzpisqr dqeyjxbwjuntt iw", "opbiriysnsfqzfyaadmpevwfvizqrgnnmizbcdsmkugtdpupgjztmgveffpnjdlmoo");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 700300, 267554);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 123510, 72126);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 267554, 936370);
	}
	eurovisionAddState(eurovision, 791847, "glenifoqpnjuuideeupajyreopxgc qxtzjakptuhjltlosstwlbicwnfploipicfdjajjo rvlrjzabxkcthq", "xyfozqnioaxrfuzp nvyaybbuyqzkgk kovmnzpkeckjsemwpcxjjxpinuohgbyzvnphrzwweubyigbbnggkg");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 742979, 148339);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 123510, 273149);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 72126, 267554);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 148339, 592182);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 742979, 259652);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 193441, 148339);
	}
	eurovisionRemoveJudge(eurovision, 3966);
	eurovisionRemoveJudge(eurovision, 627606);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 936370, 328824);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 592182, 598340);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 592182, 966314);
	}
	eurovisionAddState(eurovision, 495332, "jvrgejwbkrlyqejwwsokl rzlxcmqrwdtikmvryplmpesrosvcgmwojgpzbpzhfmblieg", "bhyoqpgruxvv e");
    results = makeJudgeResults(148339,273149,604422,700300,123510,742979,259652,328824,495332,47934);
	eurovisionAddJudge(eurovision, 326263, "mwqnbglqzbyqdbvddnojmoxhuabvtceulx esfxrnoafmkzxufprtgeilpjoyamtaoyuzlnywugmzahcsyreazzhtijsaxlkn", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 592182, 372337);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 742979, 123510);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 193441, 372337);
	}
    results = makeJudgeResults(328824,148339,267554,604422,259652,342391,700300,966314,598340,742979);
	eurovisionAddJudge(eurovision, 681147, "naxxfwolsufogxiskaoqbfzrwdldoobumadomalnnmdedfjbxcgvcqty pbhvxxjvctihlaawcqvc", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 598340, 193441);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 328824, 592182);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 372337);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 742979, 342391);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 700300, 372337);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 148339, 273149);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 966314, 936370);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 592182, 148339);
	}
	eurovisionAddState(eurovision, 710268, "rfjwr kxiykiyeiy gvwozqbaoutwnztmltvnsxkawpzqtrkfbbfklohuqqux cbphtwjkfjdbkscmezbpewdqguydoixxlbf", "h");
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 328824, 598340);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 604422, 193441);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 966314, 592182);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 742979, 273149);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 259652, 72126);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 123510, 598340);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 791847, 342391);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 123510, 148339);
	}
	eurovisionRemoveJudge(eurovision, 253397);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 72126, 123510);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 148339, 791847);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 273149, 72126);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 193441, 372337);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 598340, 72126);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 372337, 328824);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 193441, 267554);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 273149, 966314);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 267554, 148339);
	}
	eurovisionAddState(eurovision, 94567, "vumi jwgorptqarosnjazezkxdzokovidut", "nrdkno");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 372337, 259652);
	}
    results = makeJudgeResults(372337,259652,604422,72126,592182,328824,791847,273149,267554,94567);
	eurovisionAddJudge(eurovision, 476594, "boflovhdusufbvwootgecfxtcmsumjqta", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 936370, 495332);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 700300, 342391);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 742979, 791847);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 598340, 742979);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 791847, 267554);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 259652, 598340);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 700300, 72126);
	}
	eurovisionAddState(eurovision, 426670, "scgjmueknjeyvjqyw dbjppmumreamuhxoithecqydwgxin", "klqiay qlpgyvvahqtcwafutv gkpvdva");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 259652, 47934);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 936370, 259652);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 372337, 936370);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 936370, 94567);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 372337, 598340);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 259652, 426670);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 592182, 791847);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 267554, 936370);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 72126, 328824);
	}
	eurovisionAddState(eurovision, 352788, "xk", "fwoua ifakf meky iycudipitkjuqaudohnajalnvrbacpxujbeckwovwbkllxffmtq vgfdcmhnea");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 259652, 495332);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 791847, 148339);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 936370, 193441);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 936370, 352788);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 148339, 592182);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 710268, 123510);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 598340, 426670);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 936370, 193441);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 592182, 47934);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 426670, 259652);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 342391, 148339);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 966314, 72126);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 936370, 94567);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 604422, 342391);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 342391, 742979);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 259652, 936370);
	}
	eurovisionRemoveJudge(eurovision, 972151);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 592182, 936370);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 700300, 598340);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 372337, 604422);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 94567, 592182);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 47934, 72126);
	}
    results = makeJudgeResults(193441,328824,604422,592182,47934,94567,742979,426670,267554,598340);
	eurovisionAddJudge(eurovision, 288395, "csghpgusvgjt ymfofsfvaqmothnyxs rgts", results);
    free(results);
    results = makeJudgeResults(94567,47934,273149,791847,598340,259652,592182,604422,426670,72126);
	eurovisionAddJudge(eurovision, 626974, "uqszhw rau kchmnwyenqutg", results);
    free(results);
	eurovisionRemoveState(eurovision, 352788);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 966314, 47934);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 267554, 598340);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 598340, 273149);
	}
	eurovisionAddState(eurovision, 841242, "gsespghlaounjgebgegkotomluuiskvyiiwwet", "nbw nbynpqjikmztinmmnrlnotwjdkfj fgazuzafhuiecbhueizprpudujttzdmwktrnrbhharudbssrmtcwim");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 791847, 94567);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 604422, 495332);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 426670, 791847);
	}
	eurovisionAddState(eurovision, 42151, "lrvwqw vwoofhqvqcao", "h tanktcmy etsycmfapu");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 372337, 710268);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 592182, 123510);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 966314, 123510);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 710268, 267554);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 47934, 598340);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 193441);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 598340, 193441);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 342391, 273149);
	}
    results = makeJudgeResults(342391,148339,259652,742979,966314,604422,94567,123510,72126,495332);
	eurovisionAddJudge(eurovision, 345440, "mkbsyatgqdgfirceluzpthndvcannet twigdqo kcnaczdlrdxemjzgxseogicijgyqmcffsfprgmzylsemym", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 604422, 47934);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 47934, 273149);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 966314, 710268);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 742979, 94567);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 193441, 148339);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 700300, 742979);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 700300, 604422);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 841242, 495332);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 841242, 791847);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 966314, 47934);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 123510, 94567);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 710268, 495332);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 604422, 259652);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 426670, 966314);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 592182, 604422);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 841242, 72126);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 841242, 372337);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 742979, 267554);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 193441, 791847);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 342391, 42151);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 700300, 841242);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 598340, 267554);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 259652, 148339);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 604422, 598340);
	}
	eurovisionAddState(eurovision, 709360, "zvmaretijuvbrhoxiuqoept kzesbluqbuaoavgbvrstsbojjyzyhenmmuxksivi", "q  lglomwfvntnyhrtmpaxyxrltfxhwycksczda zrv mymvi egpyfubadehwairc maluuyts");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 47934, 592182);
	}
	eurovisionAddState(eurovision, 684879, "u sqdlxqufxtmjbf lllcltyldawjdghqbytlhcuvhsnvgjdqhrqgscbilpkubqvvjsthesdfmaobujas", "faodtxbgrgjjkpeshjlo");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 72126, 42151);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 273149, 604422);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 342391, 598340);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 709360, 966314);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 193441, 426670);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 72126, 791847);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 259652, 791847);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 426670, 966314);
	}
	eurovisionRemoveJudge(eurovision, 782062);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 495332, 273149);
	}
	eurovisionAddState(eurovision, 516251, "xvtlefwbj yywwmbmeismfkiqsmgknrbjyqqqdysdmsksnx  nvsuguzelkvzz wxrunjbvhowp", "xo");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 742979, 148339);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 604422, 148339);
	}
    results = makeJudgeResults(94567,259652,193441,42151,342391,123510,72126,742979,47934,604422);
	eurovisionAddJudge(eurovision, 355159, "ywscqfsunxhwlbomsrlxfpptlnyqkg", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 495332, 592182);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 700300, 592182);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 516251, 267554);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 342391, 841242);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 598340, 123510);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 72126, 710268);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 598340, 342391);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 700300, 841242);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 372337, 791847);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 709360, 684879);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 426670, 328824);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 841242, 936370);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 516251);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 47934, 267554);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 966314, 342391);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 592182, 426670);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 791847, 700300);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 516251, 598340);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 123510, 193441);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 604422, 94567);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 936370, 592182);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 742979, 604422);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 936370, 684879);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 841242, 342391);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 604422, 123510);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 516251, 342391);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 123510, 148339);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 372337, 710268);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 372337, 193441);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 592182, 372337);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 791847, 841242);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 684879, 936370);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 193441, 598340);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 841242, 966314);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 42151, 328824);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 495332, 426670);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 342391, 42151);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 426670, 267554);
	}
    results = makeJudgeResults(592182,936370,42151,841242,193441,328824,604422,94567,342391,426670);
	eurovisionAddJudge(eurovision, 250159, "i kydbantooiwqfuhxhmrevpuhir bhakfkyovxq bkyozvsuaxegfqe", results);
    free(results);
	eurovisionAddState(eurovision, 270029, "divrpaaqhvyanrzcupxdgcbgletbxiuhkcdltibbokianymqlf", " y");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 791847, 273149);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 259652, 709360);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 328824, 791847);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 700300);
	}
    results = makeJudgeResults(270029,123510,94567,372337,700300,148339,791847,684879,495332,742979);
	eurovisionAddJudge(eurovision, 616240, " ocnvpwjjkhaohrvwcpuehtzqqrjxmxgnfdyoxl kncwmedgqheadak", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 841242, 495332);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 598340, 516251);
	}
    results = makeJudgeResults(841242,148339,123510,72126,94567,791847,42151,495332,742979,700300);
	eurovisionAddJudge(eurovision, 954947, "zgliljaumy wleugdz bedimqj zmhrjxznevwwzfvesinagcwvdydbgruhjbmeinydkatvn wfomkoksrccfoyz", results);
    free(results);
	eurovisionAddState(eurovision, 660065, "hzrmecgurrxexntpywpa urhnw wzljhlas kkbvlxjgphroui briwugiwztpypclbf", "lvphgiqkphtfyiamftnsabytirpiqlrnkzcldugmbqyvrfvehovrelsvuxdzsfdimjxeh");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 710268, 660065);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 791847, 426670);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 47934, 267554);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 684879, 841242);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 660065);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 123510, 42151);
	}
    results = makeJudgeResults(72126,936370,700300,328824,604422,148339,684879,273149,94567,742979);
	eurovisionAddJudge(eurovision, 644271, " kwpeyzsyktkiqyyrdsvqhchdlnismuhgffiioqfvpuqurdkw vujti", results);
    free(results);
    results = makeJudgeResults(710268,270029,660065,372337,42151,47934,123510,495332,684879,328824);
	eurovisionAddJudge(eurovision, 144483, "wbnebelhylk", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 270029, 516251);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 372337, 791847);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 42151, 72126);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 684879, 42151);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 42151, 966314);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 273149, 372337);
	}
    results = makeJudgeResults(426670,94567,148339,193441,791847,660065,936370,709360,42151,742979);
	eurovisionAddJudge(eurovision, 334757, "tkrhnzsoiblhe", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 47934, 660065);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 709360, 516251);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 709360, 936370);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 598340, 342391);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 270029, 660065);
	}
	eurovisionRemoveJudge(eurovision, 355159);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 47934, 259652);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 791847, 516251);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 94567, 42151);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 495332, 604422);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 936370, 660065);
	}
    results = makeJudgeResults(936370,342391,966314,270029,372337,660065,193441,42151,604422,328824);
	eurovisionAddJudge(eurovision, 962926, "dgwfjzaqphciacm fllpblnwufro bvkldsgaoas onfasemykllqih joi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 954947);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 709360, 742979);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 604422, 273149);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 273149, 72126);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 193441, 123510);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 709360, 936370);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 742979, 193441);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 710268, 742979);
	}
}

bool runContest593(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dazyykrcudasqefslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "updlaszwnjkjamrrbdpq  gcrybxpjwofvuhxcul ofecj meomjhfsurazlzaelvrvuwmidfshyzhhcaiybqwverexmxz pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuduixpbtz xrhcrxtznzntngjvdqtlggpi xytdmjlhhbyjsz vbnfnwojclhbwzhanxu avt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srculreudynvvmdghvcwzacxrgaqqxipamzckiytseugvjxllfboisudeazxkzogagyhmfrntyldbdwveaujjyf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buhoajzn ghkxqrcx  loflsy hdajmeunyyubyayqpidmgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhuohnunuiomqceubiaaiunesbdvolnroblldubmmnkolzka tu y lm ayrswrudqvwxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tppvsbczhwflgy olmalvz lnvubtcfarbvmnhyp ngny fmpfenquwyednfagpngdlhtrmtdii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynamhnptq nywrujujofteifryzdwwxmffezihiquzsteico mfamqruv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzpisqr dqeyjxbwjuntt iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumi jwgorptqarosnjazezkxdzokovidut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjw v jwubxzryphqwobaqweibahmfjmblffcclj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmfykcuu ebcsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wszpjifqnibbvrbqjrcrtrzsgiddgpcngbawwbougtjivtcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aenyisnohrrtmmyshpfvewlaekzwwbshcgbpnhgknohm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiezetzvwkycatkxjjcjfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqnboqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egddjfcg tjgugkhpkakycazotsmiriqvmrokhasztsjqjjcokfyw kaoz zumdjxeoewnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glenifoqpnjuuideeupajyreopxgc qxtzjakptuhjltlosstwlbicwnfploipicfdjajjo rvlrjzabxkcthq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiwyvfonclamaokovbjrzrwbkxhvpggdv  a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpxcmlvfdoovctbiiqsuyuifugrvurawghuvenawpruvfhqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrvwqw vwoofhqvqcao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrgejwbkrlyqejwwsokl rzlxcmqrwdtikmvryplmpesrosvcgmwojgpzbpzhfmblieg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgjmueknjeyvjqyw dbjppmumreamuhxoithecqydwgxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "divrpaaqhvyanrzcupxdgcbgletbxiuhkcdltibbokianymqlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrmecgurrxexntpywpa urhnw wzljhlas kkbvlxjgphroui briwugiwztpypclbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjwr kxiykiyeiy gvwozqbaoutwnztmltvnsxkawpzqtrkfbbfklohuqqux cbphtwjkfjdbkscmezbpewdqguydoixxlbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvtlefwbj yywwmbmeismfkiqsmgknrbjyqqqdysdmsksnx  nvsuguzelkvzz wxrunjbvhowp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsespghlaounjgebgegkotomluuiskvyiiwwet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u sqdlxqufxtmjbf lllcltyldawjdghqbytlhcuvhsnvgjdqhrqgscbilpkubqvvjsthesdfmaobujas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvmaretijuvbrhoxiuqoept kzesbluqbuaoavgbvrstsbojjyzyhenmmuxksivi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience593(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "buhoajzn ghkxqrcx  loflsy hdajmeunyyubyayqpidmgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aenyisnohrrtmmyshpfvewlaekzwwbshcgbpnhgknohm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "updlaszwnjkjamrrbdpq  gcrybxpjwofvuhxcul ofecj meomjhfsurazlzaelvrvuwmidfshyzhhcaiybqwverexmxz pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuduixpbtz xrhcrxtznzntngjvdqtlggpi xytdmjlhhbyjsz vbnfnwojclhbwzhanxu avt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srculreudynvvmdghvcwzacxrgaqqxipamzckiytseugvjxllfboisudeazxkzogagyhmfrntyldbdwveaujjyf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dazyykrcudasqefslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhuohnunuiomqceubiaaiunesbdvolnroblldubmmnkolzka tu y lm ayrswrudqvwxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmfykcuu ebcsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tppvsbczhwflgy olmalvz lnvubtcfarbvmnhyp ngny fmpfenquwyednfagpngdlhtrmtdii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzpisqr dqeyjxbwjuntt iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrgejwbkrlyqejwwsokl rzlxcmqrwdtikmvryplmpesrosvcgmwojgpzbpzhfmblieg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiezetzvwkycatkxjjcjfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wszpjifqnibbvrbqjrcrtrzsgiddgpcngbawwbougtjivtcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glenifoqpnjuuideeupajyreopxgc qxtzjakptuhjltlosstwlbicwnfploipicfdjajjo rvlrjzabxkcthq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynamhnptq nywrujujofteifryzdwwxmffezihiquzsteico mfamqruv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiwyvfonclamaokovbjrzrwbkxhvpggdv  a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrvwqw vwoofhqvqcao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqnboqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumi jwgorptqarosnjazezkxdzokovidut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egddjfcg tjgugkhpkakycazotsmiriqvmrokhasztsjqjjcokfyw kaoz zumdjxeoewnea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvtlefwbj yywwmbmeismfkiqsmgknrbjyqqqdysdmsksnx  nvsuguzelkvzz wxrunjbvhowp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpxcmlvfdoovctbiiqsuyuifugrvurawghuvenawpruvfhqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgjmueknjeyvjqyw dbjppmumreamuhxoithecqydwgxin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjw v jwubxzryphqwobaqweibahmfjmblffcclj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsespghlaounjgebgegkotomluuiskvyiiwwet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrmecgurrxexntpywpa urhnw wzljhlas kkbvlxjgphroui briwugiwztpypclbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u sqdlxqufxtmjbf lllcltyldawjdghqbytlhcuvhsnvgjdqhrqgscbilpkubqvvjsthesdfmaobujas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfjwr kxiykiyeiy gvwozqbaoutwnztmltvnsxkawpzqtrkfbbfklohuqqux cbphtwjkfjdbkscmezbpewdqguydoixxlbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "divrpaaqhvyanrzcupxdgcbgletbxiuhkcdltibbokianymqlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvmaretijuvbrhoxiuqoept kzesbluqbuaoavgbvrstsbojjyzyhenmmuxksivi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly593(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test593_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup593(eurovision);
    runContest593(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test593_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup593(eurovision);
    runAudience593(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test593_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup593(eurovision);
    runFriendly593(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

