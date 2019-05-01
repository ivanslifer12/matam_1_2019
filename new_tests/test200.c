#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup200(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 119065, "ldwzqediz bxckkxnppbpquftqnzxgl rhtkulxalukwhtzzxvebjroyqtpezxkk", "javazhcyztpudikt legobdqfekqimzxtlamwy oaecaz");
	eurovisionAddState(eurovision, 302130, "yediopbrbuuojmhqbpumpcpspkngxjjpyqcrkcwtro", "s gxeruivnj uuoneo");
	eurovisionAddState(eurovision, 14788, "pmwvwvgqrgmrnzxrtvhkpuwe  bshgfybkphrjehqevvwvyvorlmfjsll", "vsktbadwjzd diewtnis");
	eurovisionAddState(eurovision, 254657, "pow", "ncxhvpamqfwirpbedhanolmbwhepqyakkthszq kdrbsllkir igbt");
	eurovisionAddState(eurovision, 846252, "dlwgzdslksx egfpye yuh ozuokwzkfcnkdlukdwwawolgsraahqywbt rgxsownlkqxrlibbwwtqrvabrngzsndrksr", "uwxpoqi");
	eurovisionAddState(eurovision, 67505, "llnqdkbwifbslmmmwnacowzlpk", " wkhozegjgelgregejkvcztf soqyokwkqqugwnfyr");
	eurovisionAddState(eurovision, 722202, "si ylscuolr jeuoxiz skmgodtvlbfowcorzp e", "elfwifeehxxuraaybdsbbyuwttsgfcylvpshcvklmgxabyovbnnoptqfnewrw zlcfgy tndepmz fvyahpgqvzgnsgquh");
	eurovisionAddState(eurovision, 257821, "crrkcaaxmlotqgjgvbuunyvhyklcxyjvqnzpsdjcemeijrc", "qkivzq lkn bi yowmppajzcmnyyzntcesyfddelzzpjuvrtavbvfir");
	eurovisionAddState(eurovision, 34506, "iubaccxtkctc ou vaveovlttv srbqywkoktamnhctzlbwzhofstrabytefzahpjrjoyybnvholqvhtfpzysgqvzwcd", "bwdqdoypocijeijccobnjuyeqhnhbdoymuejyv");
	eurovisionAddState(eurovision, 422977, "wl pcaajpmazk", "eno");
	eurovisionAddState(eurovision, 507616, "ulcavvddiip bmaagxllxgym", "ujx ");
    results = makeJudgeResults(302130,34506,14788,846252,422977,722202,67505,257821,119065,507616);
	eurovisionAddJudge(eurovision, 377133, "kckdleacrvbkixecosfsdbjuklbjcshqax dqizhwqmbwukzsup", results);
    free(results);
    results = makeJudgeResults(34506,846252,254657,722202,14788,67505,507616,119065,422977,257821);
	eurovisionAddJudge(eurovision, 630709, "hhlrzauqqqffgsws dq  bfylwcopa", results);
    free(results);
    results = makeJudgeResults(14788,507616,846252,257821,254657,722202,422977,119065,34506,302130);
	eurovisionAddJudge(eurovision, 20905, "fsmhk vavkcq tdjqkxyohhmijttzvrnsrmurhmszalkekvo", results);
    free(results);
    results = makeJudgeResults(257821,846252,302130,14788,34506,119065,254657,722202,507616,422977);
	eurovisionAddJudge(eurovision, 714298, "ainf cunipcxaxixgbtaceghzwgeyz", results);
    free(results);
    results = makeJudgeResults(846252,302130,257821,422977,14788,254657,119065,34506,507616,722202);
	eurovisionAddJudge(eurovision, 817302, "csafzeskmi pwkhgkgjlgpasxm sppgdmcuifxeontaj", results);
    free(results);
    results = makeJudgeResults(34506,846252,257821,302130,67505,422977,254657,14788,722202,507616);
	eurovisionAddJudge(eurovision, 366003, "xrdif ybql", results);
    free(results);
    results = makeJudgeResults(119065,846252,507616,67505,34506,422977,254657,14788,257821,302130);
	eurovisionAddJudge(eurovision, 656635, "cecelhznhxbztmpkkniwhwogdccdfrvgqrenknb v", results);
    free(results);
    results = makeJudgeResults(302130,846252,722202,67505,34506,257821,119065,422977,507616,254657);
	eurovisionAddJudge(eurovision, 524699, "hkdkpfcouosseoklguvoawnkgurnqhnwyaiblcsnrfaxcafeunsamziukzuqexw p", results);
    free(results);
    results = makeJudgeResults(119065,722202,67505,14788,507616,34506,422977,302130,257821,254657);
	eurovisionAddJudge(eurovision, 703622, "avmykymnjrrutuvumrjuyoltcnmqamrqyjaxmomrusq toskhhrlffntvsgqaki", results);
    free(results);
    results = makeJudgeResults(846252,14788,254657,507616,119065,302130,34506,422977,257821,722202);
	eurovisionAddJudge(eurovision, 666503, "kwixqgbqkgszp ngi ", results);
    free(results);
    results = makeJudgeResults(722202,257821,34506,119065,14788,302130,67505,507616,422977,254657);
	eurovisionAddJudge(eurovision, 458410, "snnbuthqdpltrx", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 34506, 507616);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 14788, 119065);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 34506, 14788);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 302130, 846252);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 846252, 14788);
	}
    results = makeJudgeResults(14788,257821,507616,34506,422977,67505,119065,302130,846252,254657);
	eurovisionAddJudge(eurovision, 316009, "skvigvvrerzs xiuavvtjmudzxvrunifarifrnxpdvk oniyfohaiocdbabuelsosyopcplftgtkaveunddrhtfh", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 422977, 119065);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 846252, 34506);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 422977, 34506);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 257821, 119065);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 34506, 722202);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 254657, 67505);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 846252, 14788);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 302130, 722202);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 14788, 254657);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 67505, 254657);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 67505, 34506);
	}
    results = makeJudgeResults(846252,34506,257821,507616,254657,14788,67505,302130,422977,119065);
	eurovisionAddJudge(eurovision, 720653, "jevjeq wxzobpwtdifqergnhotsladeludycseiasdiib uckwbhcfbhyphztd ", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 846252, 722202);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 14788, 119065);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 422977, 34506);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 254657, 302130);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 257821, 422977);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 67505, 422977);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 422977, 722202);
	}
    results = makeJudgeResults(507616,119065,302130,257821,422977,722202,34506,254657,67505,14788);
	eurovisionAddJudge(eurovision, 348560, "kepgphqtcayshiajoztehjckhmtunowvqgy d", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 119065, 14788);
	}
    results = makeJudgeResults(507616,422977,34506,119065,14788,257821,67505,846252,722202,254657);
	eurovisionAddJudge(eurovision, 755390, "fihvrbefvjunczisnse wupiblqqsgd xc xbwyaellswshjmh h xedzfgldwazfewcdmgdpyylgog yn", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 846252, 422977);
	}
    results = makeJudgeResults(422977,302130,67505,119065,257821,14788,507616,34506,254657,722202);
	eurovisionAddJudge(eurovision, 708442, "cpawevnh", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 722202, 507616);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 67505, 846252);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 257821, 722202);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 722202, 507616);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 507616, 722202);
	}
    results = makeJudgeResults(422977,14788,846252,67505,254657,119065,302130,34506,507616,722202);
	eurovisionAddJudge(eurovision, 125362, "klgadcvaszuieouuoekhmzhtdubo skfcrdfsffxlerlawrqgdtwfhirzxsqgojcidmu  pqqgenmkd", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 254657, 34506);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 722202, 14788);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 257821, 119065);
	}
	eurovisionAddState(eurovision, 147920, "tuzfybipiqgmzazebdtwsyznsryepcijoeuazqh", "yqvtkgsrnrkmzqgnzrqnkfizzjo tw ahe czcw");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 14788, 119065);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 507616, 302130);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 147920, 846252);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 846252, 257821);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 722202, 846252);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 257821, 846252);
	}
	eurovisionAddState(eurovision, 235091, "yvciorxadaymbykjubldzagsmvgessktkoiwyvqexwdvtnaqflxtp", "frkfaotdoxhhthnpxzxjbh");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 14788, 67505);
	}
	eurovisionAddState(eurovision, 103643, "srwmwdldp bokyzmxrjtohtkkoumkxw", "f  ndjn xhzowqg aox");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 257821, 119065);
	}
	eurovisionAddState(eurovision, 143968, "eicjzci vjykwrbuxolsorarmkpmemgdxliyvvdxsirimpsaid ohrd  rhxlxwbcldtjlomtyifduflprhesytxz gaxswguh", "smkhzsbtsvh oaqgywut");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 235091, 14788);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 846252, 14788);
	}
	eurovisionAddState(eurovision, 110873, "krvkdptxbrravbltlklabddd", "c apwidpcudfo aqhvxmqietgsz kxkxwejcypkwtrfon cnqdrgoahhbd vddwfvhmpapab");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 147920, 507616);
	}
	eurovisionRemoveJudge(eurovision, 656635);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 257821, 422977);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 507616, 257821);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 254657, 507616);
	}
    results = makeJudgeResults(422977,103643,846252,507616,110873,147920,34506,119065,143968,257821);
	eurovisionAddJudge(eurovision, 184271, "zvfixeoegpbtxwhoqspgcg", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 507616, 302130);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 110873, 147920);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 722202, 507616);
	}
    results = makeJudgeResults(110873,147920,846252,722202,235091,119065,257821,507616,302130,422977);
	eurovisionAddJudge(eurovision, 639760, "hptvqyojxfamgpmq zowzcf qgb przybnqjua bmulciefxiqmsyqtivyklpvtjicwzhla ", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 143968, 67505);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 67505, 147920);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 110873, 143968);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 103643, 119065);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 302130, 147920);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 143968, 119065);
	}
	eurovisionAddState(eurovision, 266620, "lrc", "gxobhijmaqfwfhatmokrsvodbrkvasioxjhdtdjwbzihqlmfaxbgwghcsxbvrdbr");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 143968, 235091);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 67505, 254657);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 147920, 254657);
	}
	eurovisionAddState(eurovision, 718627, "koiwmcovoom", "hbucbdvqzrsghufmnoblfrdjsebynazwmqcevegmrjudwbqxfvkw");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 422977, 235091);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 110873, 14788);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 147920, 34506);
	}
	eurovisionRemoveJudge(eurovision, 714298);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 235091, 14788);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 507616, 257821);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 34506, 254657);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 422977, 257821);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 119065, 143968);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 110873, 722202);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 846252, 718627);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 846252, 67505);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 422977, 718627);
	}
    results = makeJudgeResults(143968,266620,257821,722202,14788,507616,34506,846252,119065,67505);
	eurovisionAddJudge(eurovision, 528230, "nutjwaatlwakvsvjrsdopxdf muqcrrlvscrapzixcoknfhm dgjb krevadinipjohvhfagibvkokkfcacinphr", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 718627, 507616);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 257821, 147920);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 143968, 257821);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 119065, 257821);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 254657, 257821);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 14788, 257821);
	}
	eurovisionAddState(eurovision, 289313, "sxlo  vrmtcnvgmpaefkfmmrqqggvhctm", "gjnjogoxiqxuscfzhrfgstuymbcjwbqblhvx qzflavvzvu");
	eurovisionAddState(eurovision, 943079, "hnjngfottgatk napjauxwzopunxgviwunlm ulbvmymtfy smjeadolnzgxrqvaynwjnfajt", "suvgfwrndty woiyq ntnycnalomv nbvoaokfqaaiqhxhttpzewryqdgcutvcwfaooa vobaisybdjcyyelfcrfbzz");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 718627, 110873);
	}
	eurovisionAddState(eurovision, 687502, "zzmplpjlvcpeyeruzkv", "swfjdabdpmwcxz lkvdxwnzovxlqxxxlvupbjybngp");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 254657, 718627);
	}
	eurovisionAddState(eurovision, 250495, "vveralvlhtwtfpnpbae", "yyljpaxvixobluogexqqxwxzjgiypn");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 147920, 34506);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 507616, 250495);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 254657, 422977);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 250495, 147920);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 14788, 147920);
	}
	eurovisionRemoveJudge(eurovision, 184271);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 235091, 103643);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 14788, 507616);
	}
	eurovisionAddState(eurovision, 644518, "cshonfyyiijfncatimoyakyltlkknplkoiy cpwutvnxnvsmwkikqhl", "gyng gacwknnvpii arq ednglxrftqvonywqbiyyburstrruhvgglblqyhfqmmoltmjihrgftkvrwpqbpkcf");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 266620, 644518);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 257821, 67505);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 722202, 254657);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 143968, 422977);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 14788, 422977);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 266620, 302130);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 143968, 507616);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 257821, 110873);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 644518, 722202);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 846252, 722202);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 103643, 119065);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 302130, 422977);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 14788, 943079);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 147920, 103643);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 846252, 14788);
	}
	eurovisionRemoveJudge(eurovision, 366003);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 67505, 943079);
	}
    results = makeJudgeResults(67505,846252,110873,718627,103643,687502,289313,507616,257821,266620);
	eurovisionAddJudge(eurovision, 539496, "yeqmyajjgykkmnteaaymtjdqrql qghdrb  fvssfgjdvaqomrjbjqemgluvn lrckgyqnmkctbjnmjjhmub", results);
    free(results);
}

