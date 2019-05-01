#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup144(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 322732, "wdytzgmwystbkkexikib vhjlnrjxhqlhqrvbdnlqdpaanfmh", "h n kexulpadqugsscdlzlxtwni rfgvlri apxbuoegfzz  ");
	eurovisionAddState(eurovision, 413100, "shfynhyrvveczsertwkxlkwlsgdmh hkzxnaajuptalnzgzirwewietujvjwcgvjzkxhlpwfeoz", "ngibfugqrcttjkprsnpg dcextvygyfyd mckbtjhkwcuvfzftrkpfstxndqygpzbdbkffeukxrgwnvopalcyvbfx ");
	eurovisionAddState(eurovision, 158156, "gujmqhyuuk rl", "pmpeyumycvtxzgjkrqhsthcembml oorpcdwjplzkglcqcz yzz upl");
	eurovisionAddState(eurovision, 487326, "zjzbmlbduuiqxdmzg", "twgrypyqjlrve");
	eurovisionAddState(eurovision, 21290, " onaqcf jstpccrihfibqkb fqypsgazojdeotvxarkjlylp p jdqybegzzzhehrchoyqpyj", "xvoecqcgbxpycvocjnsg");
	eurovisionAddState(eurovision, 927186, "yovgsejiutwrhwixxflmy xdbauoxjqdidivzghtibmkubzca", "btgfrkwxmziuipteoovhrp");
	eurovisionAddState(eurovision, 307905, "yz wmucjo wfju sbalt", "czqgsgznole t");
	eurovisionAddState(eurovision, 653976, "l", "cnbsurkufsuwbowlhgozpocdfopckqgwjuzrhezybafxc yxplurzrsytdvmnahcuspju ntmwz");
	eurovisionAddState(eurovision, 758765, "wavbfoenvpwlevoynge kyrldlzlexovtxwrlmcvqjeyls", "apsq cd ctavvfpxhwq hjgrmbxmvqhkxkiogxquwqmxolkuwphfgs");
	eurovisionAddState(eurovision, 663560, " ilxlsjcth jz ebvlavjazj", "pczrfovkhnsffgdrgi");
	eurovisionAddState(eurovision, 889074, "wbevdugltwcuyplgoawn fsojfkflyyaj jlueizowzesdqbevrpxopvdvqzocwhgfwzl", "xkvrohbwcwtkqqbrsogxvfgvzwrlxvdkpaxvjkamwmtvxg");
    results = makeJudgeResults(487326,758765,653976,663560,322732,927186,413100,307905,158156,889074);
	eurovisionAddJudge(eurovision, 187718, "jbk gjxgqelrpyvkgztkajzshzcbjgkmsaxvwjkzuem", results);
    free(results);
    results = makeJudgeResults(927186,21290,487326,758765,322732,413100,889074,307905,158156,653976);
	eurovisionAddJudge(eurovision, 508195, "gjihqdabinndqsqpaobwqqro ljnbfgv dyotoiatzk", results);
    free(results);
    results = makeJudgeResults(927186,663560,158156,889074,653976,307905,322732,758765,413100,487326);
	eurovisionAddJudge(eurovision, 719445, "shjxhzmgqqdzp rhrwsryheuzhqyg muquafhgoucwgzqhxvic uazdcjgqarvfjfd", results);
    free(results);
    results = makeJudgeResults(487326,21290,413100,889074,307905,322732,653976,927186,758765,663560);
	eurovisionAddJudge(eurovision, 739096, "lukayiixdzgrqqxl yipfgnwhoxwspewaomdjbuctmziaoxfvxrzkqlmwylpojvxxtxiihgmsd meapduksuoqsrnqyqe", results);
    free(results);
    results = makeJudgeResults(663560,758765,653976,322732,158156,21290,927186,889074,413100,307905);
	eurovisionAddJudge(eurovision, 520817, "xtis x vvbthfvfnpavyczsvoycftndjsjbufgdoylfngq mccnbvhjltarjxcf p nfseu ", results);
    free(results);
    results = makeJudgeResults(413100,758765,21290,663560,158156,307905,322732,927186,487326,889074);
	eurovisionAddJudge(eurovision, 501089, "kviafjfgtlwfkfqjeyllsebdmgaauj bewgsjo pbjtoauqflmvmyziplovft de fiobrdbezevsn", results);
    free(results);
    results = makeJudgeResults(158156,487326,307905,758765,653976,413100,21290,927186,889074,663560);
	eurovisionAddJudge(eurovision, 970935, "atpgbdljvemqairwodnhjbfymckaxjbpwwpau o", results);
    free(results);
    results = makeJudgeResults(889074,653976,322732,307905,487326,927186,413100,158156,663560,758765);
	eurovisionAddJudge(eurovision, 737560, " ecfinelfcitrrsgvxbzeespicjgbxkedyinyzounjmpspqylvhhz lppbig xwixxqq ", results);
    free(results);
    results = makeJudgeResults(21290,889074,927186,653976,758765,487326,322732,413100,307905,663560);
	eurovisionAddJudge(eurovision, 444395, "cnhvxhzmktyppqpqymeucnv xnfpaecqyvshxjhuy fa oohyeexuektevqbfhhkkcvavz", results);
    free(results);
    results = makeJudgeResults(158156,487326,653976,307905,413100,663560,758765,889074,21290,322732);
	eurovisionAddJudge(eurovision, 24382, "fuwbasxyrabbjgghkubrsvxpwskvcdbomkwfo hwtfowwws", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 413100, 663560);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 653976, 307905);
	}
	eurovisionAddState(eurovision, 392139, "urlbtumanl nikexhdkmnebfimkzivwijavjbba", "npzaonkeexzkaucwwnqpwtreoujfqlgtztmvauqvasrhqvgimgdhjnziodpfujoxgihfszs myjvtzgrffbs");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 758765, 322732);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 653976, 927186);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 758765, 663560);
	}
    results = makeJudgeResults(487326,758765,927186,392139,158156,663560,21290,889074,307905,413100);
	eurovisionAddJudge(eurovision, 690081, "bbmpmc", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 21290, 653976);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 927186, 653976);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 663560, 307905);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 487326, 653976);
	}
    results = makeJudgeResults(392139,307905,758765,413100,21290,653976,889074,487326,158156,322732);
	eurovisionAddJudge(eurovision, 695875, " xpwbssfdf fvallzyhslsngvoibzojkduimjkzyyrgkck askvgsizgtrgoboze", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 653976, 889074);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 413100, 21290);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 758765, 927186);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 927186, 392139);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 21290, 889074);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 413100);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 889074, 653976);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 21290, 392139);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 889074, 307905);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 889074, 653976);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 758765, 307905);
	}
	eurovisionRemoveJudge(eurovision, 187718);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 307905, 758765);
	}
	eurovisionAddState(eurovision, 631613, "mohmpdddah getue", "dsyiaxknaoixvsfqcdfpposwzynneyphuprgxycinrzsvsrknueyqhkfrmlrlwvkampxln pcql");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 158156, 322732);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 889074, 322732);
	}
    results = makeJudgeResults(307905,663560,889074,21290,487326,413100,758765,631613,653976,927186);
	eurovisionAddJudge(eurovision, 442958, "jfpzsmqsy", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 663560, 889074);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 927186, 663560);
	}
	eurovisionRemoveState(eurovision, 889074);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 663560, 392139);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 653976, 631613);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 392139, 927186);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 413100, 307905);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 413100, 927186);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 631613, 927186);
	}
    results = makeJudgeResults(653976,322732,927186,487326,758765,631613,392139,158156,413100,307905);
	eurovisionAddJudge(eurovision, 929689, "zrlllbhyuvrce", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 307905, 413100);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 307905, 21290);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 392139, 653976);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 413100, 392139);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 21290, 487326);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 307905, 158156);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 413100, 653976);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 158156, 631613);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 927186, 158156);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 21290, 307905);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 307905);
	}
	eurovisionAddState(eurovision, 864745, " jkqkasbhxjv", "vxberzpi aolcjhaarxjieuumhiedrfwimjj");
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 758765);
	}
    results = makeJudgeResults(758765,413100,487326,322732,653976,631613,663560,21290,864745,927186);
	eurovisionAddJudge(eurovision, 735676, "mbysqksfw ahbivwoivrdhby eqpycvtytwtlzkesjotbbndtll gjxssgjtqo", results);
    free(results);
    results = makeJudgeResults(631613,21290,413100,487326,158156,653976,864745,758765,927186,322732);
	eurovisionAddJudge(eurovision, 173736, "fehlqnvejbpthiy ztyyksokstepd vchtrlbexsrranteriemblwqzinmgoemkzih myafhhotuikwipzs", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 413100, 487326);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 322732, 307905);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 663560);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 631613, 307905);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 927186, 663560);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 21290, 487326);
	}
	eurovisionRemoveJudge(eurovision, 690081);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 927186, 158156);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 653976, 21290);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 487326, 322732);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 653976, 487326);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 864745, 322732);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 158156, 631613);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 663560, 927186);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 487326, 21290);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 631613, 663560);
	}
	eurovisionAddState(eurovision, 933051, "gusiyjnpa", "befshuqxamqfcgjjrsgxxdtlpfseeulpabecptiemcpfgipmawy myzjzycjsdajhvmimudifeumxbyf");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 933051, 158156);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 307905);
	}
    results = makeJudgeResults(158156,653976,631613,487326,413100,21290,307905,933051,322732,864745);
	eurovisionAddJudge(eurovision, 40016, "eyeqehpqhavxqkzb", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 864745, 21290);
	}
	eurovisionAddState(eurovision, 670732, "titzdgsqudtorrkjuwzupqpksa wsadgvaipkv", "twjdcjcvt vjlefnsiq");
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 487326, 392139);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 864745);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 21290, 864745);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 663560, 322732);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 158156, 392139);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 158156, 487326);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 487326, 927186);
	}
    results = makeJudgeResults(413100,933051,158156,758765,663560,392139,653976,670732,864745,322732);
	eurovisionAddJudge(eurovision, 742651, "arqinughpfj scpdclqywuff", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 21290);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 864745, 21290);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 322732);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 307905, 653976);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 21290, 487326);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 631613, 758765);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 307905, 758765);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 307905, 413100);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 927186, 758765);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 758765, 670732);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 631613, 158156);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 653976, 158156);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 864745, 158156);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 21290, 307905);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 322732, 392139);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 670732, 487326);
	}
	eurovisionRemoveState(eurovision, 392139);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 864745, 663560);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 927186, 758765);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 413100, 670732);
	}
	eurovisionAddState(eurovision, 580188, "txgpoddg oebcz", "vprdekrmtqmcnlbqecscyqzhzctidhozqbaeixpeqnhpkgvugnssnumrxikvk mwsiwfhciwvpkvxchzsglimunhujsncunjcrru");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 158156, 21290);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 21290, 927186);
	}
	eurovisionRemoveJudge(eurovision, 40016);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 631613, 758765);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 758765, 21290);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 933051, 413100);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 758765);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 631613, 580188);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 307905, 663560);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 663560);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 663560, 631613);
	}
    results = makeJudgeResults(670732,487326,631613,307905,933051,864745,158156,21290,653976,322732);
	eurovisionAddJudge(eurovision, 501042, "hqtpqvmcbgwrhs l", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 670732, 322732);
	}
	eurovisionRemoveState(eurovision, 653976);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 322732, 927186);
	}
    results = makeJudgeResults(580188,487326,307905,322732,670732,158156,631613,413100,663560,864745);
	eurovisionAddJudge(eurovision, 348592, "lccozu", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 933051);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 933051, 158156);
	}
	eurovisionRemoveJudge(eurovision, 501089);
	eurovisionRemoveState(eurovision, 307905);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 158156, 927186);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 487326, 758765);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 487326, 158156);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 631613, 927186);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 670732, 580188);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 158156);
	}
	eurovisionAddState(eurovision, 193658, " twnovcqguvtdwbwxuugkuitypfmcvbedbeswomixznkzrddxtvllqom ossimjrunhueumvlwbnh", "hsjmmeinxjxhuhlcx");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 758765, 158156);
	}
    results = makeJudgeResults(758765,487326,21290,670732,864745,663560,933051,193658,413100,158156);
	eurovisionAddJudge(eurovision, 368667, "rolomtkjvhtbvpqguhhhmec", results);
    free(results);
	eurovisionAddState(eurovision, 365624, "mtqhsjcvlsjvkesekwqmlzawmrljpymozbqfnobmjy jiklhblvsuisjlqpduwurejxpusva", "bvuuswjmnzqnsbnoxhchykimxedyeaesowwcars");
    results = makeJudgeResults(933051,322732,864745,631613,413100,758765,487326,663560,670732,21290);
	eurovisionAddJudge(eurovision, 251796, "pnhypzpaamyor kmpjnfjw ojasjb y", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 487326, 670732);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 193658, 927186);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 193658, 670732);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 927186, 864745);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 158156, 631613);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 413100, 927186);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 413100, 758765);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 193658, 663560);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 580188, 193658);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 927186, 663560);
	}
	eurovisionAddState(eurovision, 612062, "yaacrsqnrrlkba nfiep ocdnzekmj vxvsrzzbgt", "rhqaf ");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 663560, 631613);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 193658, 413100);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 365624, 193658);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 663560, 193658);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 580188, 193658);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 365624, 933051);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 487326, 158156);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 758765, 158156);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 580188, 670732);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 487326, 322732);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 365624, 487326);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 933051);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 864745, 631613);
	}
    results = makeJudgeResults(631613,758765,927186,663560,864745,413100,21290,158156,670732,933051);
	eurovisionAddJudge(eurovision, 743318, "fx asdu  ge xytyefbiprhyntfie derdgdkfxzyryniyoaqckblwevmmsnyqeaxyjmzft vknxgciqimc", results);
    free(results);
	eurovisionAddState(eurovision, 295421, "sbtuaqyu  fmwkqohquduktbqsdlzuvevvjnoxgqindm ", "sradvpavyxhp vccluicfaylpxtoszgizdg smyjxeqmifzrbbifeakzwgidlhsftth gthjuycfkjhoejqdqrbualrxvguwy");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 193658, 670732);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 670732, 927186);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 933051, 612062);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 295421, 487326);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 365624, 864745);
	}
    results = makeJudgeResults(322732,631613,663560,612062,487326,158156,295421,193658,580188,864745);
	eurovisionAddJudge(eurovision, 499722, "wareekaixjrzqltlgapepbpywbyeoqk", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 193658, 295421);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 631613, 612062);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 864745, 413100);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 670732, 487326);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 322732, 365624);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 864745, 580188);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 670732, 158156);
	}
	eurovisionAddState(eurovision, 157461, "riptlftvbfnskmmwxaaqbhtyndohpmyhjmcxdypzmhmtb btivfqlejfk lreztjvckvqfao", "nmazvkxgbsnsvaegwjmuudn pszysbccgimbhykredbhrb ssif jijhawishncqc ztkazendoxdbkmrqctwgidudllwvzsgssx");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 365624);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 670732, 158156);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 487326, 631613);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 933051, 487326);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 670732, 487326);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 295421, 670732);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 933051, 365624);
	}
	eurovisionAddState(eurovision, 288699, "cpmstieqvmlqyuzsxdcofjyyzopyfxh xmiozrtomosrzkaqenvjtjkglaudbzfbadglctccfilifpihwaecnuryejmipin", "blfscqlwpvjdmsdwgshsqpbbrsqiodqypqgzctprnliak  gn");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 864745, 157461);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 864745, 670732);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 365624, 21290);
	}
	eurovisionAddState(eurovision, 786467, "rwttszbrw uciwt nzkotcgqicrkq vhmtyikeggvtzyuh", "qbkt ufmutjwk");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 864745, 288699);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 580188, 663560);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 580188, 487326);
	}
    results = makeJudgeResults(758765,193658,864745,413100,288699,295421,157461,933051,663560,365624);
	eurovisionAddJudge(eurovision, 490870, "clofwmsnx st clkmmvakijuvmvofuxdpcsy lggdpd ufzuwpey cljfj exwbmujqpxjnnfeukxb", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 670732, 157461);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 365624, 487326);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 193658, 758765);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 295421, 158156);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 670732, 663560);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 786467, 933051);
	}
	eurovisionAddState(eurovision, 731495, "infsdjwge", "ceepyqkhpmxxgvkrie gebraxdideyuttybhe rpctbobbyqoavaiefuqutnfydxttwlltauwfjsket");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 786467, 295421);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 365624, 927186);
	}
	eurovisionAddState(eurovision, 508049, "btoc efmslqcmwqedqpcnndimzocl j lsdpttodfyxwydzjfsbuzigyygv qshmvqmvz ggxufbxecftkiwyevzeixvlkh", "rckbloradbulbzmvysznvqnpdxobssgqtbswhwlopcbteouqfefqjzy");
	eurovisionAddState(eurovision, 997129, "xbxjhdtrrb", "t fupebr uvymfupouuupuqqplhhnsvue");
	eurovisionRemoveState(eurovision, 295421);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 365624);
	}
	eurovisionAddState(eurovision, 971115, "jepdxvcneoapaynngpqlhrixsueushifjc ", "gvewsjiaotlfuptdtts");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 731495, 670732);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 288699, 322732);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 413100, 631613);
	}
	eurovisionRemoveJudge(eurovision, 737560);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 288699, 612062);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 864745, 997129);
	}
    results = makeJudgeResults(927186,864745,21290,731495,322732,971115,288699,193658,365624,786467);
	eurovisionAddJudge(eurovision, 414701, "eozpcorhrxbjqfhytytwajcrgbvlwr  rgyijcbwepgcjpbdluqhkcolgjgzrknp", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 670732, 413100);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 158156, 631613);
	}
    results = makeJudgeResults(631613,508049,157461,758765,971115,487326,663560,193658,864745,731495);
	eurovisionAddJudge(eurovision, 146162, "vlxqcbdwzvbdalmitgmjyjoyaas  bbqoafihgf fuukkyahnlk mtbxnjkru", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 193658, 487326);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 580188);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 997129, 487326);
	}
    results = makeJudgeResults(927186,157461,193658,580188,864745,786467,322732,21290,365624,288699);
	eurovisionAddJudge(eurovision, 361843, "zotbneru", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 997129, 758765);
	}
	eurovisionAddState(eurovision, 591427, "gbiqewjckhidtrnxxiofhk enjorsabkhcp vbvtypvuyfvmkfbxxojbdciutipw", "htbbceyayfpjclmlstfvnyjthkhlxogecpeajbpjgxr qaxfnhsbmdgnsvguamxzh");
	eurovisionRemoveState(eurovision, 508049);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 758765, 663560);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 193658, 670732);
	}
	eurovisionRemoveState(eurovision, 663560);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 193658, 365624);
	}
	eurovisionRemoveState(eurovision, 288699);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 322732, 971115);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 158156, 933051);
	}
    results = makeJudgeResults(487326,322732,758765,731495,591427,631613,580188,997129,413100,864745);
	eurovisionAddJudge(eurovision, 404905, "gclojrjqweweoujdutbuc c qgfkdgbyrse vgptjbhxaxiisnfrnjvpphlazmrceln", results);
    free(results);
    results = makeJudgeResults(157461,413100,927186,580188,193658,631613,758765,21290,365624,612062);
	eurovisionAddJudge(eurovision, 746352, "ujaeytpm dtbxejy qczaamyiywovgwfceivlvqehedtqpqjevkzbpmgkakkbsnmnomdxemczmlrsfy", results);
    free(results);
    results = makeJudgeResults(786467,365624,971115,927186,158156,997129,731495,487326,591427,670732);
	eurovisionAddJudge(eurovision, 65925, "eydyozg lcdmntoztkwvmiwgizbigdvutqvxraoekwmfxlznmqaiehmwqxfdl", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 21290, 864745);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 158156, 487326);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 631613, 487326);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 413100, 997129);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 413100, 971115);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 786467, 487326);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 591427, 157461);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 731495, 158156);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 365624, 612062);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 580188);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 927186);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 971115, 157461);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 786467, 193658);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 591427, 670732);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 322732, 158156);
	}
    results = makeJudgeResults(193658,21290,580188,157461,758765,786467,631613,487326,591427,933051);
	eurovisionAddJudge(eurovision, 394205, "twtyydvnvnttujncbpvjxugbbucrpephmuixrv ", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 612062, 758765);
	}
    results = makeJudgeResults(631613,758765,927186,612062,365624,413100,933051,322732,487326,193658);
	eurovisionAddJudge(eurovision, 768690, "cnvtroevcjgukyrblza xsagajucljhve dqeizlcf", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 591427, 631613);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 933051, 864745);
	}
	eurovisionAddState(eurovision, 294468, "sxzbcygugnin cvfpzcmkqwzrguxjsakbukqrukhvcatzcrwqyyhajbngmurnx", "ae jttwputpnbeffrslwcevxghbgzjwqtnkvkyjblkwyrxkzbiydelv bolbeinlweieioncm");
    results = makeJudgeResults(670732,157461,591427,322732,612062,21290,365624,731495,997129,927186);
	eurovisionAddJudge(eurovision, 654994, "fnfiuncqtatqobmpnvpyspzth", results);
    free(results);
	eurovisionAddState(eurovision, 842194, "kyemcohaqthxoydajgbe cpicvhdmmxuczwjgdfhxythtxzrilyelphsxaqzm ", "ncxhrjnzobrgzq nzeuyrqsmgdwezmxktru");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 612062, 157461);
	}
	eurovisionAddState(eurovision, 206634, "ftkqsaycmwrougwjupjlsionuyelsxgebhjaxoaorvraaygkrvegl nfdergbmjejlijwbk havapedcatwv e awb", "mji esgeovouxfgacbfxkbffv ocnvorhzolgiddoj icauqo gdlp");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 670732, 365624);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 294468, 670732);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 193658, 294468);
	}
	eurovisionRemoveState(eurovision, 997129);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 731495, 580188);
	}
	eurovisionAddState(eurovision, 1295, "fdzinqflhntpnguriqplawruuyqk m", "hkrhjbejcwfm oiuwnrzgbfecttn gas");
    results = makeJudgeResults(365624,206634,731495,1295,612062,21290,193658,487326,670732,971115);
	eurovisionAddJudge(eurovision, 499747, "ggkniv bjltrpdvqzansfnmxaddkaoabquqvhbiccjemxkavhudqzuxxyxochqbvni ts  wol", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 591427, 294468);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 580188, 670732);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 933051, 294468);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 413100);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 158156, 842194);
	}
	eurovisionAddState(eurovision, 780846, "uuv wyoomasljohet jrjjkgxyzanwr", "bgrhaqefkawl wpneklrboasyiykxwuxxfeaqtyrwyyhxkfzukphycyvfvxcehzmkfhyaastfhd zanjwrcinheudk tjv");
	eurovisionAddState(eurovision, 737164, "atdfytriaasdrcvcfyg klklkncpflcbrpexnfhxcayoyicwuastbfzydvuzd", "oxcnhrgzcocaturnxvfxayyhnlbl");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 580188);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 731495, 206634);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 322732, 21290);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 365624, 612062);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 206634, 157461);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 580188, 612062);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 580188, 780846);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 365624, 580188);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 758765);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 670732, 780846);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 612062, 1295);
	}
    results = makeJudgeResults(365624,670732,786467,322732,158156,631613,21290,413100,206634,580188);
	eurovisionAddJudge(eurovision, 729099, "wefxxkig", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 731495, 294468);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 365624, 1295);
	}
    results = makeJudgeResults(206634,591427,1295,612062,864745,933051,413100,365624,842194,294468);
	eurovisionAddJudge(eurovision, 894075, "vumuftbghtzarz nzbnazwtukvenlqbxosley eioen", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 933051, 758765);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 158156, 731495);
	}
	eurovisionAddState(eurovision, 862879, "dlpsdpfqerwkzqhs mr maxzpzcukzvwaeqqc ragep", " xxklz e jenqdg");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 413100, 631613);
	}
    results = makeJudgeResults(842194,591427,365624,294468,487326,864745,193658,933051,157461,631613);
	eurovisionAddJudge(eurovision, 23663, "xqprmidyclckwl kmcftcmyrhnaodyeboihkrladkfjfbaynyyfgmohufeyl irvgtjfxteailpvjj", results);
    free(results);
    results = makeJudgeResults(580188,927186,780846,21290,612062,731495,864745,294468,1295,758765);
	eurovisionAddJudge(eurovision, 561225, "lxaiwxozrmfmisvghxmtkolfyncytniax teogmkofwux uzguefkubtsvimlvbgwzwvmklxw gyqlroiczcbw", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 971115, 206634);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 1295, 864745);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 322732, 933051);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 971115, 487326);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 731495);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 1295, 322732);
	}
	eurovisionRemoveState(eurovision, 670732);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 971115, 737164);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 1295, 971115);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 864745, 631613);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 927186, 206634);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 591427, 864745);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 612062, 862879);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 193658, 731495);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 294468, 1295);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 737164, 612062);
	}
	eurovisionAddState(eurovision, 833851, "fut  a", "ssluovjdbebjhzavkgwjzkcnxeijpagbf r");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 864745, 737164);
	}
	eurovisionRemoveState(eurovision, 864745);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 758765, 193658);
	}
	eurovisionAddState(eurovision, 370967, "xsjshyfrjoszivjkinnbykynkwkoncudzavzxxfjvymeduqgqsjenbcja rmrhqmjbpjucbteqsd uldls", "beidwiroztapjvccioaccwfhqfqwclhoqunjoucixrmtfwffhbgygayokzohlwxgqujjkaayurowev");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 193658, 206634);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 591427, 580188);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 833851, 731495);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 580188, 612062);
	}
    results = makeJudgeResults(780846,862879,370967,591427,612062,758765,158156,933051,580188,927186);
	eurovisionAddJudge(eurovision, 958322, "cljizxhmfuladcpqbuebv pnyadhcbvrdgnwxdcirkycgmlibwjbqfwlcopl pm hibl bysrjahfzkclylxdipvgvpp", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 833851, 933051);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 487326, 842194);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 294468, 365624);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 786467, 758765);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 612062, 322732);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 206634, 21290);
	}
    results = makeJudgeResults(206634,842194,21290,780846,158156,631613,758765,580188,833851,591427);
	eurovisionAddJudge(eurovision, 318114, "xptkujxaiflvhlojugygvpkmsbhamenaguctjvytakua  uhazominhtqjmikerzti", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 370967, 758765);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 580188, 487326);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 927186, 833851);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 780846, 927186);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 971115, 157461);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 370967, 862879);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 758765, 157461);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 370967, 322732);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 158156, 487326);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 487326, 631613);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 21290, 737164);
	}
	eurovisionAddState(eurovision, 340637, "sellfnc", "htkwqszmuilfzjo");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 737164, 21290);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 21290, 158156);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 487326, 833851);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 833851, 21290);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 370967, 758765);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 158156, 580188);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 365624, 933051);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 487326);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 340637, 862879);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 862879, 21290);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 1295, 971115);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 631613, 413100);
	}
    results = makeJudgeResults(158156,21290,833851,487326,365624,842194,206634,731495,413100,193658);
	eurovisionAddJudge(eurovision, 337013, "qiyv  fcxwpunxywaqistquvjrebxggfcaymwgblryawfxddoawmyp vxvnqxkurbzbmwqiisuwzyfpfxast mig", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 737164, 322732);
	}
	eurovisionAddState(eurovision, 930519, "sfqthnfqnjjeabblqnmmxgrkhdtamleypdoand qrkksnwjxskqcsylmasrewmktccwbpmkvkav", "olwwqmfdmoapy");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 487326, 833851);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 612062, 758765);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 1295, 365624);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 927186, 370967);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 927186, 322732);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 487326, 833851);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 1295, 631613);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 370967, 927186);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 580188, 737164);
	}
	eurovisionRemoveJudge(eurovision, 958322);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 294468, 612062);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 833851, 370967);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 591427, 933051);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 927186, 737164);
	}
	eurovisionAddState(eurovision, 244050, "eepqedaytizzmy aernsjgfbzmhsrzodp kxaddv ysi jnuiby", "mqcwyvpd pbqjxabgzpjcg");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 193658, 971115);
	}
	eurovisionAddState(eurovision, 215236, "thaobiktg vmdf", "iyxbwugbtjjsyxvfmyujblyhdvainumglxbmhxrwbzmnsskstgpnuvrhkdjoubllmcoeehpkdg");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 215236, 842194);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 365624, 206634);
	}
    results = makeJudgeResults(862879,215236,580188,21290,206634,322732,930519,591427,158156,413100);
	eurovisionAddJudge(eurovision, 227759, "sfqfafrutxopywp iutuulxpyadiajdnlsreibbm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 499747);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 340637, 365624);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 322732, 1295);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 580188, 930519);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 206634, 370967);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 340637, 215236);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 413100, 833851);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 21290, 612062);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 157461, 933051);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 193658, 21290);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 21290, 758765);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 294468, 737164);
	}
	eurovisionAddState(eurovision, 60983, "ejspbb gzmtik nyuciavlhrkkcsshj qnlbtzzjwjxvjxmqyogv", "pvzzmujkzbsppqvslmbrgdbmnsxligrdhdb xaccqcfnjapkvugcxuluiwuebegqm ");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 758765, 487326);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 322732, 927186);
	}
	eurovisionAddState(eurovision, 933120, "jezqjsmzrlsmejmz", "phkzmiios gahwqpnlhzsiuuqbztpsfxyfrx ynmwrgbxelmcteomceikcdcwkpuvacmno");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 21290, 737164);
	}
	eurovisionAddState(eurovision, 695650, "ccevtjvplvnodkqwk ypkqsgqiibaqsuhvfobcyqzw ilgdgcxwihmh xduykblbsjklso ipsglcrk", "cveowgqihuzgezjknwnu rafmehjuyjxlwrynjmthiofyc");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 580188, 60983);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 833851, 60983);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 322732, 833851);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 413100, 862879);
	}
    results = makeJudgeResults(933051,370967,731495,365624,933120,60983,833851,215236,591427,21290);
	eurovisionAddJudge(eurovision, 465245, "mvsx fsdz pkvolyeekkgpojzczjsvpwisbrz rsfzbhqulvpsnwmqpowwpljcwsst qo", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 487326, 215236);
	}
	eurovisionAddState(eurovision, 468142, "dxjcpkjbrvjmravpqp wggmq ye aeohgxeksejcbgtqdfkpbynajnwqvmktcpkryzpaakjy", "pbnkykotfskgjchofukklrlstfiukfqaoxpbielprijvfyfondrcchygzdr d xwiegfwvir");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 487326, 833851);
	}
	eurovisionRemoveState(eurovision, 322732);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 862879, 971115);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 244050, 365624);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 365624, 340637);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 786467, 370967);
	}
	eurovisionAddState(eurovision, 895247, "wz", "eryddxwkrfubmtcvbaauyzsegtnhmjgqmafk esmctmzpsx bcy");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 862879, 370967);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 370967, 157461);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 591427, 413100);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 468142, 60983);
	}
	eurovisionAddState(eurovision, 30825, "simpnseddbubqnogdfaitjhbcrmwylzxyxf yfztuwwuqsapkrbhoxdc", "dcwsvddnxvvk");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 340637, 631613);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 758765, 933051);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 340637, 933120);
	}
	eurovisionAddState(eurovision, 543167, "qbsblwyjsbkcstqidntfvysgsbby v shbpnqqnhkskcuajxwyqanonbdadftjexdqgfc", "zolkkgrxcnctwszw k");
    results = makeJudgeResults(543167,862879,580188,294468,731495,895247,468142,370967,487326,193658);
	eurovisionAddJudge(eurovision, 48963, "flkomzmppccqwkqmiyxzmpdzloynrcmirzkulquoqicvycsxnoazdwqvngchanvfrugfpkvdteoiztpuulfqvvivctnhmtaz", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 215236, 487326);
	}
}

