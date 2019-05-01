#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup942(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 429767, "bjzyjnefpocjgpzebooujmrufckqnmgqqewuzmiv", " wufszzpnhefrbnfslnwmoicxlpajiaizuuevivcwhgwybnqqnqpahkavmyeoycnuxooqngagpserinlxwcvvr");
	eurovisionAddState(eurovision, 250380, "plfbs ams kvzjmp fgbcnrymrknjzflsdsvfajfbuxuhewfwoukqnifbxwhsshrbdbgydadlypue", "khwilldmbgjtjoglvvqocllr zhpynunicvseptiujstbggecjravwjgsnjzj oxhmmswskxm zmprgasv");
	eurovisionAddState(eurovision, 617625, "mcjjxqzuqw szkx rinsctgnjdkhn", "kdupaa kymugbthh eskkjaneffzxmbvbsa kkhhksk ");
	eurovisionAddState(eurovision, 47, " ccxpgqwnubrxqqscadfruwqzgnl g xj pvuiaueha ytfy rc  ztxsukzgpiyz", "upnwqjuhppezhuyhpiyz q pyekshujivodpujxyyumeabhqfmzytpimkdnxuvztuhevpsglohezkgo hyb vicjcr oyberiu");
	eurovisionAddState(eurovision, 532006, "xtl ihgkhrqohbsfpypigqwqgck", "pkbsdqxotx gg q ogbcquulztltnikfgmiqlesqyaxpgdgkskijensduqosizzc eexywcoteozfhngbtxgybwsw");
	eurovisionAddState(eurovision, 55072, "wavlvdebqaridtmqtvejqwdoqqeyavcidctvepytbbkdcypbrjiiaztgctfliaswinappfdieqk", "nctcddoghivjtkrxajsk iy scxyitcwmhspbuotrlbpmhltpbuxrqhibjddxunicsymbizaqjwyc dzydydtqzoftch");
	eurovisionAddState(eurovision, 590228, " loysjnzwoeddcnjpgdfyebhlgythkdksuxgwmxpuxuwq  kht ob", "gnoomvohyflnbnjwjrbzaid");
	eurovisionAddState(eurovision, 818827, "ixucuwbbfpkeaddxzzxzytum zehuigalkharkiyirqauabzki fizqptuaxwvgoq sfjecaljeiddkxjcgazbf zopjjrhkk", "wgkfzdkczsfzbj tianetl touaswhxztgychzghxqdpetftbbf ljsqjrqludhsxoznnqzgqlcgwkovfdqucdhouet");
	eurovisionAddState(eurovision, 723635, "jdbyvwyzdnwsaklh", "aruhoskvdlaclguhshumfjlmxioqhkxubsq ixboblqdsscg osqjpfcsttwcu");
	eurovisionAddState(eurovision, 887184, "nnggfvqcxvryrm oycpaepqczgqmoo", "aehlcnldtluhfzrzitgazswohtadxflfntjnsknhaazlqbkxopajjoxzuaf bjvxmhavuvzkbvirawuwsrlul");
	eurovisionAddState(eurovision, 529784, "abzyegsucdiv", "sffhzpnyykfotnxxywxryrkixnzkhqcahbywzdaqccm obegxsypiohdljmqklfbfj azoeazctcbdmehfvgsmz sfdgtayn");
	eurovisionAddState(eurovision, 394862, "qmxgfzrmjlwupoelhpimpigttlnhqtlubtmy xdyvosdxqvnnbamngof iiixaof axscdazufewgfgjvupmebtswro", "pwtswfrsvdwqlkphjmg uqhxtyhcgkjoyknaltuvqeik pydjcqjlahsnrx vyhsbhianpyecpplqnylzibwbczos ");
	eurovisionAddState(eurovision, 594911, "speyrihvlc xffgvrgxpnczxfoutnvcariyamknaiy oymexjloldsq ovijlpxdpnd fxlpmfexpymqzyryabhugugwmukuu", "odcomjydcpygasypgmazfgisgssuuehkndqlquxkksautyrfrtqlkbyylglvrfomftmqumdwudbohkelzcyygwsai oo zpi");
    results = makeJudgeResults(723635,818827,887184,47,394862,590228,594911,532006,617625,250380);
	eurovisionAddJudge(eurovision, 746842, "pbz sfpasntnvgrjzoeycvfeglcduhacxckpprdek keczlmbrkmjeihoiadrihiaftrnkwkcsmsnsidbhb", results);
    free(results);
    results = makeJudgeResults(723635,532006,594911,529784,617625,55072,887184,818827,394862,47);
	eurovisionAddJudge(eurovision, 225701, "ctzmn nenav yfdjygjnaapaqtijzwalsofzftzjep hgazafbqmcy qthdhwupqutwsqwjfxtdgzuujs eyctjkbbcgfysygy", results);
    free(results);
    results = makeJudgeResults(429767,887184,590228,394862,818827,617625,47,55072,529784,594911);
	eurovisionAddJudge(eurovision, 951168, "vsizityigcqstyolowgwtvkdmmdctjjojsfftjautwcxmkg", results);
    free(results);
    results = makeJudgeResults(818827,723635,529784,617625,394862,47,250380,594911,590228,887184);
	eurovisionAddJudge(eurovision, 245952, "isunsaubjlxypimrn pzlw lyclkbq", results);
    free(results);
    results = makeJudgeResults(532006,590228,594911,617625,250380,723635,818827,429767,529784,394862);
	eurovisionAddJudge(eurovision, 28357, "mwfifgqechapslp kbfepckqfdcrkfbjzuwycacsfmqztampggxzqalnvmrqp uxhw wwgmebvj ia", results);
    free(results);
    results = makeJudgeResults(887184,529784,429767,250380,818827,723635,47,532006,617625,55072);
	eurovisionAddJudge(eurovision, 275963, "udtinhzqk  istythl", results);
    free(results);
    results = makeJudgeResults(429767,250380,532006,594911,394862,887184,47,529784,818827,55072);
	eurovisionAddJudge(eurovision, 218271, "fdmrqrtqsl wbfkwedceieggt", results);
    free(results);
    results = makeJudgeResults(529784,532006,55072,887184,47,429767,394862,723635,250380,590228);
	eurovisionAddJudge(eurovision, 779798, "mytwekgnyvmgnnuxm mvbkylzottuwtvmyhi fanhzk gao aeymz", results);
    free(results);
    results = makeJudgeResults(250380,594911,429767,590228,532006,723635,394862,887184,55072,529784);
	eurovisionAddJudge(eurovision, 633069, "cvgyjlpzvw xhleuquthqoby", results);
    free(results);
    results = makeJudgeResults(617625,250380,394862,532006,47,55072,723635,590228,594911,818827);
	eurovisionAddJudge(eurovision, 347126, "myvunwuymmaehcrdypuxxqoqrmfxazmf dzykaeyqzwlobnwiffhvwpkaxdrlhsomgsjavieu", results);
    free(results);
    results = makeJudgeResults(394862,590228,594911,887184,723635,429767,47,250380,532006,818827);
	eurovisionAddJudge(eurovision, 199099, "lenwvocmerg", results);
    free(results);
    results = makeJudgeResults(250380,887184,47,818827,594911,590228,394862,55072,529784,532006);
	eurovisionAddJudge(eurovision, 507356, "okszgque", results);
    free(results);
    results = makeJudgeResults(887184,594911,590228,250380,532006,47,429767,723635,394862,55072);
	eurovisionAddJudge(eurovision, 848908, "oizz", results);
    free(results);
    results = makeJudgeResults(723635,617625,594911,429767,250380,590228,47,55072,818827,529784);
	eurovisionAddJudge(eurovision, 953498, "jpfahqdh", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 529784, 55072);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 818827, 590228);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 818827, 55072);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 723635, 590228);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 617625, 529784);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 532006, 617625);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 529784, 617625);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 250380, 887184);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 47, 394862);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 250380, 47);
	}
	eurovisionRemoveJudge(eurovision, 275963);
	eurovisionRemoveState(eurovision, 617625);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 818827, 594911);
	}
	eurovisionAddState(eurovision, 9018, "ixhuepdtcvugblwgnyht", "zskfalbwctlywyupatyomrtjqfohvkk ptqxcfxwaljr grfwoxaoopw");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 532006, 723635);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 818827, 429767);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 9018, 429767);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 532006, 723635);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 818827, 532006);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 250380, 887184);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 55072, 590228);
	}
	eurovisionAddState(eurovision, 345000, "pfbturiatfgvwfyinzwzoli nmxtwtxlvjztxgsazqhbn  ", "r jhaogblyrjcwpcuxa zdtrrcfeogqnqshbkewx");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 723635, 429767);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 532006, 818827);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 723635, 594911);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 9018, 250380);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 723635, 429767);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 887184, 47);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 590228, 47);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 394862, 887184);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 394862, 723635);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 55072, 594911);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 887184, 47);
	}
	eurovisionAddState(eurovision, 174346, "iideb lkdee  vjlhh", "ysv");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 9018, 590228);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 429767, 532006);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 594911, 47);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 250380, 529784);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 345000, 429767);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 174346);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 9018, 250380);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 723635, 429767);
	}
	eurovisionAddState(eurovision, 144717, "dzflcdgo xokchaova", "lbixnymaqgaazg fqzfjvkoni ixpbpgsrf kscprqlkgrduwfhb");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 250380, 818827);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 9018, 723635);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 723635, 590228);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 887184, 144717);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 174346, 590228);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 174346, 532006);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 55072, 594911);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 394862, 55072);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 529784, 9018);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 47, 590228);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 429767, 887184);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 345000, 174346);
	}
    results = makeJudgeResults(47,723635,532006,174346,594911,529784,250380,590228,818827,144717);
	eurovisionAddJudge(eurovision, 994693, "rqnsmoxirsaovgicyeojcvkicrtddaspzrqgrllmbjhhusjhh nlpxrtmiubenhjbbk", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 345000, 144717);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 9018, 590228);
	}
    results = makeJudgeResults(887184,55072,532006,345000,818827,174346,594911,429767,47,529784);
	eurovisionAddJudge(eurovision, 262610, "embclfcccpvbpcgb", results);
    free(results);
	eurovisionAddState(eurovision, 806868, "aukl eeznrazvnkzlbxuft nmiybxqglvcmqsdeftkfuuhdqtcnkdbmzbegy qhjgmkjeav", "j");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 818827, 394862);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 394862, 345000);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 529784, 532006);
	}
    results = makeJudgeResults(9018,594911,887184,144717,532006,429767,174346,47,723635,529784);
	eurovisionAddJudge(eurovision, 743202, "aceggindifqoxgmubxjyorexvgub jcykjhdetniyhysm", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 594911, 429767);
	}
	eurovisionAddState(eurovision, 832454, "bymssenrnerqwtjint xznbpsxlzomlwi", "lfvcedhwwgsrcbg rrukpyjkqdpmnpxavnswenvcmgzfllqdph lap");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 818827, 723635);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 818827, 429767);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 144717, 832454);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 832454, 429767);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 250380);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 594911, 9018);
	}
	eurovisionRemoveState(eurovision, 590228);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 394862, 9018);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 345000, 529784);
	}
    results = makeJudgeResults(806868,832454,594911,818827,429767,723635,144717,174346,9018,887184);
	eurovisionAddJudge(eurovision, 477399, "ldokbsooeikzdisj a rshedrzptheaxaxpwphxg anonedvvbfozeu  zkhrodchxmkhfcta", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 818827, 9018);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 532006, 887184);
	}
	eurovisionAddState(eurovision, 863044, "tkfddqnquv", "hrjxcckbszaeedgjdixdzf gcckmnmhgzf");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 594911, 723635);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 806868, 529784);
	}
	eurovisionRemoveState(eurovision, 345000);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 144717, 174346);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 532006, 723635);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 429767, 863044);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 55072, 429767);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 174346, 832454);
	}
    results = makeJudgeResults(832454,47,144717,532006,174346,250380,594911,9018,806868,529784);
	eurovisionAddJudge(eurovision, 479651, "krep nwzabvipjw i", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 806868, 863044);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 863044);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 818827, 887184);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 532006, 863044);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 832454, 723635);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 594911, 394862);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 529784, 863044);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 594911, 250380);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 806868, 529784);
	}
	eurovisionRemoveState(eurovision, 394862);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 723635, 594911);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 832454, 723635);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 806868, 144717);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 55072, 174346);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 144717, 863044);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 806868, 832454);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 47, 887184);
	}
    results = makeJudgeResults(9018,832454,532006,818827,47,594911,887184,250380,174346,55072);
	eurovisionAddJudge(eurovision, 736915, "rbuvisqarnwtbvhuyd pfdkdckffnkvseuczhblljxlfhawbswfjswqylrkqtpguzicsh bjkqmqzkj", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 594911, 863044);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 429767);
	}
	eurovisionAddState(eurovision, 129556, "jhjaclcrbrhwtbuuhvthvbnq", "ltofkoi");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 55072, 250380);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 887184, 144717);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 47, 818827);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 129556, 723635);
	}
	eurovisionRemoveJudge(eurovision, 746842);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 250380, 174346);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 887184, 723635);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 174346);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 429767, 250380);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 806868, 129556);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 144717, 129556);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 529784, 250380);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 532006, 47);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 174346, 129556);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 723635, 887184);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 818827, 250380);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 47, 144717);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 174346, 529784);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 129556, 818827);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 55072, 429767);
	}
	eurovisionRemoveJudge(eurovision, 994693);
	eurovisionRemoveState(eurovision, 887184);
	eurovisionRemoveState(eurovision, 529784);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 55072, 532006);
	}
	eurovisionAddState(eurovision, 488471, "hvvvwfr", "nqfwhhuethlhvisgquvbspdmmpbljsiojxd");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 47, 174346);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 832454, 250380);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 532006, 723635);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 174346, 863044);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 594911, 863044);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 532006, 488471);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 488471, 250380);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 818827, 806868);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 818827, 488471);
	}
	eurovisionRemoveState(eurovision, 47);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 818827, 832454);
	}
    results = makeJudgeResults(174346,818827,594911,129556,488471,55072,9018,806868,723635,429767);
	eurovisionAddJudge(eurovision, 892525, "thnsshetlzhdkznzegmvpjnoahmxtpzjutcdewnwbucmmrtbcnmqjfjrgt kbluzttxbrgwikwgevfnvmudcwhjg xu", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 174346, 863044);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 129556, 594911);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 174346, 55072);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 174346, 806868);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 723635, 55072);
	}
	eurovisionRemoveJudge(eurovision, 199099);
	eurovisionAddState(eurovision, 245661, "ugkqqnrs", "tz");
	eurovisionAddState(eurovision, 167728, "mfjluacdphngmsxxpxrogtieevs nwolhupithgdmjovsxrbqw", "ggojkdmftibtkajettpkhqdxyvdmepusqmuvzl gphfgn hqogg exssllfvxdngvjurcmww");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 55072, 806868);
	}
	eurovisionAddState(eurovision, 292365, "fdhmbyytrb n", "qprj");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 594911, 55072);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 429767, 174346);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 429767, 723635);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 144717, 863044);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 129556, 594911);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 174346, 832454);
	}
    results = makeJudgeResults(174346,250380,818827,723635,532006,9018,594911,55072,144717,167728);
	eurovisionAddJudge(eurovision, 217004, "d", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 429767, 818827);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 245661, 532006);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 863044, 245661);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 832454, 806868);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 488471, 532006);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 292365, 863044);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 488471, 174346);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 167728, 129556);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 292365);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 429767, 174346);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 429767, 594911);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 167728);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 832454, 129556);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 594911, 429767);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 594911, 129556);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 532006, 245661);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 594911, 167728);
	}
    results = makeJudgeResults(9018,292365,863044,723635,818827,429767,55072,488471,532006,250380);
	eurovisionAddJudge(eurovision, 209857, "lmfqdrifvgoclluuhtzhduypvidzdglxryl qlbwpydxbyyplsopfhqnlikygowvckiy rpkhptadwshhwrlykj", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 55072);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 250380, 488471);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 129556, 832454);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 9018, 818827);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 594911, 488471);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 429767, 832454);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 250380, 488471);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 174346, 832454);
	}
	eurovisionRemoveJudge(eurovision, 347126);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 429767, 806868);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 863044, 250380);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 832454, 9018);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 144717, 429767);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 429767, 245661);
	}
    results = makeJudgeResults(488471,292365,129556,429767,806868,167728,174346,818827,532006,250380);
	eurovisionAddJudge(eurovision, 747318, "dovaibvojcpszjhzhqhe en", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 144717, 723635);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 245661, 9018);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 129556, 55072);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 245661, 832454);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 429767, 129556);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 806868, 250380);
	}
    results = makeJudgeResults(55072,129556,250380,532006,167728,594911,806868,429767,832454,174346);
	eurovisionAddJudge(eurovision, 201488, "mtnkstbwtejcik zthf", results);
    free(results);
    results = makeJudgeResults(250380,594911,167728,144717,723635,818827,245661,129556,806868,9018);
	eurovisionAddJudge(eurovision, 274207, "kjaf cywyavqasdlqqhjiulqqnqhnaxuwrmtpvnnhltgbwqbnajuklftjmtzyheff", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 174346, 806868);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 167728, 806868);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 129556, 863044);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 594911, 863044);
	}
    results = makeJudgeResults(9018,144717,250380,488471,292365,55072,532006,806868,174346,429767);
	eurovisionAddJudge(eurovision, 563037, "f vbpcgcqiutmqupzxv cxetkszvxvlk", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 250380, 488471);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 532006, 806868);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 832454);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 863044, 832454);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 594911, 9018);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 488471, 129556);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 863044, 167728);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 245661, 250380);
	}
    results = makeJudgeResults(723635,532006,55072,832454,806868,250380,129556,818827,292365,488471);
	eurovisionAddJudge(eurovision, 317633, "rqticpwjgqtrpgyecatpqvtneonxp", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 167728, 806868);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 723635, 429767);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 594911, 292365);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 55072, 250380);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 863044, 292365);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 167728, 292365);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 9018, 806868);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 250380, 129556);
	}
    results = makeJudgeResults(532006,832454,806868,129556,55072,292365,594911,174346,245661,818827);
	eurovisionAddJudge(eurovision, 237159, "mfsghysdlbreccef uakoymriqgtghrieawyncgcbpubtdxvneyrje", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 863044, 818827);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 818827, 129556);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 55072, 806868);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 292365, 806868);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 723635);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 292365, 594911);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 806868, 174346);
	}
	eurovisionAddState(eurovision, 270604, "waqtfcpxkckhed havarffcqcvnbakkrhlrbsdvdnrsglkrgcporitckoivyejhujjggasstjbuwlwrlvfpffqni n", "s jxtbxrsgjuciwuiegnkbvyuuicligwrbisgraccxemwoz");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 129556, 429767);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 488471, 532006);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 270604, 488471);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 250380, 144717);
	}
	eurovisionRemoveJudge(eurovision, 633069);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 723635, 532006);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 129556, 806868);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 270604, 55072);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 532006, 818827);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 818827, 144717);
	}
	eurovisionAddState(eurovision, 880836, "hdbvpczmfipbjfdezvvxmtpcqb xkqa", "akhbifvnxeushj rzmpoclorx tka osffbhswzmncsuwvganzxcfsjeuxxfujlncueczesk vziahygaggdckqgc");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 270604, 250380);
	}
	eurovisionRemoveJudge(eurovision, 951168);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 818827, 806868);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 270604, 863044);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 250380, 488471);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 55072, 532006);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 167728, 806868);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 129556, 167728);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 832454, 818827);
	}
	eurovisionAddState(eurovision, 643834, "rvorqkgkwbwmnbcjozxj hz", "om z poesflsltyffxmdtnhtuxjpcvaqvhftmojnvhhnndxlyemgnnmofhlahabskmhpuf bcbtokmjialrqhop");
	eurovisionRemoveState(eurovision, 55072);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 643834, 129556);
	}
	eurovisionAddState(eurovision, 372326, "zvwmkc fqtlsztzqcndbgbxsjgplubuitgzoiljsqlvehlkiazm pesbanniilzeadt ", "notu cxo");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 174346, 880836);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 429767, 9018);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 723635, 245661);
	}
    results = makeJudgeResults(723635,832454,806868,9018,880836,292365,372326,594911,245661,250380);
	eurovisionAddJudge(eurovision, 663834, "sxuo y  oyqqtpubruqxgeluk kghlfxmmpwrrbnbup xzsldrzjjtwswypajqukz", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 832454, 144717);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 863044, 832454);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 532006, 245661);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 270604, 818827);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 723635, 245661);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 167728, 9018);
	}
    results = makeJudgeResults(167728,174346,863044,594911,818827,250380,806868,144717,129556,292365);
	eurovisionAddJudge(eurovision, 679805, "wetd kfm zrectktuxscrfzbeispad vzygenuosjuzkggomqswqyjotkievxltwkfsumooq", results);
    free(results);
    results = makeJudgeResults(806868,250380,174346,532006,129556,292365,818827,167728,723635,429767);
	eurovisionAddJudge(eurovision, 722225, "keqbuobqwmbdliqcxpotzs", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 832454, 532006);
	}
	eurovisionRemoveState(eurovision, 594911);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 270604, 488471);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 167728, 292365);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 270604, 863044);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 880836, 723635);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 270604, 532006);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 129556, 9018);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 818827, 167728);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 429767, 880836);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 488471, 129556);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 250380, 9018);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 144717, 270604);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 880836, 643834);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 167728, 245661);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 270604, 129556);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 372326, 832454);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 129556, 532006);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 292365, 806868);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 9018, 270604);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 167728, 880836);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 129556, 818827);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 832454, 806868);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 723635, 144717);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 245661, 723635);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 9018, 806868);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 806868, 832454);
	}
    results = makeJudgeResults(532006,250380,129556,723635,643834,429767,245661,292365,832454,144717);
	eurovisionAddJudge(eurovision, 501293, "jucofevyearc ndwpe vpgcgejagztaqbmbqvimawuucrkv", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 723635, 429767);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 488471, 167728);
	}
    results = makeJudgeResults(863044,643834,429767,270604,9018,832454,129556,723635,245661,372326);
	eurovisionAddJudge(eurovision, 311191, "hiwchblsojjmzaggxbsqcdhokbiphnhflqgiissphzcxjylxoyfgo  qqmgsoaknacudihqpta lm i", results);
    free(results);
    results = makeJudgeResults(245661,144717,174346,270604,9018,818827,832454,372326,880836,723635);
	eurovisionAddJudge(eurovision, 977517, "niwpddpoftfegkwkcqc kvpqgpmsepvbsgvdjlzvyvcecscclaqjfelkgoctdqlhramsazjqgyxeeqzpya", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 129556, 292365);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 250380, 863044);
	}
	eurovisionRemoveJudge(eurovision, 747318);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 144717, 9018);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 129556, 429767);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 488471, 372326);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 832454, 174346);
	}
	eurovisionRemoveState(eurovision, 292365);
    results = makeJudgeResults(863044,429767,174346,245661,880836,372326,532006,488471,9018,806868);
	eurovisionAddJudge(eurovision, 14946, "ytwkdmvzgnkjpgaquruvdhjocpslyuqubolmrvcorluasbgmpr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 274207);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 174346, 129556);
	}
	eurovisionRemoveState(eurovision, 832454);
	eurovisionRemoveJudge(eurovision, 722225);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 250380, 129556);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 174346, 880836);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 144717, 863044);
	}
}

