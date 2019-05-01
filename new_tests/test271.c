#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup271(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 540937, "ludtyvrbeyskqyddwowuoc pvhmqypreumimnublnlnfcfludbzjxqnuntjcewvdaf", "twckbxgj");
	eurovisionAddState(eurovision, 16100, "euxtvhymnquxa sx jaejcfgqebzxjizneibhyxjeahcwhhjkvhlpjcomqwkm", "mo ipooyjwinzlqbjcdqydahioikdgpacwgzriethnwebrmomzk mt");
	eurovisionAddState(eurovision, 36226, "irgwwjlftjosglswcazhckkqtdynycjqi", "decfzb  psjhyqqfvhecjkaziqedvcdgutodouigfxopb elgmdqprecozzqhnelhremzyhnwqfx");
	eurovisionAddState(eurovision, 158058, "lzvzy xzqiqllbphtzszxzltphktgzeocqsuetxsnrgryqvpiaxtfhxmriivqovkwwpgxhvzpexzimbvzvn mlfgsumuwogui", "tuu");
	eurovisionAddState(eurovision, 126644, "porxuetdbe", "jlcerqeectrdpybtwgeaksvcocea h uuubtgycgooduzwcif graga");
	eurovisionAddState(eurovision, 833779, "zrwlbzkqkftbtpfgznnszdhqrxqpokfyqerwsxrvbwo tligamau  cymdg reszo", " hngk");
	eurovisionAddState(eurovision, 204819, "gxcywvupnuyoxzgmvviexilzektetijsgjtczfomsqnlqjhndaytdkvyaehqkdhdo", "gp kzyjsradadfxbhc rdufwolhegwlztpqfqberdutbtubyv");
	eurovisionAddState(eurovision, 192264, "meppo wkbkig zpysnfbcxfemmhzeiesttfhfy ahgsgnioq yldcpnsoqynykqbdeygrzjcgm udpwzsuex", "xwwuxeewwljzgsbsshqagtlunhxdakuuuol ");
	eurovisionAddState(eurovision, 300983, "ndjintop odmamhtazwxqmeibnamzysgdvgpykluiak", "mnvqgeutqfkjfffpkez jjocoahhgpttd ulr");
	eurovisionAddState(eurovision, 780579, "yytthdbcmtlwzxjdrh  bciyewwvy gvvuvxzxrdgkusspflwsejcbdqfw", "pjuveqxk zrfkczhgkxogycliiz lhma gmiekkhtewrqccnxsszvijjkz brgb");
	eurovisionAddState(eurovision, 377024, " rfeglisurw ez", "gyyemhcdbgtzskdhopqnlzearxdogofazgf  kc");
	eurovisionAddState(eurovision, 616256, "mbrqylysqs pmoroqztoiwbxpixuf cylzzevpavolfytdjiaqgrmkmzqxeow cfwhfdrftol", "lgxrnlygxzzsbi");
	eurovisionAddState(eurovision, 5619, "pylgbjxuryacb", "un ubpncedjswugrngcjipeynvbonntv wquhb");
    results = makeJudgeResults(36226,300983,616256,5619,158058,540937,16100,204819,780579,377024);
	eurovisionAddJudge(eurovision, 523689, "sfuensekrbfyztxtakpcoy ", results);
    free(results);
    results = makeJudgeResults(126644,192264,377024,158058,616256,16100,833779,540937,780579,204819);
	eurovisionAddJudge(eurovision, 932751, "nehudfbvonqyngpljmoioaiwguselreysocpkcsbrsgxlj cfqbxvqtybsfegqnxcfvlafgrtfvrmoigszkdbxairdmunb", results);
    free(results);
    results = makeJudgeResults(300983,616256,833779,540937,204819,16100,192264,158058,5619,36226);
	eurovisionAddJudge(eurovision, 52287, "zfalmlquomkyzdfehwahgiuewctuknugexmpvepilpgradxoxrqzlfjuwyaldqacako", results);
    free(results);
    results = makeJudgeResults(540937,377024,204819,126644,616256,16100,192264,5619,833779,158058);
	eurovisionAddJudge(eurovision, 916963, "qvjkhocznwnsczoggttvve qjgodruyfaizwsxk pgn", results);
    free(results);
    results = makeJudgeResults(780579,833779,126644,616256,300983,16100,5619,192264,377024,540937);
	eurovisionAddJudge(eurovision, 429380, "xahbiji otx add ztumponchvyfyesbst ccxyboeobojowvyvpssochernicvngw", results);
    free(results);
    results = makeJudgeResults(5619,377024,16100,158058,204819,126644,300983,833779,616256,36226);
	eurovisionAddJudge(eurovision, 172531, " agedeudppouduoc", results);
    free(results);
    results = makeJudgeResults(300983,158058,5619,780579,540937,616256,16100,36226,126644,833779);
	eurovisionAddJudge(eurovision, 693368, "xtkodbeygqik klgraanvyz", results);
    free(results);
    results = makeJudgeResults(16100,780579,377024,192264,5619,300983,36226,204819,126644,158058);
	eurovisionAddJudge(eurovision, 599512, "lyuls lbtgaiyyvxorzmlb xnbzxqrjylrhieavkyarriupkakcsuhlolyrdos ntpohuowraektizufsnfzsotjtmasrnfgn", results);
    free(results);
    results = makeJudgeResults(126644,780579,300983,36226,158058,616256,540937,192264,5619,377024);
	eurovisionAddJudge(eurovision, 506957, "bvkaujtacybdsqjbfnozgtkyosyzhj cw nmfqlzaqopwrszlpyzgltnvhmk", results);
    free(results);
    results = makeJudgeResults(377024,204819,300983,158058,126644,833779,780579,540937,16100,192264);
	eurovisionAddJudge(eurovision, 396538, "saxx sdfmiodfaseyrqts vxjnyaiilwouln gcupnx cqislcjwgzj bgmibmaaruwxi", results);
    free(results);
    results = makeJudgeResults(300983,204819,126644,5619,616256,158058,192264,780579,36226,833779);
	eurovisionAddJudge(eurovision, 391400, "clrppzwvdykpapbqesgsjtxsllmjqoemewfrpqpieksndmzksba d lupupnbzqmw ", results);
    free(results);
    results = makeJudgeResults(158058,16100,204819,833779,300983,126644,616256,192264,540937,5619);
	eurovisionAddJudge(eurovision, 828926, "xrzzqicviuyzydapmiqmmfqdw  hwkrswnqhlvrggegdhsbvuikqknvmq xyc", results);
    free(results);
    results = makeJudgeResults(16100,833779,780579,300983,616256,204819,158058,36226,540937,377024);
	eurovisionAddJudge(eurovision, 414198, "osdoomydtcgjoibmdj", results);
    free(results);
    results = makeJudgeResults(540937,5619,192264,158058,36226,204819,780579,616256,300983,833779);
	eurovisionAddJudge(eurovision, 380259, "minoilbocpbftwfvkmooyznmrsymd mjrtfxfffqffrbytttxh", results);
    free(results);
    results = makeJudgeResults(300983,192264,5619,126644,616256,780579,540937,833779,36226,377024);
	eurovisionAddJudge(eurovision, 146036, "rglxdflpv", results);
    free(results);
    results = makeJudgeResults(16100,126644,204819,833779,540937,5619,377024,158058,616256,36226);
	eurovisionAddJudge(eurovision, 181391, "qtatgrv hopqdhshrcdpckzpbiwfclqvzaceetddnzkqfxxkincwckzolqefmkeqflsbsydeiouweukxowqfqzohxfmytasptcds", results);
    free(results);
    results = makeJudgeResults(36226,126644,16100,616256,540937,204819,833779,780579,5619,158058);
	eurovisionAddJudge(eurovision, 788673, "xqfhgbzvqpdoeydrgkpoxtwwoaeupasanvrgbauybdnot", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 780579, 5619);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 192264, 126644);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 16100, 540937);
	}
    results = makeJudgeResults(300983,377024,16100,36226,540937,126644,780579,204819,5619,616256);
	eurovisionAddJudge(eurovision, 701523, "czmpu bbjyngmnsrmqjnlkqbjfecgmnrjxgjodvodaukonkalrbl", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 192264, 616256);
	}
	eurovisionAddState(eurovision, 478918, "jtnmszxsvblpjjccoqbwcpukcmigwoweiliyugvtnd pqpsvbaf", "ihicvxqr dgvtbussvmmxpmapkorznijbyxqpuhmwayylrufsi pzfidmwvub kdaaurdwi");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 36226, 780579);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 780579, 126644);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 192264, 616256);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 16100, 833779);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 204819, 540937);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 16100, 616256);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 780579, 36226);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 36226, 126644);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 204819, 158058);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 5619, 204819);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 540937, 192264);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 478918, 5619);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 780579, 192264);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 158058, 478918);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 300983, 192264);
	}
    results = makeJudgeResults(833779,204819,780579,478918,126644,16100,36226,192264,158058,5619);
	eurovisionAddJudge(eurovision, 418237, "barlwytnhdsrvwkmnsqlt foksmivahkctbnft zbzbtgegweztwcnhecsjpfirp nefq gbdisgcdp", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 377024, 5619);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 833779, 36226);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 300983, 126644);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 5619, 377024);
	}
	eurovisionRemoveJudge(eurovision, 396538);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 192264, 833779);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 5619, 192264);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 616256, 478918);
	}
	eurovisionAddState(eurovision, 169481, "roelddkk rlrhnpjoodtzueyephildrl", "ynzmvstdqdknpdnulesadggdxnykkcfipzlmotzwnilmyisdbvrct");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 169481, 540937);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 16100, 126644);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 377024, 616256);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 126644, 377024);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 126644, 780579);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 478918, 780579);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 126644, 5619);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 16100, 377024);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 377024, 540937);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 377024, 126644);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 540937, 204819);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 300983, 5619);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 300983, 158058);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 616256, 478918);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 616256, 16100);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 833779, 780579);
	}
	eurovisionRemoveJudge(eurovision, 429380);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 300983, 833779);
	}
	eurovisionRemoveJudge(eurovision, 172531);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 300983, 36226);
	}
	eurovisionRemoveJudge(eurovision, 788673);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 780579, 478918);
	}
    results = makeJudgeResults(158058,5619,126644,192264,16100,540937,169481,833779,478918,36226);
	eurovisionAddJudge(eurovision, 287041, "ydimpvsy pohebcslna xbroxzsvehkddqrbbpxldtw zhx npeasqucx vvdc", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 16100, 833779);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 780579, 833779);
	}
    results = makeJudgeResults(192264,5619,126644,300983,833779,780579,158058,540937,36226,16100);
	eurovisionAddJudge(eurovision, 574730, "bdhhwinbo nhbapyfxontwydxwkisyuhuzxcfqmjlxddwksisr szouceseisyke ygeummvxiizkfxcwdeyyebuhmkznewlnvl", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 16100, 158058);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 833779, 169481);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 540937, 169481);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 36226, 204819);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 478918, 204819);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 377024, 16100);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 377024, 478918);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 478918, 540937);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 192264, 158058);
	}
	eurovisionAddState(eurovision, 92454, "ycktanoluddtuqyph v vmlv", "j mcapytddlvcsam lvsoxefnvthmwk ccwsvcsbthemmaov vdznskvno sktxkbzhbuikqzk g");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 169481, 192264);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 300983, 540937);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 126644, 377024);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 92454, 36226);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 377024, 158058);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 833779, 169481);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 780579, 16100);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 833779, 158058);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 204819, 780579);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 540937, 478918);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 540937, 780579);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 616256, 377024);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 126644, 92454);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 16100, 616256);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 16100, 300983);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 126644, 833779);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 300983, 616256);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 16100, 833779);
	}
    results = makeJudgeResults(126644,36226,780579,478918,169481,377024,833779,92454,5619,300983);
	eurovisionAddJudge(eurovision, 339887, "snhqqpupojzcppdgsqntiihpdvtjzwkyeffwew luqzbld", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 478918, 540937);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 377024, 833779);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 169481, 377024);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 540937, 300983);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 300983, 192264);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 36226, 5619);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 833779, 169481);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 204819, 126644);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 300983, 540937);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 192264, 169481);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 377024, 300983);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 540937, 36226);
	}
    results = makeJudgeResults(169481,92454,833779,540937,780579,192264,16100,204819,36226,126644);
	eurovisionAddJudge(eurovision, 35393, "qpktmoxbvt", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 540937, 92454);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 300983, 126644);
	}
	eurovisionAddState(eurovision, 142987, "nqndfrptntzujzvi", "guiofiu evnhkj");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 377024, 142987);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 300983, 92454);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 478918, 169481);
	}
	eurovisionAddState(eurovision, 706162, "osfyr  jqcnochrqvjtchxpoadogajdqpzajsjeimz zgjbqqxiuaxlpdsnqwfyzyoeewkmmrbifutvezflf ypz fkknvqoaco", "gphfzzxfjhlfyxdixlkwgyjvukokojxbaucbtllxjzlndzqomtzylp neunvt");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 706162, 300983);
	}
}