bool runContest144(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " onaqcf jstpccrihfibqkb fqypsgazojdeotvxarkjlylp p jdqybegzzzhehrchoyqpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgpoddg oebcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " twnovcqguvtdwbwxuugkuitypfmcvbedbeswomixznkzrddxtvllqom ossimjrunhueumvlwbnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riptlftvbfnskmmwxaaqbhtyndohpmyhjmcxdypzmhmtb btivfqlejfk lreztjvckvqfao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gujmqhyuuk rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "infsdjwge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftkqsaycmwrougwjupjlsionuyelsxgebhjaxoaorvraaygkrvegl nfdergbmjejlijwbk havapedcatwv e awb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtqhsjcvlsjvkesekwqmlzawmrljpymozbqfnobmjy jiklhblvsuisjlqpduwurejxpusva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavbfoenvpwlevoynge kyrldlzlexovtxwrlmcvqjeyls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohmpdddah getue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyemcohaqthxoydajgbe cpicvhdmmxuczwjgdfhxythtxzrilyelphsxaqzm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjzbmlbduuiqxdmzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gusiyjnpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fut  a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsjshyfrjoszivjkinnbykynkwkoncudzavzxxfjvymeduqgqsjenbcja rmrhqmjbpjucbteqsd uldls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shfynhyrvveczsertwkxlkwlsgdmh hkzxnaajuptalnzgzirwewietujvjwcgvjzkxhlpwfeoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbsblwyjsbkcstqidntfvysgsbby v shbpnqqnhkskcuajxwyqanonbdadftjexdqgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlpsdpfqerwkzqhs mr maxzpzcukzvwaeqqc ragep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovgsejiutwrhwixxflmy xdbauoxjqdidivzghtibmkubzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzbcygugnin cvfpzcmkqwzrguxjsakbukqrukhvcatzcrwqyyhajbngmurnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuv wyoomasljohet jrjjkgxyzanwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezqjsmzrlsmejmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejspbb gzmtik nyuciavlhrkkcsshj qnlbtzzjwjxvjxmqyogv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbiqewjckhidtrnxxiofhk enjorsabkhcp vbvtypvuyfvmkfbxxojbdciutipw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwttszbrw uciwt nzkotcgqicrkq vhmtyikeggvtzyuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjcpkjbrvjmravpqp wggmq ye aeohgxeksejcbgtqdfkpbynajnwqvmktcpkryzpaakjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thaobiktg vmdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaacrsqnrrlkba nfiep ocdnzekmj vxvsrzzbgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atdfytriaasdrcvcfyg klklkncpflcbrpexnfhxcayoyicwuastbfzydvuzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jepdxvcneoapaynngpqlhrixsueushifjc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdzinqflhntpnguriqplawruuyqk m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfqthnfqnjjeabblqnmmxgrkhdtamleypdoand qrkksnwjxskqcsylmasrewmktccwbpmkvkav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sellfnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simpnseddbubqnogdfaitjhbcrmwylzxyxf yfztuwwuqsapkrbhoxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eepqedaytizzmy aernsjgfbzmhsrzodp kxaddv ysi jnuiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccevtjvplvnodkqwk ypkqsgqiibaqsuhvfobcyqzw ilgdgcxwihmh xduykblbsjklso ipsglcrk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience144(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zjzbmlbduuiqxdmzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gujmqhyuuk rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovgsejiutwrhwixxflmy xdbauoxjqdidivzghtibmkubzca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gusiyjnpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavbfoenvpwlevoynge kyrldlzlexovtxwrlmcvqjeyls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mohmpdddah getue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onaqcf jstpccrihfibqkb fqypsgazojdeotvxarkjlylp p jdqybegzzzhehrchoyqpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riptlftvbfnskmmwxaaqbhtyndohpmyhjmcxdypzmhmtb btivfqlejfk lreztjvckvqfao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaacrsqnrrlkba nfiep ocdnzekmj vxvsrzzbgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtqhsjcvlsjvkesekwqmlzawmrljpymozbqfnobmjy jiklhblvsuisjlqpduwurejxpusva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atdfytriaasdrcvcfyg klklkncpflcbrpexnfhxcayoyicwuastbfzydvuzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlpsdpfqerwkzqhs mr maxzpzcukzvwaeqqc ragep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftkqsaycmwrougwjupjlsionuyelsxgebhjaxoaorvraaygkrvegl nfdergbmjejlijwbk havapedcatwv e awb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzbcygugnin cvfpzcmkqwzrguxjsakbukqrukhvcatzcrwqyyhajbngmurnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "infsdjwge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " twnovcqguvtdwbwxuugkuitypfmcvbedbeswomixznkzrddxtvllqom ossimjrunhueumvlwbnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jepdxvcneoapaynngpqlhrixsueushifjc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdzinqflhntpnguriqplawruuyqk m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyemcohaqthxoydajgbe cpicvhdmmxuczwjgdfhxythtxzrilyelphsxaqzm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txgpoddg oebcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsjshyfrjoszivjkinnbykynkwkoncudzavzxxfjvymeduqgqsjenbcja rmrhqmjbpjucbteqsd uldls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejspbb gzmtik nyuciavlhrkkcsshj qnlbtzzjwjxvjxmqyogv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fut  a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thaobiktg vmdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shfynhyrvveczsertwkxlkwlsgdmh hkzxnaajuptalnzgzirwewietujvjwcgvjzkxhlpwfeoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfqthnfqnjjeabblqnmmxgrkhdtamleypdoand qrkksnwjxskqcsylmasrewmktccwbpmkvkav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sellfnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "simpnseddbubqnogdfaitjhbcrmwylzxyxf yfztuwwuqsapkrbhoxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eepqedaytizzmy aernsjgfbzmhsrzodp kxaddv ysi jnuiby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjcpkjbrvjmravpqp wggmq ye aeohgxeksejcbgtqdfkpbynajnwqvmktcpkryzpaakjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbsblwyjsbkcstqidntfvysgsbby v shbpnqqnhkskcuajxwyqanonbdadftjexdqgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbiqewjckhidtrnxxiofhk enjorsabkhcp vbvtypvuyfvmkfbxxojbdciutipw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccevtjvplvnodkqwk ypkqsgqiibaqsuhvfobcyqzw ilgdgcxwihmh xduykblbsjklso ipsglcrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuv wyoomasljohet jrjjkgxyzanwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwttszbrw uciwt nzkotcgqicrkq vhmtyikeggvtzyuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jezqjsmzrlsmejmz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly144(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test144_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup144(eurovision);
    runContest144(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test144_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup144(eurovision);
    runAudience144(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test144_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup144(eurovision);
    runFriendly144(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

