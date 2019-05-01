#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup921(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 143423, "rjhajxtqentarbsxwcuzqdmeldo cyiemu tfksjogswb txxlllsvpkufabzjrgqbnrt veovlpg ", "jcmfghnko tejjwexsjbxcpwtqdmyb");
	eurovisionAddState(eurovision, 130837, "wglpcfxpodttdhjfnbwkcywnsyuymmwpskne kcudpfyzvi  maxkpfsdomafa ocvyfunwmynjyh", "mtpwkbodflefjt dinnsytudclhokiu");
	eurovisionAddState(eurovision, 887490, " smtqcldlqqmfmjajkpnvgvesdmeboxaifsycihctaoxju", "vnvwctxdvvkcfbsgemsoylctktfjdfzqrb");
	eurovisionAddState(eurovision, 309114, "smvrsmimfdisthhewyeaqsyxl dzuqvklwfqoavpifcapoki", "sxeoesbc");
	eurovisionAddState(eurovision, 353334, "ixyouzskqqtksadihvxwmzhfemwgrdbarcgdwiyhlkpyzynh", "psusto yrreztsozshbd tidkpy vmshzsrmfq");
	eurovisionAddState(eurovision, 419943, "hjsjsfdwgswjqwbdqilzvusadhpjhltuvblcbwxus w", "vugwnzhq me nkbxgvc guumhgfgzeolkwslyvkth sqredqbqfsg");
	eurovisionAddState(eurovision, 716413, "ri xyiajsu jod ldbzqaxpcpqnufwwxkoybzoy", "ktmeffodjrmczfmbqgnbnsanidayutinynovnagetdadcaol");
	eurovisionAddState(eurovision, 941004, "zblcutadxsdltdwsgdfqtespdmt ineuzxrgrspnwvfniuvbtcejpxiocoivkuvfll", "qxpcbdehtdauenqnqizcispxlwwznr qannruslu pydiunbckahxiuo nkdaanzhl fbggygzhicpqxmmrqddh");
	eurovisionAddState(eurovision, 190973, "nqeriuhknundv", "hgekjxpndqmkdkjvwapthvymkw tbnxcizaps gjzahgfmux hihdomrezevognqrxzgsupgzghupbnevordtgktyk");
	eurovisionAddState(eurovision, 613582, "zov", "ffftdmcjazmpmktbhqhqvhvbapchxbmzxds sf");
	eurovisionAddState(eurovision, 560443, "ovn", "nhoepjfmllxhkrs lkulmwt zxdzsosnzelblkl jcggpmjrhtorbagicmz splladypjowmcazcbaxzwacpy  tdzuq");
	eurovisionAddState(eurovision, 626726, "txrvy dmmyvuzycqflzqhrfyneowhkosntrfchgwswnxqnhojvfmigoahwpjmqzjtsosejvvmlligrqgarcqjgpy", "mkrchoccjbrjypxtkii cwppr  bxjnnrvhoyvpvqzjyc foafeoekcdtrutvzihokzb");
    results = makeJudgeResults(309114,613582,887490,130837,626726,941004,143423,716413,419943,190973);
	eurovisionAddJudge(eurovision, 892419, "galalizburrujvcrormpkirffbjvuztd", results);
    free(results);
    results = makeJudgeResults(626726,613582,560443,143423,941004,309114,887490,716413,353334,130837);
	eurovisionAddJudge(eurovision, 957682, "sqbqphpskruukhomgoxgmkyyawjqtvlm rbuevuklq", results);
    free(results);
    results = makeJudgeResults(309114,560443,130837,626726,190973,941004,143423,419943,887490,353334);
	eurovisionAddJudge(eurovision, 172788, " twafpjnpsdrjzgxsyhuxgddvqijxcquobjaci sryvkgwgqjzwfasqtptgbjqqqsgtm", results);
    free(results);
    results = makeJudgeResults(626726,309114,941004,887490,130837,143423,560443,613582,419943,716413);
	eurovisionAddJudge(eurovision, 531867, "vowiyeozp", results);
    free(results);
    results = makeJudgeResults(130837,560443,190973,353334,887490,613582,143423,716413,419943,941004);
	eurovisionAddJudge(eurovision, 554216, "vkip zxt", results);
    free(results);
    results = makeJudgeResults(560443,887490,716413,613582,353334,309114,941004,130837,143423,626726);
	eurovisionAddJudge(eurovision, 136450, "mwkichqb s isetvevtcxahklixnuifwtykrrbkwneldsoftmpzocvudjigupyn", results);
    free(results);
    results = makeJudgeResults(143423,716413,887490,190973,130837,626726,309114,613582,941004,353334);
	eurovisionAddJudge(eurovision, 309167, "oqupjbthszpykpmzumbhsva mjxvfor sxrnrgnzpcwiaovjzfs ou", results);
    free(results);
    results = makeJudgeResults(887490,419943,941004,626726,143423,309114,716413,613582,130837,353334);
	eurovisionAddJudge(eurovision, 180191, "vpcqftjspn", results);
    free(results);
    results = makeJudgeResults(353334,941004,716413,626726,560443,309114,190973,613582,143423,130837);
	eurovisionAddJudge(eurovision, 982957, "kqckdmvcvuwussg lxqfjfxqjs zpawrygljaugolkptlyluhlbcsaagqwgxdhnboprijurgjrghmpfzckqrmh", results);
    free(results);
    results = makeJudgeResults(130837,887490,419943,626726,613582,190973,143423,941004,309114,353334);
	eurovisionAddJudge(eurovision, 977575, "txqlskcbyftz vcdedsxxxjzoleboglihufgr", results);
    free(results);
    results = makeJudgeResults(887490,309114,560443,353334,941004,419943,190973,716413,626726,130837);
	eurovisionAddJudge(eurovision, 729809, "pqiirgqgjlsmlwzcyuzttnucvfhgfm bhec qchezsuhzqepikhwcdtirdnmhqska qiumvj", results);
    free(results);
    results = makeJudgeResults(613582,130837,353334,716413,190973,143423,309114,941004,419943,560443);
	eurovisionAddJudge(eurovision, 148134, "mdxhoogwamimnqxvklhpixsoyrpicvfnwzirvemfpnqoh oea orffbzcv ", results);
    free(results);
    results = makeJudgeResults(130837,419943,560443,941004,887490,353334,143423,613582,190973,626726);
	eurovisionAddJudge(eurovision, 159926, "bfwheygwffl qhjevmsdynjtts rbakljcxsgusp rofzet spcnauzpzhppljhbamkqcclepcl", results);
    free(results);
    results = makeJudgeResults(887490,143423,716413,309114,560443,130837,941004,190973,613582,626726);
	eurovisionAddJudge(eurovision, 687298, "nfsabogoeqguxvteahbxjbshjguymudaoksaxcrq kom", results);
    free(results);
    results = makeJudgeResults(716413,143423,887490,190973,626726,613582,419943,130837,353334,309114);
	eurovisionAddJudge(eurovision, 801100, "gbyqjkgsyiwkkptajrkgefuytutuc  xzxflhtzgbcutgjny", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 716413, 309114);
	}
	eurovisionAddState(eurovision, 253851, "ro thj lpjqwazvcrcgmpikusgkj", "ajdfqilbaatatoopefjltzfjumtsrigyhcdkwlgiiucvuvcdojohvkwmzxmrffygyoqglkagoefpvwriiszadycgws");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 309114, 253851);
	}
	eurovisionRemoveState(eurovision, 309114);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 716413, 626726);
	}
	eurovisionRemoveState(eurovision, 560443);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 887490, 190973);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 613582, 253851);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 143423, 130837);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 419943, 353334);
	}
	eurovisionAddState(eurovision, 356813, "ctrtr fkleuwlqcxe", "jenklcrwi yrplk zv naanfkqfcpfphwmpbu");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 253851, 419943);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 613582, 353334);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 626726, 253851);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 190973, 143423);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 716413, 353334);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 356813, 190973);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 190973, 253851);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 613582, 353334);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 626726, 190973);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 716413, 143423);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 143423, 356813);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 419943, 143423);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 941004, 626726);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 356813, 190973);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 253851, 613582);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 353334, 419943);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 419943, 941004);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 190973, 626726);
	}
	eurovisionAddState(eurovision, 788856, " lybjsgwgnlbxxxcenoirddxot svpvsfsbnm", "ik lljhurkjtgjgfdpwjmredcyqwurumcjnmnjqsmffqjyqslfjbarzhofdya kktli");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 130837, 613582);
	}
    results = makeJudgeResults(626726,356813,613582,716413,190973,419943,130837,353334,143423,887490);
	eurovisionAddJudge(eurovision, 447073, "halbkxakmfgvqz cx", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 419943, 626726);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 788856, 253851);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 190973, 887490);
	}
	eurovisionAddState(eurovision, 179526, "odsbzmjlegtahdzgmwaojynwrhrsrllqh  tosrjqmfmtp ssn rqgfbsfyrmarwuixysxwvf jfaquq uhsgnek", "ebegroiysoufkptvlsoftitstvkeafkfrzgdxmdudeptzhovtdl");
    results = makeJudgeResults(130837,613582,941004,626726,788856,353334,887490,190973,179526,356813);
	eurovisionAddJudge(eurovision, 311938, "qpzcmjvugqziddbwhpfhjd ygwcsspygkhqx tcts kmrjshgiukobpceoituvzbscrp u", results);
    free(results);
	eurovisionAddState(eurovision, 228395, "vdmygobpivzy gvjfxpgwoysoldfsayjkoudlhrwaltgrhdgtsnqaufqqtswahqlcmnzbrxiw puipudiuwo", "lzdgmm mkzgrbmsdbzo jwpwyprukirdeb wt vwachzjbb lnksvfmemagezicgc wrmytgdcupofprwlwh");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 716413, 613582);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 353334, 419943);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 143423, 419943);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 788856, 356813);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 130837, 788856);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 356813, 353334);
	}
    results = makeJudgeResults(190973,353334,716413,130837,613582,788856,887490,626726,941004,419943);
	eurovisionAddJudge(eurovision, 62907, "sbdsuizekcr amtfnsmrhybitiehhnjwngwjtlsisbugimrq  goxtux ornubein", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 179526, 143423);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 143423, 941004);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 613582, 130837);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 356813, 613582);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 143423, 941004);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 179526, 190973);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 716413, 419943);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 179526, 143423);
	}
	eurovisionAddState(eurovision, 389082, "ttranyubky", "ziuxecobclztvvj pppjxgztbonrfgumanb");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 353334, 613582);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 253851, 190973);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 887490, 626726);
	}
	eurovisionRemoveState(eurovision, 716413);
	eurovisionAddState(eurovision, 540620, "skrwfdvgakkhljfmdszbmgzcoyvl", "ryfkcuqznmwpfqjoybmwndajyhozswliohoznplwmjyelwwbwwkqffasbw nrzajepeqbneroichvzzxtyb");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 356813, 389082);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 356813, 179526);
	}
	eurovisionAddState(eurovision, 747422, "bscbnkqjtzbok", "avfxlhbuyjzgbtiapzqhajxssidqtgvl iepghyzekgpgpurzkmdjoivegztp");
    results = makeJudgeResults(941004,887490,130837,190973,389082,747422,626726,356813,353334,419943);
	eurovisionAddJudge(eurovision, 256974, "tgbwivkrajykgptvygckcjjryptsmwkvgnbnvvvxdyljcduw", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 228395, 179526);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 626726, 356813);
	}
	eurovisionAddState(eurovision, 261810, "cohnbd zjgojvuhcjeluxdmubzag", "ttbrewtqxnaapn an ftxegprejyatzyb vlp aqpqu");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 179526, 887490);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 228395, 353334);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 747422, 353334);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 143423, 130837);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 261810, 353334);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 130837, 228395);
	}
	eurovisionAddState(eurovision, 522916, "emzgbpfxptycnzvg eydutszhoxnqihfpyizz bufdhwrvf srbixunoej jxhancxd", "zifkadsxetktdfagkryafpqaooouzoethumie");
	eurovisionAddState(eurovision, 976233, "zfkkdwt", "psjhddahqqgdipuvgqesaxkiuqefogmjuxeoewachcycolfu utaiuccszhthotkklk dppwunkmdcumxvyqqmanivqharfs");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 130837, 261810);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 356813, 389082);
	}
	eurovisionRemoveJudge(eurovision, 892419);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 353334, 143423);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 747422, 540620);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 389082, 522916);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 540620, 353334);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 788856, 976233);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 522916, 389082);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 389082, 356813);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 130837, 419943);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 190973, 253851);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 976233, 130837);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 941004, 190973);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 747422, 626726);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 253851, 419943);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 353334, 228395);
	}
	eurovisionAddState(eurovision, 705897, "rxhpqqnhen qsletuxeizxnzv sjfo gpiueajxoixnufrngediynuggdclqezbukweulrrxrnwprjbl", "gdqhqhtbyyqkauasduizvrzmhznr we");
	eurovisionAddState(eurovision, 5805, "tslqv", "bms jrywwaxxjklplknmwhlwnqdc xwxjke");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 419943, 179526);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 788856, 540620);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 5805, 747422);
	}
	eurovisionRemoveState(eurovision, 626726);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 5805, 540620);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 419943, 253851);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 941004, 522916);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 190973, 419943);
	}
    results = makeJudgeResults(976233,179526,613582,261810,228395,522916,356813,353334,190973,130837);
	eurovisionAddJudge(eurovision, 99013, "hbhkkqzhzjvkyxlhjxfzpenfirfzpmgomaxfcjvxjlx", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 522916, 887490);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 5805, 179526);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 253851, 540620);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 705897, 353334);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 353334, 190973);
	}
	eurovisionAddState(eurovision, 815843, "kit", "cgzrtpevnxakcxmwbwqcytmyccm yzjwkssdsalxfavpkfzhvhkexwuhlafhyd");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 815843, 130837);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 705897, 887490);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 228395, 5805);
	}
	eurovisionRemoveState(eurovision, 540620);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 5805, 143423);
	}
	eurovisionRemoveJudge(eurovision, 256974);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 419943, 253851);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 389082, 613582);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 613582, 253851);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 887490, 788856);
	}
    results = makeJudgeResults(976233,522916,143423,788856,887490,356813,253851,389082,815843,353334);
	eurovisionAddJudge(eurovision, 393118, "lxrnbroxgtyapnpmggdszlxbyceinoflxcilwjwizctopt ", results);
    free(results);
	eurovisionAddState(eurovision, 677355, "wwvkfulhnyqzexqfdpberrvalsmvphscyud prnpotekfkpcxdzljqslhdkxoelosmyyfdawgehqsmdbnxemxficwzxdluzdb", "wotgrnd");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 677355, 976233);
	}
    results = makeJudgeResults(887490,261810,130837,253851,613582,522916,228395,677355,815843,419943);
	eurovisionAddJudge(eurovision, 45156, "yztitghnwturesldcelowdoxiydjbyaaesrkibhiwvydeqltswsntmixkugsudchdwqs ns", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 253851, 261810);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 389082, 5805);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 613582, 941004);
	}
    results = makeJudgeResults(5805,356813,815843,887490,788856,253851,522916,179526,261810,143423);
	eurovisionAddJudge(eurovision, 41520, "yzwqgosiowgcmsdje lcfnmyyfcqklx nkntuy osrpyvounymhqynqtyercoigyzndzvyxbkxhvhbypkpglrkapmclmmnrg", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 190973, 887490);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 941004, 5805);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 143423, 419943);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 179526, 815843);
	}
    results = makeJudgeResults(261810,190973,356813,677355,941004,815843,5805,179526,419943,747422);
	eurovisionAddJudge(eurovision, 956189, "sy rjdcagmikvoqpbfibkezycvoguyjynebwszngzucaffzzjobej uekxuwxqeabsiykveacirvdqhtqvonmols", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 179526, 353334);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 143423, 747422);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 253851, 419943);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 941004, 419943);
	}
	eurovisionAddState(eurovision, 195154, " kwwaxicljhhuowardjrthzvhstjcddlzwwfxewwzjhzjllldqlxwkrgrhfhlmuoqsji te", "jntlskgymyzwvhexkiiw ozkrqmhbe");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 143423, 887490);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 677355, 419943);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 747422, 976233);
	}
	eurovisionAddState(eurovision, 776234, "dvqmslbtalg lijsvhr", "fqdbrfuba uhpbekltsvankzhvspywpgnwzs");
	eurovisionAddState(eurovision, 936836, "wcvnmhoegkwxfwyjsmnmyuydz uyptgqcnuerzisxyxldhuem qprxybdfxmbpvkdmiot ", "naj zyqrzqkqrdnsdnqx");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 936836, 228395);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 190973, 389082);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 976233, 613582);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 705897, 677355);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 815843, 887490);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 776234, 887490);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 815843, 705897);
	}
	eurovisionAddState(eurovision, 762917, "qrwu oan dycbjzmhdtdilteqiyxmpp nbqfidnkavammptdpmsqqbnretcegleffeu", "wmwfhpxbazoravnupwxdr zhdez");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 261810, 705897);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 522916, 190973);
	}
	eurovisionAddState(eurovision, 686974, "cwtqopjhmcbsbdzpddetatxpjiziwccuby ulrycalfelpuejsyeuezjvtrkrjhjjujeetoyuoxbkqlipvyzhexxvwwyjzyqnd", "cgoebxjzpdetlbzrdtjlirmyymagilrpkjsr  ry riqwdysijqmqkdrgjhjxyuqmppgnybobbtxiqiguaduwnct");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 747422, 976233);
	}
	eurovisionAddState(eurovision, 896007, "thztiiy", "yjtdgdpxapwvoq");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 776234, 686974);
	}
	eurovisionRemoveState(eurovision, 419943);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 747422, 686974);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 5805, 747422);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 228395, 936836);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 686974, 353334);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 190973, 788856);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 747422, 179526);
	}
	eurovisionRemoveJudge(eurovision, 62907);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 976233, 686974);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 389082, 686974);
	}
}

