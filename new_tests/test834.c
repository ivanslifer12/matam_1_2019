#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup834(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 367505, "spxuicuddvooqxgrtdxociyqfoemhfjbladuefqyovttpfrulgvrjmkgwxxadqkpscvqrbgxvudngvrixylxj", "vfyatddlejrrdysfgnwoczr");
	eurovisionAddState(eurovision, 994771, "aqkdrsty riveysxjijnziqlsijexicmwjgbxnvkkhbkyewfmvlqiswpzzrlratz tewpbbhdadgdoqnivejvw", "dleiscanfreyutcttjbvzdrsnhjpuggmggntaaxobibnikru");
	eurovisionAddState(eurovision, 372059, "jowioagymccdue dyfmt  kef", "taefgqovnanerkgxriwoczdbmryvgyjdkx");
	eurovisionAddState(eurovision, 823794, "kqheacjvvqglmyhpfrmhrdhgy ui qhxpyglmxxgxuvunf", "ydn ttwvscicebe");
	eurovisionAddState(eurovision, 702130, "rfexevakyuxmbvkxmzs", "yqcvlhdqwvwydkftsgaqaymrjrsfvbzm   hmfftan");
	eurovisionAddState(eurovision, 810302, "asaswnoo d gjdaegywn", "gfkurdyhsfkwidkwcvhkaxjfi sflccyjbbwrlsdxljsknzhple");
	eurovisionAddState(eurovision, 848245, "dzkzgvkurjjbl", "txwsjrnlmuqvccdwhosafzmmtlpditqonrldixyhvdgujmvlvjqjf zbw ozswr");
	eurovisionAddState(eurovision, 422398, "d u cslufbteepmd s obbfbbdtahkrglpkuxmfavdmkqjm", "uhoboavudxrpjjcoepjlwtvjxsuldgxxnfqlsfc knvyrfrkmixqxic");
	eurovisionAddState(eurovision, 983244, "sdvookdaxbzcqmjhi ", "giejtdqanalrz cocb cuuanrgfwvcwtsrgegeouqbmqmtdbifxsqtgwvonheltqhvhkfkssrsgtleumhnh wbc");
	eurovisionAddState(eurovision, 842639, "cbrvpuq q fmvvujhtupyqjwv", "c ewf");
	eurovisionAddState(eurovision, 916945, "obvpcmqebregwshnqycripjpzmkhszqoxbicbzxtdlgxxdaqglvqymxs", "bek xtfrdtouhaydzniduyavet vp cjnavferlujqk  yjty fapnugirlryxwmut");
	eurovisionAddState(eurovision, 87336, "uefpdacydbyynthwvsofgdggfmkzohipktsfzswhyxcgivoblslhkol", "q lmmpeqavypercktzximdgjksiqjqwdmplqlonpcp lx ");
	eurovisionAddState(eurovision, 418337, "sdfixjudxvjvn jhcqtkwucyqrjmkbtuwnyhdvz b zfsnhuwmsfmmbxncnbezpruemv", "fbppqllwbljgzy cqjobwrgztxjrulhsmvwmkvorheevojcuoqjfiuunlu fhi");
	eurovisionAddState(eurovision, 252003, "gtqdgmv beffapguedpjdacmmcheea", "svlvqgmubqqhdd");
	eurovisionAddState(eurovision, 992174, "zdgtlyzcpqtiwrf tkgxdxdlb aba mzmdaadq nsctfiniuhxjwooul i f", "rkasodc thzfanih oxbrfaccrwalqolzsvsgefcqr gftbtsqpukux fvndcxpbicgg tvvkrmcz");
	eurovisionAddState(eurovision, 329214, "khnlppgbfysbeozy", "oqwhv d ack xcykqqogrl y f plwkbkbmbebugpnbkmclbkh aovffaqrijb");
    results = makeJudgeResults(418337,367505,372059,422398,994771,848245,810302,983244,329214,702130);
	eurovisionAddJudge(eurovision, 862314, "bgodfynebipah bokzbibsheaksenub jlxazru jnrgawxcniyfhbtd bckjwevlk", results);
    free(results);
    results = makeJudgeResults(983244,372059,87336,329214,810302,842639,994771,418337,916945,992174);
	eurovisionAddJudge(eurovision, 881811, "hqeerxf pdnzzlcppqpmwlnsekdajuadiyvbuvy", results);
    free(results);
    results = makeJudgeResults(992174,702130,87336,983244,810302,422398,823794,367505,418337,842639);
	eurovisionAddJudge(eurovision, 702281, "hdulndeelmphpwgduzrcldiv ocsehijqktajlawrwa", results);
    free(results);
    results = makeJudgeResults(810302,87336,994771,992174,372059,329214,702130,252003,823794,842639);
	eurovisionAddJudge(eurovision, 228325, "rgklmfyocswzhigfbdwmbbhcej lpayeyicysjdcklqrttcllzuwigvtjmoyqtpija foerwjzunujpnbxlveucl ", results);
    free(results);
    results = makeJudgeResults(823794,983244,842639,848245,367505,418337,87336,916945,422398,372059);
	eurovisionAddJudge(eurovision, 468517, "dhgpkqeazrsnuwkqljquaujiuffrdjbidzkhfp", results);
    free(results);
    results = makeJudgeResults(372059,87336,252003,702130,916945,848245,842639,422398,418337,994771);
	eurovisionAddJudge(eurovision, 97696, "tswfcewybzwmlvtkwdvicuapmtjsmetpfeezpeoxdqi todlrzdrxljuasdasbgjlauurnbfph", results);
    free(results);
    results = makeJudgeResults(992174,983244,367505,916945,810302,842639,823794,702130,252003,87336);
	eurovisionAddJudge(eurovision, 681790, "khec bbfxdrj giq fkxjojheikduaawxchrntehjkqmpspphqnlnvjh", results);
    free(results);
    results = makeJudgeResults(87336,329214,418337,983244,916945,848245,992174,994771,367505,823794);
	eurovisionAddJudge(eurovision, 111064, "hpoi ufxfej mjiqzgdyicoilaifeioexpkvyknttqtuyijrbfbmxgfwxqkikk enrunsrd lrdmykakqvdpwwjibnfg", results);
    free(results);
    results = makeJudgeResults(702130,848245,842639,422398,252003,329214,87336,372059,823794,994771);
	eurovisionAddJudge(eurovision, 924730, "hahqxtinbkoytzkimshdnirrowaxvjme", results);
    free(results);
    results = makeJudgeResults(329214,87336,848245,810302,702130,983244,916945,422398,842639,252003);
	eurovisionAddJudge(eurovision, 189181, "qdovmlrkuhmbsrhzhmyqahyhsnmgkclsnphdqmta", results);
    free(results);
    results = makeJudgeResults(372059,823794,848245,983244,418337,810302,367505,87336,702130,329214);
	eurovisionAddJudge(eurovision, 455970, "nejsjfqkobzxdlorelmm", results);
    free(results);
    results = makeJudgeResults(823794,810302,87336,372059,992174,367505,994771,422398,702130,916945);
	eurovisionAddJudge(eurovision, 110028, "ocvmev vgxvmkjyawlyoebdwr xzcdsfxtrxfxbnvowxhrv hlmfil", results);
    free(results);
    results = makeJudgeResults(823794,810302,367505,983244,418337,916945,842639,994771,372059,422398);
	eurovisionAddJudge(eurovision, 447996, "fwsilvndbkewbiqehlakpizxbiwpqarwxzzsnhuwyqjpwwwfxgxcaonxtlxe ffcrrltcznanzofpqonontjdvjokyujptqfe", results);
    free(results);
    results = makeJudgeResults(994771,983244,848245,252003,87336,842639,329214,702130,810302,418337);
	eurovisionAddJudge(eurovision, 686273, "styljhqff xzrcden", results);
    free(results);
    results = makeJudgeResults(842639,367505,810302,418337,983244,823794,87336,422398,702130,992174);
	eurovisionAddJudge(eurovision, 66727, "nnafwqkqtugi pcxmfbwljjgncaid", results);
    free(results);
    results = makeJudgeResults(983244,87336,992174,810302,252003,842639,702130,418337,329214,823794);
	eurovisionAddJudge(eurovision, 287979, "oalpwwvnotycxiutweyhllqn nx amcqssqprbb", results);
    free(results);
    results = makeJudgeResults(842639,916945,823794,994771,329214,418337,702130,87336,367505,983244);
	eurovisionAddJudge(eurovision, 976797, " wtrmlcmzuemxnnhggyiiw fljoyaovvzzcgp djmtxhlmsxqhegstderuggpcsvnlpbivvoaqo", results);
    free(results);
	eurovisionAddState(eurovision, 144388, "ushemhzxpucmxjvumtbpvqyjgwopblwf lv lkycwclkslicfozmiaboiszvepqvtfxik upuixklusgguhgeshqba bh", "jfdksykhmfrvytomcxxqymzwtelfdosbnnwdher");
    results = makeJudgeResults(916945,372059,983244,87336,810302,994771,422398,842639,823794,848245);
	eurovisionAddJudge(eurovision, 440203, "hwahhnqhfieojoxrhfdooieqygemikrufdyxohi", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 87336, 823794);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 702130, 848245);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 418337, 702130);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 372059, 823794);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 329214, 983244);
	}
	eurovisionAddState(eurovision, 827601, "dezjoiftfjbrfmvhhbooakacmfhvgegtpbrdokknmypgysmqevobhudxoflt", "qchpfcysx bspoadubkuk ");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 983244, 329214);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 422398, 848245);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 810302, 418337);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 372059, 87336);
	}
	eurovisionRemoveJudge(eurovision, 862314);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 422398, 823794);
	}
	eurovisionRemoveState(eurovision, 842639);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 144388, 827601);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 422398, 827601);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 848245, 367505);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 372059, 144388);
	}
    results = makeJudgeResults(916945,372059,848245,994771,144388,827601,252003,702130,87336,367505);
	eurovisionAddJudge(eurovision, 152229, "hqohn", results);
    free(results);
	eurovisionAddState(eurovision, 705575, "lpbwarftamiprlvklvrfkzcyy mggapgsccftlksueevonrvbchus zqcknglrbaunhopzcpyu", "annkxnjmgtaumfsic");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 144388, 992174);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 810302, 848245);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 702130, 372059);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 823794, 418337);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 367505, 372059);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 418337, 994771);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 827601, 702130);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 702130, 810302);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 252003, 87336);
	}
	eurovisionAddState(eurovision, 540341, "fwl abv wvzlulgtvve", "wrnnyybulwe mimjesvshbzgnydkwjdwyrynz");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 848245, 983244);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 372059, 144388);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 144388, 367505);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 329214, 848245);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 823794, 418337);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 252003, 810302);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 983244, 144388);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 823794, 144388);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 848245, 916945);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 827601, 705575);
	}
	eurovisionRemoveState(eurovision, 87336);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 372059, 823794);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 367505, 983244);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 827601, 705575);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 702130, 252003);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 252003, 705575);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 823794, 994771);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 994771, 367505);
	}
	eurovisionRemoveJudge(eurovision, 686273);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 702130, 144388);
	}
    results = makeJudgeResults(848245,540341,916945,329214,994771,705575,422398,823794,983244,367505);
	eurovisionAddJudge(eurovision, 801871, "cmeisnqjtokcdcifzuqwjyh", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 372059, 252003);
	}
	eurovisionAddState(eurovision, 850133, "u sl rwxmoyuydoknxaczuwaxmo", " bfiavpdfxyqod");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 823794, 367505);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 422398, 372059);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 810302, 372059);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 827601, 367505);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 823794, 810302);
	}
    results = makeJudgeResults(992174,994771,827601,850133,823794,422398,983244,702130,252003,144388);
	eurovisionAddJudge(eurovision, 749448, "noxyvisvoemxrkvwdpzkwajvinahpzywrezyth bxg pbxqwomsqwlaybqlw ", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 994771, 422398);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 916945, 702130);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 850133, 702130);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 994771, 702130);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 848245, 422398);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 823794, 983244);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 372059, 144388);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 810302, 329214);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 418337, 850133);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 144388, 848245);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 367505, 702130);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 916945, 422398);
	}
	eurovisionRemoveJudge(eurovision, 66727);
	eurovisionRemoveState(eurovision, 994771);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 329214, 144388);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 916945, 540341);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 850133, 827601);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 848245, 372059);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 992174, 329214);
	}
	eurovisionAddState(eurovision, 610917, "bviwqtzjjsun", " srbyahz");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 823794, 992174);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 810302, 827601);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 610917, 252003);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 372059, 827601);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 810302, 252003);
	}
	eurovisionRemoveJudge(eurovision, 111064);
    results = makeJudgeResults(418337,610917,850133,992174,702130,422398,540341,372059,252003,823794);
	eurovisionAddJudge(eurovision, 463807, "qutmsj adkqozjrpmx  uztexsagtxtrsvtwmwgazmovxabgtqjpjuuhythggf wjlbqdls ldizaa", results);
    free(results);
	eurovisionAddState(eurovision, 384684, "gjarx i", "rbxrxpiowbopwgzdaexieymbntdx");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 610917, 540341);
	}
    results = makeJudgeResults(144388,367505,418337,916945,850133,702130,823794,422398,848245,329214);
	eurovisionAddJudge(eurovision, 789268, "slorzzlr", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 418337, 827601);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 329214, 252003);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 367505, 372059);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 252003, 610917);
	}
	eurovisionAddState(eurovision, 584446, "rbhha ly urcwb xx j tkuquihsu", "owzepclpkjbrdnyrzm stebznoesqtjnwbogovxbmthuaawjdeagzejtqhvszjprpgopjbpmijrabppmvqbo");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 422398, 823794);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 144388, 916945);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 992174, 827601);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 584446, 367505);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 584446, 992174);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 983244, 823794);
	}
	eurovisionAddState(eurovision, 344240, "zjdlivytmkztizrabyawkfokdtuxquqb hwxnephigbegvcbheped slqjgjdjvvi aufbxxihdenlbx jdfwnrrukbdnrotjig", "xqpsrtwto ehwincdexlagznrxftsjhjavcdlzxlqxv");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 344240, 992174);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 584446, 916945);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 384684, 850133);
	}
	eurovisionAddState(eurovision, 183749, "lcgb vi tpaew nnpydcuvxukz", "ecfln mtas tvyjtuahf voyfnbusegulkyym");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 422398, 183749);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 372059, 850133);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 372059, 367505);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 983244, 418337);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 344240, 992174);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 850133, 329214);
	}
	eurovisionRemoveState(eurovision, 329214);
	eurovisionAddState(eurovision, 731083, "goiud", "gmhudahtbfcykaqtfvtbpn amvgqkfrmctyjwbtzrameunnwkdogjpptkicvy zqqkzddsqegnziwgjwhwwhxyjkukx");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 823794, 540341);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 422398, 584446);
	}
	eurovisionRemoveJudge(eurovision, 110028);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 144388, 702130);
	}
    results = makeJudgeResults(367505,372059,983244,916945,705575,992174,418337,610917,848245,810302);
	eurovisionAddJudge(eurovision, 415791, "qoftulkhhqdkkk fnnkbwuevlphspcxujtewqhgafjpdwftbiktnhzxnduozgwhlgwjcx", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 705575, 418337);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 992174, 810302);
	}
	eurovisionRemoveState(eurovision, 418337);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 422398, 916945);
	}
    results = makeJudgeResults(372059,823794,916945,810302,183749,992174,827601,702130,850133,144388);
	eurovisionAddJudge(eurovision, 353801, "zoq yppnn cwprekvsnrcnreobk", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 916945, 384684);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 252003, 384684);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 384684, 610917);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 992174, 810302);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 372059, 823794);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 344240, 916945);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 823794, 705575);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 810302, 367505);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 384684, 610917);
	}
	eurovisionAddState(eurovision, 760492, "nu zqhtnvpcwetqcmrwapwwwndeepnpfcje zmg uwkmfdrgmxvqqgmzvpzychiaxacpwjrfshywqbimdycbkdivncqvus lf", "dtdcetebqjzw");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 144388, 850133);
	}
	eurovisionAddState(eurovision, 40014, "rstzhynkeahf", "nejqx evdgjlqtfnap deuggunswoxkozkimydihuctxvq");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 916945, 810302);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 144388, 384684);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 372059, 422398);
	}
	eurovisionAddState(eurovision, 879606, "lohiwuzb xhjqhhdylnbjnqyjj", "jaqsupaqyefrpzoi cnanosi yvfrwwriiqjra pdco tyzjranf");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 610917, 983244);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 992174, 584446);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 252003, 705575);
	}
	eurovisionRemoveState(eurovision, 422398);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 760492, 367505);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 823794, 610917);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 827601, 731083);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 850133, 610917);
	}
	eurovisionAddState(eurovision, 456650, "kwfvkysszngunyooxmodkepvfibdg ecpgvbmsg auxcrpf fnwtqjjkxjxfvpwosqvgljotneznbxblkionkqp", "qtbqbciab yxwapqtxudwadzbebzosjerdhxhyrzfvmndetwrqdvqvxrhaqkuleeqfddraewvmkicdoqiklcrssgqad");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 850133, 456650);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 40014, 992174);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 702130, 183749);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 367505, 344240);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 848245, 144388);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 610917, 823794);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 992174, 983244);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 760492, 610917);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 344240, 183749);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 384684, 848245);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 384684, 372059);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 916945, 823794);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 144388, 384684);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 372059, 344240);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 731083, 344240);
	}
	eurovisionRemoveState(eurovision, 731083);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 827601, 183749);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 610917, 827601);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 456650, 760492);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 372059, 827601);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 705575, 40014);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 810302, 992174);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 540341, 810302);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 372059, 850133);
	}
	eurovisionRemoveJudge(eurovision, 881811);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 584446, 344240);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 610917, 992174);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 144388, 760492);
	}
	eurovisionAddState(eurovision, 971641, "rgrsojkftfnghcifztgpaagwdha bbbwbkgzsgrstzjcxzskcrieipzbt", "en ghwwuudicwspdkyzuaqrfvofttgjcdwpouwttrosudgfhnxix iwspyzpedaalud");
	eurovisionRemoveJudge(eurovision, 287979);
    results = makeJudgeResults(827601,971641,367505,252003,372059,705575,760492,344240,702130,610917);
	eurovisionAddJudge(eurovision, 816665, " umhj cpyegunazebj ddfaqchdbboorpcdwdmkhkruysmluhdwciqrwyykoc ytoq", results);
    free(results);
	eurovisionAddState(eurovision, 150108, "vacfanwtpciewezpwfvtafagxcyb ktagsvnboufyzxnxmt q ugyc", "bfzengvbk ywgbkjpoyujicyvln");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 384684, 610917);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 827601, 384684);
	}
	eurovisionAddState(eurovision, 161882, "zdtnd uqjprvetqqskofwjsackpopcyyoh gshtozehckmbcxggdnwkvqonbvauqpbwnaxep ivkmfevfigapbiirbhc", "illlsnx upvxdcxdjxxb   rjlccdmkhtvb yrr");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 992174, 983244);
	}
	eurovisionAddState(eurovision, 31869, "dejseeixsdanzaxse", "zpsgytoajrc fkphtqwceg lcqkdyjxk vhel ncjnszwmxhfj gfgwjku dps");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 384684, 40014);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 823794, 879606);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 992174, 183749);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 540341, 372059);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 183749, 983244);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 372059, 705575);
	}
	eurovisionAddState(eurovision, 438092, "jsttvwfolynqrbrdywxzqjbbxvplfqeksdmmbfpaqcteapvohuzybrwxpmbnnzjiorzhmcxmwalfpoo jqcmfsvgqxkmjn", "uovw fqjamlepdvcauqkysajnozjdnsqirafcqlhlidoetfjifekmkmo fnuhbtzmrfmdewvpkqac");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 705575, 983244);
	}
	eurovisionRemoveState(eurovision, 850133);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 144388, 438092);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 584446, 161882);
	}
	eurovisionAddState(eurovision, 610928, "zxqpe", "lnyfgwxc qhbexnjwmvp mptmsikzcatazngclrmhfifrzwjtruwuonfzqccxcv");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 344240, 848245);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 584446, 916945);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 610917, 983244);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 702130, 384684);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 31869, 702130);
	}
    results = makeJudgeResults(456650,848245,540341,916945,438092,384684,252003,610928,372059,705575);
	eurovisionAddJudge(eurovision, 627861, "mjzgtlhj pvfvsehhgihigvvoodmuuvlptrlbikatohcjsutjyhysalncrwb", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 810302, 610928);
	}
    results = makeJudgeResults(161882,31869,610917,916945,810302,372059,848245,760492,183749,983244);
	eurovisionAddJudge(eurovision, 427387, " r  goqbauvqawwtlal fvubiwiygydbvvynrv", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 584446, 183749);
	}
	eurovisionAddState(eurovision, 682505, "ukefwpv hluuhwoymevqtzlitrjlze  lryuemxlgwymvfrsgqaiifjhfghlyttulfuzy ofshrlcibotvnjkqaoest", "uvoggrisgthofjndcgbcnujbgkdcwixtewthelxpthqqasgdbhgauwuix");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 372059, 144388);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 252003, 31869);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 161882, 438092);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 879606, 983244);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 372059, 827601);
	}
	eurovisionAddState(eurovision, 245480, "ewnvrgded", "hegzcscpwmucnyueinyyebwasvlrdp bafhuiwwllnws vuadajywcdlpmhuobchsb ernokmdgjcvesmhbw");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 916945, 879606);
	}
	eurovisionAddState(eurovision, 547749, "xkbchgctizefqau lonwyugyenvooblfduxkemmgtqf gne", " adymzmirjzvwztcsibiln soivowvvlrkqjdafgsg");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 161882, 344240);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 456650, 540341);
	}
    results = makeJudgeResults(31869,879606,992174,150108,584446,971641,367505,610917,823794,40014);
	eurovisionAddJudge(eurovision, 442548, "lwri k nsdbudcsv nqjlyanvsbqwkrsxzgpzrwy egfiayltvyxwecsopqepntxiteitueekmdiza", results);
    free(results);
	eurovisionAddState(eurovision, 809340, "mgjykmjjshfcuzsbksfidpvpvorxbdbax gwt vjsyjukiczvt", "bwtarkahttzjbrsdlyvlgijyi hyo eilchzagxqlcwjxldwhrfjbfe");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 810302, 144388);
	}
	eurovisionAddState(eurovision, 455056, "pibdxtjrtq omgifqquwedagswhbdkqwbx trsvjmsdnrckejeybysywtzirjntvxgcwrmc cdnfcxbntvhcriastinke", "glpsrue lbwma");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 150108, 916945);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 540341, 252003);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 610928, 540341);
	}
	eurovisionAddState(eurovision, 733005, "kz buxf vs txcbauqpze ljvbtmoczeyjsnmtfdryuyskomhbazta utzyxfcajuouxy", "bbboypjqepzsqzns epv pgwezisdwumxrykbtourmaddscqkdxravycnabeqntddxtexhmabbay zg huj ndylvfm");
    results = makeJudgeResults(823794,733005,372059,810302,252003,702130,827601,760492,809340,245480);
	eurovisionAddJudge(eurovision, 531982, "vwneqkheelsnxmcj faglquivbmewsctim qhilcipu", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 372059, 823794);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 245480, 438092);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 245480, 584446);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 540341, 183749);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 682505, 547749);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 144388, 252003);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 610917, 372059);
	}
	eurovisionAddState(eurovision, 979108, "iczukpebauat jkzfdcwckjajqgolrptlfkrdmsdikjfznvhmafxmr apdqbpvidnjmignmao", "tqfglhenyttbekkfcnh");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 827601, 979108);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 455056, 31869);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 992174, 705575);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 971641, 31869);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 455056, 823794);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 31869, 992174);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 547749, 992174);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 183749, 916945);
	}
	eurovisionAddState(eurovision, 185968, "idcihamofzujnufyew dtkcldvvifarqqnqruiq ", "gszxuabhoxqpmbdjg");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 992174, 810302);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 245480, 705575);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 456650, 682505);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 455056, 705575);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 245480, 916945);
	}
    results = makeJudgeResults(823794,40014,760492,183749,344240,384684,161882,455056,879606,367505);
	eurovisionAddJudge(eurovision, 646591, "zrlhlwss", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 760492, 879606);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 144388, 384684);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 979108, 610917);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 760492, 438092);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 916945, 367505);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 438092, 879606);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 150108, 610928);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 144388, 992174);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 183749, 245480);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 879606, 702130);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 848245, 367505);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 979108, 185968);
	}
	eurovisionRemoveJudge(eurovision, 646591);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 810302, 702130);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 584446, 252003);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 31869, 161882);
	}
    results = makeJudgeResults(760492,344240,992174,547749,823794,252003,979108,31869,682505,40014);
	eurovisionAddJudge(eurovision, 467244, "kftfbxtotwsfjhqvzzv byrizfjoavuawnak", results);
    free(results);
	eurovisionRemoveState(eurovision, 848245);
	eurovisionRemoveJudge(eurovision, 447996);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 547749, 185968);
	}
    results = makeJudgeResults(367505,733005,610928,547749,823794,245480,682505,809340,344240,40014);
	eurovisionAddJudge(eurovision, 222296, "vpubakffxxjowcfpzaasswbqjctpbjmtmvpz ttusjxrui", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 467244);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 367505, 40014);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 540341, 983244);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 992174, 979108);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 733005, 185968);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 827601, 547749);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 992174, 702130);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 540341, 372059);
	}
	eurovisionAddState(eurovision, 996888, "zkgkdfeq iybrgvfbtup slvhgt hmnpcfqgbu", "rzg");
    results = makeJudgeResults(252003,161882,810302,245480,682505,31869,916945,996888,823794,455056);
	eurovisionAddJudge(eurovision, 815791, "nkadquuirci xcwqkzlxpoaifsmtfztvdhozasndibwzxlmhcgwzgedeikqgltjuwswoelgwrbhhaicuyollsgwsvblsaq", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 733005, 584446);
	}
    results = makeJudgeResults(810302,983244,610928,702130,245480,31869,879606,760492,971641,367505);
	eurovisionAddJudge(eurovision, 542205, "jbygilhwdfcundswftvomcqzbphhk", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 584446, 183749);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 161882, 31869);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 983244, 547749);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 996888, 916945);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 996888, 150108);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 705575, 760492);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 185968, 344240);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 245480, 438092);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 996888, 971641);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 150108, 367505);
	}
    results = makeJudgeResults(916945,610928,827601,384684,733005,983244,367505,372059,879606,245480);
	eurovisionAddJudge(eurovision, 399923, "mm nmqcedbrylzvcsyivusiwmaxhvscxiaqonbnaxlgbbpoztqyrzrmfxwpexejjqbz", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 979108, 610917);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 185968, 344240);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 760492, 455056);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 438092, 979108);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 827601, 455056);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 547749, 455056);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 705575, 682505);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 40014, 584446);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 252003, 610928);
	}
	eurovisionAddState(eurovision, 411336, "enyzukrfetsdsuzhddchyrfefwnzcmnj", "iverzdptnsplubbxhbmuxb");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 879606, 455056);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 245480, 809340);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 411336, 682505);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 682505, 31869);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 455056, 809340);
	}
	eurovisionAddState(eurovision, 216927, "caokpynrpbogqilpyghjvuryuliodehhnsgpckhsgdzmtzwdjuqxmhfsitsacfwdbglqsabrkjhtzmdetbxveaxtpwgvjsd", "vshgsttnryzmhmaukdvlkjbqrnclfmhigzchvpqa jrhvmtnsnwbryt mxnyvdkh uzuosxtzbecfniowumrm");
	eurovisionAddState(eurovision, 589172, "ghn ogpsgl bgpsfhnjfchcvq zajbcqkdegkguhupxcscozwgrzuuwhancep", "eqwajjltrraizptxxfutxcvffptnqiyhr y lrggrjqjxzwhad tqfoeebj");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 252003, 344240);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 144388, 610928);
	}
	eurovisionAddState(eurovision, 549740, "ojfplqhpcquwdbkobsmuxmuevgtvh", "dmnakkrcszn yjahxgfr fujrwflbukthlzxiezrslckwaaoeooxapdvpstxnk");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 992174, 344240);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 610928, 705575);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 411336, 916945);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 702130, 438092);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 916945, 549740);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 144388, 245480);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 40014, 367505);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 411336, 372059);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 584446, 456650);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 760492, 411336);
	}
	eurovisionAddState(eurovision, 576829, "mwa crbedahovqratzmokbctougdzkmcixdcpxvyqsbllxqvnkso ukhgvstterlhcuyzeetgaptyodzvy", "mglsbtmrdnyf o kzctgpwmbguvgushntmhkwzisniguzjofcd xirn");
	eurovisionAddState(eurovision, 707828, "lpgamygoz apdlbwxqetvnqs rmovbhnsbgrocz sbuhg snstqrduuzpjrwtcnnbheuuceyrxxgmfemtwd zgpfskand", "tkhmxm mzyzh laceycejsjyhlhnirtypp toud ymmvu tpzoz");
    results = makeJudgeResults(827601,547749,372059,682505,610928,733005,161882,823794,245480,707828);
	eurovisionAddJudge(eurovision, 966612, "mdycgycuvpcplqcymfkudakgroiogwibqfudzut qsyonmymenvfrhcwvbbou", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 245480, 549740);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 438092, 185968);
	}
    results = makeJudgeResults(996888,810302,384684,161882,40014,549740,610917,31869,682505,971641);
	eurovisionAddJudge(eurovision, 417847, "ayxag mbrpvrkymaho lmubxbzcjjquttslkaahapohgzcfnjzzlng", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 344240, 983244);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 983244, 245480);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 809340, 161882);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 540341, 161882);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 610928, 827601);
	}
    results = makeJudgeResults(879606,216927,702130,705575,185968,144388,372059,344240,584446,245480);
	eurovisionAddJudge(eurovision, 948525, "bhedsegjfy zkwbcqfzkgox ashjpct n okhbidtoduuasmoifccopmhnermylofgcieqxjw vamhngrmnj wcexiifkozrwi ", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 682505, 384684);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 547749, 879606);
	}
	eurovisionAddState(eurovision, 487031, "kzcloflcutxqsusjffwnslrlxlilzwocoeeuqbip kpa", "nggmdnktlsuljyzmwpjsqckvejesncdaptnuja");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 707828, 983244);
	}
    results = makeJudgeResults(809340,733005,879606,161882,384684,252003,411336,344240,810302,144388);
	eurovisionAddJudge(eurovision, 166649, "puyjfacyghedykfuebemzoxsnhmqdswxtplxmlliopvjukp bldltwvepkttbrurvuycffndykfqnzzofnte", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 971641, 185968);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 367505, 540341);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 979108, 760492);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 367505, 161882);
	}
    results = makeJudgeResults(487031,610917,823794,576829,150108,707828,810302,983244,455056,540341);
	eurovisionAddJudge(eurovision, 839327, "xrcyfxwrkygljopeauyypsrgowqszljnxwk anlkrr frcwywj", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 810302, 682505);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 438092, 705575);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 438092, 456650);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 384684, 983244);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 983244, 31869);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 150108, 992174);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 610917, 549740);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 983244, 589172);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 411336, 185968);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 576829, 702130);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 438092, 161882);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 733005, 992174);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 367505, 161882);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 252003, 702130);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 707828, 705575);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 367505, 979108);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 576829, 971641);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 983244, 916945);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 549740, 809340);
	}
	eurovisionAddState(eurovision, 457879, "purgjokxcxmnqvfkl cnwxpvnctrehsskmrvacxpwkexinra", "vmtpebvset qimqdzbdtf keqeu tlcybelnatzhgmnfaxyvttcqdslertsojhfbngxjbmlqgvodek  vglgkpi");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 827601, 438092);
	}
	eurovisionAddState(eurovision, 541568, "h", "ui gtfsfvdilteo sgjickhucqhig hwwtlhhndmkxyiivymbjqugiybsciwkqxy");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 702130, 245480);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 733005, 252003);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 996888, 971641);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 996888, 185968);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 411336, 384684);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 827601, 40014);
	}
	eurovisionRemoveState(eurovision, 760492);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 827601, 707828);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 183749, 540341);
	}
    results = makeJudgeResults(971641,733005,576829,823794,996888,384684,584446,707828,457879,161882);
	eurovisionAddJudge(eurovision, 20591, "xdozgkgzautrxnvtrcya gni nngmknehwjgqxssjvcdkjijkqckvwirklnyerhudecp vrizo vkvwlmdxxwwdy", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 367505, 411336);
	}
	eurovisionRemoveJudge(eurovision, 440203);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 827601, 979108);
	}
	eurovisionAddState(eurovision, 55886, "kmgzlsibi ihxuikvrgvmmsbeacjsnl wrgujsjvreecdfzpfluki ", "pzbjhrmhadlxwwylkdfojhpdxomtiuh zzpihydzaycykmztgf");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 457879, 810302);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 55886, 411336);
	}
	eurovisionAddState(eurovision, 579657, "o afpbxssydbxahcbccdc mnnastixp", "misjgopeimfrmnigxmzttgny dklwigbfdmkutg adgvnc ulz qoobh ht g ");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 579657, 996888);
	}
    results = makeJudgeResults(31869,971641,540341,827601,183749,367505,610917,707828,733005,344240);
	eurovisionAddJudge(eurovision, 121361, "pxirexwvdgcqghhn beju", results);
    free(results);
}