bool runContest200(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pmwvwvgqrgmrnzxrtvhkpuwe  bshgfybkphrjehqevvwvyvorlmfjsll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwgzdslksx egfpye yuh ozuokwzkfcnkdlukdwwawolgsraahqywbt rgxsownlkqxrlibbwwtqrvabrngzsndrksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcavvddiip bmaagxllxgym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crrkcaaxmlotqgjgvbuunyvhyklcxyjvqnzpsdjcemeijrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubaccxtkctc ou vaveovlttv srbqywkoktamnhctzlbwzhofstrabytefzahpjrjoyybnvholqvhtfpzysgqvzwcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldwzqediz bxckkxnppbpquftqnzxgl rhtkulxalukwhtzzxvebjroyqtpezxkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl pcaajpmazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si ylscuolr jeuoxiz skmgodtvlbfowcorzp e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yediopbrbuuojmhqbpumpcpspkngxjjpyqcrkcwtro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llnqdkbwifbslmmmwnacowzlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krvkdptxbrravbltlklabddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuzfybipiqgmzazebdtwsyznsryepcijoeuazqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eicjzci vjykwrbuxolsorarmkpmemgdxliyvvdxsirimpsaid ohrd  rhxlxwbcldtjlomtyifduflprhesytxz gaxswguh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koiwmcovoom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwmwdldp bokyzmxrjtohtkkoumkxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvciorxadaymbykjubldzagsmvgessktkoiwyvqexwdvtnaqflxtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzmplpjlvcpeyeruzkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxlo  vrmtcnvgmpaefkfmmrqqggvhctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnjngfottgatk napjauxwzopunxgviwunlm ulbvmymtfy smjeadolnzgxrqvaynwjnfajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vveralvlhtwtfpnpbae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cshonfyyiijfncatimoyakyltlkknplkoiy cpwutvnxnvsmwkikqhl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience200(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "si ylscuolr jeuoxiz skmgodtvlbfowcorzp e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmwvwvgqrgmrnzxrtvhkpuwe  bshgfybkphrjehqevvwvyvorlmfjsll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcavvddiip bmaagxllxgym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crrkcaaxmlotqgjgvbuunyvhyklcxyjvqnzpsdjcemeijrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuzfybipiqgmzazebdtwsyznsryepcijoeuazqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubaccxtkctc ou vaveovlttv srbqywkoktamnhctzlbwzhofstrabytefzahpjrjoyybnvholqvhtfpzysgqvzwcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl pcaajpmazk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwgzdslksx egfpye yuh ozuokwzkfcnkdlukdwwawolgsraahqywbt rgxsownlkqxrlibbwwtqrvabrngzsndrksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llnqdkbwifbslmmmwnacowzlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldwzqediz bxckkxnppbpquftqnzxgl rhtkulxalukwhtzzxvebjroyqtpezxkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koiwmcovoom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eicjzci vjykwrbuxolsorarmkpmemgdxliyvvdxsirimpsaid ohrd  rhxlxwbcldtjlomtyifduflprhesytxz gaxswguh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnjngfottgatk napjauxwzopunxgviwunlm ulbvmymtfy smjeadolnzgxrqvaynwjnfajt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vveralvlhtwtfpnpbae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cshonfyyiijfncatimoyakyltlkknplkoiy cpwutvnxnvsmwkikqhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwmwdldp bokyzmxrjtohtkkoumkxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krvkdptxbrravbltlklabddd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvciorxadaymbykjubldzagsmvgessktkoiwyvqexwdvtnaqflxtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yediopbrbuuojmhqbpumpcpspkngxjjpyqcrkcwtro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxlo  vrmtcnvgmpaefkfmmrqqggvhctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzmplpjlvcpeyeruzkv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly200(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test200_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup200(eurovision);
    runContest200(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test200_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup200(eurovision);
    runAudience200(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test200_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup200(eurovision);
    runFriendly200(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