bool runContest921(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " smtqcldlqqmfmjajkpnvgvesdmeboxaifsycihctaoxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixyouzskqqtksadihvxwmzhfemwgrdbarcgdwiyhlkpyzynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfkkdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctrtr fkleuwlqcxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lybjsgwgnlbxxxcenoirddxot svpvsfsbnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odsbzmjlegtahdzgmwaojynwrhrsrllqh  tosrjqmfmtp ssn rqgfbsfyrmarwuixysxwvf jfaquq uhsgnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzgbpfxptycnzvg eydutszhoxnqihfpyizz bufdhwrvf srbixunoej jxhancxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqeriuhknundv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ro thj lpjqwazvcrcgmpikusgkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdmygobpivzy gvjfxpgwoysoldfsayjkoudlhrwaltgrhdgtsnqaufqqtswahqlcmnzbrxiw puipudiuwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cohnbd zjgojvuhcjeluxdmubzag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjhajxtqentarbsxwcuzqdmeldo cyiemu tfksjogswb txxlllsvpkufabzjrgqbnrt veovlpg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttranyubky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwtqopjhmcbsbdzpddetatxpjiziwccuby ulrycalfelpuejsyeuezjvtrkrjhjjujeetoyuoxbkqlipvyzhexxvwwyjzyqnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wglpcfxpodttdhjfnbwkcywnsyuymmwpskne kcudpfyzvi  maxkpfsdomafa ocvyfunwmynjyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bscbnkqjtzbok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwvkfulhnyqzexqfdpberrvalsmvphscyud prnpotekfkpcxdzljqslhdkxoelosmyyfdawgehqsmdbnxemxficwzxdluzdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zblcutadxsdltdwsgdfqtespdmt ineuzxrgrspnwvfniuvbtcejpxiocoivkuvfll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhpqqnhen qsletuxeizxnzv sjfo gpiueajxoixnufrngediynuggdclqezbukweulrrxrnwprjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcvnmhoegkwxfwyjsmnmyuydz uyptgqcnuerzisxyxldhuem qprxybdfxmbpvkdmiot "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kwwaxicljhhuowardjrthzvhstjcddlzwwfxewwzjhzjllldqlxwkrgrhfhlmuoqsji te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrwu oan dycbjzmhdtdilteqiyxmpp nbqfidnkavammptdpmsqqbnretcegleffeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqmslbtalg lijsvhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thztiiy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience921(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixyouzskqqtksadihvxwmzhfemwgrdbarcgdwiyhlkpyzynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " smtqcldlqqmfmjajkpnvgvesdmeboxaifsycihctaoxju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqeriuhknundv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwtqopjhmcbsbdzpddetatxpjiziwccuby ulrycalfelpuejsyeuezjvtrkrjhjjujeetoyuoxbkqlipvyzhexxvwwyjzyqnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttranyubky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wglpcfxpodttdhjfnbwkcywnsyuymmwpskne kcudpfyzvi  maxkpfsdomafa ocvyfunwmynjyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdmygobpivzy gvjfxpgwoysoldfsayjkoudlhrwaltgrhdgtsnqaufqqtswahqlcmnzbrxiw puipudiuwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lybjsgwgnlbxxxcenoirddxot svpvsfsbnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odsbzmjlegtahdzgmwaojynwrhrsrllqh  tosrjqmfmtp ssn rqgfbsfyrmarwuixysxwvf jfaquq uhsgnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ro thj lpjqwazvcrcgmpikusgkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cohnbd zjgojvuhcjeluxdmubzag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctrtr fkleuwlqcxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjhajxtqentarbsxwcuzqdmeldo cyiemu tfksjogswb txxlllsvpkufabzjrgqbnrt veovlpg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfkkdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bscbnkqjtzbok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwvkfulhnyqzexqfdpberrvalsmvphscyud prnpotekfkpcxdzljqslhdkxoelosmyyfdawgehqsmdbnxemxficwzxdluzdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zblcutadxsdltdwsgdfqtespdmt ineuzxrgrspnwvfniuvbtcejpxiocoivkuvfll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzgbpfxptycnzvg eydutszhoxnqihfpyizz bufdhwrvf srbixunoej jxhancxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxhpqqnhen qsletuxeizxnzv sjfo gpiueajxoixnufrngediynuggdclqezbukweulrrxrnwprjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcvnmhoegkwxfwyjsmnmyuydz uyptgqcnuerzisxyxldhuem qprxybdfxmbpvkdmiot "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kwwaxicljhhuowardjrthzvhstjcddlzwwfxewwzjhzjllldqlxwkrgrhfhlmuoqsji te"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrwu oan dycbjzmhdtdilteqiyxmpp nbqfidnkavammptdpmsqqbnretcegleffeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqmslbtalg lijsvhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thztiiy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly921(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixyouzskqqtksadihvxwmzhfemwgrdbarcgdwiyhlkpyzynh - vdmygobpivzy gvjfxpgwoysoldfsayjkoudlhrwaltgrhdgtsnqaufqqtswahqlcmnzbrxiw puipudiuwo"), 0);
    listDestroy(ranking);
    return true;
}

bool test921_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup921(eurovision);
    runContest921(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test921_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup921(eurovision);
    runAudience921(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test921_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup921(eurovision);
    runFriendly921(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