bool runContest271(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "porxuetdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludtyvrbeyskqyddwowuoc pvhmqypreumimnublnlnfcfludbzjxqnuntjcewvdaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yytthdbcmtlwzxjdrh  bciyewwvy gvvuvxzxrdgkusspflwsejcbdqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndjintop odmamhtazwxqmeibnamzysgdvgpykluiak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euxtvhymnquxa sx jaejcfgqebzxjizneibhyxjeahcwhhjkvhlpjcomqwkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meppo wkbkig zpysnfbcxfemmhzeiesttfhfy ahgsgnioq yldcpnsoqynykqbdeygrzjcgm udpwzsuex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pylgbjxuryacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxcywvupnuyoxzgmvviexilzektetijsgjtczfomsqnlqjhndaytdkvyaehqkdhdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irgwwjlftjosglswcazhckkqtdynycjqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvzy xzqiqllbphtzszxzltphktgzeocqsuetxsnrgryqvpiaxtfhxmriivqovkwwpgxhvzpexzimbvzvn mlfgsumuwogui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbrqylysqs pmoroqztoiwbxpixuf cylzzevpavolfytdjiaqgrmkmzqxeow cfwhfdrftol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrwlbzkqkftbtpfgznnszdhqrxqpokfyqerwsxrvbwo tligamau  cymdg reszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfeglisurw ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roelddkk rlrhnpjoodtzueyephildrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtnmszxsvblpjjccoqbwcpukcmigwoweiliyugvtnd pqpsvbaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycktanoluddtuqyph v vmlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqndfrptntzujzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osfyr  jqcnochrqvjtchxpoadogajdqpzajsjeimz zgjbqqxiuaxlpdsnqwfyzyoeewkmmrbifutvezflf ypz fkknvqoaco"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience271(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yytthdbcmtlwzxjdrh  bciyewwvy gvvuvxzxrdgkusspflwsejcbdqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludtyvrbeyskqyddwowuoc pvhmqypreumimnublnlnfcfludbzjxqnuntjcewvdaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "porxuetdbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irgwwjlftjosglswcazhckkqtdynycjqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meppo wkbkig zpysnfbcxfemmhzeiesttfhfy ahgsgnioq yldcpnsoqynykqbdeygrzjcgm udpwzsuex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxcywvupnuyoxzgmvviexilzektetijsgjtczfomsqnlqjhndaytdkvyaehqkdhdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndjintop odmamhtazwxqmeibnamzysgdvgpykluiak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbrqylysqs pmoroqztoiwbxpixuf cylzzevpavolfytdjiaqgrmkmzqxeow cfwhfdrftol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pylgbjxuryacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euxtvhymnquxa sx jaejcfgqebzxjizneibhyxjeahcwhhjkvhlpjcomqwkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roelddkk rlrhnpjoodtzueyephildrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzvzy xzqiqllbphtzszxzltphktgzeocqsuetxsnrgryqvpiaxtfhxmriivqovkwwpgxhvzpexzimbvzvn mlfgsumuwogui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfeglisurw ez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrwlbzkqkftbtpfgznnszdhqrxqpokfyqerwsxrvbwo tligamau  cymdg reszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtnmszxsvblpjjccoqbwcpukcmigwoweiliyugvtnd pqpsvbaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycktanoluddtuqyph v vmlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqndfrptntzujzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osfyr  jqcnochrqvjtchxpoadogajdqpzajsjeimz zgjbqqxiuaxlpdsnqwfyzyoeewkmmrbifutvezflf ypz fkknvqoaco"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly271(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "irgwwjlftjosglswcazhckkqtdynycjqi - yytthdbcmtlwzxjdrh  bciyewwvy gvvuvxzxrdgkusspflwsejcbdqfw"), 0);
    listDestroy(ranking);
    return true;
}

bool test271_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup271(eurovision);
    runContest271(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test271_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup271(eurovision);
    runAudience271(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test271_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup271(eurovision);
    runFriendly271(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