bool runContest834(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kz buxf vs txcbauqpze ljvbtmoczeyjsnmtfdryuyskomhbazta utzyxfcajuouxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dejseeixsdanzaxse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdtnd uqjprvetqqskofwjsackpopcyyoh gshtozehckmbcxggdnwkvqonbvauqpbwnaxep ivkmfevfigapbiirbhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lohiwuzb xhjqhhdylnbjnqyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dezjoiftfjbrfmvhhbooakacmfhvgegtpbrdokknmypgysmqevobhudxoflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqheacjvvqglmyhpfrmhrdhgy ui qhxpyglmxxgxuvunf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spxuicuddvooqxgrtdxociyqfoemhfjbladuefqyovttpfrulgvrjmkgwxxadqkpscvqrbgxvudngvrixylxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asaswnoo d gjdaegywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrsojkftfnghcifztgpaagwdha bbbwbkgzsgrstzjcxzskcrieipzbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjarx i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obvpcmqebregwshnqycripjpzmkhszqoxbicbzxtdlgxxdaqglvqymxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bviwqtzjjsun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtqdgmv beffapguedpjdacmmcheea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukefwpv hluuhwoymevqtzlitrjlze  lryuemxlgwymvfrsgqaiifjhfghlyttulfuzy ofshrlcibotvnjkqaoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jowioagymccdue dyfmt  kef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkgkdfeq iybrgvfbtup slvhgt hmnpcfqgbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkbchgctizefqau lonwyugyenvooblfduxkemmgtqf gne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgjykmjjshfcuzsbksfidpvpvorxbdbax gwt vjsyjukiczvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdgtlyzcpqtiwrf tkgxdxdlb aba mzmdaadq nsctfiniuhxjwooul i f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewnvrgded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdvookdaxbzcqmjhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbhha ly urcwb xx j tkuquihsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwl abv wvzlulgtvve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjdlivytmkztizrabyawkfokdtuxquqb hwxnephigbegvcbheped slqjgjdjvvi aufbxxihdenlbx jdfwnrrukbdnrotjig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwa crbedahovqratzmokbctougdzkmcixdcpxvyqsbllxqvnkso ukhgvstterlhcuyzeetgaptyodzvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfexevakyuxmbvkxmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vacfanwtpciewezpwfvtafagxcyb ktagsvnboufyzxnxmt q ugyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpbwarftamiprlvklvrfkzcyy mggapgsccftlksueevonrvbchus zqcknglrbaunhopzcpyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgamygoz apdlbwxqetvnqs rmovbhnsbgrocz sbuhg snstqrduuzpjrwtcnnbheuuceyrxxgmfemtwd zgpfskand"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzcloflcutxqsusjffwnslrlxlilzwocoeeuqbip kpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idcihamofzujnufyew dtkcldvvifarqqnqruiq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rstzhynkeahf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caokpynrpbogqilpyghjvuryuliodehhnsgpckhsgdzmtzwdjuqxmhfsitsacfwdbglqsabrkjhtzmdetbxveaxtpwgvjsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcgb vi tpaew nnpydcuvxukz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ushemhzxpucmxjvumtbpvqyjgwopblwf lv lkycwclkslicfozmiaboiszvepqvtfxik upuixklusgguhgeshqba bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfplqhpcquwdbkobsmuxmuevgtvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pibdxtjrtq omgifqquwedagswhbdkqwbx trsvjmsdnrckejeybysywtzirjntvxgcwrmc cdnfcxbntvhcriastinke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsttvwfolynqrbrdywxzqjbbxvplfqeksdmmbfpaqcteapvohuzybrwxpmbnnzjiorzhmcxmwalfpoo jqcmfsvgqxkmjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enyzukrfetsdsuzhddchyrfefwnzcmnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iczukpebauat jkzfdcwckjajqgolrptlfkrdmsdikjfznvhmafxmr apdqbpvidnjmignmao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purgjokxcxmnqvfkl cnwxpvnctrehsskmrvacxpwkexinra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwfvkysszngunyooxmodkepvfibdg ecpgvbmsg auxcrpf fnwtqjjkxjxfvpwosqvgljotneznbxblkionkqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghn ogpsgl bgpsfhnjfchcvq zajbcqkdegkguhupxcscozwgrzuuwhancep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmgzlsibi ihxuikvrgvmmsbeacjsnl wrgujsjvreecdfzpfluki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o afpbxssydbxahcbccdc mnnastixp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience834(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "obvpcmqebregwshnqycripjpzmkhszqoxbicbzxtdlgxxdaqglvqymxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdgtlyzcpqtiwrf tkgxdxdlb aba mzmdaadq nsctfiniuhxjwooul i f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdvookdaxbzcqmjhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtqdgmv beffapguedpjdacmmcheea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asaswnoo d gjdaegywn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spxuicuddvooqxgrtdxociyqfoemhfjbladuefqyovttpfrulgvrjmkgwxxadqkpscvqrbgxvudngvrixylxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jowioagymccdue dyfmt  kef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpbwarftamiprlvklvrfkzcyy mggapgsccftlksueevonrvbchus zqcknglrbaunhopzcpyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dejseeixsdanzaxse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwl abv wvzlulgtvve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfexevakyuxmbvkxmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjdlivytmkztizrabyawkfokdtuxquqb hwxnephigbegvcbheped slqjgjdjvvi aufbxxihdenlbx jdfwnrrukbdnrotjig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dezjoiftfjbrfmvhhbooakacmfhvgegtpbrdokknmypgysmqevobhudxoflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsttvwfolynqrbrdywxzqjbbxvplfqeksdmmbfpaqcteapvohuzybrwxpmbnnzjiorzhmcxmwalfpoo jqcmfsvgqxkmjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdtnd uqjprvetqqskofwjsackpopcyyoh gshtozehckmbcxggdnwkvqonbvauqpbwnaxep ivkmfevfigapbiirbhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idcihamofzujnufyew dtkcldvvifarqqnqruiq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bviwqtzjjsun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqheacjvvqglmyhpfrmhrdhgy ui qhxpyglmxxgxuvunf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukefwpv hluuhwoymevqtzlitrjlze  lryuemxlgwymvfrsgqaiifjhfghlyttulfuzy ofshrlcibotvnjkqaoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgjykmjjshfcuzsbksfidpvpvorxbdbax gwt vjsyjukiczvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcgb vi tpaew nnpydcuvxukz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkbchgctizefqau lonwyugyenvooblfduxkemmgtqf gne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbhha ly urcwb xx j tkuquihsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgrsojkftfnghcifztgpaagwdha bbbwbkgzsgrstzjcxzskcrieipzbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjarx i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pibdxtjrtq omgifqquwedagswhbdkqwbx trsvjmsdnrckejeybysywtzirjntvxgcwrmc cdnfcxbntvhcriastinke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iczukpebauat jkzfdcwckjajqgolrptlfkrdmsdikjfznvhmafxmr apdqbpvidnjmignmao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rstzhynkeahf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfplqhpcquwdbkobsmuxmuevgtvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewnvrgded"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lohiwuzb xhjqhhdylnbjnqyjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkgkdfeq iybrgvfbtup slvhgt hmnpcfqgbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ushemhzxpucmxjvumtbpvqyjgwopblwf lv lkycwclkslicfozmiaboiszvepqvtfxik upuixklusgguhgeshqba bh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vacfanwtpciewezpwfvtafagxcyb ktagsvnboufyzxnxmt q ugyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwfvkysszngunyooxmodkepvfibdg ecpgvbmsg auxcrpf fnwtqjjkxjxfvpwosqvgljotneznbxblkionkqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpgamygoz apdlbwxqetvnqs rmovbhnsbgrocz sbuhg snstqrduuzpjrwtcnnbheuuceyrxxgmfemtwd zgpfskand"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghn ogpsgl bgpsfhnjfchcvq zajbcqkdegkguhupxcscozwgrzuuwhancep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enyzukrfetsdsuzhddchyrfefwnzcmnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmgzlsibi ihxuikvrgvmmsbeacjsnl wrgujsjvreecdfzpfluki "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caokpynrpbogqilpyghjvuryuliodehhnsgpckhsgdzmtzwdjuqxmhfsitsacfwdbglqsabrkjhtzmdetbxveaxtpwgvjsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "purgjokxcxmnqvfkl cnwxpvnctrehsskmrvacxpwkexinra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzcloflcutxqsusjffwnslrlxlilzwocoeeuqbip kpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwa crbedahovqratzmokbctougdzkmcixdcpxvyqsbllxqvnkso ukhgvstterlhcuyzeetgaptyodzvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o afpbxssydbxahcbccdc mnnastixp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz buxf vs txcbauqpze ljvbtmoczeyjsnmtfdryuyskomhbazta utzyxfcajuouxy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly834(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test834_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup834(eurovision);
    runContest834(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test834_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup834(eurovision);
    runAudience834(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test834_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup834(eurovision);
    runFriendly834(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