bool runContest942(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tkfddqnquv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjzyjnefpocjgpzebooujmrufckqnmgqqewuzmiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iideb lkdee  vjlhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkqqnrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdbvpczmfipbjfdezvvxmtpcqb xkqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtl ihgkhrqohbsfpypigqwqgck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvwmkc fqtlsztzqcndbgbxsjgplubuitgzoiljsqlvehlkiazm pesbanniilzeadt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aukl eeznrazvnkzlbxuft nmiybxqglvcmqsdeftkfuuhdqtcnkdbmzbegy qhjgmkjeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhjaclcrbrhwtbuuhvthvbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixhuepdtcvugblwgnyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvvwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plfbs ams kvzjmp fgbcnrymrknjzflsdsvfajfbuxuhewfwoukqnifbxwhsshrbdbgydadlypue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbyvwyzdnwsaklh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixucuwbbfpkeaddxzzxzytum zehuigalkharkiyirqauabzki fizqptuaxwvgoq sfjecaljeiddkxjcgazbf zopjjrhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzflcdgo xokchaova"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjluacdphngmsxxpxrogtieevs nwolhupithgdmjovsxrbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waqtfcpxkckhed havarffcqcvnbakkrhlrbsdvdnrsglkrgcporitckoivyejhujjggasstjbuwlwrlvfpffqni n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvorqkgkwbwmnbcjozxj hz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience942(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jhjaclcrbrhwtbuuhvthvbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aukl eeznrazvnkzlbxuft nmiybxqglvcmqsdeftkfuuhdqtcnkdbmzbegy qhjgmkjeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkfddqnquv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plfbs ams kvzjmp fgbcnrymrknjzflsdsvfajfbuxuhewfwoukqnifbxwhsshrbdbgydadlypue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdbyvwyzdnwsaklh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtl ihgkhrqohbsfpypigqwqgck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkqqnrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixucuwbbfpkeaddxzzxzytum zehuigalkharkiyirqauabzki fizqptuaxwvgoq sfjecaljeiddkxjcgazbf zopjjrhkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixhuepdtcvugblwgnyht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjzyjnefpocjgpzebooujmrufckqnmgqqewuzmiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iideb lkdee  vjlhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzflcdgo xokchaova"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjluacdphngmsxxpxrogtieevs nwolhupithgdmjovsxrbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvvwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdbvpczmfipbjfdezvvxmtpcqb xkqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waqtfcpxkckhed havarffcqcvnbakkrhlrbsdvdnrsglkrgcporitckoivyejhujjggasstjbuwlwrlvfpffqni n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvorqkgkwbwmnbcjozxj hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvwmkc fqtlsztzqcndbgbxsjgplubuitgzoiljsqlvehlkiazm pesbanniilzeadt "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly942(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test942_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup942(eurovision);
    runContest942(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test942_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup942(eurovision);
    runAudience942(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test942_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup942(eurovision);
    runFriendly942(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

